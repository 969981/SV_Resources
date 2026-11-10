/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00da2ea0; name: FUN_00da2ea0
 */


void FUN_00da2ea0(undefined8 *param_1,undefined8 param_2,long *param_3,byte param_4)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 *local_40 [2];
  undefined8 local_18;
  
  FUN_00da3348();
  *param_1 = &DAT_045ec5d0;
  param_1[0x6c] = 0;
  param_1[4] = &PTR_LAB_045ec680;
  param_1[5] = &DAT_045ec6d0;
  param_1[0x6d] = 0;
  *(undefined4 *)(param_1 + 0x6e) = 1;
  *(byte *)((long)param_1 + 0x374) = param_4 & 1;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x20))(local_40,param_3);
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
    puVar8 = local_40[0];
    if ((long *)local_40[0][2] == param_3 + 1) {
      FUN_00d30d98(&local_50,local_40);
      puVar8 = local_40[0];
    }
    if (puVar8 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar8 + 3);
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
        piVar2 = (int *)((long)puVar8 + 0x1c);
        do {
          iVar6 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar7 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar7;
          local_18 = *puVar8;
          FUN_00c44438(lVar7 + 0x8040,&local_18);
        }
      }
      else if (sVar3 == 0) goto LAB_00da2fa0;
    }
    FUN_00dd9f00(param_1 + 0x6c,&local_50);
    puVar8 = local_50;
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
          iVar6 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar7 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar7;
          local_40[0] = (undefined8 *)*puVar8;
          FUN_00c44438(lVar7 + 0x8040,local_40);
        }
      }
      else if (sVar3 == 0) {
LAB_00da2fa0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return;
}


