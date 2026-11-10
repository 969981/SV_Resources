/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c709b0; name: FUN_00c709b0
 */


void FUN_00c709b0(double param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  long *plVar9;
  undefined4 uVar10;
  long *local_50;
  long *local_48;
  
  plVar1 = (long *)(param_2 + 0x200);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_2 + 0x208) == 0) {
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar6;
      *(undefined8 *)(param_2 + 0x208) = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_00c709f0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x210));
  do {
    if (*plVar1 != 0 || *(long *)(param_2 + 0x208) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x210));
        while (*plVar1 == 0 && *(long *)(param_2 + 0x208) == 0) {
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar6;
            *(undefined8 *)(param_2 + 0x208) = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00c709f0;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar6;
      *(undefined8 *)(param_2 + 0x208) = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00c709f0:
  if (*(long *)(param_2 + 0x130) != 0) {
    FUN_00c70c8c();
    uVar10 = *(undefined4 *)(param_2 + 0x220);
    lVar6 = *(long *)(param_2 + 0x130);
    if (*(char *)(param_2 + 0x224) == '\0') {
      plVar9 = *(long **)(lVar6 + 0x40);
      if (plVar9[1] != *plVar9) {
        param_1 = *(double *)(lVar6 + 0x80) + param_1;
        cVar4 = *(char *)(param_2 + 0x22c);
        *(double *)(lVar6 + 0x80) = param_1;
        if ((*(double *)(lVar6 + 0x88) <= 0.0) ||
           (param_1 = param_1 / *(double *)(lVar6 + 0x88), 1.0 <= param_1)) {
          if (plVar9[1] == *plVar9) goto LAB_00c70a6c;
          param_1 = 1.0;
        }
        FUN_00c71428(param_1,uVar10,lVar6,0,cVar4 != '\0');
      }
    }
    else {
      FUN_00c9e664(&local_50,param_2 + 0xe8);
      if (local_48 == (long *)0x0) {
        lVar7 = 0;
      }
      else {
        lVar7 = local_48[9];
      }
      plVar9 = *(long **)(lVar6 + 0x40);
      if (plVar9[1] != *plVar9) {
        param_1 = *(double *)(lVar6 + 0x80) + param_1;
        cVar4 = *(char *)(param_2 + 0x22c);
        *(double *)(lVar6 + 0x80) = param_1;
        if ((*(double *)(lVar6 + 0x88) <= 0.0) ||
           (param_1 = param_1 / *(double *)(lVar6 + 0x88), 1.0 <= param_1)) {
          if (plVar9[1] == *plVar9) goto LAB_00c70b8c;
          param_1 = 1.0;
        }
        FUN_00c71428(param_1,uVar10,lVar6,lVar7,cVar4 != '\0');
      }
LAB_00c70b8c:
      if (local_48 != (long *)0x0) {
        plVar9 = local_48 + 5;
        do {
          lVar6 = *plVar9;
          iVar5 = (int)lVar6 + -1;
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar8) {
            *(int *)plVar9 = iVar5;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*local_48 + 0x10))();
        }
        else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      if (local_50 != (long *)0x0) {
        (**(code **)(*local_50 + 0x60))();
      }
    }
  }
LAB_00c70a6c:
  do {
    lVar6 = *plVar1;
    lVar7 = *(long *)(param_2 + 0x208);
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar6;
      *(long *)(param_2 + 0x208) = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar2 = *plVar1;
    lVar3 = *(long *)(param_2 + 0x208);
    if (lVar2 != lVar6 || lVar3 != lVar7) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_00c70af4;
    }
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = 0;
      *(long *)(param_2 + 0x204) = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar8 = true;
LAB_00c70af4:
  if (!bVar8) {
    do {
      lVar6 = *plVar1;
      lVar7 = *(long *)(param_2 + 0x208);
      if (lVar6 != lVar2 || lVar7 != lVar3) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto joined_r0x00c70c24;
      }
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = 0;
        *(long *)(param_2 + 0x204) = lVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar8 = true;
joined_r0x00c70c24:
    if (!bVar8) {
      do {
        lVar2 = *plVar1;
        lVar3 = *(long *)(param_2 + 0x208);
        if (lVar2 != lVar6 || lVar3 != lVar7) {
          bVar8 = false;
          ClearExclusiveLocal();
          lVar6 = lVar2;
          lVar7 = lVar3;
          goto joined_r0x00c70c24;
        }
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = 0;
          *(long *)(param_2 + 0x204) = lVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar8 = true;
      lVar6 = lVar2;
      lVar7 = lVar3;
      goto joined_r0x00c70c24;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x210));
  return;
}


