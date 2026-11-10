/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034051e0; name: FUN_034051e0
 */


int FUN_034051e0(long param_1,long param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  int *piVar8;
  ulong uVar9;
  
  iVar5 = *(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30);
  if (iVar5 == 0 || *(int *)(param_1 + 0x34) < *(int *)(param_1 + 0x30)) {
    return 0;
  }
  if (param_2 == 0) {
    return iVar5;
  }
  piVar8 = *(int **)(param_1 + 0x18);
  iVar1 = *piVar8 >> 1;
  iVar2 = param_3;
  if (iVar5 <= param_3) {
    iVar2 = iVar5;
  }
  if (iVar1 < 0x200) {
    if (iVar1 == 0x80) {
      puVar6 = (undefined *)0x47ba1d0;
    }
    else if (iVar1 == 0x100) {
      puVar6 = (undefined *)0x47ba3d0;
    }
    else {
LAB_034052a4:
      puVar6 = (undefined *)0x0;
    }
  }
  else if (iVar1 == 0x200) {
    puVar6 = (undefined *)0x47ba7d0;
  }
  else if (iVar1 == 0x400) {
    puVar6 = (undefined *)0x47bafd0;
  }
  else {
    if (iVar1 != 0x800) goto LAB_034052a4;
    puVar6 = &DAT_047bbfd0;
  }
  iVar5 = piVar8[1] >> 1;
  if (iVar5 < 0x200) {
    if (iVar5 == 0x80) {
      puVar7 = (undefined *)0x47ba1d0;
      goto LAB_03405320;
    }
    if (iVar5 == 0x100) {
      puVar7 = (undefined *)0x47ba3d0;
      goto LAB_03405320;
    }
  }
  else {
    if (iVar5 == 0x200) {
      puVar7 = (undefined *)0x47ba7d0;
      goto LAB_03405320;
    }
    if (iVar5 == 0x400) {
      puVar7 = (undefined *)0x47bafd0;
      goto LAB_03405320;
    }
    if (iVar5 == 0x800) {
      puVar7 = &DAT_047bbfd0;
      goto LAB_03405320;
    }
  }
  puVar7 = (undefined *)0x0;
LAB_03405320:
  uVar9 = 0;
  do {
    iVar5 = (int)uVar9;
    if ((long)(int)param_4 < (long)uVar9) {
      iVar5 = iVar5 + -1;
    }
    else if (param_4 == uVar9) {
      iVar5 = *(int *)(param_1 + 0x10) + -1;
    }
    FUN_0340ae50(*piVar8,piVar8[1],*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),
                 *(undefined8 *)(*(long *)(param_1 + 0x20) + uVar9 * 8),
                 *(undefined8 *)(*(long *)(param_1 + 0x28) + uVar9 * 8),puVar6,puVar7,
                 param_2 + (long)(iVar5 * param_3) * 4,*(undefined4 *)(param_1 + 0x10),
                 *(int *)(param_1 + 0x30),*(int *)(param_1 + 0x30) + iVar2);
    uVar4 = piVar8[*(int *)(param_1 + 0x3c)];
    uVar3 = uVar4 + 3;
    if (-1 < (int)uVar4) {
      uVar3 = uVar4;
    }
    memcpy(*(void **)(*(long *)(param_1 + 0x28) + uVar9 * 8),
           (void *)(*(long *)(*(long *)(param_1 + 0x20) + uVar9 * 8) + (long)((int)uVar3 >> 2) * 4),
           (ulong)(uVar3 & 0xfffffffc));
    uVar9 = uVar9 + 1;
  } while ((long)uVar9 < (long)*(int *)(param_1 + 0x10));
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar2;
  *(undefined1 *)(param_1 + 0x48) = 1;
  return iVar2;
}


