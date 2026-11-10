/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0168a4c8; name: FUN_0168a4c8
 */


bool FUN_0168a4c8(long param_1)

{
  byte bVar1;
  
  bVar1 = FUN_0168a508(*(undefined8 *)(param_1 + 0x70));
  return bVar1 != 0xff && (uint)bVar1 <= *(uint *)(*(long *)PTR_DAT_047d90c8 + 0x3d4);
}


