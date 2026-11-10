/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017bfc18; name: FUN_017bfc18
 */


undefined8 FUN_017bfc18(long param_1,ulong param_2,undefined8 param_3,undefined8 *param_4)

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
  bool bVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  char local_70 [8];
  long *local_68;
  
  plVar1 = (long *)(param_1 + 0x120);
  lVar10 = nn::os::GetCurrentThread();
  do {
    lVar11 = *plVar1;
    lVar14 = *(long *)(param_1 + 0x128);
    cVar4 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *plVar1 = lVar11;
      *(long *)(param_1 + 0x128) = lVar14;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_017bfc64:
  while ((lVar11 != 0 && (lVar10 != lVar11))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x130));
    do {
      lVar11 = *plVar1;
      lVar14 = *(long *)(param_1 + 0x128);
      cVar4 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = lVar11;
        *(long *)(param_1 + 0x128) = lVar14;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  do {
    lVar16 = *plVar1;
    if (lVar16 != lVar11 || *(long *)(param_1 + 0x128) != lVar14) {
      bVar12 = false;
      ClearExclusiveLocal();
      goto LAB_017bfc94;
    }
    cVar4 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *plVar1 = lVar11;
      *(long *)(param_1 + 0x124) = lVar14 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar12 = true;
LAB_017bfc94:
  if (!bVar12) {
    lVar11 = lVar16;
    lVar14 = *(long *)(param_1 + 0x128);
    goto LAB_017bfc64;
  }
  lVar10 = *(long *)(param_1 + 0x118);
  do {
    lVar11 = *plVar1;
    lVar14 = *(long *)(param_1 + 0x128);
    cVar4 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *plVar1 = lVar11;
      *(long *)(param_1 + 0x128) = lVar14;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar16 = *plVar1;
    lVar3 = *(long *)(param_1 + 0x128);
    if (lVar16 != lVar11 || lVar3 != lVar14) {
      bVar12 = false;
      ClearExclusiveLocal();
      goto joined_r0x017bfcf8;
    }
    cVar4 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *plVar1 = lVar11;
      *(long *)(param_1 + 0x124) = lVar14 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar12 = true;
joined_r0x017bfcf8:
  if (!bVar12) {
    do {
      lVar11 = *plVar1;
      lVar14 = *(long *)(param_1 + 0x128);
      if (lVar11 != lVar16 || lVar14 != lVar3) {
        bVar12 = false;
        ClearExclusiveLocal();
        lVar16 = lVar11;
        lVar3 = lVar14;
        goto joined_r0x017bfcf8;
      }
      cVar4 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = lVar16;
        *(long *)(param_1 + 0x124) = lVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar12 = true;
    lVar16 = lVar11;
    lVar3 = lVar14;
    goto joined_r0x017bfcf8;
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
      lVar14 = *(long *)(param_1 + 0x88);
      cVar4 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = lVar11;
        *(long *)(param_1 + 0x88) = lVar14;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      while ((lVar11 != 0 && (lVar10 != lVar11))) {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x90));
        do {
          lVar11 = *plVar1;
          lVar14 = *(long *)(param_1 + 0x88);
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar12) {
            *plVar1 = lVar11;
            *(long *)(param_1 + 0x88) = lVar14;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      do {
        lVar16 = *plVar1;
        if (lVar16 != lVar11 || *(long *)(param_1 + 0x88) != lVar14) {
          bVar12 = false;
          ClearExclusiveLocal();
          goto LAB_017bfdb4;
        }
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = lVar11;
          *(long *)(param_1 + 0x84) = lVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar12 = true;
LAB_017bfdb4:
      lVar11 = lVar16;
      lVar14 = *(long *)(param_1 + 0x88);
    } while (!bVar12);
    bVar12 = false;
  }
  puVar5 = PTR_DAT_047d38f8;
  lVar11 = *(long *)(param_1 + 0x100);
  lVar14 = *(long *)PTR_DAT_047d38f8;
  lVar10 = nn::os::GetCurrentThread();
  bVar13 = true;
  if (lVar10 != lVar14) {
    uVar15 = nn::os::GetCurrentThread();
LAB_017c0060:
    if (*(long *)puVar5 == 0) goto code_r0x017c0068;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
    do {
      if (*(long *)puVar5 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
          while (*(long *)puVar5 == 0) {
            cVar4 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(puVar5,0x10);
            if (bVar13) {
              *(undefined8 *)puVar5 = uVar15;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              bVar13 = false;
              goto LAB_017bfdfc;
            }
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar5,0x10);
      if (bVar13) {
        *(undefined8 *)puVar5 = uVar15;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar13 = false;
  }
LAB_017bfdfc:
  bVar6 = (param_2 & 1) == 0;
  plVar2 = (long *)(lVar11 + 0x80);
  if (bVar6) {
    plVar2 = (long *)(param_1 + 0x118);
  }
  uVar15 = *(undefined8 *)(lVar11 + 0x70);
  lVar11 = *plVar2;
  lVar10 = param_1 + 0xa0;
  if (bVar6) {
    lVar10 = 0;
  }
  iVar9 = 1;
  if (lVar10 == 0) {
    iVar9 = 2;
  }
  if (-1 < *(int *)(lVar11 + 0x58)) {
    lVar16 = *(long *)puVar5;
    lVar14 = nn::os::GetCurrentThread();
    if (lVar14 != lVar16) {
      uVar17 = nn::os::GetCurrentThread();
LAB_017c007c:
      if (*(long *)puVar5 == 0) goto code_r0x017c0084;
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
                *(undefined8 *)puVar5 = uVar17;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_017c008c;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar6) {
          *(undefined8 *)puVar5 = uVar17;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_017c008c:
      bVar6 = false;
      goto LAB_017bfe44;
    }
    bVar6 = true;
LAB_017bfe44:
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
        if ((iVar8 != 6) || (*(int *)(lVar11 + 0x58) < 0)) goto LAB_017bff74;
        lVar16 = *(long *)puVar5;
        lVar14 = nn::os::GetCurrentThread();
        if (lVar14 != lVar16) {
          uVar17 = nn::os::GetCurrentThread();
LAB_017c00a8:
          if (*(long *)puVar5 == 0) goto code_r0x017c00b0;
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
                    *(undefined8 *)puVar5 = uVar17;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  if (cVar4 == '\0') goto LAB_017c00b8;
                }
              } while( true );
            }
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar5,0x10);
            if (bVar6) {
              *(undefined8 *)puVar5 = uVar17;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
LAB_017c00b8:
          bVar6 = false;
          goto LAB_017bfeb0;
        }
        bVar6 = true;
LAB_017bfeb0:
        iVar7 = FUN_00c5fc50(uVar15,0xfff0b9d8,(long)*(int *)(lVar11 + 0x5c));
        iVar8 = *(int *)(lVar11 + 0x58);
        if (!bVar6) {
          *(undefined8 *)puVar5 = 0;
          nn::os::SignalLightEvent((LightEventType *)(puVar5 + 8));
        }
        if (iVar7 != iVar8) goto LAB_017c01d4;
      }
      else {
        iVar8 = FUN_00c5d9a0(uVar15,0xffffffff,lVar10);
        if ((iVar8 != 5) || (iVar8 = FUN_00c5d9a0(uVar15,0xffffffff,param_3), iVar8 != 6))
        goto LAB_017c01d4;
      }
      local_68 = (long *)*param_4;
      local_70[0] = '\0';
      FUN_00d601a0(uVar15,local_70);
      if ((local_70[0] == '\x01') && (local_68 != (long *)0x0)) {
        plVar2 = local_68 + 5;
        do {
          lVar11 = *plVar2;
          iVar8 = (int)lVar11 + -1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *(int *)plVar2 = iVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*local_68 + 0x10))();
        }
        else if ((int)lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      iVar8 = FUN_00c5d980(uVar15);
      FUN_00c5dbe0(uVar15,&LAB_01de3470,0);
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
      goto LAB_017bff74;
    }
  }
LAB_017c01d4:
  uVar17 = 0;
LAB_017bff74:
  FUN_00c5db00(uVar15,0);
  if (!bVar13) {
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
      lVar14 = *plVar1;
      lVar16 = *(long *)(param_1 + 0x88);
      if (lVar14 != lVar10 || lVar16 != lVar11) {
        bVar12 = false;
        ClearExclusiveLocal();
        goto joined_r0x017bffcc;
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
joined_r0x017bffcc:
    if (!bVar12) {
      do {
        lVar10 = *plVar1;
        lVar11 = *(long *)(param_1 + 0x88);
        if (lVar10 != lVar14 || lVar11 != lVar16) {
          bVar12 = false;
          ClearExclusiveLocal();
          lVar14 = lVar10;
          lVar16 = lVar11;
          goto joined_r0x017bffcc;
        }
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = lVar14;
          *(long *)(param_1 + 0x84) = lVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar12 = true;
      lVar14 = lVar10;
      lVar16 = lVar11;
      goto joined_r0x017bffcc;
    }
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x90));
  }
  return uVar17;
code_r0x017c0068:
  cVar4 = '\x01';
  bVar13 = (bool)ExclusiveMonitorPass(puVar5,0x10);
  if (bVar13) {
    *(undefined8 *)puVar5 = uVar15;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto code_r0x017c0070;
  goto LAB_017c0060;
code_r0x017c0070:
  bVar13 = false;
  goto LAB_017bfdfc;
code_r0x017c0084:
  cVar4 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(puVar5,0x10);
  if (bVar6) {
    *(undefined8 *)puVar5 = uVar17;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_017c008c;
  goto LAB_017c007c;
code_r0x017c00b0:
  cVar4 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(puVar5,0x10);
  if (bVar6) {
    *(undefined8 *)puVar5 = uVar17;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_017c00b8;
  goto LAB_017c00a8;
}


