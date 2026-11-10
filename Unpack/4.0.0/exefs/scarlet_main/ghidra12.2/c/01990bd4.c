/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01990bd4; name: FUN_01990bd4
 */


ulong FUN_01990bd4(undefined8 param_1)

{
  ulong uVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  FUN_00d9ec44(auStack_38,0,0x5196f2c433539eda);
  FUN_00d9ec44(auStack_50,2,0xe3838ce593963e2);
  uVar1 = FUN_01990ce8(param_1,auStack_38,auStack_50);
  return uVar1 & 0xff00 | 1;
}


