/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008dd884; name: FUN_008dd884
 */


long FUN_008dd884(char *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  
  if (*param_1 == '\0') {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x20);
  lVar6 = (long)param_2;
  if (*(char *)(lVar2 + (long)param_2 * 0x180) != '\0') goto LAB_008dd9a8;
  lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x20) + lVar6 * 0x40;
  lVar5 = *(long *)(lVar2 + *(long *)(PTR_DAT_047d1f00 + 8));
  lVar3 = *(long *)(lVar2 + *(long *)(PTR_DAT_047d1f00 + 0x10));
  if (*(long *)(lVar2 + *(long *)PTR_DAT_047d1f00) == 0) {
    iVar1 = 3;
    if (lVar5 != 0) goto LAB_008dd92c;
LAB_008dd900:
    uVar4 = 0;
    if (lVar3 != 0 && iVar1 != 0) {
LAB_008dd94c:
      FUN_00ea1db8(*(undefined8 *)(lVar3 + 0x68),*(undefined8 *)(param_1 + 0x18),lVar3);
      uVar4 = 2;
    }
  }
  else {
    iVar1 = FUN_00ea1db8(*(undefined8 *)(*(long *)(lVar2 + *(long *)PTR_DAT_047d1f00) + 0x68),
                         *(undefined8 *)(param_1 + 0x18));
    if (lVar5 == 0 || iVar1 == 0) goto LAB_008dd900;
LAB_008dd92c:
    iVar1 = FUN_00ea1db8(*(undefined8 *)(lVar5 + 0x68),*(undefined8 *)(param_1 + 0x18),lVar5);
    uVar4 = 1;
    if (lVar3 != 0 && iVar1 != 0) goto LAB_008dd94c;
  }
  lVar3 = lVar6 * 0x180;
  FUN_008dcea8(*(long *)(param_1 + 0x20) + lVar3);
  FUN_008dceb0(*(long *)(param_1 + 0x20) + lVar3,lVar2,uVar4);
  FUN_008dced8(*(long *)(param_1 + 0x20) + lVar3);
  FUN_008dd198(*(long *)(param_1 + 0x20) + lVar3);
  lVar2 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x10) = uVar4;
LAB_008dd9a8:
  return lVar2 + lVar6 * 0x180;
}


