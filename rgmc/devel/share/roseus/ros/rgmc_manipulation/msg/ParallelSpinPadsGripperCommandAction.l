;; Auto-generated. Do not edit!


(when (boundp 'rgmc_manipulation::ParallelSpinPadsGripperCommandAction)
  (if (not (find-package "RGMC_MANIPULATION"))
    (make-package "RGMC_MANIPULATION"))
  (shadow 'ParallelSpinPadsGripperCommandAction (find-package "RGMC_MANIPULATION")))
(unless (find-package "RGMC_MANIPULATION::PARALLELSPINPADSGRIPPERCOMMANDACTION")
  (make-package "RGMC_MANIPULATION::PARALLELSPINPADSGRIPPERCOMMANDACTION"))

(in-package "ROS")
;;//! \htmlinclude ParallelSpinPadsGripperCommandAction.msg.html


(defclass rgmc_manipulation::ParallelSpinPadsGripperCommandAction
  :super ros::object
  :slots (_action_goal _action_result _action_feedback ))

(defmethod rgmc_manipulation::ParallelSpinPadsGripperCommandAction
  (:init
   (&key
    ((:action_goal __action_goal) (instance rgmc_manipulation::ParallelSpinPadsGripperCommandActionGoal :init))
    ((:action_result __action_result) (instance rgmc_manipulation::ParallelSpinPadsGripperCommandActionResult :init))
    ((:action_feedback __action_feedback) (instance rgmc_manipulation::ParallelSpinPadsGripperCommandActionFeedback :init))
    )
   (send-super :init)
   (setq _action_goal __action_goal)
   (setq _action_result __action_result)
   (setq _action_feedback __action_feedback)
   self)
  (:action_goal
   (&rest __action_goal)
   (if (keywordp (car __action_goal))
       (send* _action_goal __action_goal)
     (progn
       (if __action_goal (setq _action_goal (car __action_goal)))
       _action_goal)))
  (:action_result
   (&rest __action_result)
   (if (keywordp (car __action_result))
       (send* _action_result __action_result)
     (progn
       (if __action_result (setq _action_result (car __action_result)))
       _action_result)))
  (:action_feedback
   (&rest __action_feedback)
   (if (keywordp (car __action_feedback))
       (send* _action_feedback __action_feedback)
     (progn
       (if __action_feedback (setq _action_feedback (car __action_feedback)))
       _action_feedback)))
  (:serialization-length
   ()
   (+
    ;; rgmc_manipulation/ParallelSpinPadsGripperCommandActionGoal _action_goal
    (send _action_goal :serialization-length)
    ;; rgmc_manipulation/ParallelSpinPadsGripperCommandActionResult _action_result
    (send _action_result :serialization-length)
    ;; rgmc_manipulation/ParallelSpinPadsGripperCommandActionFeedback _action_feedback
    (send _action_feedback :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; rgmc_manipulation/ParallelSpinPadsGripperCommandActionGoal _action_goal
       (send _action_goal :serialize s)
     ;; rgmc_manipulation/ParallelSpinPadsGripperCommandActionResult _action_result
       (send _action_result :serialize s)
     ;; rgmc_manipulation/ParallelSpinPadsGripperCommandActionFeedback _action_feedback
       (send _action_feedback :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; rgmc_manipulation/ParallelSpinPadsGripperCommandActionGoal _action_goal
     (send _action_goal :deserialize buf ptr-) (incf ptr- (send _action_goal :serialization-length))
   ;; rgmc_manipulation/ParallelSpinPadsGripperCommandActionResult _action_result
     (send _action_result :deserialize buf ptr-) (incf ptr- (send _action_result :serialization-length))
   ;; rgmc_manipulation/ParallelSpinPadsGripperCommandActionFeedback _action_feedback
     (send _action_feedback :deserialize buf ptr-) (incf ptr- (send _action_feedback :serialization-length))
   ;;
   self)
  )

(setf (get rgmc_manipulation::ParallelSpinPadsGripperCommandAction :md5sum-) "f38eebbc7d7baeb4c02f8e30dc3e5371")
(setf (get rgmc_manipulation::ParallelSpinPadsGripperCommandAction :datatype-) "rgmc_manipulation/ParallelSpinPadsGripperCommandAction")
(setf (get rgmc_manipulation::ParallelSpinPadsGripperCommandAction :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======

ParallelSpinPadsGripperCommandActionGoal action_goal
ParallelSpinPadsGripperCommandActionResult action_result
ParallelSpinPadsGripperCommandActionFeedback action_feedback

================================================================================
MSG: rgmc_manipulation/ParallelSpinPadsGripperCommandActionGoal
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======

Header header
actionlib_msgs/GoalID goal_id
ParallelSpinPadsGripperCommandGoal goal

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

================================================================================
MSG: actionlib_msgs/GoalID
# The stamp should store the time at which this goal was requested.
# It is used by an action server when it tries to preempt all
# goals that were requested before a certain time
time stamp

# The id provides a way to associate feedback and
# result message with specific goal requests. The id
# specified must be unique.
string id


================================================================================
MSG: rgmc_manipulation/ParallelSpinPadsGripperCommandGoal
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# When performing an action that uses the parallel jaw and the pads at the same time,
# The parallel jaw one will be done first.
# GOAL
float64 par_target_pos  # Parallel gripper target aperture (in meters)
float64 par_max_effort  # Parallel gripper motor max motor current
float64 par_velocity    # Parallel gripper motor velocity
bool actuate_parallel   # Whether to actuate the parallel gripper or not
float64 pads_target_pos # Fingertip pads target angular position (in radians)
float64 pads_max_effort # Fingertip pads motor max current (in mA)
float64 pads_velocity   # Fingertip pads motor target velocity
bool actuate_pads       # Whether to actuate the rotary pads or not
bool reverse_pads_actuation       # Actuate rotary pads in reverse

================================================================================
MSG: rgmc_manipulation/ParallelSpinPadsGripperCommandActionResult
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======

Header header
actionlib_msgs/GoalStatus status
ParallelSpinPadsGripperCommandResult result

================================================================================
MSG: actionlib_msgs/GoalStatus
GoalID goal_id
uint8 status
uint8 PENDING         = 0   # The goal has yet to be processed by the action server
uint8 ACTIVE          = 1   # The goal is currently being processed by the action server
uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing
                            #   and has since completed its execution (Terminal State)
uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)
uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due
                            #    to some failure (Terminal State)
uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,
                            #    because the goal was unattainable or invalid (Terminal State)
uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing
                            #    and has not yet completed execution
uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,
                            #    but the action server has not yet confirmed that the goal is canceled
uint8 RECALLED        = 8   # The goal received a cancel request before it started executing
                            #    and was successfully cancelled (Terminal State)
uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be
                            #    sent over the wire by an action server

#Allow for the user to associate a string with GoalStatus for debugging
string text


================================================================================
MSG: rgmc_manipulation/ParallelSpinPadsGripperCommandResult
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# RESULT
float64 par_final_position  # The final parallel gripper gap size (in meters)
float64 par_final_effort    # The final parallel gripper effort exerted (motor current)
bool par_stalled      # True iff the gripper is exerting max effort and not moving
bool par_reached_goal # True iff the gripper position has reached the commanded setpoint
float64[] pads_final_position # The final fingertip pads angular position (in radians)
float64[] pads_final_effort   # The final fingertip pads effort (in mA)
bool pads_stalled      # True iff one of the pads is exerting max effort and not moving
bool pads_reached_goal # True iff both pads reached goal position

================================================================================
MSG: rgmc_manipulation/ParallelSpinPadsGripperCommandActionFeedback
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======

Header header
actionlib_msgs/GoalStatus status
ParallelSpinPadsGripperCommandFeedback feedback

================================================================================
MSG: rgmc_manipulation/ParallelSpinPadsGripperCommandFeedback
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# FEEDBACK
float64 par_position  # The current parallel gripper gap size (in meters)
float64 par_effort    # The current parallel gripper effort exerted (motor current)
float64[] pads_position # The current fingertip pads angular position (in radians)
float64[] pads_effort   # The current fingertip pads effort (in mA)

")



(provide :rgmc_manipulation/ParallelSpinPadsGripperCommandAction "f38eebbc7d7baeb4c02f8e30dc3e5371")


