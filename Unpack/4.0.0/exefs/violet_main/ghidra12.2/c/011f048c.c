/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011f048c; name: FUN_011f048c
 */


void FUN_011f048c(double param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  size_t __n;
  long lVar6;
  long *plVar7;
  long lVar8;
  bool bVar9;
  long *plVar10;
  undefined *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  plVar10 = (long *)(param_2 + 0x200);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar10 == 0 && *(long *)(param_2 + 0x208) == 0) {
    cVar4 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar9) {
      *plVar10 = lVar6;
      *(undefined8 *)(param_2 + 0x208) = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_011f04d0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x210));
  do {
    if (*plVar10 != 0 || *(long *)(param_2 + 0x208) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x210));
        while (*plVar10 == 0 && *(long *)(param_2 + 0x208) == 0) {
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar9) {
            *plVar10 = lVar6;
            *(undefined8 *)(param_2 + 0x208) = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_011f04d0;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar9) {
      *plVar10 = lVar6;
      *(undefined8 *)(param_2 + 0x208) = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_011f04d0:
  if (*(long *)(param_2 + 0x130) != 0) {
    FUN_012921a0();
    plVar7 = *(long **)(param_2 + 0x130);
    *(undefined8 *)(param_2 + 0x130) = 0;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 5;
      do {
        lVar6 = *plVar1;
        iVar5 = (int)lVar6 + -1;
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *(int *)plVar1 = iVar5;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
      else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = PTR_DAT_047ddd98 + 0x10;
  uStack_88 = 0;
  FUN_011f075c(param_2 + 0x138,&local_90);
  FUN_011efa60(&local_90);
  do {
    lVar6 = *plVar10;
    lVar8 = *(long *)(param_2 + 0x208);
    cVar4 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar9) {
      *plVar10 = lVar6;
      *(long *)(param_2 + 0x208) = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar2 = *plVar10;
    lVar3 = *(long *)(param_2 + 0x208);
    if (lVar2 != lVar6 || lVar3 != lVar8) {
      bVar9 = false;
      ClearExclusiveLocal();
      goto LAB_011f05a0;
    }
    cVar4 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar9) {
      *plVar10 = 0;
      *(long *)(param_2 + 0x204) = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar9 = true;
LAB_011f05a0:
  if (!bVar9) {
    do {
      lVar6 = *plVar10;
      lVar8 = *(long *)(param_2 + 0x208);
      if (lVar6 != lVar2 || lVar8 != lVar3) {
        bVar9 = false;
        ClearExclusiveLocal();
        goto joined_r0x011f071c;
      }
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar9) {
        *plVar10 = 0;
        *(long *)(param_2 + 0x204) = lVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar9 = true;
joined_r0x011f071c:
    if (!bVar9) {
      do {
        lVar2 = *plVar10;
        lVar3 = *(long *)(param_2 + 0x208);
        if (lVar2 != lVar6 || lVar3 != lVar8) {
          bVar9 = false;
          ClearExclusiveLocal();
          lVar6 = lVar2;
          lVar8 = lVar3;
          goto joined_r0x011f071c;
        }
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar9) {
          *plVar10 = 0;
          *(long *)(param_2 + 0x204) = lVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar9 = true;
      lVar6 = lVar2;
      lVar8 = lVar3;
      goto joined_r0x011f071c;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x210));
  lVar6 = DAT_0485a0e8;
  plVar10 = (long *)(DAT_0485a0e8 + 0xe08);
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar4 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar9) {
      *plVar10 = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_011f05d4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0xe10));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0xe10));
        while (*plVar10 == 0) {
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar9) {
            *plVar10 = lVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_011f05d4;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar9) {
      *plVar10 = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_011f05d4:
  plVar10 = *(long **)(lVar6 + 0xdc8);
  do {
    plVar7 = plVar10;
    if (*(long **)(lVar6 + 0xdd0) == plVar7) goto LAB_011f0614;
    plVar10 = plVar7 + 1;
  } while (*plVar7 != param_2 + 0x128);
  __n = (long)*(long **)(lVar6 + 0xdd0) - (long)plVar10;
  if (__n != 0) {
    memmove(plVar7,plVar10,__n);
  }
  *(size_t *)(lVar6 + 0xdd0) = (long)plVar10 + (__n - 8);
LAB_011f0614:
  *(undefined8 *)(lVar6 + 0xe08) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0xe10));
  if (0.0 < param_1) {
    FUN_011f0af4(param_1,DAT_0485a0e8);
  }
  return;
}


