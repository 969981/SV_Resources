/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01930634; name: FUN_01930634
 */


void FUN_01930634(long param_1,long param_2,undefined8 param_3,long param_4,long param_5,int param_6
                 ,uint param_7,uint param_8,byte param_9)

{
  short *psVar1;
  uint uVar2;
  undefined4 uVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  undefined *puVar8;
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
  long lVar22;
  bool bVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 local_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined1 local_69;
  undefined1 uStack_68;
  undefined2 uStack_67;
  
  uVar18 = *(ulong *)(param_1 + 0x50);
  if (uVar18 == 0) {
    return;
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
    return;
  }
  plVar17 = (long *)*plVar17;
  if (plVar17 == (long *)0x0) {
    return;
  }
  if (1 < uVar16) {
    do {
      uVar16 = plVar17[1];
      if (uVar16 == uVar14) {
        if (*(uint *)(plVar17 + 2) == uVar2) goto LAB_01930748;
      }
      else {
        if (uVar18 <= uVar16) {
          uVar7 = 0;
          if (uVar18 != 0) {
            uVar7 = uVar16 / uVar18;
          }
          uVar16 = uVar16 - uVar7 * uVar18;
        }
        if (uVar16 != uVar20) {
          return;
        }
      }
      plVar17 = (long *)*plVar17;
      if (plVar17 == (long *)0x0) {
        return;
      }
    } while( true );
  }
  do {
    if (plVar17[1] == uVar14) {
      if (*(uint *)(plVar17 + 2) == uVar2) break;
    }
    else if ((plVar17[1] & uVar18 - 1) != uVar20) {
      return;
    }
    plVar17 = (long *)*plVar17;
    if (plVar17 == (long *)0x0) {
      return;
    }
  } while( true );
LAB_01930748:
  if ((((plVar17[5] != 0) && (*(short *)(plVar17[5] + 0x1a) != 0)) &&
      (lVar15 = plVar17[5], lVar15 != 0)) && (*(short *)(lVar15 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar15 + 0x1a);
    sVar19 = *(short *)(lVar15 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar19) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar19 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_019307dc;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_019307dc:
        bVar6 = false;
      }
      if (bVar6) {
        lVar15 = *(long *)(lVar15 + 0x10);
        if (lVar15 == 0) {
          return;
        }
        uStack_67 = 0;
        uStack_68 = 0x41;
        local_69 = 0x32;
        local_6a = 0x31;
        local_6c = 0x4341;
        local_70 = 0x37334236;
        local_78 = 0x4639384237303753;
        uVar3 = *(undefined4 *)(param_2 + 0x1c0);
        if (((*PTR_DAT_047d6c20 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d6c20);
        }
        lVar21 = *(long *)PTR_DAT_047d6c28;
        *(long *)PTR_DAT_047d6c30 = lVar21;
        if (*(undefined8 **)(lVar15 + 0x28) == (undefined8 *)0x0) {
          uVar24 = 0;
        }
        else {
          uVar24 = **(undefined8 **)(lVar15 + 0x28);
        }
        if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar12 = nn::os::GetTlsValue(DAT_04865a30);
        if ((lVar12 != 0) && (*(int *)(lVar12 + 0x90) != -1)) {
          *(undefined8 *)(lVar21 + (long)*(int *)(lVar12 + 0x90) * 8 + 0x6a0) = uVar24;
        }
        puVar8 = PTR_DAT_047d38f8;
        lVar25 = *(long *)(lVar15 + 0xd8);
        lVar12 = *(long *)PTR_DAT_047d38f8;
        lVar21 = nn::os::GetCurrentThread();
        if (lVar21 == lVar12) {
          bVar6 = true;
        }
        else {
          uVar24 = nn::os::GetCurrentThread();
          do {
            if (*(long *)puVar8 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(puVar8 + 8));
                while (*(long *)puVar8 == 0) {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(puVar8,0x10);
                  if (bVar6) {
                    *(undefined8 *)puVar8 = uVar24;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') goto LAB_01930b8c;
                }
              } while( true );
            }
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar8,0x10);
            if (bVar6) {
              *(undefined8 *)puVar8 = uVar24;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
LAB_01930b8c:
          bVar6 = false;
        }
        uVar24 = *(undefined8 *)(lVar25 + 0x70);
        lVar21 = *(long *)(lVar15 + 0x98);
        lVar12 = *(long *)(lVar25 + 0x80);
        iVar11 = 8;
        if (lVar21 == 0) {
          iVar11 = 9;
        }
        if (-1 < *(int *)(lVar12 + 0x58)) {
          lVar22 = *(long *)puVar8;
          lVar25 = nn::os::GetCurrentThread();
          if (lVar25 == lVar22) {
            bVar23 = true;
          }
          else {
            uVar13 = nn::os::GetCurrentThread();
            do {
              if (*(long *)puVar8 != 0) {
                do {
                  ClearExclusiveLocal();
                  nn::os::WaitLightEvent((LightEventType *)(puVar8 + 8));
                  while (*(long *)puVar8 == 0) {
                    cVar5 = '\x01';
                    bVar23 = (bool)ExclusiveMonitorPass(puVar8,0x10);
                    if (bVar23) {
                      *(undefined8 *)puVar8 = uVar13;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                    if (cVar5 == '\0') goto LAB_01930bb4;
                  }
                } while( true );
              }
              cVar5 = '\x01';
              bVar23 = (bool)ExclusiveMonitorPass(puVar8,0x10);
              if (bVar23) {
                *(undefined8 *)puVar8 = uVar13;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
LAB_01930bb4:
            bVar23 = false;
          }
          iVar9 = FUN_00c5fc50(uVar24,0xfff0b9d8,(long)*(int *)(lVar12 + 0x5c));
          iVar10 = *(int *)(lVar12 + 0x58);
          if (!bVar23) {
            *(undefined8 *)puVar8 = 0;
            nn::os::SignalLightEvent((LightEventType *)(puVar8 + 8));
          }
          if (iVar9 == iVar10) {
            if (lVar21 == 0) {
              iVar10 = FUN_00c5d9a0(uVar24,0xffffffff,&local_78);
              if ((iVar10 != 6) || (*(int *)(lVar12 + 0x58) < 0)) goto LAB_01930abc;
              lVar22 = *(long *)puVar8;
              lVar25 = nn::os::GetCurrentThread();
              if (lVar25 == lVar22) {
                bVar23 = true;
              }
              else {
                uVar13 = nn::os::GetCurrentThread();
                do {
                  if (*(long *)puVar8 != 0) {
                    do {
                      ClearExclusiveLocal();
                      nn::os::WaitLightEvent((LightEventType *)(puVar8 + 8));
                      while (*(long *)puVar8 == 0) {
                        cVar5 = '\x01';
                        bVar23 = (bool)ExclusiveMonitorPass(puVar8,0x10);
                        if (bVar23) {
                          *(undefined8 *)puVar8 = uVar13;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                        if (cVar5 == '\0') goto LAB_01930bf8;
                      }
                    } while( true );
                  }
                  cVar5 = '\x01';
                  bVar23 = (bool)ExclusiveMonitorPass(puVar8,0x10);
                  if (bVar23) {
                    *(undefined8 *)puVar8 = uVar13;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
LAB_01930bf8:
                bVar23 = false;
              }
              iVar9 = FUN_00c5fc50(uVar24,0xfff0b9d8,(long)*(int *)(lVar12 + 0x5c));
              iVar10 = *(int *)(lVar12 + 0x58);
              if (!bVar23) {
                *(undefined8 *)puVar8 = 0;
                nn::os::SignalLightEvent((LightEventType *)(puVar8 + 8));
              }
              if (iVar9 != iVar10) goto LAB_01930abc;
            }
            else {
              iVar10 = FUN_00c5d9a0(uVar24,0xffffffff,lVar21);
              if ((iVar10 != 5) || (iVar10 = FUN_00c5d9a0(uVar24,0xffffffff,&local_78), iVar10 != 6)
                 ) goto LAB_01930abc;
            }
            FUN_0135e530(uVar24,plVar17 + 3);
            FUN_00c5d960(uVar24,uVar3);
            FUN_00c85bd0(uVar24,*(undefined8 *)(param_4 + 8));
            FUN_00c85bd0(uVar24,*(undefined8 *)(param_5 + 8));
            FUN_00c5d960(uVar24,(long)param_6);
            FUN_00c419e0(uVar24,param_7 & 1);
            FUN_00c419e0(uVar24,param_8 & 1);
            FUN_00c419e0(uVar24,param_9 & 1);
            iVar10 = FUN_00c5d980(uVar24);
            FUN_00c5dbe0(uVar24,&LAB_02111ea0,0);
            FUN_00c5dcd0(uVar24,iVar10 - iVar11,1);
            iVar11 = FUN_00c5ddd0(uVar24,iVar11,0,iVar10 - iVar11,0,0);
            if (iVar11 != 0) {
              uVar24 = FUN_00c646d0(uVar24,0xffffffff,0);
              *(undefined8 *)PTR_DAT_047d4238 = uVar24;
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("0","CallImpl",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/invoker.h"
                         ,0x89,"Lua panic: function(%s.%s) error: %s",lVar21,&local_78,uVar24);
            }
          }
        }
LAB_01930abc:
        FUN_00c5db00(uVar24,0);
        if (!bVar6) {
          *(undefined8 *)puVar8 = 0;
          nn::os::SignalLightEvent((LightEventType *)(puVar8 + 8));
        }
        lVar21 = *(long *)(lVar15 + 8);
        psVar1 = (short *)(lVar21 + 0x1a);
        do {
          sVar19 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar19 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar19 == 1) {
          *(undefined8 *)(lVar21 + 0x10) = 0;
          (**(code **)(*(long *)(lVar15 + -0x28) + 0x50))((long *)(lVar15 + -0x28));
          return;
        }
        if (sVar19 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar19 = sVar4;
    } while (sVar4 != 0);
  }
  return;
}


