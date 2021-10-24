
(cl:in-package :asdf)

(defsystem "action_demo-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :actionlib_msgs-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "numberAction" :depends-on ("_package_numberAction"))
    (:file "_package_numberAction" :depends-on ("_package"))
    (:file "numberActionFeedback" :depends-on ("_package_numberActionFeedback"))
    (:file "_package_numberActionFeedback" :depends-on ("_package"))
    (:file "numberActionGoal" :depends-on ("_package_numberActionGoal"))
    (:file "_package_numberActionGoal" :depends-on ("_package"))
    (:file "numberActionResult" :depends-on ("_package_numberActionResult"))
    (:file "_package_numberActionResult" :depends-on ("_package"))
    (:file "numberFeedback" :depends-on ("_package_numberFeedback"))
    (:file "_package_numberFeedback" :depends-on ("_package"))
    (:file "numberGoal" :depends-on ("_package_numberGoal"))
    (:file "_package_numberGoal" :depends-on ("_package"))
    (:file "numberResult" :depends-on ("_package_numberResult"))
    (:file "_package_numberResult" :depends-on ("_package"))
  ))