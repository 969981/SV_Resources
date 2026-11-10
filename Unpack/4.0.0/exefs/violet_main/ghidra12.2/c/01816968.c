/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01816968; name: FUN_01816968
 */


void FUN_01816968(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined2 local_28;
  
  uVar10 = *param_1;
  lVar7 = tpidr_el0;
  if (*(long *)(lVar7 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(undefined8 *)(lVar7 + 0x30) = DAT_04859430;
  }
  uVar2 = *(undefined8 *)(lVar7 + 0x30);
  uVar3 = *(undefined8 *)(lVar7 + 0x38);
  *(undefined8 *)(lVar7 + 0x30) = uVar10;
  *(undefined2 *)(lVar7 + 0x38) = 1;
  plVar9 = (long *)param_1[3];
  param_1[3] = 0;
  local_28 = (undefined2)uVar3;
  if (plVar9 == (long *)0x0) {
    *(undefined8 *)(lVar7 + 0x30) = uVar2;
    *(undefined2 *)(lVar7 + 0x38) = local_28;
  }
  else {
    plVar1 = plVar9 + 5;
    do {
      lVar6 = *plVar1;
      iVar8 = (int)lVar6 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar6 == 0) goto LAB_01816a68;
    plVar9 = (long *)param_1[3];
    *(undefined8 *)(lVar7 + 0x30) = uVar2;
    *(undefined2 *)(lVar7 + 0x38) = local_28;
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 5;
      do {
        lVar7 = *plVar1;
        iVar8 = (int)lVar7 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 == 0) {
                    /* WARNING: Could not recover jumptable at 0x01816ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar9 + 0x10))(plVar9);
        return;
      }
      if ((int)lVar7 == 0) {
LAB_01816a68:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  return;
}


