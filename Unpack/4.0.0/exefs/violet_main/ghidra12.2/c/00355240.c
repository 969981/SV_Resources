/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00355240; name: FUN_00355240
 */


undefined * FUN_00355240(void)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_00362390();
  if (iVar1 == 0) {
    return (undefined *)0x0;
  }
  uVar2 = FUN_0038e980();
  if ((uVar2 & 1) != 0) {
    DAT_047ef698 = 1;
    FUN_0038db00(&DAT_047ef6a8);
    FUN_0038ea84(FUN_00355290);
  }
  return &DAT_044963a0;
}


