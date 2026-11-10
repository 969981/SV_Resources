/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ebbb04; name: FUN_01ebbb04
 */


float FUN_01ebbb04(long *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  bool bVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  undefined8 *local_70;
  char *pcStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  
  fVar14 = 0.0;
  if ((*param_1 != 0) && (lVar13 = *(long *)(*param_1 + 0x10), lVar13 != 0)) {
    plVar8 = (long *)(lVar13 + 0xe8);
    lVar10 = *plVar8;
    lVar6 = nn::os::GetCurrentThread();
    if (lVar6 != lVar10) {
      lVar6 = nn::os::GetCurrentThread();
LAB_01ebbb50:
      if (*plVar8 == 0) goto code_r0x01ebbb58;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0xf0));
      do {
        if (*plVar8 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0xf0));
            while (*plVar8 == 0) {
              cVar4 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar11) {
                *plVar8 = lVar6;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_01ebbb60;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar11) {
          *plVar8 = lVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_01ebbb60:
      bVar11 = false;
      goto LAB_01ebbb64;
    }
    bVar11 = true;
LAB_01ebbb64:
    plVar7 = (long *)FUN_018348f0(*(undefined8 *)(lVar13 + 0x100),*(undefined8 *)(lVar13 + 0x108));
    if ((*(long **)(lVar13 + 0x108) == plVar7) || (*plVar7 == 0)) {
      plVar7 = (long *)FUN_018348f0(*(undefined8 *)(lVar13 + 0x138),*(undefined8 *)(lVar13 + 0x140))
      ;
      if (*(long **)(lVar13 + 0x140) == plVar7) {
        lVar6 = 0;
      }
      else {
        lVar6 = 0;
        if (*plVar7 != 0) {
          lVar6 = *plVar7 + -0x20;
        }
      }
    }
    else {
      lVar6 = *plVar7 + -0x20;
    }
    if (!bVar11) {
      *(undefined8 *)(lVar13 + 0xe8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0xf0));
    }
    if ((lVar6 != 0) && (FUN_00e3353c(&local_70,lVar6), local_70 != (undefined8 *)0x0)) {
      lVar10 = local_70[2];
      psVar1 = (short *)(local_70 + 3);
      lVar6 = 0;
      if (lVar10 != 0) {
        lVar6 = lVar10 + -0x28;
      }
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar11) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_70 + 0x1c);
        do {
          iVar5 = *piVar2;
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar11) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar5 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar5 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_48 = *local_70;
          FUN_00c44438(lVar12 + 0x8040,&local_48);
        }
      }
      else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
      if (lVar10 != 0) {
        lVar12 = *plVar8;
        lVar10 = nn::os::GetCurrentThread();
        if (lVar10 != lVar12) {
          lVar10 = nn::os::GetCurrentThread();
LAB_01ebbc0c:
          if (*plVar8 == 0) goto code_r0x01ebbc14;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0xf0));
          do {
            if (*plVar8 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0xf0));
                while (*plVar8 == 0) {
                  cVar4 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                  if (bVar11) {
                    *plVar8 = lVar10;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  if (cVar4 == '\0') goto LAB_01ebbc1c;
                }
              } while( true );
            }
            cVar4 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar11) {
              *plVar8 = lVar10;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
LAB_01ebbc1c:
          bVar11 = false;
          goto LAB_01ebbc20;
        }
        bVar11 = true;
LAB_01ebbc20:
        plVar8 = (long *)FUN_01834c60(*(undefined8 *)(lVar13 + 0x100),
                                      *(undefined8 *)(lVar13 + 0x108));
        if ((*(long **)(lVar13 + 0x108) == plVar8) || (*plVar8 == 0)) {
          plVar8 = (long *)FUN_01834c60(*(undefined8 *)(lVar13 + 0x138),
                                        *(undefined8 *)(lVar13 + 0x140));
          if (*(long **)(lVar13 + 0x140) == plVar8) {
            lVar10 = 0;
          }
          else {
            lVar10 = 0;
            if (*plVar8 != 0) {
              lVar10 = *plVar8 + -0x20;
            }
          }
        }
        else {
          lVar10 = *plVar8 + -0x20;
        }
        if (!bVar11) {
          *(undefined8 *)(lVar13 + 0xe8) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0xf0));
        }
        if (lVar10 != 0) {
          local_70 = (undefined8 *)0xdb3511ae502a979c;
          pcStack_68 = "0000_defaultwait01_loop";
          local_60 = 0x17;
          uStack_58 = 0;
          uVar9 = FUN_00c738f0(lVar6,&local_70,1);
          if (((uVar9 & 1) != 0) && (*(char *)(lVar10 + 0x220) != '\0')) {
            fVar14 = *(float *)(lVar10 + 0x1d4);
            lVar13 = (**(code **)(*(long *)(lVar13 + -0x28) + 0x68))((long *)(lVar13 + -0x28));
            fVar14 = fVar14 - *(float *)(lVar13 + 0x34);
          }
        }
      }
    }
  }
  return fVar14;
code_r0x01ebbb58:
  cVar4 = '\x01';
  bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar11) {
    *plVar8 = lVar6;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01ebbb60;
  goto LAB_01ebbb50;
code_r0x01ebbc14:
  cVar4 = '\x01';
  bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar11) {
    *plVar8 = lVar10;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01ebbc1c;
  goto LAB_01ebbc0c;
}


