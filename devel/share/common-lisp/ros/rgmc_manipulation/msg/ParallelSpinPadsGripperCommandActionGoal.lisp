; Auto-generated. Do not edit!


(cl:in-package rgmc_manipulation-msg)


;//! \htmlinclude ParallelSpinPadsGripperCommandActionGoal.msg.html

(cl:defclass <ParallelSpinPadsGripperCommandActionGoal> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (goal_id
    :reader goal_id
    :initarg :goal_id
    :type actionlib_msgs-msg:GoalID
    :initform (cl:make-instance 'actionlib_msgs-msg:GoalID))
   (goal
    :reader goal
    :initarg :goal
    :type rgmc_manipulation-msg:ParallelSpinPadsGripperCommandGoal
    :initform (cl:make-instance 'rgmc_manipulation-msg:ParallelSpinPadsGripperCommandGoal)))
)

(cl:defclass ParallelSpinPadsGripperCommandActionGoal (<ParallelSpinPadsGripperCommandActionGoal>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ParallelSpinPadsGripperCommandActionGoal>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ParallelSpinPadsGripperCommandActionGoal)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name rgmc_manipulation-msg:<ParallelSpinPadsGripperCommandActionGoal> is deprecated: use rgmc_manipulation-msg:ParallelSpinPadsGripperCommandActionGoal instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <ParallelSpinPadsGripperCommandActionGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader rgmc_manipulation-msg:header-val is deprecated.  Use rgmc_manipulation-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'goal_id-val :lambda-list '(m))
(cl:defmethod goal_id-val ((m <ParallelSpinPadsGripperCommandActionGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader rgmc_manipulation-msg:goal_id-val is deprecated.  Use rgmc_manipulation-msg:goal_id instead.")
  (goal_id m))

(cl:ensure-generic-function 'goal-val :lambda-list '(m))
(cl:defmethod goal-val ((m <ParallelSpinPadsGripperCommandActionGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader rgmc_manipulation-msg:goal-val is deprecated.  Use rgmc_manipulation-msg:goal instead.")
  (goal m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ParallelSpinPadsGripperCommandActionGoal>) ostream)
  "Serializes a message object of type '<ParallelSpinPadsGripperCommandActionGoal>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'goal_id) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'goal) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ParallelSpinPadsGripperCommandActionGoal>) istream)
  "Deserializes a message object of type '<ParallelSpinPadsGripperCommandActionGoal>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'goal_id) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'goal) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ParallelSpinPadsGripperCommandActionGoal>)))
  "Returns string type for a message object of type '<ParallelSpinPadsGripperCommandActionGoal>"
  "rgmc_manipulation/ParallelSpinPadsGripperCommandActionGoal")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ParallelSpinPadsGripperCommandActionGoal)))
  "Returns string type for a message object of type 'ParallelSpinPadsGripperCommandActionGoal"
  "rgmc_manipulation/ParallelSpinPadsGripperCommandActionGoal")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ParallelSpinPadsGripperCommandActionGoal>)))
  "Returns md5sum for a message object of type '<ParallelSpinPadsGripperCommandActionGoal>"
  "46d5d84b1efa4d94b67a02040b950378")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ParallelSpinPadsGripperCommandActionGoal)))
  "Returns md5sum for a message object of type 'ParallelSpinPadsGripperCommandActionGoal"
  "46d5d84b1efa4d94b67a02040b950378")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ParallelSpinPadsGripperCommandActionGoal>)))
  "Returns full string definition for message of type '<ParallelSpinPadsGripperCommandActionGoal>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%Header header~%actionlib_msgs/GoalID goal_id~%ParallelSpinPadsGripperCommandGoal goal~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: actionlib_msgs/GoalID~%# The stamp should store the time at which this goal was requested.~%# It is used by an action server when it tries to preempt all~%# goals that were requested before a certain time~%time stamp~%~%# The id provides a way to associate feedback and~%# result message with specific goal requests. The id~%# specified must be unique.~%string id~%~%~%================================================================================~%MSG: rgmc_manipulation/ParallelSpinPadsGripperCommandGoal~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# When performing an action that uses the parallel jaw and the pads at the same time,~%# The parallel jaw one will be done first.~%# GOAL~%float64 par_target_pos  # Parallel gripper target aperture (in meters)~%float64 par_max_effort  # Parallel gripper motor max motor current~%float64 par_velocity    # Parallel gripper motor velocity~%bool actuate_parallel   # Whether to actuate the parallel gripper or not~%float64 pads_target_pos # Fingertip pads target angular position (in radians)~%float64 pads_max_effort # Fingertip pads motor max current (in mA)~%float64 pads_velocity   # Fingertip pads motor target velocity~%bool actuate_pads       # Whether to actuate the rotary pads or not~%bool reverse_pads_actuation       # Actuate rotary pads in reverse~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ParallelSpinPadsGripperCommandActionGoal)))
  "Returns full string definition for message of type 'ParallelSpinPadsGripperCommandActionGoal"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%Header header~%actionlib_msgs/GoalID goal_id~%ParallelSpinPadsGripperCommandGoal goal~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: actionlib_msgs/GoalID~%# The stamp should store the time at which this goal was requested.~%# It is used by an action server when it tries to preempt all~%# goals that were requested before a certain time~%time stamp~%~%# The id provides a way to associate feedback and~%# result message with specific goal requests. The id~%# specified must be unique.~%string id~%~%~%================================================================================~%MSG: rgmc_manipulation/ParallelSpinPadsGripperCommandGoal~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# When performing an action that uses the parallel jaw and the pads at the same time,~%# The parallel jaw one will be done first.~%# GOAL~%float64 par_target_pos  # Parallel gripper target aperture (in meters)~%float64 par_max_effort  # Parallel gripper motor max motor current~%float64 par_velocity    # Parallel gripper motor velocity~%bool actuate_parallel   # Whether to actuate the parallel gripper or not~%float64 pads_target_pos # Fingertip pads target angular position (in radians)~%float64 pads_max_effort # Fingertip pads motor max current (in mA)~%float64 pads_velocity   # Fingertip pads motor target velocity~%bool actuate_pads       # Whether to actuate the rotary pads or not~%bool reverse_pads_actuation       # Actuate rotary pads in reverse~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ParallelSpinPadsGripperCommandActionGoal>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'goal_id))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'goal))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ParallelSpinPadsGripperCommandActionGoal>))
  "Converts a ROS message object to a list"
  (cl:list 'ParallelSpinPadsGripperCommandActionGoal
    (cl:cons ':header (header msg))
    (cl:cons ':goal_id (goal_id msg))
    (cl:cons ':goal (goal msg))
))