/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022f2ab4; name: FUN_022f2ab4
 */


undefined4 FUN_022f2ab4(void)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_022f2914();
  uVar2 = (undefined4)(uVar1 >> 0x20);
  if ((uVar1 & 0xff) == 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


