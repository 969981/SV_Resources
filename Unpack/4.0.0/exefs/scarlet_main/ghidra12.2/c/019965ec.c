/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019965ec; name: FUN_019965ec
 */


undefined8 FUN_019965ec(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((*param_1 == 0) || (lVar2 = *(long *)(*param_1 + 0x10), lVar2 == 0)) {
    return 0;
  }
  uVar1 = FUN_0199660c(lVar2 + -0x28);
  return uVar1;
}


