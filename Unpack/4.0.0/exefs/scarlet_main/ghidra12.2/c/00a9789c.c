/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a9789c; name: FUN_00a9789c
 */


void FUN_00a9789c(undefined1 param_1 [16],float param_2,int *param_3,long param_4,uint param_5)

{
  short *psVar1;
  long *plVar2;
  LightEventType *pLVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  short sVar11;
  long *plVar12;
  undefined8 local_c0;
  char *pcStack_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined1 *local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  undefined1 *local_80;
  char *local_78;
  undefined8 local_70;
  long *local_68;
  
  lVar9 = *(long *)(param_4 + 0x60);
  if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar9 + 0x1a);
    sVar11 = *(short *)(lVar9 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar11) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_00a97924;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00a97924:
        bVar6 = false;
      }
      if (bVar6) {
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 == 0) {
          return;
        }
        local_80 = (undefined1 *)0x5dcae9b5c318e2e6;
        local_78 = "CHARA_VELOCITY";
        local_70 = 0xe;
        local_68 = (long *)0x0;
        plVar12 = (long *)(lVar9 + -0x28);
        (**(code **)(*plVar12 + 0x138))(param_2 * 50.0,plVar12,&local_80,0);
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))();
        }
        if (param_5 < 6) {
          iVar8 = *(int *)(&DAT_03d30700 + (long)(int)param_5 * 4);
        }
        else {
          iVar8 = -1;
        }
        if (*param_3 != iVar8) {
          *param_3 = iVar8;
          local_80 = (undefined1 *)0x652c57e211600562;
          local_78 = "CHARA_EXISTENCE_FLAG";
          local_70 = 0x14;
          local_68 = (long *)0x0;
          (**(code **)(*plVar12 + 0x138))((float)iVar8,plVar12,&local_80,0);
          if (local_68 != (long *)0x0) {
            (**(code **)(*local_68 + 0x20))();
          }
        }
        lVar10 = *(long *)(param_4 + 0x80);
        if ((lVar10 == 0) || (*(short *)(lVar10 + 0x1a) == 0)) goto LAB_00a97a14;
        psVar1 = (short *)(lVar10 + 0x1a);
        sVar11 = *(short *)(lVar10 + 0x1a);
        goto LAB_00a97aa8;
      }
      sVar11 = sVar4;
    } while (sVar4 != 0);
  }
  return;
LAB_00a97aa8:
  sVar4 = *psVar1;
  if (sVar4 == sVar11) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar11 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 != '\0') goto LAB_00a97acc;
    bVar6 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_00a97acc:
    bVar6 = false;
  }
  if (bVar6) {
    lVar10 = *(long *)(lVar10 + 0x10);
    if (lVar10 != 0) {
      if (*(char *)(lVar10 + 0x148) != '\0') {
        plVar2 = (long *)(lVar10 + 0x228);
        lVar7 = nn::os::GetCurrentThread();
        do {
          if (*plVar2 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x230));
              while (*plVar2 == 0) {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar6) {
                  *plVar2 = lVar7;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 == '\0') goto LAB_00a97b10;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
LAB_00a97b10:
        if (*(char *)(lVar10 + 0x148) == '\0') {
          lVar7 = 0;
        }
        else {
          lVar7 = *(long *)(lVar10 + 0x140);
        }
        pLVar3 = (LightEventType *)(lVar10 + 0x230);
        *(undefined8 *)(lVar10 + 0x228) = 0;
        nn::os::SignalLightEvent(pLVar3);
        local_a0 = (undefined1 *)0x67f812385960e0dc;
        pcStack_98 = "SoundTag";
        local_90 = 8;
        local_88 = (long *)0x0;
        if (lVar7 == 0) {
          local_70 = 0;
          local_68 = (long *)0x0;
          local_80 = &DAT_cbf29ce484222645;
          local_78 = "";
        }
        else {
          FUN_00cee868(&local_80,lVar7,&local_a0);
          if (local_88 != (long *)0x0) {
            (**(code **)(*local_88 + 0x20))();
          }
        }
        if ((*(char *)(lVar10 + 0x1f8) != '\0') &&
           (*(float *)(lVar10 + 0xfc) < *(float *)(lVar10 + 0x1ac))) {
          lVar7 = nn::os::GetCurrentThread();
          do {
            if (*plVar2 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent(pLVar3);
                while (*plVar2 == 0) {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar6) {
                    *plVar2 = lVar7;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') goto LAB_00a97bec;
                }
              } while( true );
            }
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *plVar2 = lVar7;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
LAB_00a97bec:
          if (*(char *)(lVar10 + 0x1f8) == '\0') {
            lVar7 = 0;
          }
          else {
            lVar7 = *(long *)(lVar10 + 0x1f0);
          }
          *plVar2 = 0;
          nn::os::SignalLightEvent(pLVar3);
          local_c0 = 0x67f812385960e0dc;
          pcStack_b8 = "SoundTag";
          local_b0 = 8;
          local_a8 = (long *)0x0;
          if (lVar7 == 0) {
            local_90 = 0;
            local_88 = (long *)0x0;
            local_a0 = &DAT_cbf29ce484222645;
            pcStack_98 = "";
          }
          else {
            FUN_00cee868(&local_a0,lVar7,&local_c0);
          }
          plVar2 = local_68;
          local_68 = (long *)0x0;
          local_80 = local_a0;
          local_78 = pcStack_98;
          local_70 = local_90;
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x20))();
          }
          local_68 = local_88;
          local_88 = (long *)0x0;
          if (local_a8 != (long *)0x0) {
            (**(code **)(*local_a8 + 0x20))();
          }
        }
        if (*local_78 != '\0') {
          local_a0 = (undefined1 *)0x2759a7278919f609;
          pcStack_98 = "Materials";
          local_90 = 9;
          local_88 = (long *)0x0;
          (**(code **)(*plVar12 + 0x130))(plVar12,&local_a0,&local_80);
          if (local_88 != (long *)0x0) {
            (**(code **)(*local_88 + 0x20))();
          }
        }
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))();
        }
      }
      lVar7 = *(long *)(lVar10 + 0x70);
      psVar1 = (short *)(lVar7 + 0x1a);
      do {
        sVar11 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar11 == 1) {
        *(undefined8 *)(lVar7 + 0x10) = 0;
        (**(code **)(*(long *)(lVar10 + -0x28) + 0x50))((long *)(lVar10 + -0x28));
      }
      else if (sVar11 == 0) goto LAB_00a97a38;
    }
    goto LAB_00a97a14;
  }
  sVar11 = sVar4;
  if (sVar4 == 0) {
LAB_00a97a14:
    lVar9 = *(long *)(lVar9 + 0x70);
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar11 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar11 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))(plVar12);
      return;
    }
    if (sVar11 != 0) {
      return;
    }
LAB_00a97a38:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  goto LAB_00a97aa8;
}


