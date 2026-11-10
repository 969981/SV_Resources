/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0158c230; name: FUN_0158c230
 */


void FUN_0158c230(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  
  if ((ulong)((param_1[2] - param_1[1] >> 2) * -0x5555555555555555) < param_2) {
    uVar1 = FUN_0158c2f8(param_1,param_2 + (param_1[1] - *param_1 >> 2) * -0x5555555555555555);
    FUN_0158c354(auStack_58,uVar1,(param_1[1] - *param_1 >> 2) * -0x5555555555555555,param_1 + 3);
    FUN_0158c5f0(auStack_58,param_2);
    FUN_0158c3e8(param_1,auStack_58);
    FUN_0158c490(auStack_58);
    return;
  }
  FUN_0158d02c(param_1,param_2);
  return;
}


