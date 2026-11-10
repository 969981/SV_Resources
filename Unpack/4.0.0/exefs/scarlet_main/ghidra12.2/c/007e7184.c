/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


