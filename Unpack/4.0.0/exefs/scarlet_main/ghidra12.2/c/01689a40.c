/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01689a40; name: FUN_01689a40
 */


int FUN_01689a40(long param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_011e2dd4(*(undefined8 *)
                                (*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8) + 0x50)
                              );
  iVar1 = 0;
  if ((piVar2 != (int *)0x0) && (iVar1 = *piVar2, 4 < iVar1)) {
    iVar1 = 0;
  }
  return iVar1;
}


