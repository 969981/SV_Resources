/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02759d94; name: FUN_02759d94
 */


void FUN_02759d94(long param_1,undefined8 *param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *local_40;
  long *local_38;
  
  *(undefined8 *)(param_1 + 0x38) = *param_2;
  *(undefined8 *)(param_1 + 0x40) = param_2[1];
  *(undefined8 *)(param_1 + 0x48) = param_2[2];
  plVar6 = (long *)param_2[3];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar5 = *(long **)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar6;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x58) = param_2[4];
  *(undefined8 *)(param_1 + 0x60) = param_2[5];
  *(undefined8 *)(param_1 + 0x68) = param_2[6];
  plVar6 = (long *)param_2[7];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar5 = *(long **)(param_1 + 0x70);
  *(long **)(param_1 + 0x70) = plVar6;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x78) = param_2[8];
  *(undefined8 *)(param_1 + 0x80) = param_2[9];
  *(undefined8 *)(param_1 + 0x88) = param_2[10];
  plVar6 = (long *)param_2[0xb];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar5 = *(long **)(param_1 + 0x90);
  *(long **)(param_1 + 0x90) = plVar6;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  memcpy((void *)(param_1 + 0x98),param_2 + 0xc,0x31);
  plVar6 = (long *)*param_3;
  local_38 = plVar6;
  if (plVar6 == (long *)0x0) {
    FUN_0275b0ac(param_1,&local_38);
  }
  else {
    plVar5 = plVar6 + 5;
    do {
      lVar4 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *(int *)plVar5 = (int)lVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((int)lVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    FUN_0275b0ac(param_1,&local_38);
    if (plVar6 != (long *)0x0) {
      plVar5 = plVar6 + 5;
      do {
        lVar4 = *plVar5;
        iVar3 = (int)lVar4 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *(int *)plVar5 = iVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
      else if ((int)lVar4 == 0) goto LAB_02759f90;
    }
  }
  FUN_01e3c714(&local_40,*param_3);
  FUN_0275b250(param_1,&local_40);
  if (local_40 != (long *)0x0) {
    plVar6 = local_40 + 5;
    do {
      lVar4 = *plVar6;
      iVar3 = (int)lVar4 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_40 + 0x10))();
    }
    else if ((int)lVar4 == 0) {
LAB_02759f90:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


