/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0293d780; name: FUN_0293d780
 */


int FUN_0293d780(long param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_011e2dd4(*(undefined8 *)
                                (*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x290) + 8) + 0x50));
  iVar1 = 0;
  if ((piVar2 != (int *)0x0) && (iVar1 = *piVar2, 4 < iVar1)) {
    iVar1 = 0;
  }
  return iVar1;
}


