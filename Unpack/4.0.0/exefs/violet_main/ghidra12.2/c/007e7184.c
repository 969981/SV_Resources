/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e7184; name: FUN_007e7184
 */


undefined8 FUN_007e7184(long param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2 & 0xff;
  if (uVar1 == 0xfd) {
    return 0;
  }
  uVar2 = 0;
  if ((uVar1 < 0x18) && (uVar1 < *(ushort *)(param_1 + 0xa6))) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x40) + ((ulong)param_2 & 0xff) * 8);
  }
  return uVar2;
}


