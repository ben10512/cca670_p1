# Disclaimer: This template was originally provided by AWS as a template:
- https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/working-with-templates-cfn-designer-walkthrough-createbasicwebserver.html
---
6 Edits were made to the scripts and services allowing for jenkins to be installed.
1. Wget the appropriate yum repo to be available on the host.
2. Import the proper Jenkins key.
3. Install Jenkins from the newly added yum repo.
4. Remove the standard java 1.7 build.
5. Install the new Java 1.8 OpenJDK build.
6. Start the Jenkins Service.

Once operational, the CloudFormation template was configured to support auto enabling the ensuring the Jenkins application was running. 

Additionally, the subnet was modified to support Jenkins' web traffic on port 8080.
