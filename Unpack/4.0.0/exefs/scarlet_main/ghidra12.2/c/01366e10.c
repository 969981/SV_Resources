/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01366e10; name: FUN_01366e10
 */


void FUN_01366e10(long *param_1,byte *param_2,long param_3,long param_4,ulong param_5)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  undefined *puVar4;
  long *plVar5;
  int iVar6;
  char *pcVar7;
  size_t sVar8;
  byte *pbVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  char acStack_150 [256];
  long *local_38;
  
  pcVar7 = strstr((char *)param_2,*(char **)(param_3 + 8));
  if (pcVar7 == (char *)0x0) {
    if (param_2 == (byte *)0x0) {
      if (((*PTR_DAT_047d3e28 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3e28);
      }
      puVar4 = PTR_DAT_047d3e30;
      lVar10 = *(long *)(PTR_DAT_047d3e30 + 8);
      *param_1 = *(long *)PTR_DAT_047d3e30;
      param_1[1] = lVar10;
      plVar2 = *(long **)(puVar4 + 0x18);
      param_1[2] = *(long *)(puVar4 + 0x10);
      param_1[3] = (long)plVar2;
      if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01367094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x18))();
        return;
      }
    }
    else {
      puVar12 = &DAT_cbf29ce484222645;
      sVar8 = strlen((char *)param_2);
      bVar3 = *param_2;
      pbVar9 = param_2;
      while (bVar3 != 0) {
        pbVar9 = pbVar9 + 1;
        puVar12 = (undefined1 *)(((ulong)puVar12 ^ (ulong)bVar3) * 0x100000001b3);
        bVar3 = *pbVar9;
      }
      *param_1 = (long)puVar12;
      param_1[1] = (long)param_2;
      param_1[2] = sVar8;
      param_1[3] = 0;
    }
  }
  else {
    snprintf(acStack_150,0x100,"%s",param_2);
    pcVar7 = strstr(acStack_150,*(char **)(param_3 + 8));
    if (pcVar7 != (char *)0x0) {
      if ((param_5 & 1) == 0) {
        snprintf(pcVar7,(size_t)(acStack_150 + (0x100 - (long)pcVar7)),"%s%s",
                 *(undefined8 *)(param_4 + 8),pcVar7 + *(long *)(param_3 + 0x10));
        pcVar7 = strstr(acStack_150,*(char **)(param_3 + 8));
        if (pcVar7 != (char *)0x0) {
          snprintf(pcVar7,(size_t)(acStack_150 + (0x100 - (long)pcVar7)),"%s%s",
                   *(undefined8 *)(param_4 + 8),pcVar7 + *(long *)(param_3 + 0x10));
          pcVar7 = strstr(acStack_150,*(char **)(param_3 + 8));
          while (pcVar7 != (char *)0x0) {
            snprintf(pcVar7,(size_t)(acStack_150 + (0x100 - (long)pcVar7)),"%s%s",
                     *(undefined8 *)(param_4 + 8),pcVar7 + *(long *)(param_3 + 0x10));
            pcVar7 = strstr(acStack_150,*(char **)(param_3 + 8));
          }
        }
      }
      else {
        snprintf(pcVar7,(size_t)(acStack_150 + (0x100 - (long)pcVar7)),"%s%s",
                 *(undefined8 *)(param_4 + 8),&DAT_03c886bc);
        pcVar7 = strstr(acStack_150,*(char **)(param_3 + 8));
        if (pcVar7 != (char *)0x0) {
          snprintf(pcVar7,(size_t)(acStack_150 + (0x100 - (long)pcVar7)),"%s%s",
                   *(undefined8 *)(param_4 + 8),&DAT_03c886bc);
          pcVar7 = strstr(acStack_150,*(char **)(param_3 + 8));
          while (pcVar7 != (char *)0x0) {
            snprintf(pcVar7,(size_t)(acStack_150 + (0x100 - (long)pcVar7)),"%s%s",
                     *(undefined8 *)(param_4 + 8),&DAT_03c886bc);
            pcVar7 = strstr(acStack_150,*(char **)(param_3 + 8));
          }
        }
      }
    }
    FUN_01367120(&local_38,acStack_150);
    plVar5 = local_38;
    plVar2 = (long *)PTR_DAT_047d8b70;
    if (local_38 != (long *)0x0) {
      plVar2 = local_38 + 6;
    }
    plVar1 = (long *)PTR_PTR_047d4508;
    if (local_38 != (long *)0x0) {
      plVar1 = local_38 + 7;
    }
    lVar10 = *plVar1;
    if (local_38 == (long *)0x0) {
      lVar11 = 0;
    }
    else {
      lVar11 = local_38[8];
    }
    *param_1 = *plVar2;
    param_1[1] = lVar10;
    param_1[2] = lVar11;
    param_1[3] = 0;
    if (local_38 == (long *)0x0) {
      param_1[3] = 0;
    }
    else {
      (**(code **)(*local_38 + 0x18))(local_38);
      param_1[3] = (long)plVar5;
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
      }
    }
  }
  return;
}


