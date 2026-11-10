/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c59a3c; name: FUN_00c59a3c
 */


void FUN_00c59a3c(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  undefined8 uVar5;
  
  iVar2 = *(int *)(param_1 + 8);
  pcVar3 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x70) + 0x110)
                                ,*(long *)(param_1 + 0x10) + 0x30);
  if (*pcVar3 == '\0' || *(long *)(pcVar3 + 8) == 0) {
    return;
  }
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  iVar1 = 0;
  if (iVar2 != 0x10) {
    iVar1 = iVar2;
  }
  lVar4 = (**(code **)PTR_DAT_047e0be8)(*(undefined8 *)(*(long *)(pcVar3 + 8) + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00c59ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_047e0bf0)(uVar5,iVar1,lVar4 + 0x10);
  return;
}


