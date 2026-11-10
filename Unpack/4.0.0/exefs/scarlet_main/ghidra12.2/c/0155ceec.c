/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0155ceec; name: FUN_0155ceec
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0155ceec(long *param_1,undefined8 *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined4 uVar8;
  ulong uVar9;
  code *pcVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  undefined8 uVar16;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  long *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  *(undefined1 *)((long)param_1 + 0x411) = 0;
  switch((int)param_1[0x67]) {
  case 1:
    local_80 = &local_48;
    local_48 = 0;
    local_60 = 0;
    uStack_58 = 0;
    lVar7 = FUN_010932d4(param_1 + 5);
    if ((lVar7 != 0) && (local_48 == 0)) {
      local_48 = lVar7;
    }
    plVar11 = (long *)param_1[0xf];
    if (plVar11 != (long *)0x0) {
      lVar7 = plVar11[6];
      if (*(long *)(lVar7 + 0x10) == 0) {
LAB_0155dfd8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar7 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 0) {
        uVar16 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
        *(undefined8 *)(lVar7 + 8) = uVar16;
        *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) goto LAB_0155e020;
      lVar7 = plVar11[6];
      psVar1 = (short *)(lVar7 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar7 + 0x10) = 0;
        (**(code **)(*plVar11 + 0x50))(plVar11);
      }
      else if (sVar2 == 0) goto LAB_0155dff8;
      plVar11 = (long *)param_1[0xf];
      if (plVar11 == (long *)0x0) {
        FUN_012a6d5c(0,&local_80);
      }
      else {
        lVar7 = plVar11[6];
        if (*(long *)(lVar7 + 0x10) == 0) goto LAB_0155dfd8;
        psVar1 = (short *)(lVar7 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 0) {
          uVar16 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
          *(undefined8 *)(lVar7 + 8) = uVar16;
          *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
        }
        else if (sVar2 == -1) {
LAB_0155e020:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
        FUN_012a6d5c(plVar11,&local_80);
        lVar7 = plVar11[6];
        psVar1 = (short *)(lVar7 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar7 + 0x10) = 0;
          (**(code **)(*plVar11 + 0x50))(plVar11);
        }
        else if (sVar2 == 0) {
LAB_0155dff8:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
    lVar13 = local_48;
    lVar7 = param_1[0x60];
    iVar6 = 0xfa;
    lVar14 = param_1[0x61];
    *(undefined4 *)(param_1 + 0x7a) = 0xfa;
    while (lVar7 != lVar14) {
      local_80 = *(long **)(lVar13 + 0x520);
      uStack_78 = *(undefined8 *)(lVar13 + 0x528);
      plVar11 = (long *)param_1[0x19];
      local_70 = *(undefined8 *)(lVar13 + 0x530);
      local_68 = *(long **)(lVar13 + 0x538);
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x18))();
      }
      iVar5 = (**(code **)(*plVar11 + 0x108))(plVar11,&local_80,*(undefined8 *)(lVar7 + 0x20));
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      lVar7 = lVar7 + 0x50;
      iVar6 = (int)param_1[0x7a];
      if ((int)param_1[0x7a] <= iVar5) {
        iVar6 = iVar5;
      }
      *(int *)(param_1 + 0x7a) = iVar6;
    }
    if (*(char *)((long)param_1 + 0x344) != '\0') {
      iVar6 = (int)param_1[0x68];
      *(int *)(param_1 + 0x7a) = iVar6;
    }
    local_60 = CONCAT44((int)((ulong)local_60 >> 0x20),(float)iVar6);
    local_80 = *(long **)(lVar13 + 0x88);
    uStack_78 = *(undefined8 *)(lVar13 + 0x90);
    plVar11 = (long *)param_1[0x19];
    local_70 = *(undefined8 *)(lVar13 + 0x98);
    local_68 = *(long **)(lVar13 + 0xa0);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x18))();
    }
    uVar16 = (**(code **)(*plVar11 + 0x60))(plVar11,&local_80);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    iVar5 = (int)((ulong)(param_1[0x61] - param_1[0x60]) >> 4) * -0x33333333;
    iVar6 = *(int *)(param_1[0x7b] + 0x7b0);
    if (iVar5 <= *(int *)(param_1[0x7b] + 0x7b0)) {
      iVar6 = iVar5;
    }
    local_60._0_4_ = (float)local_60 + (float)_DAT_03caab00;
    local_60._4_4_ =
         (float)iVar6 * (float)((ulong)uVar16 >> 0x20) + 0.0 + (float)((ulong)_DAT_03caab00 >> 0x20)
    ;
    uStack_58 = CONCAT44((float)((ulong)uStack_58 >> 0x20) + (float)((ulong)_UNK_03caab08 >> 0x20),
                         (float)uStack_58 + (float)_UNK_03caab08);
    (**(code **)(*(long *)param_1[0x19] + 0x58))((long *)param_1[0x19],param_1 + 0x26,&local_60);
    local_60 = CONCAT44(local_60._4_4_,(float)uVar16 + 100.0);
    (**(code **)(*(long *)param_1[0x19] + 0x60))((long *)param_1[0x19],param_1 + 0x2a);
    local_80 = (long *)CONCAT44(extraout_var,(float)local_60);
    uStack_78 = extraout_var_00;
    (**(code **)(*(long *)param_1[0x19] + 0x58))((long *)param_1[0x19],param_1 + 0x2a,&local_80);
    iVar6 = (int)param_1[0x21];
    if (iVar6 == 4) {
      iVar6 = FUN_0155e1a8(param_1);
    }
    plVar11 = param_1 + 0x22;
    uVar9 = (**(code **)(*(long *)param_1[0x19] + 0x60))((long *)param_1[0x19],param_1 + 0x26);
    (**(code **)(*(long *)param_1[0x19] + 0x88))((long *)param_1[0x19],param_1 + 0x46);
    if (iVar6 == 0) {
      local_80 = (long *)CONCAT44((int)(uVar9 >> 0x20),-(float)uVar9);
      uStack_78 = 0;
      (**(code **)(*(long *)param_1[0x19] + 0x28))((long *)param_1[0x19],plVar11,&local_80);
      plVar11 = (long *)param_1[0x19];
      uVar16 = 0x40400000;
    }
    else if (iVar6 == 3) {
      local_80 = (long *)0x0;
      uStack_78 = 0;
      (**(code **)(*(long *)param_1[0x19] + 0x28))((long *)param_1[0x19],plVar11,&local_80);
      plVar11 = (long *)param_1[0x19];
      uVar16 = 0;
    }
    else if (iVar6 == 1) {
      local_80 = (long *)(uVar9 & 0xffffffff00000000);
      uStack_78 = 0;
      (**(code **)(*(long *)param_1[0x19] + 0x28))((long *)param_1[0x19],plVar11,&local_80);
      plVar11 = (long *)param_1[0x19];
      uVar16 = 0x40000000;
    }
    else {
      if (iVar6 != 2) goto LAB_0155d5f4;
      local_80 = (long *)(ulong)(uint)-(float)uVar9;
      uStack_78 = 0;
      (**(code **)(*(long *)param_1[0x19] + 0x28))((long *)param_1[0x19],plVar11,&local_80);
      plVar11 = (long *)param_1[0x19];
      uVar16 = 0x3f800000;
    }
    (**(code **)(*plVar11 + 0xa8))(uVar16,plVar11,param_1 + 0x46);
LAB_0155d5f4:
    FUN_0155e550(param_1[0x7b],(int)((ulong)(param_1[0x61] - param_1[0x60]) >> 4) * -0x33333333);
    lVar13 = param_1[0x7b];
    plVar11 = (long *)(lVar13 + 0xf0);
    uVar8 = *(undefined4 *)((long)param_1 + 0x40c);
    lVar7 = nn::os::GetCurrentThread();
    while (*plVar11 == 0) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = lVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB_0155d634;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0xf8));
    do {
      if (*plVar11 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0xf8));
          while (*plVar11 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *plVar11 = lVar7;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_0155d634;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = lVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_0155d634:
    *(undefined4 *)(lVar13 + 0x990) = uVar8;
    *(undefined1 *)(lVar13 + 0xb15) = 0;
    *(undefined8 *)(lVar13 + 0xf0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0xf8));
    lVar13 = param_1[0x7b];
    plVar11 = (long *)(lVar13 + 0xf0);
    uVar8 = *(undefined4 *)((long)param_1 + 0x40c);
    lVar7 = nn::os::GetCurrentThread();
    while (*plVar11 == 0) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = lVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB_0155d670;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0xf8));
    do {
      if (*plVar11 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0xf8));
          while (*plVar11 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *plVar11 = lVar7;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_0155d670;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = lVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_0155d670:
    *(undefined4 *)(lVar13 + 0x994) = uVar8;
    *(undefined8 *)(lVar13 + 0xf0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0xf8));
    FUN_0155ed54(param_1[0x7b],1);
    lVar7 = param_1[0x7b];
    *(long *)(lVar7 + 0x60) = param_1[8];
    plVar11 = *(long **)(lVar7 + 0x78);
    local_80 = param_1;
    if (plVar11 != (long *)0x0) {
      lVar13 = plVar11[6];
      if (*(long *)(lVar13 + 0x10) == 0) goto LAB_0155dfd8;
      psVar1 = (short *)(lVar13 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 0) {
        uVar16 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
        *(undefined8 *)(lVar13 + 8) = uVar16;
        *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) goto LAB_0155e020;
      lVar13 = plVar11[6];
      psVar1 = (short *)(lVar13 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar13 + 0x10) = 0;
        (**(code **)(*plVar11 + 0x50))(plVar11);
      }
      else if (sVar2 == 0) goto LAB_0155dff8;
      plVar11 = *(long **)(lVar7 + 0x78);
      if (plVar11 == (long *)0x0) {
        FUN_0133d64c(0,&local_80);
      }
      else {
        lVar7 = plVar11[6];
        if (*(long *)(lVar7 + 0x10) == 0) goto LAB_0155dfd8;
        psVar1 = (short *)(lVar7 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 0) {
          uVar16 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
          *(undefined8 *)(lVar7 + 8) = uVar16;
          *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
        }
        else if (sVar2 == -1) goto LAB_0155e020;
        FUN_0133d64c(plVar11,&local_80);
        lVar7 = plVar11[6];
        psVar1 = (short *)(lVar7 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar7 + 0x10) = 0;
          (**(code **)(*plVar11 + 0x50))(plVar11);
        }
        else if (sVar2 == 0) goto LAB_0155dff8;
      }
    }
    FUN_0155e22c(param_1[0x7b],*(undefined4 *)((long)param_1 + 0x40c),0);
    plVar12 = (long *)param_1[0x7b];
    plVar11 = plVar12 + 0x1b;
    lVar7 = nn::os::GetCurrentThread();
    while (*plVar11 == 0) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = lVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB_0155d794;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(plVar12 + 0x1c));
    do {
      if (*plVar11 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(plVar12 + 0x1c));
          while (*plVar11 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *plVar11 = lVar7;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_0155d794;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = lVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_0155d794:
    if (*(char *)((long)plVar12 + 0x82) != '\0') {
      *(undefined1 *)((long)plVar12 + 0x82) = 0;
      (**(code **)(*plVar12 + 0xd8))(plVar12,0);
    }
    plVar12[0x1b] = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar12 + 0x1c));
    if (*(char *)param_1[0x4b] != '\0') {
      (**(code **)(*(long *)param_1[0x19] + 0x88))((long *)param_1[0x19],param_1 + 0x4a);
    }
    if (*(char *)param_1[0x3f] != '\0') {
      (**(code **)(*(long *)param_1[0x19] + 0xa8))(0,(long *)param_1[0x19],param_1 + 0x3e);
    }
    *(undefined4 *)(param_1 + 0x67) = 2;
    goto LAB_0155d7f8;
  case 2:
    uVar9 = param_1[0x1a];
    if (((~(uint)uVar9 & 0xf) == 0) != ((uVar9 & 0xe) == 0xe)) {
      (**(code **)(*param_1 + 0xe0))(param_1,(uVar9 & 0xe) == 0xe);
      uVar9 = param_1[0x1a];
    }
    param_1[0x1a] = uVar9 | 1;
    if (*(char *)param_1[0x3f] == '\0') {
      uVar8 = 4;
    }
    else {
      (**(code **)(*(long *)param_1[0x19] + 0x88))((long *)param_1[0x19],param_1 + 0x3e);
      uVar8 = 3;
    }
    break;
  case 3:
    uVar9 = (**(code **)(*(long *)param_1[0x19] + 0x98))((long *)param_1[0x19],param_1 + 0x3e);
    if ((uVar9 & 1) == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x67) = 4;
  case 4:
    *(undefined4 *)(param_1 + 0x67) = 5;
    (**(code **)(*(long *)param_1[0x7b] + 0x88))();
    lVar7 = param_1[0x7b];
    pcVar10 = *(code **)(lVar7 + 0x2d8);
    if (pcVar10 != (code *)0x0) {
      *(undefined8 *)(lVar7 + 0x2e8) = 0;
      *(undefined8 *)(lVar7 + 0x2e0) = 0;
      *(undefined8 *)(lVar7 + 0x2d8) = 0;
      *(undefined8 *)(lVar7 + 0x2d0) = 0;
      (*pcVar10)(lVar7 + 0x2f0);
    }
    *(undefined1 **)(lVar7 + 0x2d0) = &LAB_02b30278;
    *(undefined1 **)(lVar7 + 0x2d8) = &LAB_02b3069c;
    *(undefined1 **)(lVar7 + 0x2e0) = &LAB_02b306a0;
    *(long **)(lVar7 + 0x2f0) = param_1;
    *(undefined1 **)(lVar7 + 0x2e8) = &LAB_02b306ac;
    plVar12 = (long *)param_1[0x7b];
    plVar11 = plVar12 + 0x1b;
    lVar7 = nn::os::GetCurrentThread();
LAB_0155d138:
    if (*plVar11 == 0) goto code_r0x0155d140;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(plVar12 + 0x1c));
    do {
      if (*plVar11 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(plVar12 + 0x1c));
          while (*plVar11 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *plVar11 = lVar7;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_0155d148;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = lVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_0155d148:
    if (*(char *)((long)plVar12 + 0x82) != '\x01') {
      *(undefined1 *)((long)plVar12 + 0x82) = 1;
      (**(code **)(*plVar12 + 0xd8))(plVar12,1);
    }
    plVar12[0x1b] = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar12 + 0x1c));
    lVar7 = param_1[0x7c];
    pcVar10 = *(code **)(lVar7 + 0x1e8);
    if (pcVar10 != (code *)0x0) {
      *(undefined8 *)(lVar7 + 0x1f0) = 0;
      *(undefined8 *)(lVar7 + 0x1f8) = 0;
      *(undefined8 *)(lVar7 + 0x1e0) = 0;
      *(undefined8 *)(lVar7 + 0x1e8) = 0;
      (*pcVar10)(lVar7 + 0x200);
    }
    *(undefined1 **)(lVar7 + 0x1e0) = &LAB_02b306b8;
    *(undefined1 **)(lVar7 + 0x1e8) = &LAB_02b306c8;
    *(undefined1 **)(lVar7 + 0x1f0) = &LAB_02b306cc;
    *(undefined1 **)(lVar7 + 0x1f8) = &LAB_02b306d8;
    *(long **)(lVar7 + 0x200) = param_1;
    *(undefined1 *)(lVar7 + 300) = 1;
    FUN_0155e048(param_1,1);
    plVar12 = (long *)param_1[0x7c];
    plVar11 = plVar12 + 0x1b;
    lVar7 = nn::os::GetCurrentThread();
    while (*plVar11 == 0) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = lVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB_0155d1e0;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(plVar12 + 0x1c));
    do {
      if (*plVar11 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(plVar12 + 0x1c));
          while (*plVar11 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *plVar11 = lVar7;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_0155d1e0;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = lVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_0155d1e0:
    if (*(char *)((long)plVar12 + 0x82) != '\x01') {
      *(undefined1 *)((long)plVar12 + 0x82) = 1;
      (**(code **)(*plVar12 + 0xd8))(plVar12,1);
    }
    plVar12[0x1b] = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar12 + 0x1c));
    goto switchD_0155cf48_caseD_5;
  case 5:
switchD_0155cf48_caseD_5:
    if (*(char *)((long)param_1 + 0x345) == '\0') {
      if (*(char *)((long)param_1 + 0x33c) == '\0') {
        return;
      }
      lVar7 = param_1[0x7c];
      *(undefined1 *)((long)param_1 + 0x33c) = 0;
      *(undefined1 *)((long)param_1 + 0x81) = 1;
      pcVar10 = *(code **)(lVar7 + 0x1e8);
      if (pcVar10 != (code *)0x0) {
        *(undefined8 *)(lVar7 + 0x1f0) = 0;
        *(undefined8 *)(lVar7 + 0x1f8) = 0;
        *(undefined8 *)(lVar7 + 0x1e0) = 0;
        *(undefined8 *)(lVar7 + 0x1e8) = 0;
        (*pcVar10)(lVar7 + 0x200);
      }
      *(undefined1 *)(lVar7 + 300) = 1;
      *(undefined1 **)(lVar7 + 0x1e0) = &LAB_02b306e4;
      *(undefined1 **)(lVar7 + 0x1e8) = &LAB_02b306e8;
      *(undefined1 **)(lVar7 + 0x1f0) = &LAB_02b306ec;
      *(undefined1 **)(lVar7 + 0x1f8) = &LAB_02b306f0;
      plVar12 = (long *)param_1[0x7c];
      plVar11 = plVar12 + 0x1b;
      lVar7 = nn::os::GetCurrentThread();
      while (*plVar11 == 0) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = lVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') goto LAB_0155cfd0;
      }
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(plVar12 + 0x1c));
      do {
        if (*plVar11 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar12 + 0x1c));
            while (*plVar11 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar4) {
                *plVar11 = lVar7;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_0155cfd0;
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = lVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_0155cfd0:
      if (*(char *)((long)plVar12 + 0x82) != '\0') {
        *(undefined1 *)((long)plVar12 + 0x82) = 0;
        (**(code **)(*plVar12 + 0xd8))(plVar12,0);
      }
      plVar12[0x1b] = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar12 + 0x1c));
      lVar7 = param_1[0x7b];
      pcVar10 = *(code **)(lVar7 + 0x2d8);
      if (pcVar10 != (code *)0x0) {
        *(undefined8 *)(lVar7 + 0x2e8) = 0;
        *(undefined8 *)(lVar7 + 0x2e0) = 0;
        *(undefined8 *)(lVar7 + 0x2d8) = 0;
        *(undefined8 *)(lVar7 + 0x2d0) = 0;
        (*pcVar10)(lVar7 + 0x2f0);
      }
      *(undefined1 **)(lVar7 + 0x2d0) = &LAB_02b306f4;
      *(undefined1 **)(lVar7 + 0x2d8) = &LAB_02b3073c;
      *(undefined1 **)(lVar7 + 0x2e0) = &LAB_02b30740;
      *(undefined1 **)(lVar7 + 0x2e8) = &LAB_02b30744;
      plVar12 = (long *)param_1[0x7b];
      plVar11 = plVar12 + 0x1b;
      lVar7 = nn::os::GetCurrentThread();
      while (*plVar11 == 0) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = lVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') goto LAB_0155d05c;
      }
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(plVar12 + 0x1c));
      do {
        if (*plVar11 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar12 + 0x1c));
            while (*plVar11 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar4) {
                *plVar11 = lVar7;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_0155d05c;
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = lVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_0155d05c:
      if (*(char *)((long)plVar12 + 0x82) != '\0') {
        *(undefined1 *)((long)plVar12 + 0x82) = 0;
        (**(code **)(*plVar12 + 0xd8))(plVar12,0);
      }
      plVar12[0x1b] = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar12 + 0x1c));
      *(undefined4 *)(param_1 + 0x67) = 6;
      FUN_01560aa4(param_1[0x7b]);
      return;
    }
    *(undefined1 *)((long)param_1 + 0x345) = 0;
    FUN_0155e22c(param_1[0x7b],(int)((ulong)(param_1[0x61] - param_1[0x60]) >> 4) * -0x33333333 + -1
                 ,0);
    *(undefined4 *)(param_1 + 0x81) = 0;
    uVar8 = 9;
    break;
  case 6:
    FUN_0155e048(param_1,0);
    if (*(char *)param_1[0x43] == '\0') goto LAB_0155d218;
    (**(code **)(*(long *)param_1[0x19] + 0x88))((long *)param_1[0x19],param_1 + 0x42);
    uVar8 = 7;
    break;
  case 7:
    uVar9 = (**(code **)(*(long *)param_1[0x19] + 0x98))((long *)param_1[0x19],param_1 + 0x42);
    if ((uVar9 & 1) == 0) {
      return;
    }
LAB_0155d218:
    uVar8 = 8;
    break;
  case 8:
    *(undefined1 *)((long)param_1 + 0x81) = 0;
    FUN_01560aa4(param_1);
    *(undefined1 *)(param_1 + 0x82) = 1;
    *(undefined1 *)((long)param_1 + 0x85) = 1;
    if (param_1[0x4e] != 0) {
      FUN_01561490(&local_80,param_1);
      (*(code *)param_1[0x4e])(param_1 + 0x52,&local_80);
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
    }
    uVar9 = param_1[0x1a];
    if ((~(uint)uVar9 & 0xf) == 0) {
      (**(code **)(*param_1 + 0xe0))(param_1,0);
      uVar9 = param_1[0x1a];
    }
    param_1[0x1a] = uVar9 & 0xfffffffffffffffe;
    *(undefined1 *)((long)param_1 + 0x344) = 0;
    *(undefined4 *)(param_1 + 0x67) = 0;
LAB_0155d7f8:
    if (((*PTR_DAT_047dd000 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047dd000), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047dd018,PTR_DAT_047dd008,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047dd000);
    }
    *(undefined8 *)PTR_DAT_047dd010 = *(undefined8 *)PTR_DAT_047dd008;
    return;
  case 9:
    lVar7 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
    fVar15 = *(float *)(param_1 + 0x81) + (float)((double)*(long *)(lVar7 + 8) / 1000000000.0);
    *(float *)(param_1 + 0x81) = fVar15;
    if (0.1 <= fVar15) {
      *(undefined1 *)((long)param_1 + 0x81) = 1;
      lVar7 = param_1[0x7c];
      pcVar10 = *(code **)(lVar7 + 0x1e8);
      if (pcVar10 != (code *)0x0) {
        *(undefined8 *)(lVar7 + 0x1f0) = 0;
        *(undefined8 *)(lVar7 + 0x1f8) = 0;
        *(undefined8 *)(lVar7 + 0x1e0) = 0;
        *(undefined8 *)(lVar7 + 0x1e8) = 0;
        (*pcVar10)(lVar7 + 0x200);
      }
      *(undefined1 **)(lVar7 + 0x1e0) = &LAB_02b306e4;
      *(undefined1 **)(lVar7 + 0x1e8) = &LAB_02b306e8;
      *(undefined1 **)(lVar7 + 0x1f0) = &LAB_02b306ec;
      *(undefined1 **)(lVar7 + 0x1f8) = &LAB_02b306f0;
      *(undefined1 *)(lVar7 + 300) = 1;
      plVar12 = (long *)param_1[0x7c];
      plVar11 = plVar12 + 0x1b;
      lVar7 = nn::os::GetCurrentThread();
LAB_0155da60:
      if (*plVar11 == 0) goto code_r0x0155da68;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(plVar12 + 0x1c));
      do {
        if (*plVar11 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar12 + 0x1c));
            while (*plVar11 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar4) {
                *plVar11 = lVar7;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_0155da70;
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = lVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_0155da70:
      if (*(char *)((long)plVar12 + 0x82) != '\0') {
        *(undefined1 *)((long)plVar12 + 0x82) = 0;
        (**(code **)(*plVar12 + 0xd8))(plVar12,0);
      }
      plVar12[0x1b] = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar12 + 0x1c));
      lVar7 = param_1[0x7b];
      pcVar10 = *(code **)(lVar7 + 0x2d8);
      if (pcVar10 != (code *)0x0) {
        *(undefined8 *)(lVar7 + 0x2e8) = 0;
        *(undefined8 *)(lVar7 + 0x2e0) = 0;
        *(undefined8 *)(lVar7 + 0x2d8) = 0;
        *(undefined8 *)(lVar7 + 0x2d0) = 0;
        (*pcVar10)(lVar7 + 0x2f0);
      }
      *(undefined1 **)(lVar7 + 0x2d0) = &LAB_02b306f4;
      *(undefined1 **)(lVar7 + 0x2d8) = &LAB_02b3073c;
      *(undefined1 **)(lVar7 + 0x2e0) = &LAB_02b30740;
      *(undefined1 **)(lVar7 + 0x2e8) = &LAB_02b30744;
      plVar12 = (long *)param_1[0x7b];
      plVar11 = plVar12 + 0x1b;
      lVar7 = nn::os::GetCurrentThread();
      while (*plVar11 == 0) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = lVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') goto LAB_0155dafc;
      }
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(plVar12 + 0x1c));
      do {
        if (*plVar11 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar12 + 0x1c));
            while (*plVar11 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar4) {
                *plVar11 = lVar7;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_0155dafc;
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = lVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_0155dafc:
      if (*(char *)((long)plVar12 + 0x82) != '\0') {
        *(undefined1 *)((long)plVar12 + 0x82) = 0;
        (**(code **)(*plVar12 + 0xd8))(plVar12,0);
      }
      plVar12[0x1b] = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar12 + 0x1c));
      uVar8 = 6;
      break;
    }
  default:
    goto switchD_0155cf48_default;
  }
  *(undefined4 *)(param_1 + 0x67) = uVar8;
switchD_0155cf48_default:
  return;
code_r0x0155da68:
  cVar3 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
  if (bVar4) {
    *plVar11 = lVar7;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_0155da70;
  goto LAB_0155da60;
code_r0x0155d140:
  cVar3 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
  if (bVar4) {
    *plVar11 = lVar7;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_0155d148;
  goto LAB_0155d138;
}


