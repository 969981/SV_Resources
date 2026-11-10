/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01529814; name: FUN_01529814
 */


void FUN_01529814(undefined1 *param_1,long *param_2,char *param_3,byte param_4)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  ulong uVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  code *pcVar11;
  byte local_44 [4];
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 *local_30;
  undefined8 uStack_28;
  undefined8 local_8;
  
  local_44[0] = param_4 & 1;
  pcVar11 = (code *)*param_2;
  uVar5 = param_2[1];
  cVar6 = *param_3;
  if (cVar6 == '\x01') {
LAB_01529840:
    if (*(long *)(param_3 + 8) == 0) {
LAB_01529930:
      local_40 = (undefined8 *)0x0;
      uStack_38 = 0;
    }
    else {
      plVar3 = (long *)(*(long *)(param_3 + 8) + ((long)uVar5 >> 1));
      if ((uVar5 & 1) != 0) {
        pcVar11 = *(code **)(pcVar11 + *plVar3);
      }
      (*pcVar11)(&local_40,plVar3,param_4 & 1);
    }
  }
  else if (cVar6 == '\x03') {
    FUN_01529ae0(&local_40,param_3 + 8,pcVar11,uVar5,local_44);
  }
  else {
    if (cVar6 != '\x02') {
      if (cVar6 == '\0') goto LAB_01529840;
      goto LAB_01529930;
    }
    FUN_01529aa8(&local_40,param_3 + 8,pcVar11,uVar5,local_44);
  }
  local_30 = (undefined8 *)0x0;
  uStack_28 = 0;
  FUN_00ca1a48(&local_30,&local_40);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *param_1 = 2;
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_00ca1ea4(param_1 + 8,&local_30);
  puVar8 = local_30;
  if (local_30 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_30 + 3);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)local_30 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_8 = *puVar8;
        FUN_00c44438(lVar10 + 0x8040,&local_8);
      }
    }
    else if (sVar4 == 0) goto LAB_015298f4;
  }
  puVar8 = local_40;
  if (local_40 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_40 + 3);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)local_40 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_30 = (undefined8 *)*puVar8;
        FUN_00c44438(lVar10 + 0x8040,&local_30);
      }
    }
    else if (sVar4 == 0) {
LAB_015298f4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


