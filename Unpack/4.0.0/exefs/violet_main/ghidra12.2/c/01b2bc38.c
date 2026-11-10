/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b2bc38; name: FUN_01b2bc38
 */


void FUN_01b2bc38(undefined1 *param_1,undefined8 *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  char cVar7;
  bool bVar8;
  undefined8 *puVar9;
  int iVar10;
  long lVar11;
  code *local_158;
  undefined1 auStack_140 [96];
  undefined8 local_e0;
  code *local_d8;
  code *local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [104];
  undefined8 *local_58 [2];
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_158 = (code *)0x0;
  if ((code *)param_2[2] == (code *)0x0) {
    local_d0 = (code *)0x0;
    uStack_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
  }
  else {
    (*(code *)param_2[2])(param_2 + 4,auStack_140);
    uVar4 = *param_2;
    local_158 = (code *)param_2[1];
    pcVar5 = (code *)param_2[2];
    uVar6 = param_2[3];
    local_e0 = 0;
    local_d8 = (code *)0x0;
    local_d0 = (code *)0x0;
    uStack_c8 = 0;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(auStack_140,auStack_c0);
      local_e0 = uVar4;
      local_d8 = local_158;
      local_d0 = pcVar5;
      uStack_c8 = uVar6;
    }
  }
  FUN_01b2c790(local_58,&local_e0);
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  FUN_00ca1a48(&local_48,local_58);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *param_1 = 2;
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_00ca1ea4(param_1 + 8,&local_48);
  puVar9 = local_48;
  if (local_48 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_48 + 3);
    do {
      sVar3 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar3 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_48 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar8) {
          *piVar2 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_38 = *puVar9;
        FUN_00c44438(lVar11 + 0x8040,&local_38);
      }
    }
    else if (sVar3 == 0) goto LAB_01b2bd90;
  }
  if (local_58[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_58[0] + 3);
    do {
      sVar3 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar3 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_58[0] + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar8) {
          *piVar2 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_48 = (undefined8 *)*local_58[0];
        FUN_00c44438(lVar11 + 0x8040,&local_48);
      }
    }
    else if (sVar3 == 0) {
LAB_01b2bd90:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  pcVar5 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    uStack_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar5)(auStack_c0);
  }
  if (local_158 != (code *)0x0) {
    (*local_158)(auStack_140);
  }
  return;
}


