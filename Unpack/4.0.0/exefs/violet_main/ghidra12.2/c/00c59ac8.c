/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c59ac8; name: FUN_00c59ac8
 */


void FUN_00c59ac8(long param_1,long param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 8) != 0x10 && *(int *)(param_1 + 8) != 0) {
    FUN_00c59b6c(param_2);
  }
  pcVar2 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x70) + 0x110)
                                ,*(long *)(param_1 + 0x10) + 0x30);
  if (*pcVar2 == '\0' || *(long *)(pcVar2 + 8) == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  uVar3 = (**(code **)PTR_DAT_047e0be8)(*(undefined8 *)(*(long *)(pcVar2 + 8) + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00c59b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_047e0bf0)(uVar4,uVar1,uVar3);
  return;
}


