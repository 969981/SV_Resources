/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016187a4; name: FUN_016187a4
 */


byte FUN_016187a4(long param_1,long param_2,int param_3)

{
  short *psVar1;
  uint uVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  short sVar19;
  ulong uVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  byte bVar25;
  undefined8 local_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined1 local_69;
  undefined1 uStack_68;
  undefined2 uStack_67;
  
  uVar18 = *(ulong *)(param_1 + 0x50);
  if (uVar18 == 0) {
    return 1;
  }
  uVar16 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
  uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
  uVar2 = *(uint *)(param_2 + 0x1c0);
  uVar14 = (ulong)uVar2;
  uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar16 < 2) {
    uVar20 = (ulong)((int)uVar18 - 1U & uVar2);
  }
  else {
    uVar20 = uVar14;
    if (uVar18 <= uVar14) {
      uVar20 = 0;
      if (uVar18 != 0) {
        uVar20 = uVar14 / uVar18;
      }
      uVar20 = uVar14 - uVar20 * uVar18;
    }
  }
  plVar17 = *(long **)(*(long *)(param_1 + 0x48) + uVar20 * 8);
  if (plVar17 == (long *)0x0) {
    return 1;
  }
  plVar17 = (long *)*plVar17;
  if (plVar17 == (long *)0x0) {
    return 1;
  }
  if (1 < uVar16) {
    do {
      uVar16 = plVar17[1];
      if (uVar16 == uVar14) {
        if (*(uint *)(plVar17 + 2) == uVar2) goto LAB_01618850;
      }
      else {
        if (uVar18 <= uVar16) {
          uVar6 = 0;
          if (uVar18 != 0) {
            uVar6 = uVar16 / uVar18;
          }
          uVar16 = uVar16 - uVar6 * uVar18;
        }
        if (uVar16 != uVar20) {
          return 1;
        }
      }
      plVar17 = (long *)*plVar17;
      if (plVar17 == (long *)0x0) {
        return 1;
      }
    } while( true );
  }
  do {
    if (plVar17[1] == uVar14) {
      if (*(uint *)(plVar17 + 2) == uVar2) break;
    }
    else if ((plVar17[1] & uVar18 - 1) != uVar20) {
      return 1;
    }
    plVar17 = (long *)*plVar17;
    if (plVar17 == (long *)0x0) {
      return 1;
    }
  } while( true );
LAB_01618850:
  if ((((plVar17[5] == 0) || (*(short *)(plVar17[5] + 0x1a) == 0)) ||
      (lVar15 = plVar17[5], lVar15 == 0)) || (*(short *)(lVar15 + 0x1a) == 0)) {
    return 1;
  }
  psVar1 = (short *)(lVar15 + 0x1a);
  sVar19 = *(short *)(lVar15 + 0x1a);
  do {
    sVar3 = *psVar1;
    if (sVar3 == sVar19) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar19 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_01618948;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01618948:
      bVar5 = false;
    }
    if (bVar5) {
      lVar15 = *(long *)(lVar15 + 0x10);
      if (lVar15 == 0) {
        return 1;
      }
      uStack_67 = 0;
      uStack_68 = 0x42;
      local_69 = 0x35;
      local_6a = 0x37;
      local_6c = 0x4636;
      local_70 = 0x44383631;
      local_78 = 0x4634413532373653;
      if (((*PTR_DAT_047d6c20 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar11 != 0)) {
        FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d6c20);
      }
      lVar21 = *(long *)PTR_DAT_047d6c28;
      *(long *)PTR_DAT_047d6c30 = lVar21;
      if (*(undefined8 **)(lVar15 + 0x28) == (undefined8 *)0x0) {
        uVar22 = 0;
      }
      else {
        uVar22 = **(undefined8 **)(lVar15 + 0x28);
      }
      if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar12 = nn::os::GetTlsValue(DAT_04865a30);
      if ((lVar12 != 0) && (*(int *)(lVar12 + 0x90) != -1)) {
        *(undefined8 *)(lVar21 + (long)*(int *)(lVar12 + 0x90) * 8 + 0x6a0) = uVar22;
      }
      puVar7 = PTR_DAT_047d38f8;
      lVar23 = *(long *)(lVar15 + 0xd8);
      lVar12 = *(long *)PTR_DAT_047d38f8;
      lVar21 = nn::os::GetCurrentThread();
      if (lVar21 == lVar12) {
        bVar5 = true;
        goto LAB_01618a48;
      }
      uVar22 = nn::os::GetCurrentThread();
      goto LAB_01618c54;
    }
    sVar19 = sVar3;
    if (sVar3 == 0) {
      return 1;
    }
  } while( true );
code_r0x01618c7c:
  cVar4 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(puVar7,0x10);
  if (bVar8) {
    *(undefined8 *)puVar7 = uVar13;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01618c84;
  goto LAB_01618c74;
code_r0x01618d2c:
  cVar4 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(puVar7,0x10);
  if (bVar8) {
    *(undefined8 *)puVar7 = uVar13;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01618d34;
  goto LAB_01618d24;
LAB_01618c54:
  if (*(long *)puVar7 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar7,0x10);
    if (bVar5) {
      *(undefined8 *)puVar7 = uVar22;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_01618c64;
    goto LAB_01618c54;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(puVar7 + 8));
  do {
    if (*(long *)puVar7 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(puVar7 + 8));
        while (*(long *)puVar7 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar7,0x10);
          if (bVar5) {
            *(undefined8 *)puVar7 = uVar22;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01618c64;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar7,0x10);
    if (bVar5) {
      *(undefined8 *)puVar7 = uVar22;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01618c64:
  bVar5 = false;
LAB_01618a48:
  lVar21 = *(long *)(lVar15 + 0x98);
  uVar22 = *(undefined8 *)(lVar23 + 0x70);
  lVar12 = *(long *)(lVar23 + 0x80);
  iVar11 = 2;
  if (lVar21 == 0) {
    iVar11 = 3;
  }
  if (-1 < *(int *)(lVar12 + 0x58)) {
    lVar24 = *(long *)puVar7;
    lVar23 = nn::os::GetCurrentThread();
    if (lVar23 != lVar24) {
      uVar13 = nn::os::GetCurrentThread();
LAB_01618c74:
      if (*(long *)puVar7 == 0) goto code_r0x01618c7c;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(puVar7 + 8));
      do {
        if (*(long *)puVar7 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(puVar7 + 8));
            while (*(long *)puVar7 == 0) {
              cVar4 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(puVar7,0x10);
              if (bVar8) {
                *(undefined8 *)puVar7 = uVar13;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_01618c84;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar8) {
          *(undefined8 *)puVar7 = uVar13;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_01618c84:
      bVar8 = false;
      goto LAB_01618a80;
    }
    bVar8 = true;
LAB_01618a80:
    iVar9 = FUN_00c5fc50(uVar22,0xfff0b9d8,(long)*(int *)(lVar12 + 0x5c));
    iVar10 = *(int *)(lVar12 + 0x58);
    if (!bVar8) {
      *(undefined8 *)puVar7 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar7 + 8));
    }
    if (iVar9 == iVar10) {
      if (lVar21 == 0) {
        iVar10 = FUN_00c5d9a0(uVar22,0xffffffff,&local_78);
        bVar25 = 0;
        if (iVar10 != 6) {
          bVar8 = false;
          goto LAB_01618bd0;
        }
        bVar8 = false;
        if (*(int *)(lVar12 + 0x58) < 0) goto LAB_01618bd0;
        lVar24 = *(long *)puVar7;
        lVar23 = nn::os::GetCurrentThread();
        if (lVar23 != lVar24) {
          uVar13 = nn::os::GetCurrentThread();
LAB_01618d24:
          if (*(long *)puVar7 == 0) goto code_r0x01618d2c;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar7 + 8));
          do {
            if (*(long *)puVar7 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(puVar7 + 8));
                while (*(long *)puVar7 == 0) {
                  cVar4 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(puVar7,0x10);
                  if (bVar8) {
                    *(undefined8 *)puVar7 = uVar13;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  if (cVar4 == '\0') goto LAB_01618d34;
                }
              } while( true );
            }
            cVar4 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar7,0x10);
            if (bVar8) {
              *(undefined8 *)puVar7 = uVar13;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
LAB_01618d34:
          bVar8 = false;
          goto LAB_01618ba0;
        }
        bVar8 = true;
LAB_01618ba0:
        iVar9 = FUN_00c5fc50(uVar22,0xfff0b9d8,(long)*(int *)(lVar12 + 0x5c));
        iVar10 = *(int *)(lVar12 + 0x58);
        if (!bVar8) {
          *(undefined8 *)puVar7 = 0;
          nn::os::SignalLightEvent((LightEventType *)(puVar7 + 8));
        }
        if (iVar9 == iVar10) goto LAB_01618adc;
      }
      else {
        iVar10 = FUN_00c5d9a0(uVar22,0xffffffff,lVar21);
        if ((iVar10 == 5) && (iVar10 = FUN_00c5d9a0(uVar22,0xffffffff,&local_78), iVar10 == 6)) {
LAB_01618adc:
          FUN_00c5d960(uVar22,(long)param_3);
          FUN_0135e530(uVar22,plVar17 + 3);
          iVar10 = FUN_00c5d980(uVar22);
          FUN_00c5dbe0(uVar22,&LAB_02111ea0,0);
          FUN_00c5dcd0(uVar22,iVar10 - iVar11,1);
          iVar11 = FUN_00c5ddd0(uVar22,iVar11,1,iVar10 - iVar11,0,0);
          if (iVar11 != 0) {
            uVar22 = FUN_00c646d0(uVar22,0xffffffff,0);
            *(undefined8 *)PTR_DAT_047d4238 = uVar22;
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("0","CallImpl",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/invoker.h"
                       ,0x89,"Lua panic: function(%s.%s) error: %s",lVar21,&local_78,uVar22);
          }
          iVar11 = FUN_00cc4dc0(uVar22);
          bVar8 = iVar11 != 0;
          bVar25 = 1;
          goto LAB_01618bd0;
        }
      }
    }
  }
  bVar25 = 0;
  bVar8 = false;
LAB_01618bd0:
  FUN_00c5db00(uVar22,0);
  if (!bVar5) {
    *(undefined8 *)puVar7 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar7 + 8));
  }
  lVar21 = *(long *)(lVar15 + 8);
  psVar1 = (short *)(lVar21 + 0x1a);
  do {
    sVar19 = *psVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar19 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar19 == 1) {
    *(undefined8 *)(lVar21 + 0x10) = 0;
    (**(code **)(*(long *)(lVar15 + -0x28) + 0x50))((long *)(lVar15 + -0x28));
    return bVar25 & bVar8;
  }
  if (sVar19 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return bVar25 & bVar8;
}


