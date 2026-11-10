/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dd137c; name: FUN_01dd137c
 */


void FUN_01dd137c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  code *pcVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  char local_3c [4];
  undefined8 local_38;
  
  local_60 = (undefined8 *)0x0;
  uStack_58 = 0;
  FUN_01084328(&local_60,param_1 + 0x130);
  FUN_01dd1630(&local_60,s_FFD53A9B18B179D20_04541517,param_2);
  puVar6 = local_60;
  if (local_60 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_60 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_60 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_50 = (undefined8 *)*puVar6;
        FUN_00c44438(lVar10 + 0x8040,&local_50);
      }
    }
    else if (sVar3 == 0) goto LAB_01dd14b8;
  }
  pcVar8 = *(code **)(param_1 + 0x1928);
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x1930) = 0;
    *(undefined8 *)(param_1 + 0x1938) = 0;
    *(undefined8 *)(param_1 + 0x1920) = 0;
    *(undefined8 *)(param_1 + 0x1928) = 0;
    (*pcVar8)(param_1 + 0x1940);
  }
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,param_1 + 0x1940);
    uVar9 = param_3[3];
    *(undefined8 *)(param_1 + 0x1928) = param_3[1];
    *(undefined8 *)(param_1 + 0x1938) = uVar9;
    uVar9 = *param_3;
    *(undefined8 *)(param_1 + 0x1930) = param_3[2];
    *(undefined8 *)(param_1 + 0x1920) = uVar9;
  }
  *(undefined1 *)(param_1 + 0x2b0) = 0;
  FUN_01dcffa0(param_1);
  local_3c[0] = '\0';
  local_50 = (undefined8 *)0x0;
  uStack_48 = 0;
  FUN_01084328(&local_50,param_1 + 0x130);
  FUN_014e8d94(&local_50,s_F6C37329389CF546A_04541be5,local_3c);
  puVar6 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_50 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_50 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_38 = *puVar6;
        FUN_00c44438(lVar10 + 0x8040,&local_38);
      }
    }
    else if (sVar3 == 0) {
LAB_01dd14b8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (local_3c[0] == '\0') {
    *(undefined1 *)(param_1 + 0x2ae) = 1;
  }
  return;
}


