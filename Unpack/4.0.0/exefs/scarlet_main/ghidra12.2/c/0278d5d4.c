/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0278d5d4; name: FUN_0278d5d4
 */


void FUN_0278d5d4(undefined8 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined8 local_78 [8];
  undefined2 local_38;
  undefined2 local_36;
  
  FUN_0278e370();
  *param_1 = &PTR_FUN_045e0f28;
  param_1[4] = &PTR_LAB_045e0f58;
  *(undefined2 *)(param_1 + 5) = *param_2;
  memcpy(param_1 + 6,param_3,0x58);
  *(undefined4 *)(param_1 + 0x13) = 1;
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  local_78[0] = 0;
  FUN_0278ded4(param_1 + 0x15,0,local_78);
  *(undefined1 *)(param_1 + 0x37) = 0;
  param_1[0x3a] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  memcpy(local_78,"beacon",0x40);
  local_38 = *param_3;
  local_36 = 2;
  FUN_01793b10(local_78);
  return;
}


