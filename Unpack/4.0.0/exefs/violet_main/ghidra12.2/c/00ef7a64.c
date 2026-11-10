/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ef7a64; name: FUN_00ef7a64
 */


undefined4 FUN_00ef7a64(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined1 local_24 [4];
  
  lVar2 = FUN_021f9584(local_24);
  if (param_1 == 0) {
    uVar1 = (**(code **)(*(long *)PTR_DAT_047d90c8 + 0x240))(local_24[0]);
  }
  else {
    uVar1 = FUN_00ef78d8(param_1);
  }
  return *(undefined4 *)(lVar2 + (ulong)(uVar1 & 0xff) * 4);
}


