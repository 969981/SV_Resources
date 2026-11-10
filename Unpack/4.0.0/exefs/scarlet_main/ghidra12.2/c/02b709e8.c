/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b709e8; name: FUN_02b709e8
 */


undefined8 FUN_02b709e8(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (*(uint *)(*(long *)PTR_DAT_047d90c8 + 0x3d4) < param_2) {
    return 0;
  }
  uVar1 = FUN_00e99324(*(undefined8 *)(param_1 + 0x70));
  return uVar1;
}


