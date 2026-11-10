/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007da5ec; name: FUN_007da5ec
 */


void FUN_007da5ec(long param_1)

{
  int iVar1;
  long *plVar2;
  
  if (*(char *)(param_1 + 0x69) == '\0') {
    *(undefined1 *)(param_1 + 0x69) = 1;
    iVar1 = FUN_00807e34(*(undefined8 *)PTR_DAT_047d0dd8,0x10);
    plVar2 = (long *)FUN_0079365c();
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + *plVar2 * (long)iVar1;
    return;
  }
  return;
}


