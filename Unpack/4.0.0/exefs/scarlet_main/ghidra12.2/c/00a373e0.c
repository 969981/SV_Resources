/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a373e0; name: FUN_00a373e0
 */


undefined4 FUN_00a373e0(long param_1)

{
  long lVar1;
  ushort uVar2;
  
  uVar2 = FUN_00b0e9ac();
  lVar1 = 0x18;
  if ((uVar2 & 0xff) == 0 || uVar2 < 0x100) {
    lVar1 = 8;
  }
  return *(undefined4 *)(param_1 + lVar1);
}


