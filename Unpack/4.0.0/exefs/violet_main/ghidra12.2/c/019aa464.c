/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019aa464; name: FUN_019aa464
 */


void FUN_019aa464(undefined1 *param_1,code *param_2,ulong param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 *param_6,undefined4 *param_7)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 local_28;
  
  switch(*param_1) {
  case 0:
    FUN_022d6044(*(undefined8 *)(param_1 + 8));
    return;
  case 1:
    FUN_022d61ac(param_1 + 8);
    return;
  case 2:
    break;
  case 3:
    FUN_022d6318(param_1 + 8);
    return;
  default:
    return;
  }
  if ((*(long *)(param_1 + 8) != 0) &&
     (lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar8 != 0)) {
    plVar9 = (long *)(lVar8 + ((long)param_3 >> 1) + -0x28);
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar9);
    }
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
    FUN_00d0a34c(&local_50,param_4);
    (*param_2)(*param_6,plVar9,&local_50,param_5,*param_7);
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
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_28 = *puVar6;
          FUN_00c44438(lVar8 + 0x8040,&local_28);
        }
      }
      else if (sVar3 == 0) {
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


