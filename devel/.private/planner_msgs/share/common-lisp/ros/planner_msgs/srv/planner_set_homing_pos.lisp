; Auto-generated. Do not edit!


(cl:in-package planner_msgs-srv)


;//! \htmlinclude planner_set_homing_pos-request.msg.html

(cl:defclass <planner_set_homing_pos-request> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass planner_set_homing_pos-request (<planner_set_homing_pos-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <planner_set_homing_pos-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'planner_set_homing_pos-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name planner_msgs-srv:<planner_set_homing_pos-request> is deprecated: use planner_msgs-srv:planner_set_homing_pos-request instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <planner_set_homing_pos-request>) ostream)
  "Serializes a message object of type '<planner_set_homing_pos-request>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <planner_set_homing_pos-request>) istream)
  "Deserializes a message object of type '<planner_set_homing_pos-request>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<planner_set_homing_pos-request>)))
  "Returns string type for a service object of type '<planner_set_homing_pos-request>"
  "planner_msgs/planner_set_homing_posRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'planner_set_homing_pos-request)))
  "Returns string type for a service object of type 'planner_set_homing_pos-request"
  "planner_msgs/planner_set_homing_posRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<planner_set_homing_pos-request>)))
  "Returns md5sum for a message object of type '<planner_set_homing_pos-request>"
  "358e233cde0c8a8bcfea4ce193f8fc15")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'planner_set_homing_pos-request)))
  "Returns md5sum for a message object of type 'planner_set_homing_pos-request"
  "358e233cde0c8a8bcfea4ce193f8fc15")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<planner_set_homing_pos-request>)))
  "Returns full string definition for message of type '<planner_set_homing_pos-request>"
  (cl:format cl:nil "# Set current position as homing position.~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'planner_set_homing_pos-request)))
  "Returns full string definition for message of type 'planner_set_homing_pos-request"
  (cl:format cl:nil "# Set current position as homing position.~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <planner_set_homing_pos-request>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <planner_set_homing_pos-request>))
  "Converts a ROS message object to a list"
  (cl:list 'planner_set_homing_pos-request
))
;//! \htmlinclude planner_set_homing_pos-response.msg.html

(cl:defclass <planner_set_homing_pos-response> (roslisp-msg-protocol:ros-message)
  ((success
    :reader success
    :initarg :success
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass planner_set_homing_pos-response (<planner_set_homing_pos-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <planner_set_homing_pos-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'planner_set_homing_pos-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name planner_msgs-srv:<planner_set_homing_pos-response> is deprecated: use planner_msgs-srv:planner_set_homing_pos-response instead.")))

(cl:ensure-generic-function 'success-val :lambda-list '(m))
(cl:defmethod success-val ((m <planner_set_homing_pos-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader planner_msgs-srv:success-val is deprecated.  Use planner_msgs-srv:success instead.")
  (success m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <planner_set_homing_pos-response>) ostream)
  "Serializes a message object of type '<planner_set_homing_pos-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'success) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <planner_set_homing_pos-response>) istream)
  "Deserializes a message object of type '<planner_set_homing_pos-response>"
    (cl:setf (cl:slot-value msg 'success) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<planner_set_homing_pos-response>)))
  "Returns string type for a service object of type '<planner_set_homing_pos-response>"
  "planner_msgs/planner_set_homing_posResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'planner_set_homing_pos-response)))
  "Returns string type for a service object of type 'planner_set_homing_pos-response"
  "planner_msgs/planner_set_homing_posResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<planner_set_homing_pos-response>)))
  "Returns md5sum for a message object of type '<planner_set_homing_pos-response>"
  "358e233cde0c8a8bcfea4ce193f8fc15")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'planner_set_homing_pos-response)))
  "Returns md5sum for a message object of type 'planner_set_homing_pos-response"
  "358e233cde0c8a8bcfea4ce193f8fc15")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<planner_set_homing_pos-response>)))
  "Returns full string definition for message of type '<planner_set_homing_pos-response>"
  (cl:format cl:nil "bool success~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'planner_set_homing_pos-response)))
  "Returns full string definition for message of type 'planner_set_homing_pos-response"
  (cl:format cl:nil "bool success~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <planner_set_homing_pos-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <planner_set_homing_pos-response>))
  "Converts a ROS message object to a list"
  (cl:list 'planner_set_homing_pos-response
    (cl:cons ':success (success msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'planner_set_homing_pos)))
  'planner_set_homing_pos-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'planner_set_homing_pos)))
  'planner_set_homing_pos-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'planner_set_homing_pos)))
  "Returns string type for a service object of type '<planner_set_homing_pos>"
  "planner_msgs/planner_set_homing_pos")