/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a6d4a4; name: FUN_00a6d4a4
 */


undefined8
FUN_00a6d4a4(long param_1,ulong param_2,undefined8 param_3,undefined1 *param_4,long param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  bool bVar16;
  undefined8 uVar17;
  
  plVar1 = (long *)(param_1 + 0x120);
  lVar10 = nn::os::GetCurrentThread();
  do {
    lVar11 = *plVar1;
    lVar13 = *(long *)(param_1 + 0x128);
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar11;
      *(long *)(param_1 + 0x128) = lVar13;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00a6d4f4:
  while ((lVar11 != 0 && (lVar10 != lVar11))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x130));
    do {
      lVar11 = *plVar1;
      lVar13 = *(long *)(param_1 + 0x128);
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar11;
        *(long *)(param_1 + 0x128) = lVar13;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  do {
    if (*plVar1 != lVar11 || *(long *)(param_1 + 0x128) != lVar13) goto LAB_00a6d52c;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar11;
      *(long *)(param_1 + 0x124) = lVar13 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  lVar10 = *(long *)(param_1 + 0x118);
  do {
    lVar11 = *plVar1;
    lVar13 = *(long *)(param_1 + 0x128);
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar11;
      *(long *)(param_1 + 0x128) = lVar13;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while( true ) {
    lVar14 = *plVar1;
    lVar12 = *(long *)(param_1 + 0x128);
    if (lVar14 != lVar11 || lVar12 != lVar13) break;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar11;
      *(long *)(param_1 + 0x124) = lVar13 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_00a6d5e4;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar11 = *plVar1;
      if (lVar11 != lVar14 || *(long *)(param_1 + 0x128) != lVar12) {
        bVar4 = false;
        ClearExclusiveLocal();
        goto LAB_00a6d5d8;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar14;
        *(long *)(param_1 + 0x124) = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar4 = true;
LAB_00a6d5d8:
    lVar14 = lVar11;
    lVar12 = *(long *)(param_1 + 0x128);
  } while (!bVar4);
LAB_00a6d5e4:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x130));
  if (lVar10 == 0) {
    return 0;
  }
  plVar1 = (long *)(param_1 + 0x80);
  do {
    lVar10 = *plVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar10;
      *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x88);
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  lVar11 = nn::os::GetCurrentThread();
  if (lVar11 != lVar10) {
    lVar10 = nn::os::GetCurrentThread();
    do {
      lVar11 = *plVar1;
      lVar13 = *(long *)(param_1 + 0x88);
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar11;
        *(long *)(param_1 + 0x88) = lVar13;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      while ((lVar11 != 0 && (lVar10 != lVar11))) {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x90));
        do {
          lVar11 = *plVar1;
          lVar13 = *(long *)(param_1 + 0x88);
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar11;
            *(long *)(param_1 + 0x88) = lVar13;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      while( true ) {
        if (*plVar1 != lVar11 || *(long *)(param_1 + 0x88) != lVar13) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar11;
          *(long *)(param_1 + 0x84) = lVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          bVar4 = false;
          goto LAB_00a6d6ac;
        }
      }
      ClearExclusiveLocal();
      lVar11 = *plVar1;
      lVar13 = *(long *)(param_1 + 0x88);
    } while( true );
  }
  bVar4 = true;
LAB_00a6d6ac:
  puVar5 = PTR_DAT_047d38f8;
  lVar11 = *(long *)(param_1 + 0x100);
  lVar13 = *(long *)PTR_DAT_047d38f8;
  lVar10 = nn::os::GetCurrentThread();
  if (lVar10 == lVar13) {
    bVar16 = true;
  }
  else {
    uVar15 = nn::os::GetCurrentThread();
    do {
      if (*(long *)puVar5 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
          while (*(long *)puVar5 == 0) {
            cVar3 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(puVar5,0x10);
            if (bVar16) {
              *(undefined8 *)puVar5 = uVar15;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_00a6d9e4;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(puVar5,0x10);
      if (bVar16) {
        *(undefined8 *)puVar5 = uVar15;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_00a6d9e4:
    bVar16 = false;
  }
  bVar6 = (param_2 & 1) == 0;
  uVar15 = *(undefined8 *)(lVar11 + 0x70);
  plVar2 = (long *)(lVar11 + 0x80);
  if (bVar6) {
    plVar2 = (long *)(param_1 + 0x118);
  }
  lVar10 = param_1 + 0xa0;
  lVar11 = *plVar2;
  if (bVar6) {
    lVar10 = 0;
  }
  iVar9 = 2;
  if (lVar10 == 0) {
    iVar9 = 3;
  }
  if (*(int *)(lVar11 + 0x58) < 0) {
LAB_00a6d8b8:
    uVar17 = 0;
  }
  else {
    lVar14 = *(long *)puVar5;
    lVar13 = nn::os::GetCurrentThread();
    if (lVar13 == lVar14) {
      bVar6 = true;
    }
    else {
      uVar17 = nn::os::GetCurrentThread();
      do {
        if (*(long *)puVar5 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
            while (*(long *)puVar5 == 0) {
              cVar3 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar5,0x10);
              if (bVar6) {
                *(undefined8 *)puVar5 = uVar17;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_00a6da0c;
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar6) {
          *(undefined8 *)puVar5 = uVar17;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_00a6da0c:
      bVar6 = false;
    }
    iVar7 = FUN_00c5fc50(uVar15,0xfff0b9d8,(long)*(int *)(lVar11 + 0x5c));
    iVar8 = *(int *)(lVar11 + 0x58);
    if (!bVar6) {
      *(undefined8 *)puVar5 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar5 + 8));
    }
    if (iVar7 == iVar8) {
      if (lVar10 == 0) {
        iVar8 = FUN_00c5d9a0(uVar15,0xffffffff,param_3);
        uVar17 = 0;
        if ((iVar8 != 6) || (*(int *)(lVar11 + 0x58) < 0)) goto LAB_00a6d8bc;
        lVar14 = *(long *)puVar5;
        lVar13 = nn::os::GetCurrentThread();
        if (lVar13 == lVar14) {
          bVar6 = true;
        }
        else {
          uVar17 = nn::os::GetCurrentThread();
          do {
            if (*(long *)puVar5 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
                while (*(long *)puVar5 == 0) {
                  cVar3 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(puVar5,0x10);
                  if (bVar6) {
                    *(undefined8 *)puVar5 = uVar17;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                  if (cVar3 == '\0') goto LAB_00a6da5c;
                }
              } while( true );
            }
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar5,0x10);
            if (bVar6) {
              *(undefined8 *)puVar5 = uVar17;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
LAB_00a6da5c:
          bVar6 = false;
        }
        iVar7 = FUN_00c5fc50(uVar15,0xfff0b9d8,(long)*(int *)(lVar11 + 0x5c));
        iVar8 = *(int *)(lVar11 + 0x58);
        if (!bVar6) {
          *(undefined8 *)puVar5 = 0;
          nn::os::SignalLightEvent((LightEventType *)(puVar5 + 8));
        }
        if (iVar7 != iVar8) goto LAB_00a6d8b8;
      }
      else {
        iVar8 = FUN_00c5d9a0(uVar15,0xffffffff,lVar10);
        if ((iVar8 != 5) || (iVar8 = FUN_00c5d9a0(uVar15,0xffffffff,param_3), iVar8 != 6))
        goto LAB_00a6d8b8;
      }
      FUN_00c5d960(uVar15,*param_4);
      FUN_00c85bd0(uVar15,*(undefined8 *)(param_5 + 8));
      iVar8 = FUN_00c5d980(uVar15);
      FUN_00c5dbe0(uVar15,&LAB_01dec130,0);
      uVar17 = 1;
      FUN_00c5dcd0(uVar15,iVar8 - iVar9,1);
      iVar9 = FUN_00c5ddd0(uVar15,iVar9,0,iVar8 - iVar9,0,0);
      if (iVar9 != 0) {
        uVar15 = FUN_00c646d0(uVar15,0xffffffff,0);
        *(undefined8 *)PTR_DAT_047d4238 = uVar15;
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("0","CallImpl",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/invoker.h"
                   ,0x89,"Lua panic: function(%s.%s) error: %s",lVar10,param_3,uVar15);
      }
    }
    else {
      uVar17 = 0;
    }
  }
LAB_00a6d8bc:
  FUN_00c5db00(uVar15,0);
  if (!bVar16) {
    *(undefined8 *)puVar5 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar5 + 8));
  }
  if (bVar4) {
    return uVar17;
  }
  do {
    lVar10 = *plVar1;
    lVar11 = *(long *)(param_1 + 0x88);
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar10;
      *(long *)(param_1 + 0x88) = lVar11;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while( true ) {
    lVar13 = *plVar1;
    lVar14 = *(long *)(param_1 + 0x88);
    if (lVar13 != lVar10 || lVar14 != lVar11) break;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar10;
      *(long *)(param_1 + 0x84) = lVar11 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_00a6d960;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar10 = *plVar1;
      if (lVar10 != lVar13 || *(long *)(param_1 + 0x88) != lVar14) {
        bVar4 = false;
        ClearExclusiveLocal();
        goto LAB_00a6d954;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar13;
        *(long *)(param_1 + 0x84) = lVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar4 = true;
LAB_00a6d954:
    lVar13 = lVar10;
    lVar14 = *(long *)(param_1 + 0x88);
  } while (!bVar4);
LAB_00a6d960:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x90));
  return uVar17;
LAB_00a6d52c:
  ClearExclusiveLocal();
  lVar11 = *plVar1;
  lVar13 = *(long *)(param_1 + 0x128);
  goto LAB_00a6d4f4;
}


