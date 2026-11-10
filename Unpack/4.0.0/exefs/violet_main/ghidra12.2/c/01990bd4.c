/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


