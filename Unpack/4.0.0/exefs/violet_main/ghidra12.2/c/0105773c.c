/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0105773c; name: FUN_0105773c
 */


undefined8 FUN_0105773c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_48 [2];
  undefined8 local_38;
  
  local_60 = param_3;
  (**(code **)(*param_2 + 0x18))(local_48);
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  plVar3 = (long *)0x0;
  if (param_2 != (long *)0x0) {
    plVar3 = param_2 + 5;
  }
  puVar9 = local_48[0];
  if ((long *)local_48[0][2] == plVar3) {
    FUN_01001f40(&local_58,local_48);
    puVar9 = local_48[0];
  }
  if (puVar9 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar9 + 3);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)puVar9 + 0x1c);
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
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_38 = *puVar9;
        FUN_00c44438(lVar10 + 0x8040,&local_38);
      }
    }
    else if (sVar4 == 0) goto LAB_0105782c;
  }
  uVar8 = FUN_01057998(param_1,param_2,&local_60,param_4);
  puVar9 = local_58;
  if (local_58 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_58 + 3);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)local_58 + 0x1c);
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
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_48[0] = (undefined8 *)*puVar9;
        FUN_00c44438(lVar10 + 0x8040,local_48);
      }
    }
    else if (sVar4 == 0) {
LAB_0105782c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return uVar8;
}


