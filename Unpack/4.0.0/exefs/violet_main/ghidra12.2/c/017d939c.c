/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017d939c; name: FUN_017d939c
 */


void FUN_017d939c(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [16];
  long local_48;
  
  uVar1 = param_1[1];
  if (uVar1 < (ulong)param_1[2]) {
    FUN_017d94e4(param_1 + 3,uVar1,param_2);
    param_1[1] = uVar1 + 5;
    return;
  }
  uVar2 = FUN_017d948c(param_1,(param_1[1] - *param_1) * -0x3333333333333333 + 1);
  FUN_017d95d0(auStack_58,uVar2,(param_1[1] - *param_1) * -0x3333333333333333,param_1 + 3);
  FUN_017d94e4(param_1 + 3,local_48,param_2);
  local_48 = local_48 + 5;
  FUN_017d9734(param_1,auStack_58);
  FUN_017d9664(auStack_58);
  return;
}


