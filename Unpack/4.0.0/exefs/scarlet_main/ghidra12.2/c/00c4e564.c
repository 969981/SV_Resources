/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c4e564; name: FUN_00c4e564
 */


bool FUN_00c4e564(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = (**(code **)(*param_1 + 0xf8))();
  if ((uVar1 & 1) == 0) {
    return false;
  }
  lVar2 = FUN_00c4e600();
  return 0 < *(int *)(lVar2 + 0x12c8);
}


