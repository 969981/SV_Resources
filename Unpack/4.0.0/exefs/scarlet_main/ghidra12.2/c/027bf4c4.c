/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027bf4c4; name: FUN_027bf4c4
 */


uint FUN_027bf4c4(long param_1)

{
  uint uVar1;
  long *plVar2;
  undefined1 auStack_40 [32];
  
  FUN_006c4b84(auStack_40);
  plVar2 = (long *)FUN_006c4ae0();
  *plVar2 = param_1;
  uVar1 = FUN_006c6bb0(param_1 + 8);
  FUN_006c4cb4(auStack_40);
  return uVar1 & 1;
}


