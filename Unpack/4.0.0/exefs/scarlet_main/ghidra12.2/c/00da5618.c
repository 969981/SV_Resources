/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00da5618; name: FUN_00da5618
 */


void FUN_00da5618(char *param_1,long param_2,int *param_3,undefined8 param_4)

{
  uint *puVar1;
  long *plVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  size_t sVar8;
  ushort *puVar9;
  byte *pbVar10;
  char *pcVar11;
  long lVar12;
  undefined1 *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 *local_80;
  char *pcStack_78;
  size_t local_70;
  long *plStack_68;
  
  if ((*(ushort *)((long)param_3 - (long)*param_3) < 5) ||
     (uVar14 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[2], uVar14 == 0)) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_80 = *(undefined1 **)PTR_DAT_047d3e30;
    pcStack_78 = *(char **)(PTR_DAT_047d3e30 + 8);
    local_70 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    plVar2 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    plStack_68 = plVar2;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
      piVar6 = (int *)FUN_00da58b8(param_4,&local_80);
      (**(code **)(*plVar2 + 0x20))(plVar2);
      goto LAB_00da56d4;
    }
  }
  else {
    puVar1 = (uint *)((long)param_3 + uVar14);
    uVar15 = (ulong)*puVar1;
    pcVar11 = (char *)((long)puVar1 + uVar15 + 4);
    puVar13 = &DAT_cbf29ce484222645;
    local_70 = strlen(pcVar11);
    bVar3 = *(byte *)((long)puVar1 + uVar15 + 4);
    if (bVar3 != 0) {
      pbVar10 = (byte *)((long)param_3 + uVar15 + uVar14 + 5);
      do {
        puVar13 = (undefined1 *)(((ulong)puVar13 ^ (ulong)bVar3) * 0x100000001b3);
        bVar3 = *pbVar10;
        pbVar10 = pbVar10 + 1;
      } while (bVar3 != 0);
    }
    plStack_68 = (long *)0x0;
    local_80 = puVar13;
    pcStack_78 = pcVar11;
  }
  piVar6 = (int *)FUN_00da58b8(param_4,&local_80);
LAB_00da56d4:
  puVar9 = (ushort *)((long)param_3 - (long)*param_3);
  uVar4 = *puVar9;
  if (piVar6 == (int *)0x0) {
    if (uVar4 < 5) {
      lVar12 = 0;
      pcVar11 = (char *)0x4;
    }
    else {
      lVar12 = 0;
      if ((ulong)puVar9[2] != 0) {
        puVar1 = (uint *)((long)param_3 + (ulong)puVar9[2]);
        lVar12 = (long)puVar1 + (ulong)*puVar1;
      }
      pcVar11 = (char *)(lVar12 + 4);
      if ((uVar4 < 7) || ((ulong)puVar9[3] == 0)) {
        lVar12 = 0;
      }
      else {
        puVar1 = (uint *)((long)param_3 + (ulong)puVar9[3]);
        lVar12 = (long)puVar1 + (ulong)*puVar1;
      }
    }
    *param_1 = '\0';
    pcVar7 = strcat(param_1,*(char **)(param_2 + 8));
    sVar8 = strlen(pcVar7);
    (param_1 + sVar8)[0] = '/';
    (param_1 + sVar8)[1] = '\0';
  }
  else {
    if (uVar4 < 5) {
      lVar12 = 0;
    }
    else {
      lVar12 = 0;
      if ((ulong)puVar9[2] != 0) {
        puVar1 = (uint *)((long)param_3 + (ulong)puVar9[2]);
        lVar12 = (long)puVar1 + (ulong)*puVar1;
      }
    }
    pcVar11 = (char *)(lVar12 + 4);
    if ((*(ushort *)((long)piVar6 - (long)*piVar6) < 7) ||
       (uVar14 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[3], uVar14 == 0)) {
      lVar12 = 0;
    }
    else {
      puVar1 = (uint *)((long)piVar6 + uVar14);
      lVar12 = (long)puVar1 + (ulong)*puVar1;
    }
    *param_1 = '\0';
    pcVar7 = strcat(param_1,*(char **)(param_2 + 8));
    sVar8 = strlen(pcVar7);
    (param_1 + sVar8)[0] = '/';
    (param_1 + sVar8)[1] = '\0';
  }
  strcat(param_1,pcVar11);
  sVar8 = strlen(param_1);
  (param_1 + sVar8)[0] = '/';
  (param_1 + sVar8)[1] = '\0';
  pcVar11 = (char *)0x0;
  if (lVar12 != 0) {
    pcVar11 = (char *)(lVar12 + 4);
  }
  strcat(param_1,pcVar11);
  return;
}


