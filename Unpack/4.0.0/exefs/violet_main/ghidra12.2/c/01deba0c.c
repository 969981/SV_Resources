/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01deba0c; name: FUN_01deba0c
 */


void FUN_01deba0c(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  LightEventType *pLVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  bool bVar13;
  uint *puVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  bool bVar19;
  char local_70 [8];
  long *local_68;
  
  plVar1 = (long *)(param_2 + 0x120);
  lVar9 = nn::os::GetCurrentThread();
  do {
    lVar10 = *plVar1;
    lVar16 = *(long *)(param_2 + 0x128);
    cVar4 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar13) {
      *plVar1 = lVar10;
      *(long *)(param_2 + 0x128) = lVar16;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  pLVar2 = (LightEventType *)(param_2 + 0x130);
LAB_01deba58:
  while ((lVar10 != 0 && (lVar9 != lVar10))) {
    nn::os::WaitLightEvent(pLVar2);
    do {
      lVar10 = *plVar1;
      lVar16 = *(long *)(param_2 + 0x128);
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *plVar1 = lVar10;
        *(long *)(param_2 + 0x128) = lVar16;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  do {
    lVar3 = *plVar1;
    if (lVar3 != lVar10 || *(long *)(param_2 + 0x128) != lVar16) {
      bVar13 = false;
      ClearExclusiveLocal();
      goto LAB_01deba88;
    }
    cVar4 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar13) {
      *plVar1 = lVar10;
      *(long *)(param_2 + 0x124) = lVar16 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar13 = true;
LAB_01deba88:
  if (!bVar13) {
    lVar10 = lVar3;
    lVar16 = *(long *)(param_2 + 0x128);
    goto LAB_01deba58;
  }
  if (*(long *)(param_2 + 0x118) == 0) {
    *param_1 = 0;
    do {
      lVar9 = *plVar1;
      lVar10 = *(long *)(param_2 + 0x128);
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *plVar1 = lVar9;
        *(long *)(param_2 + 0x128) = lVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      lVar16 = *plVar1;
      lVar3 = *(long *)(param_2 + 0x128);
      if (lVar16 != lVar9 || lVar3 != lVar10) {
        bVar13 = false;
        ClearExclusiveLocal();
        goto joined_r0x01dec024;
      }
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *plVar1 = lVar9;
        *(long *)(param_2 + 0x124) = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar13 = true;
joined_r0x01dec024:
    do {
      if (bVar13) {
        nn::os::SignalLightEvent(pLVar2);
        return;
      }
      do {
        lVar9 = *plVar1;
        lVar10 = *(long *)(param_2 + 0x128);
        if (lVar9 != lVar16 || lVar10 != lVar3) {
          bVar13 = false;
          ClearExclusiveLocal();
          lVar16 = lVar9;
          lVar3 = lVar10;
          goto joined_r0x01dec024;
        }
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar13) {
          *plVar1 = lVar16;
          *(long *)(param_2 + 0x124) = lVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar13 = true;
      lVar16 = lVar9;
      lVar3 = lVar10;
    } while( true );
  }
  do {
    lVar9 = *plVar1;
    lVar10 = *(long *)(param_2 + 0x128);
    cVar4 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar13) {
      *plVar1 = lVar9;
      *(long *)(param_2 + 0x128) = lVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar16 = *plVar1;
    lVar3 = *(long *)(param_2 + 0x128);
    if (lVar16 != lVar9 || lVar3 != lVar10) {
      bVar13 = false;
      ClearExclusiveLocal();
      goto joined_r0x01debaec;
    }
    cVar4 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar13) {
      *plVar1 = lVar9;
      *(long *)(param_2 + 0x124) = lVar10 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar13 = true;
joined_r0x01debaec:
  if (!bVar13) {
    do {
      lVar9 = *plVar1;
      lVar10 = *(long *)(param_2 + 0x128);
      if (lVar9 != lVar16 || lVar10 != lVar3) {
        bVar13 = false;
        ClearExclusiveLocal();
        lVar16 = lVar9;
        lVar3 = lVar10;
        goto joined_r0x01debaec;
      }
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *plVar1 = lVar16;
        *(long *)(param_2 + 0x124) = lVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar13 = true;
    lVar16 = lVar9;
    lVar3 = lVar10;
    goto joined_r0x01debaec;
  }
  nn::os::SignalLightEvent(pLVar2);
  plVar1 = (long *)(param_2 + 0x80);
  do {
    lVar9 = *plVar1;
    cVar4 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar13) {
      *plVar1 = lVar9;
      *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(param_2 + 0x88);
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lVar10 = nn::os::GetCurrentThread();
  if (lVar10 == lVar9) {
    bVar13 = true;
  }
  else {
    lVar9 = nn::os::GetCurrentThread();
    do {
      lVar10 = *plVar1;
      lVar16 = *(long *)(param_2 + 0x88);
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *plVar1 = lVar10;
        *(long *)(param_2 + 0x88) = lVar16;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      while ((lVar10 != 0 && (lVar9 != lVar10))) {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x90));
        do {
          lVar10 = *plVar1;
          lVar16 = *(long *)(param_2 + 0x88);
          cVar4 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar13) {
            *plVar1 = lVar10;
            *(long *)(param_2 + 0x88) = lVar16;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      do {
        lVar3 = *plVar1;
        if (lVar3 != lVar10 || *(long *)(param_2 + 0x88) != lVar16) {
          bVar13 = false;
          ClearExclusiveLocal();
          goto LAB_01debba4;
        }
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar13) {
          *plVar1 = lVar10;
          *(long *)(param_2 + 0x84) = lVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar13 = true;
LAB_01debba4:
      lVar10 = lVar3;
      lVar16 = *(long *)(param_2 + 0x88);
    } while (!bVar13);
    bVar13 = false;
  }
  puVar6 = PTR_DAT_047d38f8;
  lVar16 = *(long *)(param_2 + 0x100);
  lVar10 = *(long *)PTR_DAT_047d38f8;
  lVar9 = nn::os::GetCurrentThread();
  if (lVar9 != lVar10) {
    uVar18 = nn::os::GetCurrentThread();
LAB_01debe68:
    if (*(long *)puVar6 == 0) goto code_r0x01debe70;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(puVar6 + 8));
    do {
      if (*(long *)puVar6 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar6 + 8));
          while (*(long *)puVar6 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar6,0x10);
            if (bVar5) {
              *(undefined8 *)puVar6 = uVar18;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_01debe78;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar5) {
        *(undefined8 *)puVar6 = uVar18;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_01debe78:
    bVar5 = false;
    goto LAB_01debbec;
  }
  bVar5 = true;
LAB_01debbec:
  uVar18 = *(undefined8 *)(lVar16 + 0x70);
  uVar17 = *(ulong *)(param_2 + 0x118);
  if (-1 < *(int *)(uVar17 + 0x58)) {
    lVar10 = *(long *)puVar6;
    lVar9 = nn::os::GetCurrentThread();
    if (lVar9 != lVar10) {
      uVar12 = nn::os::GetCurrentThread();
LAB_01debe88:
      if (*(long *)puVar6 == 0) goto code_r0x01debe90;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(puVar6 + 8));
      do {
        if (*(long *)puVar6 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(puVar6 + 8));
            while (*(long *)puVar6 == 0) {
              cVar4 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(puVar6,0x10);
              if (bVar19) {
                *(undefined8 *)puVar6 = uVar12;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_01debe98;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(puVar6,0x10);
        if (bVar19) {
          *(undefined8 *)puVar6 = uVar12;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_01debe98:
      bVar19 = false;
      goto LAB_01debc1c;
    }
    bVar19 = true;
LAB_01debc1c:
    iVar7 = FUN_00c5fc50(uVar18,0xfff0b9d8,(long)*(int *)(uVar17 + 0x5c));
    iVar8 = *(int *)(uVar17 + 0x58);
    if (!bVar19) {
      *(undefined8 *)puVar6 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar6 + 8));
    }
    if (((iVar7 == iVar8) && (iVar8 = FUN_00c5d9a0(uVar18,0xffffffff,param_3), iVar8 == 6)) &&
       (-1 < *(int *)(uVar17 + 0x58))) {
      lVar10 = *(long *)puVar6;
      lVar9 = nn::os::GetCurrentThread();
      if (lVar9 != lVar10) {
        uVar12 = nn::os::GetCurrentThread();
LAB_01debeb4:
        if (*(long *)puVar6 == 0) goto code_r0x01debebc;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(puVar6 + 8));
        do {
          if (*(long *)puVar6 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(puVar6 + 8));
              while (*(long *)puVar6 == 0) {
                cVar4 = '\x01';
                bVar19 = (bool)ExclusiveMonitorPass(puVar6,0x10);
                if (bVar19) {
                  *(undefined8 *)puVar6 = uVar12;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 == '\0') goto LAB_01debec4;
              }
            } while( true );
          }
          cVar4 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(puVar6,0x10);
          if (bVar19) {
            *(undefined8 *)puVar6 = uVar12;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
LAB_01debec4:
        bVar19 = false;
        goto LAB_01debc84;
      }
      bVar19 = true;
LAB_01debc84:
      iVar7 = FUN_00c5fc50(uVar18,0xfff0b9d8,(long)*(int *)(uVar17 + 0x5c));
      iVar8 = *(int *)(uVar17 + 0x58);
      if (!bVar19) {
        *(undefined8 *)puVar6 = 0;
        nn::os::SignalLightEvent((LightEventType *)(puVar6 + 8));
      }
      if (iVar7 == iVar8) {
        local_68 = (long *)*param_4;
        local_70[0] = '\0';
        FUN_00d601a0(uVar18,local_70);
        if ((local_70[0] == '\x01') && (local_68 != (long *)0x0)) {
          plVar11 = local_68 + 5;
          do {
            lVar9 = *plVar11;
            iVar8 = (int)lVar9 + -1;
            cVar4 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar19) {
              *(int *)plVar11 = iVar8;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar8 == 0) {
            (**(code **)(*local_68 + 0x10))();
          }
          else if ((int)lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
        iVar8 = FUN_00c5d980(uVar18);
        FUN_00c5dbe0(uVar18,&LAB_01dec130,0);
        FUN_00c5dcd0(uVar18,iVar8 + -2,1);
        iVar8 = FUN_00c5ddd0(uVar18,2,1,iVar8 + -2,0,0);
        if (iVar8 != 0) {
          uVar18 = FUN_00c646d0(uVar18,0xffffffff,0);
          *(undefined8 *)PTR_DAT_047d4238 = uVar18;
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("0","CallImpl",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/invoker.h"
                     ,0x89,"Lua panic: function(%s.%s) error: %s",0,param_3,uVar18);
        }
        plVar11 = (long *)FUN_00c41a10(uVar18);
        if ((plVar11 == (long *)0x0) || (*plVar11 == 0)) {
          uVar15 = 0x3f80000000000000;
          uVar17 = 0x3f800000;
        }
        else {
          puVar14 = *(uint **)(*plVar11 + 8);
          uVar17 = (ulong)*puVar14;
          uVar15 = (ulong)puVar14[1] << 0x20;
        }
        uVar17 = uVar17 | uVar15;
        FUN_00c5db00(uVar18,0);
        bVar19 = false;
        goto LAB_01debd88;
      }
    }
  }
  FUN_00c5db00(uVar18,0);
  bVar19 = true;
LAB_01debd88:
  if (!bVar5) {
    *(undefined8 *)puVar6 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar6 + 8));
  }
  *param_1 = 0;
  if (!bVar19) {
    *(ulong *)(param_1 + 4) = uVar17;
    *param_1 = 1;
  }
  if (!bVar13) {
    do {
      lVar9 = *plVar1;
      lVar10 = *(long *)(param_2 + 0x88);
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *plVar1 = lVar9;
        *(long *)(param_2 + 0x88) = lVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      lVar16 = *plVar1;
      lVar3 = *(long *)(param_2 + 0x88);
      if (lVar16 != lVar9 || lVar3 != lVar10) {
        bVar13 = false;
        ClearExclusiveLocal();
        goto joined_r0x01debde0;
      }
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *plVar1 = lVar9;
        *(long *)(param_2 + 0x84) = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar13 = true;
joined_r0x01debde0:
    if (!bVar13) {
      do {
        lVar9 = *plVar1;
        lVar10 = *(long *)(param_2 + 0x88);
        if (lVar9 != lVar16 || lVar10 != lVar3) {
          bVar13 = false;
          ClearExclusiveLocal();
          lVar16 = lVar9;
          lVar3 = lVar10;
          goto joined_r0x01debde0;
        }
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar13) {
          *plVar1 = lVar16;
          *(long *)(param_2 + 0x84) = lVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar13 = true;
      lVar16 = lVar9;
      lVar3 = lVar10;
      goto joined_r0x01debde0;
    }
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x90));
  }
  return;
code_r0x01debe70:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(puVar6,0x10);
  if (bVar5) {
    *(undefined8 *)puVar6 = uVar18;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01debe78;
  goto LAB_01debe68;
code_r0x01debe90:
  cVar4 = '\x01';
  bVar19 = (bool)ExclusiveMonitorPass(puVar6,0x10);
  if (bVar19) {
    *(undefined8 *)puVar6 = uVar12;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01debe98;
  goto LAB_01debe88;
code_r0x01debebc:
  cVar4 = '\x01';
  bVar19 = (bool)ExclusiveMonitorPass(puVar6,0x10);
  if (bVar19) {
    *(undefined8 *)puVar6 = uVar12;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01debec4;
  goto LAB_01debeb4;
}


