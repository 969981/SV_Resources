/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019cec20; name: FUN_019cec20
 */


void FUN_019cec20(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [16];
  long local_48;
  
  uVar1 = param_1[1];
  if (uVar1 < (ulong)param_1[2]) {
    FUN_019ceeec(param_1 + 3,uVar1,param_2);
    param_1[1] = uVar1 + 0xa8;
    return;
  }
  uVar2 = FUN_019ced20(param_1,(param_1[1] - *param_1 >> 3) * -0x30c30c30c30c30c3 + 1);
  FUN_019ced84(auStack_58,uVar2,(param_1[1] - *param_1 >> 3) * -0x30c30c30c30c30c3,param_1 + 3);
  FUN_019ceeec(param_1 + 3,local_48,param_2);
  local_48 = local_48 + 0xa8;
  FUN_019cefe4(param_1,auStack_58);
  FUN_019cee14(auStack_58);
  return;
}


