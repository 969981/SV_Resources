/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005347a4; name: FUN_005347a4
 */


undefined8 FUN_005347a4(void)

{
  ulong uVar1;
  long in_x3;
  byte local_28 [16];
  undefined8 local_18;
  
  uVar1 = FUN_00532960();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  if (in_x3 != 0) {
    FUN_00532640(local_28," \'%s\'",in_x3);
    if ((local_28[0] & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_18);
    }
  }
  return 0;
}


