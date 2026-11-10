/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c88d48; name: FUN_00c88d48
 */


void FUN_00c88d48(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  bool bVar9;
  ulong uVar10;
  long *local_38;
  
  plVar1 = (long *)(param_1 + 0x180);
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x188) == 0) {
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar8;
      *(undefined8 *)(param_1 + 0x188) = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_00c88d80;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 400));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x188) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 400));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x188) == 0) {
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = lVar8;
            *(undefined8 *)(param_1 + 0x188) = 0;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_00c88d80;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar8;
      *(undefined8 *)(param_1 + 0x188) = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_00c88d80:
  if (*(char *)(param_1 + 0x175) != '\0') {
    FUN_00c89f1c(param_1);
    *(undefined2 *)(param_1 + 0x175) = 0x100;
    *(undefined1 *)(param_1 + 0x177) = 1;
  }
  (*DAT_04859f60)(&local_38,&DAT_04859f80);
  uVar10 = local_38[0x22];
  if (local_38 != (long *)0x0) {
    plVar2 = local_38 + 5;
    do {
      lVar8 = *plVar2;
      iVar7 = (int)lVar8 + -1;
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar9) {
        *(int *)plVar2 = iVar7;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_00c88f98;
  }
  if (*(char *)(param_1 + (uVar10 & 1) + 0x176) == '\0') {
    if (*(char *)(param_1 + 0x178) != '\0') goto LAB_00c88edc;
  }
  else {
    FUN_00c88fc0(param_1);
    (*DAT_04859f60)(&local_38,&DAT_04859f80);
    uVar10 = local_38[0x22];
    if (local_38 != (long *)0x0) {
      plVar2 = local_38 + 5;
      do {
        lVar8 = *plVar2;
        iVar7 = (int)lVar8 + -1;
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar9) {
          *(int *)plVar2 = iVar7;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
      else if ((int)lVar8 == 0) {
LAB_00c88f98:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    *(undefined1 *)(param_1 + (uVar10 & 1) + 0x176) = 0;
    *(undefined1 *)(param_1 + 0x178) = 1;
LAB_00c88edc:
    FUN_00c892b0(param_1);
    *(undefined1 *)(param_1 + 0x178) = 0;
  }
  do {
    lVar8 = *plVar1;
    lVar5 = *(long *)(param_1 + 0x188);
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x188) = lVar5;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  do {
    lVar3 = *plVar1;
    lVar4 = *(long *)(param_1 + 0x188);
    if (lVar3 != lVar8 || lVar4 != lVar5) {
      bVar9 = false;
      ClearExclusiveLocal();
      goto LAB_00c88e68;
    }
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x184) = lVar5;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar9 = true;
LAB_00c88e68:
  if (!bVar9) {
    do {
      lVar8 = *plVar1;
      lVar5 = *(long *)(param_1 + 0x188);
      if (lVar8 != lVar3 || lVar5 != lVar4) {
        bVar9 = false;
        ClearExclusiveLocal();
        goto joined_r0x00c88f58;
      }
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x184) = lVar4;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar9 = true;
joined_r0x00c88f58:
    if (!bVar9) {
      do {
        lVar3 = *plVar1;
        lVar4 = *(long *)(param_1 + 0x188);
        if (lVar3 != lVar8 || lVar4 != lVar5) {
          bVar9 = false;
          ClearExclusiveLocal();
          lVar8 = lVar3;
          lVar5 = lVar4;
          goto joined_r0x00c88f58;
        }
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x184) = lVar5;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar9 = true;
      lVar8 = lVar3;
      lVar5 = lVar4;
      goto joined_r0x00c88f58;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 400));
  return;
}


