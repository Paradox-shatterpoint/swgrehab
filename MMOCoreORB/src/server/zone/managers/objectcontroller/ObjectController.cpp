/*
 *	server/zone/managers/objectcontroller/ObjectController.cpp generated by engine3 IDL compiler 0.60
 */

#include "ObjectController.h"

#include "server/zone/managers/objectcontroller/command/CommandList.h"

#include "server/zone/managers/objectcontroller/command/CommandConfigManager.h"

#include "server/zone/objects/creature/commands/QueueCommand.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/ZoneProcessServer.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	ObjectControllerStub
 */

enum {RPC_FINALIZE__ = 6,RPC_LOADCOMMANDS__,RPC_TRANSFEROBJECT__SCENEOBJECT_SCENEOBJECT_INT_BOOL_,RPC_ACTIVATECOMMAND__CREATUREOBJECT_INT_INT_LONG_UNICODESTRING_,};

ObjectController::ObjectController(ZoneProcessServer* srv) : ManagedService(DummyConstructorParameter::instance()) {
	ObjectControllerImplementation* _implementation = new ObjectControllerImplementation(srv);
	_impl = _implementation;
	_impl->_setStub(this);
}

ObjectController::ObjectController(DummyConstructorParameter* param) : ManagedService(param) {
}

ObjectController::~ObjectController() {
}



void ObjectController::loadCommands() {
	ObjectControllerImplementation* _implementation = static_cast<ObjectControllerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_LOADCOMMANDS__);

		method.executeWithVoidReturn();
	} else
		_implementation->loadCommands();
}

bool ObjectController::transferObject(SceneObject* objectToTransfer, SceneObject* destinationObject, int containmentType, bool notifyClient) {
	ObjectControllerImplementation* _implementation = static_cast<ObjectControllerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_TRANSFEROBJECT__SCENEOBJECT_SCENEOBJECT_INT_BOOL_);
		method.addObjectParameter(objectToTransfer);
		method.addObjectParameter(destinationObject);
		method.addSignedIntParameter(containmentType);
		method.addBooleanParameter(notifyClient);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->transferObject(objectToTransfer, destinationObject, containmentType, notifyClient);
}

float ObjectController::activateCommand(CreatureObject* object, unsigned int actionCRC, unsigned int actionCount, unsigned long long targetID, const UnicodeString& arguments) {
	ObjectControllerImplementation* _implementation = static_cast<ObjectControllerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ACTIVATECOMMAND__CREATUREOBJECT_INT_INT_LONG_UNICODESTRING_);
		method.addObjectParameter(object);
		method.addUnsignedIntParameter(actionCRC);
		method.addUnsignedIntParameter(actionCount);
		method.addUnsignedLongParameter(targetID);
		method.addUnicodeParameter(arguments);

		return method.executeWithFloatReturn();
	} else
		return _implementation->activateCommand(object, actionCRC, actionCount, targetID, arguments);
}

void ObjectController::addQueueCommand(QueueCommand* command) {
	ObjectControllerImplementation* _implementation = static_cast<ObjectControllerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->addQueueCommand(command);
}

QueueCommand* ObjectController::getQueueCommand(const String& name) {
	ObjectControllerImplementation* _implementation = static_cast<ObjectControllerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getQueueCommand(name);
}

QueueCommand* ObjectController::getQueueCommand(unsigned int crc) {
	ObjectControllerImplementation* _implementation = static_cast<ObjectControllerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getQueueCommand(crc);
}

DistributedObjectServant* ObjectController::_getImplementation() {

	_updated = true;
	return _impl;
}

void ObjectController::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	ObjectControllerImplementation
 */

ObjectControllerImplementation::ObjectControllerImplementation(DummyConstructorParameter* param) : ManagedServiceImplementation(param) {
	_initializeImplementation();
}


ObjectControllerImplementation::~ObjectControllerImplementation() {
	ObjectControllerImplementation::finalize();
}


void ObjectControllerImplementation::_initializeImplementation() {
	_setClassHelper(ObjectControllerHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void ObjectControllerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<ObjectController*>(stub);
	ManagedServiceImplementation::_setStub(stub);
}

DistributedObjectStub* ObjectControllerImplementation::_getStub() {
	return _this;
}

ObjectControllerImplementation::operator const ObjectController*() {
	return _this;
}

void ObjectControllerImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void ObjectControllerImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void ObjectControllerImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void ObjectControllerImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void ObjectControllerImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void ObjectControllerImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void ObjectControllerImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void ObjectControllerImplementation::_serializationHelperMethod() {
	ManagedServiceImplementation::_serializationHelperMethod();

	_setClassName("ObjectController");

}

void ObjectControllerImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(ObjectControllerImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool ObjectControllerImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (ManagedServiceImplementation::readObjectMember(stream, _name))
		return true;


	return false;
}

void ObjectControllerImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = ObjectControllerImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int ObjectControllerImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;

	return 0 + ManagedServiceImplementation::writeObjectMembers(stream);
}

ObjectControllerImplementation::ObjectControllerImplementation(ZoneProcessServer* srv) {
	_initializeImplementation();
	// server/zone/managers/objectcontroller/ObjectController.idl():  		server = srv;
	server = srv;
	// server/zone/managers/objectcontroller/ObjectController.idl():  		Logger.setLoggingName("ObjectController");
	Logger::setLoggingName("ObjectController");
	// server/zone/managers/objectcontroller/ObjectController.idl():  		Logger.setLogging(true);
	Logger::setLogging(true);
	// server/zone/managers/objectcontroller/ObjectController.idl():  		Logger.setGlobalLogging(true);
	Logger::setGlobalLogging(true);
	// server/zone/managers/objectcontroller/ObjectController.idl():  		loadCommands();
	loadCommands();
}

/*
 *	ObjectControllerAdapter
 */

ObjectControllerAdapter::ObjectControllerAdapter(ObjectControllerImplementation* obj) : ManagedServiceAdapter(obj) {
}

Packet* ObjectControllerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_FINALIZE__:
		finalize();
		break;
	case RPC_LOADCOMMANDS__:
		loadCommands();
		break;
	case RPC_TRANSFEROBJECT__SCENEOBJECT_SCENEOBJECT_INT_BOOL_:
		resp->insertBoolean(transferObject(static_cast<SceneObject*>(inv->getObjectParameter()), static_cast<SceneObject*>(inv->getObjectParameter()), inv->getSignedIntParameter(), inv->getBooleanParameter()));
		break;
	case RPC_ACTIVATECOMMAND__CREATUREOBJECT_INT_INT_LONG_UNICODESTRING_:
		resp->insertFloat(activateCommand(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getUnsignedIntParameter(), inv->getUnsignedIntParameter(), inv->getUnsignedLongParameter(), inv->getUnicodeParameter(_param4_activateCommand__CreatureObject_int_int_long_UnicodeString_)));
		break;
	default:
		return NULL;
	}

	return resp;
}

void ObjectControllerAdapter::finalize() {
	(static_cast<ObjectControllerImplementation*>(impl))->finalize();
}

void ObjectControllerAdapter::loadCommands() {
	(static_cast<ObjectControllerImplementation*>(impl))->loadCommands();
}

bool ObjectControllerAdapter::transferObject(SceneObject* objectToTransfer, SceneObject* destinationObject, int containmentType, bool notifyClient) {
	return (static_cast<ObjectControllerImplementation*>(impl))->transferObject(objectToTransfer, destinationObject, containmentType, notifyClient);
}

float ObjectControllerAdapter::activateCommand(CreatureObject* object, unsigned int actionCRC, unsigned int actionCount, unsigned long long targetID, const UnicodeString& arguments) {
	return (static_cast<ObjectControllerImplementation*>(impl))->activateCommand(object, actionCRC, actionCount, targetID, arguments);
}

/*
 *	ObjectControllerHelper
 */

ObjectControllerHelper* ObjectControllerHelper::staticInitializer = ObjectControllerHelper::instance();

ObjectControllerHelper::ObjectControllerHelper() {
	className = "ObjectController";

	Core::getObjectBroker()->registerClass(className, this);
}

void ObjectControllerHelper::finalizeHelper() {
	ObjectControllerHelper::finalize();
}

DistributedObject* ObjectControllerHelper::instantiateObject() {
	return new ObjectController(DummyConstructorParameter::instance());
}

DistributedObjectServant* ObjectControllerHelper::instantiateServant() {
	return new ObjectControllerImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ObjectControllerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ObjectControllerAdapter(static_cast<ObjectControllerImplementation*>(obj->_getImplementation()));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

