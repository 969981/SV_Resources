/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dcd59c; name: FUN_01dcd59c
 */


undefined8
FUN_01dcd59c(long param_1,undefined8 param_2,int *param_3,int *param_4,char *param_5,char *param_6)

{
  long *plVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  long lVar11;
  bool bVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  plVar1 = (long *)(param_1 + 0x120);
  lVar6 = nn::os::GetCurrentThread();
  do {
    lVar7 = *plVar1;
    lVar11 = *(long *)(param_1 + 0x128);
    cVar2 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x128) = lVar11;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01dcd5f0:
  while ((lVar7 != 0 && (lVar6 != lVar7))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x130));
    do {
      lVar7 = *plVar1;
      lVar11 = *(long *)(param_1 + 0x128);
      cVar2 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = lVar7;
        *(long *)(param_1 + 0x128) = lVar11;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  do {
    if (*plVar1 != lVar7 || *(long *)(param_1 + 0x128) != lVar11) goto LAB_01dcd628;
    cVar2 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x124) = lVar11 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar6 = *(long *)(param_1 + 0x118);
  do {
    lVar7 = *plVar1;
    lVar11 = *(long *)(param_1 + 0x128);
    cVar2 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x128) = lVar11;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  while( true ) {
    lVar8 = *plVar1;
    lVar9 = *(long *)(param_1 + 0x128);
    if (lVar8 != lVar7 || lVar9 != lVar11) break;
    cVar2 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x124) = lVar11 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_01dcd6dc;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar7 = *plVar1;
      if (lVar7 != lVar8 || *(long *)(param_1 + 0x128) != lVar9) {
        bVar12 = false;
        ClearExclusiveLocal();
        goto LAB_01dcd6d0;
      }
      cVar2 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = lVar8;
        *(long *)(param_1 + 0x124) = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar12 = true;
LAB_01dcd6d0:
    lVar8 = lVar7;
    lVar9 = *(long *)(param_1 + 0x128);
  } while (!bVar12);
LAB_01dcd6dc:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x130));
  if (lVar6 == 0) {
    return 0;
  }
  plVar1 = (long *)(param_1 + 0x80);
  do {
    lVar6 = *plVar1;
    cVar2 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *plVar1 = lVar6;
      *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x88);
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 != lVar6) {
    lVar6 = nn::os::GetCurrentThread();
    do {
      lVar7 = *plVar1;
      lVar11 = *(long *)(param_1 + 0x88);
      cVar2 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = lVar7;
        *(long *)(param_1 + 0x88) = lVar11;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      while ((lVar7 != 0 && (lVar6 != lVar7))) {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x90));
        do {
          lVar7 = *plVar1;
          lVar11 = *(long *)(param_1 + 0x88);
          cVar2 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar12) {
            *plVar1 = lVar7;
            *(long *)(param_1 + 0x88) = lVar11;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      while( true ) {
        if (*plVar1 != lVar7 || *(long *)(param_1 + 0x88) != lVar11) break;
        cVar2 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = lVar7;
          *(long *)(param_1 + 0x84) = lVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          bVar12 = false;
          goto LAB_01dcd7a4;
        }
      }
      ClearExclusiveLocal();
      lVar7 = *plVar1;
      lVar11 = *(long *)(param_1 + 0x88);
    } while( true );
  }
  bVar12 = true;
LAB_01dcd7a4:
  puVar3 = PTR_DAT_047d38f8;
  lVar11 = *(long *)(param_1 + 0x100);
  lVar7 = *(long *)PTR_DAT_047d38f8;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 == lVar7) {
    bVar13 = true;
  }
  else {
    uVar14 = nn::os::GetCurrentThread();
    do {
      if (*(long *)puVar3 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar3 + 8));
          while (*(long *)puVar3 == 0) {
            cVar2 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar13) {
              *(undefined8 *)puVar3 = uVar14;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01dcdab0;
          }
        } while( true );
      }
      cVar2 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar13) {
        *(undefined8 *)puVar3 = uVar14;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01dcdab0:
    bVar13 = false;
  }
  uVar14 = *(undefined8 *)(lVar11 + 0x70);
  lVar6 = *(long *)(param_1 + 0x118);
  if (*(int *)(lVar6 + 0x58) < 0) {
LAB_01dcda88:
    uVar15 = 0;
  }
  else {
    lVar11 = *(long *)puVar3;
    lVar7 = nn::os::GetCurrentThread();
    if (lVar7 == lVar11) {
      bVar10 = true;
    }
    else {
      uVar15 = nn::os::GetCurrentThread();
      do {
        if (*(long *)puVar3 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(puVar3 + 8));
            while (*(long *)puVar3 == 0) {
              cVar2 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(puVar3,0x10);
              if (bVar10) {
                *(undefined8 *)puVar3 = uVar15;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_01dcdad8;
            }
          } while( true );
        }
        cVar2 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar10) {
          *(undefined8 *)puVar3 = uVar15;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_01dcdad8:
      bVar10 = false;
    }
    iVar4 = FUN_00c5fc50(uVar14,0xfff0b9d8,(long)*(int *)(lVar6 + 0x5c));
    iVar5 = *(int *)(lVar6 + 0x58);
    if (!bVar10) {
      *(undefined8 *)puVar3 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar3 + 8));
    }
    if (iVar4 == iVar5) {
      iVar5 = FUN_00c5d9a0(uVar14,0xffffffff,param_2);
      uVar15 = 0;
      if (iVar5 == 6) {
        if (*(int *)(lVar6 + 0x58) < 0) goto LAB_01dcd984;
        lVar11 = *(long *)puVar3;
        lVar7 = nn::os::GetCurrentThread();
        if (lVar7 == lVar11) {
          bVar10 = true;
        }
        else {
          uVar15 = nn::os::GetCurrentThread();
          do {
            if (*(long *)puVar3 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(puVar3 + 8));
                while (*(long *)puVar3 == 0) {
                  cVar2 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                  if (bVar10) {
                    *(undefined8 *)puVar3 = uVar15;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                  if (cVar2 == '\0') goto LAB_01dcdb24;
                }
              } while( true );
            }
            cVar2 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar10) {
              *(undefined8 *)puVar3 = uVar15;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
LAB_01dcdb24:
          bVar10 = false;
        }
        iVar4 = FUN_00c5fc50(uVar14,0xfff0b9d8,(long)*(int *)(lVar6 + 0x5c));
        iVar5 = *(int *)(lVar6 + 0x58);
        if (!bVar10) {
          *(undefined8 *)puVar3 = 0;
          nn::os::SignalLightEvent((LightEventType *)(puVar3 + 8));
        }
        if (iVar4 != iVar5) goto LAB_01dcda88;
        FUN_00c5d960(uVar14,(long)*param_3);
        FUN_00c5d960(uVar14,(long)*param_4);
        FUN_00c419e0(uVar14,*param_5 != '\0');
        FUN_00c419e0(uVar14,*param_6 != '\0');
        iVar5 = FUN_00c5d980(uVar14);
        FUN_00c5dbe0(uVar14,&LAB_01de3470,0);
        uVar15 = 1;
        FUN_00c5dcd0(uVar14,iVar5 + -5,1);
        iVar5 = FUN_00c5ddd0(uVar14,5,0,iVar5 + -5,0,0);
        if (iVar5 != 0) {
          uVar14 = FUN_00c646d0(uVar14,0xffffffff,0);
          *(undefined8 *)PTR_DAT_047d4238 = uVar14;
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("0","CallImpl",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/invoker.h"
                     ,0x89,"Lua panic: function(%s.%s) error: %s",0,param_2,uVar14);
        }
        goto LAB_01dcd984;
      }
    }
    uVar15 = 0;
  }
LAB_01dcd984:
  FUN_00c5db00(uVar14,0);
  if (!bVar13) {
    *(undefined8 *)puVar3 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar3 + 8));
  }
  if (bVar12) {
    return uVar15;
  }
  do {
    lVar6 = *plVar1;
    lVar7 = *(long *)(param_1 + 0x88);
    cVar2 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x88) = lVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  while( true ) {
    lVar11 = *plVar1;
    lVar8 = *(long *)(param_1 + 0x88);
    if (lVar11 != lVar6 || lVar8 != lVar7) break;
    cVar2 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x84) = lVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_01dcda24;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar6 = *plVar1;
      if (lVar6 != lVar11 || *(long *)(param_1 + 0x88) != lVar8) {
        bVar12 = false;
        ClearExclusiveLocal();
        goto LAB_01dcda18;
      }
      cVar2 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = lVar11;
        *(long *)(param_1 + 0x84) = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar12 = true;
LAB_01dcda18:
    lVar11 = lVar6;
    lVar8 = *(long *)(param_1 + 0x88);
  } while (!bVar12);
LAB_01dcda24:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x90));
  return uVar15;
LAB_01dcd628:
  ClearExclusiveLocal();
  lVar7 = *plVar1;
  lVar11 = *(long *)(param_1 + 0x128);
  goto LAB_01dcd5f0;
}


