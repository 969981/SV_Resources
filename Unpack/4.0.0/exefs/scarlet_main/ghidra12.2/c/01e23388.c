/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e23388; name: FUN_01e23388
 */


uint FUN_01e23388(long param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0168a508(*(undefined8 *)(param_1 + 0x70));
  if (*(uint *)(*(long *)PTR_DAT_047d90c8 + 0x3d4) < (uVar1 & 0xff)) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


