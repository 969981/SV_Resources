/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dedab0; name: FUN_01dedab0
 */


void FUN_01dedab0(undefined1 *param_1,long param_2,undefined8 param_3,int *param_4)

{
  long *plVar1;
  LightEventType *pLVar2;
  long lVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  undefined8 uVar13;
  bool bVar14;
  long *plVar15;
  bool bVar16;
  long lVar17;
  undefined8 uVar18;
  long *local_68;
  
  plVar1 = (long *)(param_2 + 0x120);
  lVar10 = nn::os::GetCurrentThread();
  do {
    lVar11 = *plVar1;
    lVar17 = *(long *)(param_2 + 0x128);
    cVar5 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar14) {
      *plVar1 = lVar11;
      *(long *)(param_2 + 0x128) = lVar17;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  pLVar2 = (LightEventType *)(param_2 + 0x130);
LAB_01dedafc:
  while ((lVar11 != 0 && (lVar10 != lVar11))) {
    nn::os::WaitLightEvent(pLVar2);
    do {
      lVar11 = *plVar1;
      lVar17 = *(long *)(param_2 + 0x128);
      cVar5 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar14) {
        *plVar1 = lVar11;
        *(long *)(param_2 + 0x128) = lVar17;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  do {
    lVar3 = *plVar1;
    if (lVar3 != lVar11 || *(long *)(param_2 + 0x128) != lVar17) {
      bVar14 = false;
      ClearExclusiveLocal();
      goto LAB_01dedb2c;
    }
    cVar5 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar14) {
      *plVar1 = lVar11;
      *(long *)(param_2 + 0x124) = lVar17 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar14 = true;
LAB_01dedb2c:
  if (!bVar14) {
    lVar11 = lVar3;
    lVar17 = *(long *)(param_2 + 0x128);
    goto LAB_01dedafc;
  }
  if (*(long *)(param_2 + 0x118) == 0) {
    *param_1 = 0;
    do {
      lVar10 = *plVar1;
      lVar11 = *(long *)(param_2 + 0x128);
      cVar5 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar14) {
        *plVar1 = lVar10;
        *(long *)(param_2 + 0x128) = lVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      lVar17 = *plVar1;
      lVar3 = *(long *)(param_2 + 0x128);
      if (lVar17 != lVar10 || lVar3 != lVar11) {
        bVar14 = false;
        ClearExclusiveLocal();
        goto joined_r0x01dee104;
      }
      cVar5 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar14) {
        *plVar1 = lVar10;
        *(long *)(param_2 + 0x124) = lVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar14 = true;
joined_r0x01dee104:
    do {
      if (bVar14) {
        nn::os::SignalLightEvent(pLVar2);
        return;
      }
      do {
        lVar10 = *plVar1;
        lVar11 = *(long *)(param_2 + 0x128);
        if (lVar10 != lVar17 || lVar11 != lVar3) {
          bVar14 = false;
          ClearExclusiveLocal();
          lVar17 = lVar10;
          lVar3 = lVar11;
          goto joined_r0x01dee104;
        }
        cVar5 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar14) {
          *plVar1 = lVar17;
          *(long *)(param_2 + 0x124) = lVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar14 = true;
      lVar17 = lVar10;
      lVar3 = lVar11;
    } while( true );
  }
  do {
    lVar10 = *plVar1;
    lVar11 = *(long *)(param_2 + 0x128);
    cVar5 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar14) {
      *plVar1 = lVar10;
      *(long *)(param_2 + 0x128) = lVar11;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar17 = *plVar1;
    lVar3 = *(long *)(param_2 + 0x128);
    if (lVar17 != lVar10 || lVar3 != lVar11) {
      bVar14 = false;
      ClearExclusiveLocal();
      goto joined_r0x01dedb90;
    }
    cVar5 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar14) {
      *plVar1 = lVar10;
      *(long *)(param_2 + 0x124) = lVar11 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar14 = true;
joined_r0x01dedb90:
  if (!bVar14) {
    do {
      lVar10 = *plVar1;
      lVar11 = *(long *)(param_2 + 0x128);
      if (lVar10 != lVar17 || lVar11 != lVar3) {
        bVar14 = false;
        ClearExclusiveLocal();
        lVar17 = lVar10;
        lVar3 = lVar11;
        goto joined_r0x01dedb90;
      }
      cVar5 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar14) {
        *plVar1 = lVar17;
        *(long *)(param_2 + 0x124) = lVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar14 = true;
    lVar17 = lVar10;
    lVar3 = lVar11;
    goto joined_r0x01dedb90;
  }
  nn::os::SignalLightEvent(pLVar2);
  plVar1 = (long *)(param_2 + 0x80);
  do {
    lVar10 = *plVar1;
    cVar5 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar14) {
      *plVar1 = lVar10;
      *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(param_2 + 0x88);
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  lVar11 = nn::os::GetCurrentThread();
  if (lVar11 == lVar10) {
    bVar14 = true;
  }
  else {
    lVar10 = nn::os::GetCurrentThread();
    do {
      lVar11 = *plVar1;
      lVar17 = *(long *)(param_2 + 0x88);
      cVar5 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar14) {
        *plVar1 = lVar11;
        *(long *)(param_2 + 0x88) = lVar17;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      while ((lVar11 != 0 && (lVar10 != lVar11))) {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x90));
        do {
          lVar11 = *plVar1;
          lVar17 = *(long *)(param_2 + 0x88);
          cVar5 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar14) {
            *plVar1 = lVar11;
            *(long *)(param_2 + 0x88) = lVar17;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      do {
        lVar3 = *plVar1;
        if (lVar3 != lVar11 || *(long *)(param_2 + 0x88) != lVar17) {
          bVar14 = false;
          ClearExclusiveLocal();
          goto LAB_01dedc48;
        }
        cVar5 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar14) {
          *plVar1 = lVar11;
          *(long *)(param_2 + 0x84) = lVar17 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar14 = true;
LAB_01dedc48:
      lVar11 = lVar3;
      lVar17 = *(long *)(param_2 + 0x88);
    } while (!bVar14);
    bVar14 = false;
  }
  puVar7 = PTR_DAT_047d38f8;
  lVar11 = *(long *)(param_2 + 0x100);
  lVar17 = *(long *)PTR_DAT_047d38f8;
  lVar10 = nn::os::GetCurrentThread();
  if (lVar10 != lVar17) {
    uVar18 = nn::os::GetCurrentThread();
LAB_01dedf18:
    if (*(long *)puVar7 == 0) goto code_r0x01dedf20;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(puVar7 + 8));
    do {
      if (*(long *)puVar7 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar7 + 8));
          while (*(long *)puVar7 == 0) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar7,0x10);
            if (bVar6) {
              *(undefined8 *)puVar7 = uVar18;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_01dedf28;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar7,0x10);
      if (bVar6) {
        *(undefined8 *)puVar7 = uVar18;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_01dedf28:
    bVar6 = false;
    goto LAB_01dedc94;
  }
  bVar6 = true;
LAB_01dedc94:
  uVar18 = *(undefined8 *)(lVar11 + 0x70);
  plVar15 = *(long **)(param_2 + 0x118);
  if (-1 < (int)plVar15[0xb]) {
    lVar11 = *(long *)puVar7;
    lVar10 = nn::os::GetCurrentThread();
    if (lVar10 != lVar11) {
      uVar13 = nn::os::GetCurrentThread();
LAB_01dedf38:
      if (*(long *)puVar7 == 0) goto code_r0x01dedf40;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(puVar7 + 8));
      do {
        if (*(long *)puVar7 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(puVar7 + 8));
            while (*(long *)puVar7 == 0) {
              cVar5 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(puVar7,0x10);
              if (bVar16) {
                *(undefined8 *)puVar7 = uVar13;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_01dedf50;
            }
          } while( true );
        }
        cVar5 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar16) {
          *(undefined8 *)puVar7 = uVar13;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_01dedf50:
      bVar16 = false;
      goto LAB_01dedcc4;
    }
    bVar16 = true;
LAB_01dedcc4:
    iVar8 = FUN_00c5fc50(uVar18,0xfff0b9d8,(long)*(int *)((long)plVar15 + 0x5c));
    lVar10 = plVar15[0xb];
    if (!bVar16) {
      *(undefined8 *)puVar7 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar7 + 8));
    }
    if (((iVar8 == (int)lVar10) && (iVar8 = FUN_00c5d9a0(uVar18,0xffffffff,param_3), iVar8 == 6)) &&
       (-1 < (int)plVar15[0xb])) {
      lVar11 = *(long *)puVar7;
      lVar10 = nn::os::GetCurrentThread();
      if (lVar10 != lVar11) {
        uVar13 = nn::os::GetCurrentThread();
LAB_01dedf60:
        if (*(long *)puVar7 == 0) goto code_r0x01dedf68;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(puVar7 + 8));
        do {
          if (*(long *)puVar7 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(puVar7 + 8));
              while (*(long *)puVar7 == 0) {
                cVar5 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(puVar7,0x10);
                if (bVar16) {
                  *(undefined8 *)puVar7 = uVar13;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 == '\0') goto LAB_01dedf70;
              }
            } while( true );
          }
          cVar5 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(puVar7,0x10);
          if (bVar16) {
            *(undefined8 *)puVar7 = uVar13;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
LAB_01dedf70:
        bVar16 = false;
        goto LAB_01dedd30;
      }
      bVar16 = true;
LAB_01dedd30:
      uVar9 = FUN_00c5fc50(uVar18,0xfff0b9d8,(long)*(int *)((long)plVar15 + 0x5c));
      uVar4 = *(uint *)(plVar15 + 0xb);
      plVar15 = (long *)(ulong)uVar4;
      if (!bVar16) {
        *(undefined8 *)puVar7 = 0;
        nn::os::SignalLightEvent((LightEventType *)(puVar7 + 8));
      }
      if (uVar9 == uVar4) {
        FUN_00c5d960(uVar18,(long)*param_4);
        iVar8 = FUN_00c5d980(uVar18);
        FUN_00c5dbe0(uVar18,FUN_01dee880,0);
        FUN_00c5dcd0(uVar18,iVar8 + -2,1);
        iVar8 = FUN_00c5ddd0(uVar18,2,1,iVar8 + -2,0,0);
        pcVar12 = (char *)FUN_00c646d0(uVar18,0xffffffff,0);
        if (iVar8 != 0) {
          *(char **)PTR_DAT_047d4238 = pcVar12;
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("0","CallImpl",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/invoker.h"
                     ,0x89,"Lua panic: function(%s.%s) error: %s",0,param_3,pcVar12);
        }
        if (*pcVar12 == '\0') {
          plVar15 = (long *)FUN_00d44228();
          if (plVar15 != (long *)0x0) {
            (**(code **)(*plVar15 + 0x18))(plVar15);
          }
        }
        else {
          if (((*PTR_DAT_047d4240 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d4240);
          }
          uVar13 = *(undefined8 *)PTR_DAT_047d4248;
          *(undefined8 *)PTR_DAT_047d4250 = uVar13;
          FUN_00cf9884(&local_68,uVar13,pcVar12);
          plVar15 = local_68;
        }
        FUN_00c5db00(uVar18,0);
        bVar16 = false;
        goto LAB_01dede24;
      }
    }
  }
  FUN_00c5db00(uVar18,0);
  bVar16 = true;
LAB_01dede24:
  if (!bVar6) {
    *(undefined8 *)puVar7 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar7 + 8));
  }
  *param_1 = 0;
  if (!bVar16) {
    *(long **)(param_1 + 8) = plVar15;
    plVar15 = (long *)0x0;
    *param_1 = 1;
  }
  if (!bVar14) {
    do {
      lVar10 = *plVar1;
      lVar11 = *(long *)(param_2 + 0x88);
      cVar5 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar14) {
        *plVar1 = lVar10;
        *(long *)(param_2 + 0x88) = lVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      lVar17 = *plVar1;
      lVar3 = *(long *)(param_2 + 0x88);
      if (lVar17 != lVar10 || lVar3 != lVar11) {
        bVar14 = false;
        ClearExclusiveLocal();
        goto joined_r0x01dede80;
      }
      cVar5 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar14) {
        *plVar1 = lVar10;
        *(long *)(param_2 + 0x84) = lVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar14 = true;
joined_r0x01dede80:
    if (!bVar14) {
      do {
        lVar10 = *plVar1;
        lVar11 = *(long *)(param_2 + 0x88);
        if (lVar10 != lVar17 || lVar11 != lVar3) {
          bVar14 = false;
          ClearExclusiveLocal();
          lVar17 = lVar10;
          lVar3 = lVar11;
          goto joined_r0x01dede80;
        }
        cVar5 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar14) {
          *plVar1 = lVar17;
          *(long *)(param_2 + 0x84) = lVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar14 = true;
      lVar17 = lVar10;
      lVar3 = lVar11;
      goto joined_r0x01dede80;
    }
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x90));
  }
  if (!bVar16 && plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
  return;
code_r0x01dedf20:
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(puVar7,0x10);
  if (bVar6) {
    *(undefined8 *)puVar7 = uVar18;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_01dedf28;
  goto LAB_01dedf18;
code_r0x01dedf40:
  cVar5 = '\x01';
  bVar16 = (bool)ExclusiveMonitorPass(puVar7,0x10);
  if (bVar16) {
    *(undefined8 *)puVar7 = uVar13;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_01dedf50;
  goto LAB_01dedf38;
code_r0x01dedf68:
  cVar5 = '\x01';
  bVar16 = (bool)ExclusiveMonitorPass(puVar7,0x10);
  if (bVar16) {
    *(undefined8 *)puVar7 = uVar13;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_01dedf70;
  goto LAB_01dedf60;
}


