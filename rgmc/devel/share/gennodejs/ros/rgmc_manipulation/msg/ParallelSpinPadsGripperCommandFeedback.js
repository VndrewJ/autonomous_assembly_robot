// Auto-generated. Do not edit!

// (in-package rgmc_manipulation.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class ParallelSpinPadsGripperCommandFeedback {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.par_position = null;
      this.par_effort = null;
      this.pads_position = null;
      this.pads_effort = null;
    }
    else {
      if (initObj.hasOwnProperty('par_position')) {
        this.par_position = initObj.par_position
      }
      else {
        this.par_position = 0.0;
      }
      if (initObj.hasOwnProperty('par_effort')) {
        this.par_effort = initObj.par_effort
      }
      else {
        this.par_effort = 0.0;
      }
      if (initObj.hasOwnProperty('pads_position')) {
        this.pads_position = initObj.pads_position
      }
      else {
        this.pads_position = [];
      }
      if (initObj.hasOwnProperty('pads_effort')) {
        this.pads_effort = initObj.pads_effort
      }
      else {
        this.pads_effort = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ParallelSpinPadsGripperCommandFeedback
    // Serialize message field [par_position]
    bufferOffset = _serializer.float64(obj.par_position, buffer, bufferOffset);
    // Serialize message field [par_effort]
    bufferOffset = _serializer.float64(obj.par_effort, buffer, bufferOffset);
    // Serialize message field [pads_position]
    bufferOffset = _arraySerializer.float64(obj.pads_position, buffer, bufferOffset, null);
    // Serialize message field [pads_effort]
    bufferOffset = _arraySerializer.float64(obj.pads_effort, buffer, bufferOffset, null);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ParallelSpinPadsGripperCommandFeedback
    let len;
    let data = new ParallelSpinPadsGripperCommandFeedback(null);
    // Deserialize message field [par_position]
    data.par_position = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [par_effort]
    data.par_effort = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [pads_position]
    data.pads_position = _arrayDeserializer.float64(buffer, bufferOffset, null)
    // Deserialize message field [pads_effort]
    data.pads_effort = _arrayDeserializer.float64(buffer, bufferOffset, null)
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += 8 * object.pads_position.length;
    length += 8 * object.pads_effort.length;
    return length + 24;
  }

  static datatype() {
    // Returns string type for a message object
    return 'rgmc_manipulation/ParallelSpinPadsGripperCommandFeedback';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '2806a1e58dffdfdf7bed2a77162778b6';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    # FEEDBACK
    float64 par_position  # The current parallel gripper gap size (in meters)
    float64 par_effort    # The current parallel gripper effort exerted (motor current)
    float64[] pads_position # The current fingertip pads angular position (in radians)
    float64[] pads_effort   # The current fingertip pads effort (in mA)
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ParallelSpinPadsGripperCommandFeedback(null);
    if (msg.par_position !== undefined) {
      resolved.par_position = msg.par_position;
    }
    else {
      resolved.par_position = 0.0
    }

    if (msg.par_effort !== undefined) {
      resolved.par_effort = msg.par_effort;
    }
    else {
      resolved.par_effort = 0.0
    }

    if (msg.pads_position !== undefined) {
      resolved.pads_position = msg.pads_position;
    }
    else {
      resolved.pads_position = []
    }

    if (msg.pads_effort !== undefined) {
      resolved.pads_effort = msg.pads_effort;
    }
    else {
      resolved.pads_effort = []
    }

    return resolved;
    }
};

module.exports = ParallelSpinPadsGripperCommandFeedback;
