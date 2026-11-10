/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c01ab0; name: FUN_00c01ab0
 */


void FUN_00c01ab0(undefined8 param_1,undefined4 param_2)

{
  undefined4 local_50 [2];
  char *local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_50[0] = 3;
  local_40 = 0x4e;
  local_48 = 
  "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/generated_message_util.cc"
  ;
  local_28 = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_00bb04e4(local_50,"CHECK failed: false: ");
  FUN_00bb04e4(local_50,param_1);
  FUN_00bb04e4(local_50,&DAT_03c9c9c5);
  FUN_00bb0d24(local_50,param_2);
  FUN_00bb0e90(local_50);
  FUN_00bb0d74(local_50);
                    /* WARNING: Subroutine does not return */
  exit(1);
}


