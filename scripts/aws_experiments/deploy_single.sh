#!/bin/sh
data_dir=.ec2_single
$janus/scripts/aws_experiments/build_aws.sh us-west-2 19 m4.large $data_dir
