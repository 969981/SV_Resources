/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0141fab4; name: FUN_0141fab4
 */


void FUN_0141fab4(long param_1,long param_2,long param_3,uint param_4,uint param_5,uint param_6)

{
  int *piVar1;
  short *psVar2;
  uint uVar3;
  undefined4 uVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  short sVar22;
  long *plVar23;
  long *plVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  long lVar28;
  bool bVar29;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined2 local_ac;
  undefined1 local_aa;
  undefined1 local_a9;
  undefined1 uStack_a8;
  undefined2 uStack_a7;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  
  uVar19 = *(ulong *)(param_1 + 0x50);
  if (uVar19 != 0) {
    uVar20 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
    uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
    uVar3 = *(uint *)(param_2 + 0x1c0);
    uVar17 = (ulong)uVar3;
    uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar20 < 2) {
      uVar21 = (ulong)((int)uVar19 - 1U & uVar3);
    }
    else {
      uVar21 = uVar17;
      if (uVar19 <= uVar17) {
        uVar21 = 0;
        if (uVar19 != 0) {
          uVar21 = uVar17 / uVar19;
        }
        uVar21 = uVar17 - uVar21 * uVar19;
      }
    }
    plVar23 = *(long **)(*(long *)(param_1 + 0x48) + uVar21 * 8);
    if ((plVar23 != (long *)0x0) && (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0)) {
      if (uVar20 < 2) {
        do {
          if (plVar23[1] == uVar17) {
            if (*(uint *)(plVar23 + 2) == uVar3) goto LAB_0141fb6c;
          }
          else if ((plVar23[1] & uVar19 - 1) != uVar21) {
            return;
          }
          plVar23 = (long *)*plVar23;
        } while (plVar23 != (long *)0x0);
      }
      else {
        do {
          uVar20 = plVar23[1];
          if (uVar20 == uVar17) {
            if (*(uint *)(plVar23 + 2) == uVar3) goto LAB_0141fb6c;
          }
          else {
            if (uVar19 <= uVar20) {
              uVar8 = 0;
              if (uVar19 != 0) {
                uVar8 = uVar20 / uVar19;
              }
              uVar20 = uVar20 - uVar8 * uVar19;
            }
            if (uVar20 != uVar21) {
              return;
            }
          }
          plVar23 = (long *)*plVar23;
        } while (plVar23 != (long *)0x0);
      }
    }
  }
  return;
LAB_014200a4:
  if (*(long *)puVar9 == 0) goto code_r0x014200ac;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(puVar9 + 8));
  do {
    if (*(long *)puVar9 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(puVar9 + 8));
        while (*(long *)puVar9 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar9,0x10);
          if (bVar7) {
            *(undefined8 *)puVar9 = uVar27;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_014200b4;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar9,0x10);
    if (bVar7) {
      *(undefined8 *)puVar9 = uVar27;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_014200b4:
  bVar7 = false;
LAB_0141fed8:
  lVar15 = *(long *)(lVar28 + 0x80);
  lVar25 = *(long *)(lVar18 + 0x98);
  uVar27 = *(undefined8 *)(lVar28 + 0x70);
  iVar13 = 7;
  if (lVar25 == 0) {
    iVar13 = 8;
  }
  if (-1 < *(int *)(lVar15 + 0x58)) {
    lVar26 = *(long *)puVar9;
    lVar28 = nn::os::GetCurrentThread();
    if (lVar28 != lVar26) {
      uVar16 = nn::os::GetCurrentThread();
LAB_014200c4:
      if (*(long *)puVar9 == 0) goto code_r0x014200cc;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(puVar9 + 8));
      do {
        if (*(long *)puVar9 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(puVar9 + 8));
            while (*(long *)puVar9 == 0) {
              cVar6 = '\x01';
              bVar29 = (bool)ExclusiveMonitorPass(puVar9,0x10);
              if (bVar29) {
                *(undefined8 *)puVar9 = uVar16;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_014200d4;
            }
          } while( true );
        }
        cVar6 = '\x01';
        bVar29 = (bool)ExclusiveMonitorPass(puVar9,0x10);
        if (bVar29) {
          *(undefined8 *)puVar9 = uVar16;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_014200d4:
      bVar29 = false;
      goto LAB_0141ff18;
    }
    bVar29 = true;
LAB_0141ff18:
    iVar11 = FUN_00c5fc50(uVar27,0xfff0b9d8,(long)*(int *)(lVar15 + 0x5c));
    iVar12 = *(int *)(lVar15 + 0x58);
    if (!bVar29) {
      *(undefined8 *)puVar9 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar9 + 8));
    }
    if (iVar11 == iVar12) {
      if (lVar25 == 0) {
        iVar12 = FUN_00c5d9a0(uVar27,0xffffffff,&local_b8);
        if ((iVar12 == 6) && (-1 < *(int *)(lVar15 + 0x58))) {
          lVar26 = *(long *)puVar9;
          lVar28 = nn::os::GetCurrentThread();
          if (lVar28 != lVar26) {
            uVar16 = nn::os::GetCurrentThread();
LAB_01420264:
            if (*(long *)puVar9 == 0) goto code_r0x0142026c;
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(puVar9 + 8));
            do {
              if (*(long *)puVar9 != 0) {
                do {
                  ClearExclusiveLocal();
                  nn::os::WaitLightEvent((LightEventType *)(puVar9 + 8));
                  while (*(long *)puVar9 == 0) {
                    cVar6 = '\x01';
                    bVar29 = (bool)ExclusiveMonitorPass(puVar9,0x10);
                    if (bVar29) {
                      *(undefined8 *)puVar9 = uVar16;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                    if (cVar6 == '\0') goto LAB_01420274;
                  }
                } while( true );
              }
              cVar6 = '\x01';
              bVar29 = (bool)ExclusiveMonitorPass(puVar9,0x10);
              if (bVar29) {
                *(undefined8 *)puVar9 = uVar16;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
LAB_01420274:
            bVar29 = false;
            goto LAB_01420214;
          }
          bVar29 = true;
LAB_01420214:
          iVar11 = FUN_00c5fc50(uVar27,0xfff0b9d8,(long)*(int *)(lVar15 + 0x5c));
          iVar12 = *(int *)(lVar15 + 0x58);
          if (!bVar29) {
            *(undefined8 *)puVar9 = 0;
            nn::os::SignalLightEvent((LightEventType *)(puVar9 + 8));
          }
          if (iVar11 == iVar12) goto LAB_0141ff7c;
        }
      }
      else {
        iVar12 = FUN_00c5d9a0(uVar27,0xffffffff,lVar25);
        if ((iVar12 == 5) && (iVar12 = FUN_00c5d9a0(uVar27,0xffffffff,&local_b8), iVar12 == 6)) {
LAB_0141ff7c:
          FUN_0135e530(uVar27,plVar23 + 3);
          FUN_00c5d960(uVar27,uVar4);
          FUN_00c85bd0(uVar27,*(undefined8 *)(param_3 + 8));
          FUN_014b0030(uVar27,lVar14);
          FUN_00c419e0(uVar27,param_4 & 1);
          FUN_00c419e0(uVar27,param_5 & 1);
          FUN_00c419e0(uVar27,param_6 & 1);
          iVar12 = FUN_00c5d980(uVar27);
          FUN_00c5dbe0(uVar27,&LAB_02111ea0,0);
          FUN_00c5dcd0(uVar27,iVar12 - iVar13,1);
          iVar13 = FUN_00c5ddd0(uVar27,iVar13,0,iVar12 - iVar13,0,0);
          if (iVar13 != 0) {
            uVar27 = FUN_00c646d0(uVar27,0xffffffff,0);
            *(undefined8 *)PTR_DAT_047d4238 = uVar27;
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("0","CallImpl",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/invoker.h"
                       ,0x89,"Lua panic: function(%s.%s) error: %s",lVar25,&local_b8,uVar27);
          }
        }
      }
    }
  }
  FUN_00c5db00(uVar27,0);
  if (!bVar7) {
    *(undefined8 *)puVar9 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar9 + 8));
  }
  lVar14 = *(long *)(lVar18 + 8);
  psVar2 = (short *)(lVar14 + 0x1a);
  do {
    sVar22 = *psVar2;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar7) {
      *psVar2 = sVar22 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar22 == 1) {
    *(undefined8 *)(lVar14 + 0x10) = 0;
    (**(code **)(*(long *)(lVar18 + -0x28) + 0x50))((long *)(lVar18 + -0x28));
  }
  else if (sVar22 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  goto LAB_0141fc40;
code_r0x014200ac:
  cVar6 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(puVar9,0x10);
  if (bVar7) {
    *(undefined8 *)puVar9 = uVar27;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_014200b4;
  goto LAB_014200a4;
code_r0x014200cc:
  cVar6 = '\x01';
  bVar29 = (bool)ExclusiveMonitorPass(puVar9,0x10);
  if (bVar29) {
    *(undefined8 *)puVar9 = uVar16;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_014200d4;
  goto LAB_014200c4;
code_r0x0142026c:
  cVar6 = '\x01';
  bVar29 = (bool)ExclusiveMonitorPass(puVar9,0x10);
  if (bVar29) {
    *(undefined8 *)puVar9 = uVar16;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_01420274;
  goto LAB_01420264;
LAB_0141fb6c:
  local_90 = *(undefined8 *)(param_2 + 0x110);
  uStack_88 = *(undefined8 *)(param_2 + 0x118);
  local_80 = *(undefined8 *)(param_2 + 0x120);
  plVar24 = *(long **)(param_2 + 0x128);
  local_78 = plVar24;
  if (plVar24 != (long *)0x0) {
    (**(code **)(*plVar24 + 0x18))(plVar24);
  }
  if (*(code **)(param_2 + 0x10) == (code *)0x0) {
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
  }
  else {
    (**(code **)(param_2 + 0x10))(&local_70,param_2 + 0x30,&local_90);
    plVar24 = local_78;
  }
  if (plVar24 != (long *)0x0) {
    (**(code **)(*plVar24 + 0x20))(plVar24);
  }
  local_a0 = (undefined8 *)0x0;
  uStack_98 = 0;
  FUN_00d0a71c(&local_a0,&local_70);
  lVar14 = FUN_01180e7c(param_2,&local_a0);
  puVar10 = local_a0;
  if (local_a0 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_a0 + 3);
    do {
      sVar22 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar22 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar22 == 1) {
      piVar1 = (int *)((long)local_a0 + 0x1c);
      do {
        iVar13 = *piVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar18;
        local_b8 = *puVar10;
        FUN_00c44438(lVar18 + 0x8040,&local_b8);
      }
    }
    else if (sVar22 == 0) goto LAB_0141fcc4;
  }
  if (lVar14 != 0) {
    uStack_a7 = 0;
    uStack_a8 = 0x37;
    local_a9 = 0x45;
    local_aa = 0x30;
    local_ac = 0x3636;
    local_b0 = 0x41363437;
    local_b8 = 0x4644463933333053;
    lVar18 = plVar23[5];
    if ((lVar18 != 0) && (*(short *)(lVar18 + 0x1a) != 0)) {
      psVar2 = (short *)(lVar18 + 0x1a);
      sVar22 = *(short *)(lVar18 + 0x1a);
      do {
        sVar5 = *psVar2;
        if (sVar5 == sVar22) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar22 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_0141fe1c;
          bVar7 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0141fe1c:
          bVar7 = false;
        }
        if (bVar7) {
          lVar18 = *(long *)(lVar18 + 0x10);
          if (lVar18 != 0) {
            uVar4 = *(undefined4 *)(param_2 + 0x1c0);
            if (((*PTR_DAT_047d6c20 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar13 != 0)) {
              FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d6c20);
            }
            lVar25 = *(long *)PTR_DAT_047d6c28;
            *(long *)PTR_DAT_047d6c30 = lVar25;
            if (*(undefined8 **)(lVar18 + 0x28) == (undefined8 *)0x0) {
              uVar27 = 0;
            }
            else {
              uVar27 = **(undefined8 **)(lVar18 + 0x28);
            }
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar15 = nn::os::GetTlsValue(DAT_04865a30);
            if ((lVar15 != 0) && (*(int *)(lVar15 + 0x90) != -1)) {
              *(undefined8 *)(lVar25 + (long)*(int *)(lVar15 + 0x90) * 8 + 0x6a0) = uVar27;
            }
            puVar9 = PTR_DAT_047d38f8;
            lVar28 = *(long *)(lVar18 + 0xd8);
            lVar15 = *(long *)PTR_DAT_047d38f8;
            lVar25 = nn::os::GetCurrentThread();
            if (lVar25 == lVar15) {
              bVar7 = true;
              goto LAB_0141fed8;
            }
            uVar27 = nn::os::GetCurrentThread();
            goto LAB_014200a4;
          }
          break;
        }
        sVar22 = sVar5;
      } while (sVar5 != 0);
    }
  }
LAB_0141fc40:
  puVar10 = local_70;
  if (local_70 == (undefined8 *)0x0) {
    return;
  }
  psVar2 = (short *)(local_70 + 3);
  do {
    sVar22 = *psVar2;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar7) {
      *psVar2 = sVar22 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar22 == 1) {
    piVar1 = (int *)((long)local_70 + 0x1c);
    do {
      iVar13 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 == -1) {
      return;
    }
    if (((*PTR_DAT_047d3908 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3908);
    }
    lVar14 = *(long *)PTR_DAT_047d3910;
    *(long *)PTR_DAT_047d3918 = lVar14;
    local_b8 = *puVar10;
    FUN_00c44438(lVar14 + 0x8040,&local_b8);
    return;
  }
  if (sVar22 != 0) {
    return;
  }
LAB_0141fcc4:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
             ,0x33,"Reference counter underflows.");
}


