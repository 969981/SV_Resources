/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01827eb0; name: FUN_01827eb0
 */


undefined8
FUN_01827eb0(long param_1,ulong param_2,undefined8 param_3,int *param_4,undefined1 *param_5,
            long param_6)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  
  plVar1 = (long *)(param_1 + 0x120);
  lVar10 = nn::os::GetCurrentThread();
  do {
    lVar11 = *plVar1;
    lVar13 = *(long *)(param_1 + 0x128);
    cVar4 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *plVar1 = lVar11;
      *(long *)(param_1 + 0x128) = lVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01827f04:
  while ((lVar11 != 0 && (lVar10 != lVar11))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x130));
    do {
      lVar11 = *plVar1;
      lVar13 = *(long *)(param_1 + 0x128);
      cVar4 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = lVar11;
        *(long *)(param_1 + 0x128) = lVar13;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  do {
    lVar14 = *plVar1;
    if (lVar14 != lVar11 || *(long *)(param_1 + 0x128) != lVar13) {
      bVar12 = false;
      ClearExclusiveLocal();
      goto LAB_01827f34;
    }
    cVar4 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *plVar1 = lVar11;
      *(long *)(param_1 + 0x124) = lVar13 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar12 = true;
LAB_01827f34:
  if (!bVar12) {
    lVar11 = lVar14;
    lVar13 = *(long *)(param_1 + 0x128);
    goto LAB_01827f04;
  }
  lVar10 = *(long *)(param_1 + 0x118);
  do {
    lVar11 = *plVar1;
    lVar13 = *(long *)(param_1 + 0x128);
    cVar4 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *plVar1 = lVar11;
      *(long *)(param_1 + 0x128) = lVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar14 = *plVar1;
    lVar3 = *(long *)(param_1 + 0x128);
    if (lVar14 != lVar11 || lVar3 != lVar13) {
      bVar12 = false;
      ClearExclusiveLocal();
      goto joined_r0x01827f98;
    }
    cVar4 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *plVar1 = lVar11;
      *(long *)(param_1 + 0x124) = lVar13 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar12 = true;
joined_r0x01827f98:
  if (!bVar12) {
    do {
      lVar11 = *plVar1;
      lVar13 = *(long *)(param_1 + 0x128);
      if (lVar11 != lVar14 || lVar13 != lVar3) {
        bVar12 = false;
        ClearExclusiveLocal();
        lVar14 = lVar11;
        lVar3 = lVar13;
        goto joined_r0x01827f98;
      }
      cVar4 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = lVar14;
        *(long *)(param_1 + 0x124) = lVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar12 = true;
    lVar14 = lVar11;
    lVar3 = lVar13;
    goto joined_r0x01827f98;
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x130));
  if (lVar10 == 0) {
    return 0;
  }
  plVar1 = (long *)(param_1 + 0x80);
  do {
    lVar10 = *plVar1;
    cVar4 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *plVar1 = lVar10;
      *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x88);
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lVar11 = nn::os::GetCurrentThread();
  if (lVar11 == lVar10) {
    bVar12 = true;
  }
  else {
    lVar10 = nn::os::GetCurrentThread();
    do {
      lVar11 = *plVar1;
      lVar13 = *(long *)(param_1 + 0x88);
      cVar4 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = lVar11;
        *(long *)(param_1 + 0x88) = lVar13;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      while ((lVar11 != 0 && (lVar10 != lVar11))) {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x90));
        do {
          lVar11 = *plVar1;
          lVar13 = *(long *)(param_1 + 0x88);
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar12) {
            *plVar1 = lVar11;
            *(long *)(param_1 + 0x88) = lVar13;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      do {
        lVar14 = *plVar1;
        if (lVar14 != lVar11 || *(long *)(param_1 + 0x88) != lVar13) {
          bVar12 = false;
          ClearExclusiveLocal();
          goto LAB_01828054;
        }
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = lVar11;
          *(long *)(param_1 + 0x84) = lVar13 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar12 = true;
LAB_01828054:
      lVar11 = lVar14;
      lVar13 = *(long *)(param_1 + 0x88);
    } while (!bVar12);
    bVar12 = false;
  }
  puVar5 = PTR_DAT_047d38f8;
  lVar11 = *(long *)(param_1 + 0x100);
  lVar13 = *(long *)PTR_DAT_047d38f8;
  lVar10 = nn::os::GetCurrentThread();
  if (lVar10 != lVar13) {
    uVar16 = nn::os::GetCurrentThread();
LAB_018282f4:
    if (*(long *)puVar5 == 0) goto code_r0x018282fc;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
    do {
      if (*(long *)puVar5 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
          while (*(long *)puVar5 == 0) {
            cVar4 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(puVar5,0x10);
            if (bVar17) {
              *(undefined8 *)puVar5 = uVar16;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_01828304;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(puVar5,0x10);
      if (bVar17) {
        *(undefined8 *)puVar5 = uVar16;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_01828304:
    bVar17 = false;
    goto LAB_01828098;
  }
  bVar17 = true;
LAB_01828098:
  bVar6 = (param_2 & 1) == 0;
  uVar16 = *(undefined8 *)(lVar11 + 0x70);
  plVar2 = (long *)(lVar11 + 0x80);
  if (bVar6) {
    plVar2 = (long *)(param_1 + 0x118);
  }
  lVar10 = *plVar2;
  iVar9 = 3;
  if (bVar6) {
    iVar9 = 4;
  }
  lVar11 = param_1 + 0xa0;
  if (bVar6) {
    lVar11 = 0;
  }
  if (*(int *)(lVar10 + 0x58) < 0) {
LAB_01828484:
    uVar15 = 0;
    goto LAB_0182820c;
  }
  lVar14 = *(long *)puVar5;
  lVar13 = nn::os::GetCurrentThread();
  if (lVar13 != lVar14) {
    uVar15 = nn::os::GetCurrentThread();
LAB_01828314:
    if (*(long *)puVar5 == 0) goto code_r0x0182831c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
    do {
      if (*(long *)puVar5 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
          while (*(long *)puVar5 == 0) {
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar5,0x10);
            if (bVar6) {
              *(undefined8 *)puVar5 = uVar15;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_01828328;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar5,0x10);
      if (bVar6) {
        *(undefined8 *)puVar5 = uVar15;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_01828328:
    bVar6 = false;
    goto LAB_018280f0;
  }
  bVar6 = true;
LAB_018280f0:
  iVar7 = FUN_00c5fc50(uVar16,0xfff0b9d8,(long)*(int *)(lVar10 + 0x5c));
  iVar8 = *(int *)(lVar10 + 0x58);
  if (!bVar6) {
    *(undefined8 *)puVar5 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar5 + 8));
  }
  if (iVar7 == iVar8) {
    if ((param_2 & 1) == 0) {
      iVar8 = FUN_00c5d9a0(uVar16,0xffffffff,param_3);
      uVar15 = 0;
      if (iVar8 != 6) goto LAB_0182844c;
      if (*(int *)(lVar10 + 0x58) < 0) goto LAB_0182820c;
      lVar14 = *(long *)puVar5;
      lVar13 = nn::os::GetCurrentThread();
      if (lVar13 != lVar14) {
        uVar15 = nn::os::GetCurrentThread();
LAB_01828344:
        if (*(long *)puVar5 == 0) goto code_r0x0182834c;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
        do {
          if (*(long *)puVar5 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
              while (*(long *)puVar5 == 0) {
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(puVar5,0x10);
                if (bVar6) {
                  *(undefined8 *)puVar5 = uVar15;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 == '\0') goto LAB_01828354;
              }
            } while( true );
          }
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar5,0x10);
          if (bVar6) {
            *(undefined8 *)puVar5 = uVar15;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
LAB_01828354:
        bVar6 = false;
        goto LAB_01828160;
      }
      bVar6 = true;
LAB_01828160:
      iVar7 = FUN_00c5fc50(uVar16,0xfff0b9d8,(long)*(int *)(lVar10 + 0x5c));
      iVar8 = *(int *)(lVar10 + 0x58);
      if (!bVar6) {
        *(undefined8 *)puVar5 = 0;
        nn::os::SignalLightEvent((LightEventType *)(puVar5 + 8));
      }
      if (iVar7 != iVar8) goto LAB_01828484;
    }
    else {
      iVar8 = FUN_00c5d9a0(uVar16,0xffffffff,lVar11);
      if (iVar8 != 5) goto LAB_0182844c;
      iVar8 = FUN_00c5d9a0(uVar16,0xffffffff,param_3);
      if (iVar8 != 6) goto LAB_01828484;
    }
    FUN_00c5d960(uVar16,(long)*param_4);
    FUN_00c5d960(uVar16,*param_5);
    FUN_00c85bd0(uVar16,*(undefined8 *)(param_6 + 8));
    iVar8 = FUN_00c5d980(uVar16);
    FUN_00c5dbe0(uVar16,&LAB_01dec130,0);
    uVar15 = 1;
    FUN_00c5dcd0(uVar16,iVar8 - iVar9,1);
    iVar9 = FUN_00c5ddd0(uVar16,iVar9,0,iVar8 - iVar9,0,0);
    if (iVar9 != 0) {
      uVar16 = FUN_00c646d0(uVar16,0xffffffff,0);
      *(undefined8 *)PTR_DAT_047d4238 = uVar16;
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("0","CallImpl",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/invoker.h"
                 ,0x89,"Lua panic: function(%s.%s) error: %s",lVar11,param_3,uVar16);
    }
  }
  else {
LAB_0182844c:
    uVar15 = 0;
  }
LAB_0182820c:
  FUN_00c5db00(uVar16,0);
  if (!bVar17) {
    *(undefined8 *)puVar5 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar5 + 8));
  }
  if (!bVar12) {
    do {
      lVar10 = *plVar1;
      lVar11 = *(long *)(param_1 + 0x88);
      cVar4 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = lVar10;
        *(long *)(param_1 + 0x88) = lVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      lVar13 = *plVar1;
      lVar14 = *(long *)(param_1 + 0x88);
      if (lVar13 != lVar10 || lVar14 != lVar11) {
        bVar12 = false;
        ClearExclusiveLocal();
        goto joined_r0x01828260;
      }
      cVar4 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = lVar10;
        *(long *)(param_1 + 0x84) = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar12 = true;
joined_r0x01828260:
    if (!bVar12) {
      do {
        lVar10 = *plVar1;
        lVar11 = *(long *)(param_1 + 0x88);
        if (lVar10 != lVar13 || lVar11 != lVar14) {
          bVar12 = false;
          ClearExclusiveLocal();
          lVar13 = lVar10;
          lVar14 = lVar11;
          goto joined_r0x01828260;
        }
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = lVar13;
          *(long *)(param_1 + 0x84) = lVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar12 = true;
      lVar13 = lVar10;
      lVar14 = lVar11;
      goto joined_r0x01828260;
    }
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x90));
  }
  return uVar15;
code_r0x018282fc:
  cVar4 = '\x01';
  bVar17 = (bool)ExclusiveMonitorPass(puVar5,0x10);
  if (bVar17) {
    *(undefined8 *)puVar5 = uVar16;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01828304;
  goto LAB_018282f4;
code_r0x0182831c:
  cVar4 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(puVar5,0x10);
  if (bVar6) {
    *(undefined8 *)puVar5 = uVar15;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01828328;
  goto LAB_01828314;
code_r0x0182834c:
  cVar4 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(puVar5,0x10);
  if (bVar6) {
    *(undefined8 *)puVar5 = uVar15;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01828354;
  goto LAB_01828344;
}


