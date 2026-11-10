/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027c9134; name: FUN_027c9134
 */


void FUN_027c9134(undefined8 param_1,long param_2)

{
  char cVar1;
  long lVar2;
  
  if (((*(long *)(param_2 + 0x78) == 0) ||
      (lVar2 = *(long *)(*(long *)(param_2 + 0x78) + 0x10), lVar2 == 0)) ||
     (cVar1 = FUN_027c9184(lVar2 + -0x28), cVar1 == '\0')) {
    FUN_027c912c(param_1);
    return;
  }
  FUN_027c91c8(param_1);
  return;
}


