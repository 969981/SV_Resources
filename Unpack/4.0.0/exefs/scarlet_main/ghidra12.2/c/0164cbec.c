/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0164cbec; name: FUN_0164cbec
 */


void FUN_0164cbec(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  
  if ((ulong)((param_1[2] - param_1[1] >> 4) * 0x4cff9a64cff9a64d) < param_2) {
    uVar1 = FUN_0164ccbc(param_1,param_2 + (param_1[1] - *param_1 >> 4) * 0x4cff9a64cff9a64d);
    FUN_0164cd20(auStack_58,uVar1,(param_1[1] - *param_1 >> 4) * 0x4cff9a64cff9a64d,param_1 + 3);
    FUN_0164cf54(auStack_58,param_2);
    FUN_0164cdb4(param_1,auStack_58);
    FUN_0164ce74(auStack_58);
    return;
  }
  FUN_0164f298(param_1,param_2);
  return;
}


