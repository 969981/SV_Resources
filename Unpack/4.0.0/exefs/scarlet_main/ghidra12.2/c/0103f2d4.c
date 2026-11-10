/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0103f2d4; name: FUN_0103f2d4
 */


void FUN_0103f2d4(undefined8 param_1,undefined8 param_2,undefined4 param_3,long *param_4,
                 long param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  short *psVar1;
  long *plVar2;
  undefined1 uVar3;
  short sVar4;
  char cVar5;
  undefined *puVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  bool bVar17;
  short sVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  bool bVar22;
  long lVar23;
  undefined8 *puVar24;
  bool bVar25;
  undefined4 local_90;
  undefined1 local_8c [4];
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80 [4];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  long *local_68;
  
  if ((((*param_4 != 0) && (*(short *)(*param_4 + 0x1a) != 0)) && (lVar15 = *param_4, lVar15 != 0))
     && (*(short *)(lVar15 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar15 + 0x1a);
    sVar18 = *(short *)(lVar15 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar18) {
        cVar5 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar22) {
          *psVar1 = sVar18 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_0103f36c;
        bVar22 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0103f36c:
        bVar22 = false;
      }
      if (bVar22) {
        lVar15 = *(long *)(lVar15 + 0x10);
        if (lVar15 == 0) {
          return;
        }
        plVar2 = (long *)(lVar15 + 0xe8);
        lVar10 = nn::os::GetCurrentThread();
        goto LAB_0103f3b4;
      }
      sVar18 = sVar4;
    } while (sVar4 != 0);
  }
  return;
LAB_0103f52c:
  sVar4 = *psVar1;
  if (sVar4 == sVar18) {
    cVar5 = '\x01';
    bVar22 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar22) {
      *psVar1 = sVar18 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 != '\0') goto LAB_0103f550;
    bVar22 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_0103f550:
    bVar22 = false;
  }
  if (!bVar22) {
    sVar18 = sVar4;
    if (sVar4 == 0) goto LAB_0103f424;
    goto LAB_0103f52c;
  }
  lVar10 = *(long *)(lVar10 + 0x10);
  if (lVar10 == 0) goto LAB_0103f424;
  plVar2 = (long *)(lVar10 + 0x58);
  do {
    lVar23 = *plVar2;
    cVar5 = '\x01';
    bVar22 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar22) {
      *plVar2 = lVar23;
      *(undefined8 *)(lVar10 + 0x60) = *(undefined8 *)(lVar10 + 0x60);
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  lVar12 = nn::os::GetCurrentThread();
  if (lVar12 != lVar23) {
    lVar23 = nn::os::GetCurrentThread();
LAB_0103f5a0:
    if (*plVar2 == 0 && *(long *)(lVar10 + 0x60) == 0) goto code_r0x0103f5ac;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x68));
    do {
      if (*plVar2 != 0 || *(long *)(lVar10 + 0x60) != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x68));
          while (*plVar2 == 0 && *(long *)(lVar10 + 0x60) == 0) {
            cVar5 = '\x01';
            bVar22 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar22) {
              *plVar2 = lVar23;
              *(undefined8 *)(lVar10 + 0x60) = 0;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_0103f5b4;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar22) {
        *plVar2 = lVar23;
        *(undefined8 *)(lVar10 + 0x60) = 0;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_0103f5b4:
    bVar22 = false;
    goto LAB_0103f5b8;
  }
  bVar22 = true;
LAB_0103f5b8:
  FUN_00c65924((long *)(lVar10 + -0x28));
  lVar12 = param_4[10];
  lVar23 = 0;
  if (param_5 != 0) {
    lVar23 = param_5 + -0x20;
  }
  lVar23 = *(long *)(lVar23 + 0x60);
  plVar21 = (long *)0x0;
  if (lVar23 != 0) {
    if (*(short *)(lVar23 + 0x1a) == 0) {
      plVar21 = (long *)0x0;
    }
    else {
      psVar1 = (short *)(lVar23 + 0x1a);
      sVar18 = *(short *)(lVar23 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar18) {
          cVar5 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar17) {
            *psVar1 = sVar18 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_0103fb10;
          bVar17 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0103fb10:
          bVar17 = false;
        }
        if (bVar17) {
          plVar21 = (long *)0x0;
          if (*(long *)(lVar23 + 0x10) != 0) {
            plVar21 = (long *)(*(long *)(lVar23 + 0x10) + -0x28);
          }
          break;
        }
        plVar21 = (long *)0x0;
        sVar18 = sVar4;
      } while (sVar4 != 0);
    }
  }
  local_7c = (undefined4)((ulong)param_1 >> 0x20);
  local_78 = (undefined4)param_1;
  local_88 = (undefined4)((ulong)param_2 >> 0x20);
  lVar23 = param_4[5];
  local_90 = param_3;
  local_84 = local_88;
  local_74 = param_8;
  local_70 = param_7;
  uStack_6c = param_6;
  local_68 = plVar21;
  if ((lVar23 != 0) && (*(short *)(lVar23 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar23 + 0x1a);
    sVar18 = *(short *)(lVar23 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar18) {
        cVar5 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar17) {
          *psVar1 = sVar18 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_0103f8c8;
        bVar17 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0103f8c8:
        bVar17 = false;
      }
      puVar6 = PTR_DAT_047d38f8;
      if (bVar17) {
        lVar23 = *(long *)(lVar23 + 0x10);
        if (lVar23 != 0) {
          lVar19 = *(long *)PTR_DAT_047d38f8;
          lVar13 = nn::os::GetCurrentThread();
          if (lVar13 == lVar19) {
            bVar17 = true;
            goto LAB_0103f908;
          }
          uVar16 = nn::os::GetCurrentThread();
          goto LAB_0103fa94;
        }
        break;
      }
      sVar18 = sVar4;
    } while (sVar4 != 0);
  }
LAB_0103f62c:
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 0x60))(plVar21);
  }
  if (*(char *)(lVar10 + 0x128) != '\0') {
    plVar21 = *(long **)(lVar10 + 0x120);
    do {
      lVar23 = *plVar21;
      lVar12 = plVar21[1];
      cVar5 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar17) {
        *plVar21 = lVar23;
        plVar21[1] = lVar12;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      lVar13 = *plVar21;
      lVar19 = plVar21[1];
      if (lVar13 != lVar23 || lVar19 != lVar12) {
        bVar17 = false;
        ClearExclusiveLocal();
        goto LAB_0103f6dc;
      }
      cVar5 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar17) {
        *plVar21 = lVar23;
        *(long *)((long)plVar21 + 4) = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar17 = true;
LAB_0103f6dc:
    if (!bVar17) {
      do {
        lVar23 = *plVar21;
        lVar12 = plVar21[1];
        if (lVar23 != lVar13 || lVar12 != lVar19) {
          bVar17 = false;
          ClearExclusiveLocal();
          goto joined_r0x0103f80c;
        }
        cVar5 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar17) {
          *plVar21 = lVar13;
          *(long *)((long)plVar21 + 4) = lVar19 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar17 = true;
joined_r0x0103f80c:
      if (!bVar17) {
        do {
          lVar13 = *plVar21;
          lVar19 = plVar21[1];
          if (lVar13 != lVar23 || lVar19 != lVar12) {
            bVar17 = false;
            ClearExclusiveLocal();
            lVar23 = lVar13;
            lVar12 = lVar19;
            goto joined_r0x0103f80c;
          }
          cVar5 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar17) {
            *plVar21 = lVar23;
            *(long *)((long)plVar21 + 4) = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        bVar17 = true;
        lVar23 = lVar13;
        lVar12 = lVar19;
        goto joined_r0x0103f80c;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(plVar21 + 2));
  }
  *(undefined1 *)(lVar10 + 0x128) = 0;
  *(undefined8 *)(lVar10 + 0x120) = 0;
  if (*(char *)(lVar10 + 0x138) != '\0') {
    plVar21 = *(long **)(lVar10 + 0x130);
    do {
      lVar23 = *plVar21;
      lVar12 = plVar21[1];
      cVar5 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar17) {
        *plVar21 = lVar23;
        plVar21[1] = lVar12;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      lVar13 = *plVar21;
      lVar19 = plVar21[1];
      if (lVar13 != lVar23 || lVar19 != lVar12) {
        bVar17 = false;
        ClearExclusiveLocal();
        goto LAB_0103f738;
      }
      cVar5 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar17) {
        *plVar21 = 0;
        *(long *)((long)plVar21 + 4) = lVar12;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar17 = true;
LAB_0103f738:
    if (!bVar17) {
      do {
        lVar23 = *plVar21;
        lVar12 = plVar21[1];
        if (lVar23 != lVar13 || lVar12 != lVar19) {
          bVar17 = false;
          ClearExclusiveLocal();
          goto joined_r0x0103fb98;
        }
        cVar5 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar17) {
          *plVar21 = 0;
          *(long *)((long)plVar21 + 4) = lVar19;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar17 = true;
joined_r0x0103fb98:
      if (!bVar17) {
        do {
          lVar13 = *plVar21;
          lVar19 = plVar21[1];
          if (lVar13 != lVar23 || lVar19 != lVar12) {
            bVar17 = false;
            ClearExclusiveLocal();
            lVar23 = lVar13;
            lVar12 = lVar19;
            goto joined_r0x0103fb98;
          }
          cVar5 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar17) {
            *plVar21 = 0;
            *(long *)((long)plVar21 + 4) = lVar12;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        bVar17 = true;
        lVar23 = lVar13;
        lVar12 = lVar19;
        goto joined_r0x0103fb98;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(plVar21 + 2));
  }
  *(undefined8 *)(lVar10 + 0x130) = 0;
  *(undefined1 *)(lVar10 + 0x138) = 0;
  if (!bVar22) {
    do {
      lVar23 = *plVar2;
      lVar12 = *(long *)(lVar10 + 0x60);
      cVar5 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar22) {
        *plVar2 = lVar23;
        *(long *)(lVar10 + 0x60) = lVar12;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      lVar13 = *plVar2;
      lVar19 = *(long *)(lVar10 + 0x60);
      if (lVar13 != lVar23 || lVar19 != lVar12) {
        bVar22 = false;
        ClearExclusiveLocal();
        goto LAB_0103f790;
      }
      cVar5 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar22) {
        *plVar2 = 0;
        *(long *)(lVar10 + 0x5c) = lVar12;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar22 = true;
LAB_0103f790:
    if (!bVar22) {
      do {
        lVar23 = *plVar2;
        lVar12 = *(long *)(lVar10 + 0x60);
        if (lVar23 != lVar13 || lVar12 != lVar19) {
          bVar22 = false;
          ClearExclusiveLocal();
          goto joined_r0x0103fbe0;
        }
        cVar5 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar22) {
          *plVar2 = 0;
          *(long *)(lVar10 + 0x5c) = lVar19;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar22 = true;
joined_r0x0103fbe0:
      if (!bVar22) {
        do {
          lVar13 = *plVar2;
          lVar19 = *(long *)(lVar10 + 0x60);
          if (lVar13 != lVar23 || lVar19 != lVar12) {
            bVar22 = false;
            ClearExclusiveLocal();
            lVar23 = lVar13;
            lVar12 = lVar19;
            goto joined_r0x0103fbe0;
          }
          cVar5 = '\x01';
          bVar22 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar22) {
            *plVar2 = 0;
            *(long *)(lVar10 + 0x5c) = lVar12;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        bVar22 = true;
        lVar23 = lVar13;
        lVar12 = lVar19;
        goto joined_r0x0103fbe0;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0x68));
  }
  lVar23 = *(long *)(lVar10 + 8);
  psVar1 = (short *)(lVar23 + 0x1a);
  do {
    sVar18 = *psVar1;
    cVar5 = '\x01';
    bVar22 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar22) {
      *psVar1 = sVar18 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar18 == 1) {
    *(undefined8 *)(lVar23 + 0x10) = 0;
    (**(code **)(*(long *)(lVar10 + -0x28) + 0x50))();
  }
  else if (sVar18 == 0) goto LAB_0103f458;
  goto LAB_0103f424;
code_r0x0103f5ac:
  cVar5 = '\x01';
  bVar22 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar22) {
    *plVar2 = lVar23;
    *(undefined8 *)(lVar10 + 0x60) = 0;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_0103f5b4;
  goto LAB_0103f5a0;
LAB_0103fa94:
  if (*(long *)puVar6 == 0) goto code_r0x0103fa9c;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(puVar6 + 8));
  do {
    if (*(long *)puVar6 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(puVar6 + 8));
        while (*(long *)puVar6 == 0) {
          cVar5 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(puVar6,0x10);
          if (bVar17) {
            *(undefined8 *)puVar6 = uVar16;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_0103fc9c;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(puVar6,0x10);
    if (bVar17) {
      *(undefined8 *)puVar6 = uVar16;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_0103fc9c:
  bVar17 = false;
LAB_0103f908:
  uVar16 = *(undefined8 *)(lVar23 + 0x48);
  lVar13 = param_4[7];
  if (-1 < *(int *)(lVar13 + 0x58)) {
    lVar20 = *(long *)puVar6;
    lVar19 = nn::os::GetCurrentThread();
    if (lVar19 != lVar20) {
      uVar14 = nn::os::GetCurrentThread();
LAB_0103fab0:
      if (*(long *)puVar6 == 0) goto code_r0x0103fab8;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(puVar6 + 8));
      do {
        if (*(long *)puVar6 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(puVar6 + 8));
            while (*(long *)puVar6 == 0) {
              cVar5 = '\x01';
              bVar25 = (bool)ExclusiveMonitorPass(puVar6,0x10);
              if (bVar25) {
                *(undefined8 *)puVar6 = uVar14;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_0103fcc4;
            }
          } while( true );
        }
        cVar5 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(puVar6,0x10);
        if (bVar25) {
          *(undefined8 *)puVar6 = uVar14;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_0103fcc4:
      bVar25 = false;
      goto LAB_0103f938;
    }
    bVar25 = true;
LAB_0103f938:
    iVar8 = FUN_00c5fc50(uVar16,0xfff0b9d8,(long)*(int *)(lVar13 + 0x5c));
    iVar9 = *(int *)(lVar13 + 0x58);
    if (!bVar25) {
      *(undefined8 *)puVar6 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar6 + 8));
    }
    if (iVar8 == iVar9) {
      FUN_0253f2f0(uVar16,lVar12,&local_68,&uStack_6c,&local_70,&local_74,&local_78,&local_7c,
                   local_80,&local_84,&local_88,local_8c,&local_90);
      iVar9 = FUN_00c5d980(uVar16);
      FUN_00c5dbe0(uVar16,&LAB_025384e0,0);
      FUN_00c5dcd0(uVar16,iVar9 + -0xc,1);
      iVar9 = FUN_00c5ddd0(uVar16,0xc,0,iVar9 + -0xc,0,0);
      if (iVar9 != 0) {
        uVar16 = FUN_00c646d0(uVar16,0xffffffff,0);
        *(undefined8 *)PTR_DAT_047d4238 = uVar16;
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("0","CallImpl",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua/invoker.h"
                   ,0xa8,"Lua panic: function error: %s",uVar16);
      }
    }
  }
  FUN_00c5db00(uVar16,0);
  if (!bVar17) {
    *(undefined8 *)puVar6 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar6 + 8));
  }
  lVar12 = *(long *)(lVar23 + 8);
  psVar1 = (short *)(lVar12 + 0x1a);
  do {
    sVar18 = *psVar1;
    cVar5 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar17) {
      *psVar1 = sVar18 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar18 == 1) {
    *(undefined8 *)(lVar12 + 0x10) = 0;
    (**(code **)(*(long *)(lVar23 + -0x28) + 0x50))((long *)(lVar23 + -0x28));
  }
  else if (sVar18 == 0) goto LAB_0103f458;
  goto LAB_0103f62c;
code_r0x0103fa9c:
  cVar5 = '\x01';
  bVar17 = (bool)ExclusiveMonitorPass(puVar6,0x10);
  if (bVar17) {
    *(undefined8 *)puVar6 = uVar16;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_0103fc9c;
  goto LAB_0103fa94;
code_r0x0103fab8:
  cVar5 = '\x01';
  bVar25 = (bool)ExclusiveMonitorPass(puVar6,0x10);
  if (bVar25) {
    *(undefined8 *)puVar6 = uVar14;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_0103fcc4;
  goto LAB_0103fab0;
LAB_0103f3b4:
  if (*plVar2 == 0) {
    cVar5 = '\x01';
    bVar22 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar22) {
      *plVar2 = lVar10;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_0103f3c4;
    goto LAB_0103f3b4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0xf0));
  do {
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0xf0));
        while (*plVar2 == 0) {
          cVar5 = '\x01';
          bVar22 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar22) {
            *plVar2 = lVar10;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_0103f3c4;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar22 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar22) {
      *plVar2 = lVar10;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_0103f3c4:
  lVar10 = param_4[2];
  lVar23 = *(long *)(lVar15 + 0x20);
  uVar3 = *(undefined1 *)(lVar23 + lVar10 * 0x10);
  bVar7 = (*(code *)param_4[4])(param_1,param_2,param_3,lVar15 + -8,param_5,param_6,param_7,param_8)
  ;
  *(byte *)(lVar23 + lVar10 * 0x10) = bVar7 & 1;
  uVar11 = (*(code *)param_4[3])(bVar7 & 1,uVar3);
  *(undefined1 *)(lVar15 + 0x140) = 1;
  if ((((uVar11 & 1) != 0) && (lVar10 = param_4[8], lVar10 != 0)) &&
     (sVar18 = *(short *)(lVar10 + 0x1a), sVar18 != 0)) {
    puVar24 = *(undefined8 **)(lVar10 + 8);
    if (((*PTR_DAT_047d6c48 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d6c48), iVar9 != 0)) {
      uVar16 = FUN_01cd650c();
      *(undefined8 *)PTR_DAT_047d6c50 = uVar16;
      __cxa_guard_release(PTR_DAT_047d6c48);
    }
    if (puVar24 != (undefined8 *)0x0) {
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        if (puVar24 == (undefined8 *)PTR_DAT_047d6c50) goto LAB_0103f52c;
        puVar24 = (undefined8 *)*puVar24;
      } while (puVar24 != (undefined8 *)0x0);
    }
  }
LAB_0103f424:
  *(undefined8 *)(lVar15 + 0xe8) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0xf0));
  lVar10 = *(long *)(lVar15 + 8);
  psVar1 = (short *)(lVar10 + 0x1a);
  do {
    sVar18 = *psVar1;
    cVar5 = '\x01';
    bVar22 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar22) {
      *psVar1 = sVar18 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar18 == 1) {
    *(undefined8 *)(lVar10 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x0103f4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar15 + -0x28) + 0x50))();
    return;
  }
  if (sVar18 != 0) {
    return;
  }
LAB_0103f458:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
             ,0x60,"Reference counter underflows.");
}


