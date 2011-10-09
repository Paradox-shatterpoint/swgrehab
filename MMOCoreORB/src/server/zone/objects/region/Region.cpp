/*
 *	server/zone/objects/region/Region.cpp generated by engine3 IDL compiler 0.60
 */

#include "Region.h"

#include "server/zone/objects/tangible/terminal/Terminal.h"

#include "server/zone/objects/tangible/terminal/vendor/bazaar/BazaarTerminal.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/building/city/CityHallObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/scene/SceneObject.h"

/*
 *	RegionStub
 */

enum {RPC_NOTIFYENTER__SCENEOBJECT_ = 6,RPC_SENDGREETINGMESSAGE__CREATUREOBJECT_,RPC_SENDDEPARTINGMESSAGE__CREATUREOBJECT_,RPC_NOTIFYEXIT__SCENEOBJECT_,RPC_NOTIFYINSERTTOZONE__ZONE_,RPC_NOTIFYREMOVEFROMZONE__,RPC_DESPAWNCITYOBJECTS__,RPC_ADDBAZAAR__BAZAARTERMINAL_,RPC_GETBAZAAR__INT_,RPC_GETBAZAARCOUNT__,RPC_ISREGION__,RPC_GETCITYHALL__,RPC_SETCITYHALL__CITYHALLOBJECT_};

Region::Region() : ActiveArea(DummyConstructorParameter::instance()) {
	RegionImplementation* _implementation = new RegionImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

Region::Region(DummyConstructorParameter* param) : ActiveArea(param) {
}

Region::~Region() {
}



void Region::notifyEnter(SceneObject* object) {
	RegionImplementation* _implementation = static_cast<RegionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYENTER__SCENEOBJECT_);
		method.addObjectParameter(object);

		method.executeWithVoidReturn();
	} else
		_implementation->notifyEnter(object);
}

void Region::sendGreetingMessage(CreatureObject* player) {
	RegionImplementation* _implementation = static_cast<RegionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDGREETINGMESSAGE__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->sendGreetingMessage(player);
}

void Region::sendDepartingMessage(CreatureObject* player) {
	RegionImplementation* _implementation = static_cast<RegionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDDEPARTINGMESSAGE__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->sendDepartingMessage(player);
}

void Region::notifyExit(SceneObject* object) {
	RegionImplementation* _implementation = static_cast<RegionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYEXIT__SCENEOBJECT_);
		method.addObjectParameter(object);

		method.executeWithVoidReturn();
	} else
		_implementation->notifyExit(object);
}

void Region::notifyInsertToZone(Zone* zone) {
	RegionImplementation* _implementation = static_cast<RegionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYINSERTTOZONE__ZONE_);
		method.addObjectParameter(zone);

		method.executeWithVoidReturn();
	} else
		_implementation->notifyInsertToZone(zone);
}

void Region::notifyRemoveFromZone() {
	RegionImplementation* _implementation = static_cast<RegionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYREMOVEFROMZONE__);

		method.executeWithVoidReturn();
	} else
		_implementation->notifyRemoveFromZone();
}

void Region::despawnCityObjects() {
	RegionImplementation* _implementation = static_cast<RegionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DESPAWNCITYOBJECTS__);

		method.executeWithVoidReturn();
	} else
		_implementation->despawnCityObjects();
}

void Region::addBazaar(BazaarTerminal* ter) {
	RegionImplementation* _implementation = static_cast<RegionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ADDBAZAAR__BAZAARTERMINAL_);
		method.addObjectParameter(ter);

		method.executeWithVoidReturn();
	} else
		_implementation->addBazaar(ter);
}

BazaarTerminal* Region::getBazaar(int idx) {
	RegionImplementation* _implementation = static_cast<RegionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETBAZAAR__INT_);
		method.addSignedIntParameter(idx);

		return static_cast<BazaarTerminal*>(method.executeWithObjectReturn());
	} else
		return _implementation->getBazaar(idx);
}

int Region::getBazaarCount() {
	RegionImplementation* _implementation = static_cast<RegionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETBAZAARCOUNT__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getBazaarCount();
}

bool Region::isRegion() {
	RegionImplementation* _implementation = static_cast<RegionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISREGION__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isRegion();
}

CityHallObject* Region::getCityHall() {
	RegionImplementation* _implementation = static_cast<RegionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETCITYHALL__);

		return static_cast<CityHallObject*>(method.executeWithObjectReturn());
	} else
		return _implementation->getCityHall();
}

void Region::setCityHall(CityHallObject* hall) {
	RegionImplementation* _implementation = static_cast<RegionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETCITYHALL__CITYHALLOBJECT_);
		method.addObjectParameter(hall);

		method.executeWithVoidReturn();
	} else
		_implementation->setCityHall(hall);
}

DistributedObjectServant* Region::_getImplementation() {

	_updated = true;
	return _impl;
}

void Region::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	RegionImplementation
 */

RegionImplementation::RegionImplementation(DummyConstructorParameter* param) : ActiveAreaImplementation(param) {
	_initializeImplementation();
}


RegionImplementation::~RegionImplementation() {
}


void RegionImplementation::finalize() {
}

void RegionImplementation::_initializeImplementation() {
	_setClassHelper(RegionHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void RegionImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<Region*>(stub);
	ActiveAreaImplementation::_setStub(stub);
}

DistributedObjectStub* RegionImplementation::_getStub() {
	return _this;
}

RegionImplementation::operator const Region*() {
	return _this;
}

void RegionImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void RegionImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void RegionImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void RegionImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void RegionImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void RegionImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void RegionImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void RegionImplementation::_serializationHelperMethod() {
	ActiveAreaImplementation::_serializationHelperMethod();

	_setClassName("Region");

}

void RegionImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(RegionImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool RegionImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (ActiveAreaImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "bazaars") {
		TypeInfo<VectorMap<unsigned long long, ManagedReference<BazaarTerminal* > > >::parseFromBinaryStream(&bazaars, stream);
		return true;
	}

	if (_name == "shuttlePorts") {
		TypeInfo<SortedVector<ManagedReference<SceneObject* > > >::parseFromBinaryStream(&shuttlePorts, stream);
		return true;
	}

	if (_name == "cityHall") {
		TypeInfo<ManagedReference<CityHallObject* > >::parseFromBinaryStream(&cityHall, stream);
		return true;
	}


	return false;
}

void RegionImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = RegionImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int RegionImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "bazaars";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<VectorMap<unsigned long long, ManagedReference<BazaarTerminal* > > >::toBinaryStream(&bazaars, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "shuttlePorts";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<SortedVector<ManagedReference<SceneObject* > > >::toBinaryStream(&shuttlePorts, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "cityHall";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedReference<CityHallObject* > >::toBinaryStream(&cityHall, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 3 + ActiveAreaImplementation::writeObjectMembers(stream);
}

RegionImplementation::RegionImplementation() : ActiveAreaImplementation() {
	_initializeImplementation();
	// server/zone/objects/region/Region.idl():  		bazaars.setNoDuplicateInsertPlan();
	(&bazaars)->setNoDuplicateInsertPlan();
	// server/zone/objects/region/Region.idl():  		bazaars.setNullValue(null);
	(&bazaars)->setNullValue(NULL);
}

void RegionImplementation::notifyEnter(SceneObject* object) {
	// server/zone/objects/region/Region.idl():  		if 
	if (object->isTerminal()){
	// server/zone/objects/region/Region.idl():  			Terminal term = (Terminal) object;
	Terminal* term = (Terminal*) object;
	// server/zone/objects/region/Region.idl():  		}
	if (term->isBazaarTerminal())	// server/zone/objects/region/Region.idl():  				bazaars.put(object.getObjectID(), (BazaarTerminal)object);
	(&bazaars)->put(object->getObjectID(), (BazaarTerminal*) object);
}
	// server/zone/objects/region/Region.idl():  	}
	if (object->isPlayerCreature()){
	// server/zone/objects/region/Region.idl():  			sendGreetingMessage((CreatureObject) object);
	sendGreetingMessage((CreatureObject*) object);
}
}

void RegionImplementation::notifyExit(SceneObject* object) {
	// server/zone/objects/region/Region.idl():  		if 
	if (object->isTerminal()){
	// server/zone/objects/region/Region.idl():  			Terminal term = (Terminal) object;
	Terminal* term = (Terminal*) object;
	// server/zone/objects/region/Region.idl():  		}
	if (term->isBazaarTerminal())	// server/zone/objects/region/Region.idl():  				bazaars.drop(object.getObjectID());
	(&bazaars)->drop(object->getObjectID());
}
	// server/zone/objects/region/Region.idl():  	}
	if (object->isPlayerCreature()){
	// server/zone/objects/region/Region.idl():  			sendDepartingMessage((CreatureObject) object);
	sendDepartingMessage((CreatureObject*) object);
}
}

void RegionImplementation::notifyRemoveFromZone() {
	// server/zone/objects/region/Region.idl():  		despawnCityObjects();
	despawnCityObjects();
	// server/zone/objects/region/Region.idl():  		super.notifyRemoveFromZone();
	ActiveAreaImplementation::notifyRemoveFromZone();
	// server/zone/objects/region/Region.idl():  		updateToDatabaseWithoutChildren();
	updateToDatabaseWithoutChildren();
}

void RegionImplementation::addBazaar(BazaarTerminal* ter) {
	// server/zone/objects/region/Region.idl():  		bazaars.put(ter.getObjectID(), ter);
	(&bazaars)->put(ter->getObjectID(), ter);
}

BazaarTerminal* RegionImplementation::getBazaar(int idx) {
	// server/zone/objects/region/Region.idl():  		return bazaars.get(idx);
	return (&bazaars)->get(idx);
}

int RegionImplementation::getBazaarCount() {
	// server/zone/objects/region/Region.idl():  		return bazaars.size();
	return (&bazaars)->size();
}

bool RegionImplementation::isRegion() {
	// server/zone/objects/region/Region.idl():  		return true;
	return true;
}

CityHallObject* RegionImplementation::getCityHall() {
	// server/zone/objects/region/Region.idl():  		return cityHall;
	return cityHall;
}

void RegionImplementation::setCityHall(CityHallObject* hall) {
	// server/zone/objects/region/Region.idl():  		cityHall = hall;
	cityHall = hall;
}

/*
 *	RegionAdapter
 */

RegionAdapter::RegionAdapter(RegionImplementation* obj) : ActiveAreaAdapter(obj) {
}

Packet* RegionAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_NOTIFYENTER__SCENEOBJECT_:
		notifyEnter(static_cast<SceneObject*>(inv->getObjectParameter()));
		break;
	case RPC_SENDGREETINGMESSAGE__CREATUREOBJECT_:
		sendGreetingMessage(static_cast<CreatureObject*>(inv->getObjectParameter()));
		break;
	case RPC_SENDDEPARTINGMESSAGE__CREATUREOBJECT_:
		sendDepartingMessage(static_cast<CreatureObject*>(inv->getObjectParameter()));
		break;
	case RPC_NOTIFYEXIT__SCENEOBJECT_:
		notifyExit(static_cast<SceneObject*>(inv->getObjectParameter()));
		break;
	case RPC_NOTIFYINSERTTOZONE__ZONE_:
		notifyInsertToZone(static_cast<Zone*>(inv->getObjectParameter()));
		break;
	case RPC_NOTIFYREMOVEFROMZONE__:
		notifyRemoveFromZone();
		break;
	case RPC_DESPAWNCITYOBJECTS__:
		despawnCityObjects();
		break;
	case RPC_ADDBAZAAR__BAZAARTERMINAL_:
		addBazaar(static_cast<BazaarTerminal*>(inv->getObjectParameter()));
		break;
	case RPC_GETBAZAAR__INT_:
		resp->insertLong(getBazaar(inv->getSignedIntParameter())->_getObjectID());
		break;
	case RPC_GETBAZAARCOUNT__:
		resp->insertSignedInt(getBazaarCount());
		break;
	case RPC_ISREGION__:
		resp->insertBoolean(isRegion());
		break;
	case RPC_GETCITYHALL__:
		resp->insertLong(getCityHall()->_getObjectID());
		break;
	case RPC_SETCITYHALL__CITYHALLOBJECT_:
		setCityHall(static_cast<CityHallObject*>(inv->getObjectParameter()));
		break;
	default:
		return NULL;
	}

	return resp;
}

void RegionAdapter::notifyEnter(SceneObject* object) {
	(static_cast<RegionImplementation*>(impl))->notifyEnter(object);
}

void RegionAdapter::sendGreetingMessage(CreatureObject* player) {
	(static_cast<RegionImplementation*>(impl))->sendGreetingMessage(player);
}

void RegionAdapter::sendDepartingMessage(CreatureObject* player) {
	(static_cast<RegionImplementation*>(impl))->sendDepartingMessage(player);
}

void RegionAdapter::notifyExit(SceneObject* object) {
	(static_cast<RegionImplementation*>(impl))->notifyExit(object);
}

void RegionAdapter::notifyInsertToZone(Zone* zone) {
	(static_cast<RegionImplementation*>(impl))->notifyInsertToZone(zone);
}

void RegionAdapter::notifyRemoveFromZone() {
	(static_cast<RegionImplementation*>(impl))->notifyRemoveFromZone();
}

void RegionAdapter::despawnCityObjects() {
	(static_cast<RegionImplementation*>(impl))->despawnCityObjects();
}

void RegionAdapter::addBazaar(BazaarTerminal* ter) {
	(static_cast<RegionImplementation*>(impl))->addBazaar(ter);
}

BazaarTerminal* RegionAdapter::getBazaar(int idx) {
	return (static_cast<RegionImplementation*>(impl))->getBazaar(idx);
}

int RegionAdapter::getBazaarCount() {
	return (static_cast<RegionImplementation*>(impl))->getBazaarCount();
}

bool RegionAdapter::isRegion() {
	return (static_cast<RegionImplementation*>(impl))->isRegion();
}

CityHallObject* RegionAdapter::getCityHall() {
	return (static_cast<RegionImplementation*>(impl))->getCityHall();
}

void RegionAdapter::setCityHall(CityHallObject* hall) {
	(static_cast<RegionImplementation*>(impl))->setCityHall(hall);
}

/*
 *	RegionHelper
 */

RegionHelper* RegionHelper::staticInitializer = RegionHelper::instance();

RegionHelper::RegionHelper() {
	className = "Region";

	Core::getObjectBroker()->registerClass(className, this);
}

void RegionHelper::finalizeHelper() {
	RegionHelper::finalize();
}

DistributedObject* RegionHelper::instantiateObject() {
	return new Region(DummyConstructorParameter::instance());
}

DistributedObjectServant* RegionHelper::instantiateServant() {
	return new RegionImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* RegionHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new RegionAdapter(static_cast<RegionImplementation*>(obj->_getImplementation()));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

