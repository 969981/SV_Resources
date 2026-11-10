/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01328808; name: FUN_01328808
 */


void FUN_01328808(undefined1 *param_1,undefined8 *param_2,byte *param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  size_t sVar8;
  long lVar9;
  byte *pbVar10;
  long *plVar11;
  code *pcVar12;
  undefined8 *puVar13;
  undefined8 *local_78 [2];
  undefined8 *local_68;
  byte *pbStack_60;
  size_t local_58;
  long *local_50;
  undefined8 local_48;
  
  pcVar12 = (code *)*param_2;
  if (param_3 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar13 = *(undefined8 **)PTR_DAT_047d3e30;
    param_3 = *(byte **)(PTR_DAT_047d3e30 + 8);
    sVar8 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    plVar11 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  else {
    puVar13 = (undefined8 *)&DAT_cbf29ce484222645;
    sVar8 = strlen((char *)param_3);
    bVar4 = *param_3;
    pbVar10 = param_3;
    while (bVar4 != 0) {
      pbVar10 = pbVar10 + 1;
      puVar13 = (undefined8 *)(((ulong)puVar13 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar10;
    }
    plVar11 = (long *)0x0;
  }
  local_68 = puVar13;
  pbStack_60 = param_3;
  local_58 = sVar8;
  local_50 = plVar11;
  (*pcVar12)(local_78,&local_68);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  local_68 = (undefined8 *)0x0;
  pbStack_60 = (byte *)0x0;
  FUN_00ca1a48(&local_68,local_78);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *param_1 = 2;
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_00ca1ea4(param_1 + 8,&local_68);
  puVar13 = local_68;
  if (local_68 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_68 + 3);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_68 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_48 = *puVar13;
        FUN_00c44438(lVar9 + 0x8040,&local_48);
      }
    }
    else if (sVar3 == 0) goto LAB_01328914;
  }
  if (local_78[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_78[0] + 3);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_78[0] + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_68 = (undefined8 *)*local_78[0];
        FUN_00c44438(lVar9 + 0x8040,&local_68);
      }
    }
    else if (sVar3 == 0) {
LAB_01328914:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


