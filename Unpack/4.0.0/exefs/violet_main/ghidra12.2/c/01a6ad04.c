/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a6ad04; name: FUN_01a6ad04
 */


bool FUN_01a6ad04(long param_1,int param_2,int param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  short sVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  char unaff_w23;
  bool bVar19;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [24];
  undefined8 local_68;
  
  if ((((*(long *)(param_1 + 0x160) != 0) && (*(short *)(*(long *)(param_1 + 0x160) + 0x1a) != 0))
      && (lVar13 = *(long *)(param_1 + 0x160), lVar13 != 0)) && (*(short *)(lVar13 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar13 + 0x1a);
    sVar14 = *(short *)(lVar13 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar14) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01a6adac;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01a6adac:
        bVar5 = false;
      }
      if (bVar5) {
        lVar13 = *(long *)(lVar13 + 0x10);
        if (lVar13 != 0) {
          FUN_00d9ec44(auStack_80,2,0xc0da6bf5989030a);
          local_a8 = (undefined8 *)0x0;
          uStack_a0 = 0;
          FUN_00ca1a48(&local_a8,param_1 + 0x150);
          local_98[0] = 2;
          local_90 = 0;
          uStack_88 = 0;
          FUN_00ca1ea4(&local_90,&local_a8);
          if (((*PTR_DAT_047d6c20 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d6c20);
          }
          lVar15 = *(long *)PTR_DAT_047d6c28;
          *(long *)PTR_DAT_047d6c30 = lVar15;
          if (*(undefined8 **)(lVar13 + 0x28) == (undefined8 *)0x0) {
            uVar16 = 0;
          }
          else {
            uVar16 = **(undefined8 **)(lVar13 + 0x28);
          }
          if (((DAT_04865a38 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar11 = nn::os::GetTlsValue(DAT_04865a30);
          if ((lVar11 != 0) && (*(int *)(lVar11 + 0x90) != -1)) {
            *(undefined8 *)(lVar15 + (long)*(int *)(lVar11 + 0x90) * 8 + 0x6a0) = uVar16;
          }
          puVar6 = PTR_DAT_047d38f8;
          lVar17 = *(long *)(lVar13 + 0xd8);
          lVar11 = *(long *)PTR_DAT_047d38f8;
          lVar15 = nn::os::GetCurrentThread();
          if (lVar15 == lVar11) {
            bVar5 = true;
          }
          else {
            uVar16 = nn::os::GetCurrentThread();
            do {
              if (*(long *)puVar6 != 0) {
                do {
                  ClearExclusiveLocal();
                  nn::os::WaitLightEvent((LightEventType *)(puVar6 + 8));
                  while (*(long *)puVar6 == 0) {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(puVar6,0x10);
                    if (bVar5) {
                      *(undefined8 *)puVar6 = uVar16;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                    if (cVar4 == '\0') goto LAB_01a6b118;
                  }
                } while( true );
              }
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar6,0x10);
              if (bVar5) {
                *(undefined8 *)puVar6 = uVar16;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
LAB_01a6b118:
            bVar5 = false;
          }
          lVar15 = *(long *)(lVar13 + 0x98);
          uVar16 = *(undefined8 *)(lVar17 + 0x70);
          lVar11 = *(long *)(lVar17 + 0x80);
          iVar10 = 3;
          if (lVar15 == 0) {
            iVar10 = 4;
          }
          if (*(int *)(lVar11 + 0x58) < 0) {
LAB_01a6b01c:
            unaff_w23 = false;
          }
          else {
            lVar18 = *(long *)puVar6;
            lVar17 = nn::os::GetCurrentThread();
            if (lVar17 == lVar18) {
              bVar19 = true;
            }
            else {
              uVar12 = nn::os::GetCurrentThread();
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
                      if (cVar4 == '\0') goto LAB_01a6b140;
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
LAB_01a6b140:
              bVar19 = false;
            }
            iVar8 = FUN_00c5fc50(uVar16,0xfff0b9d8,(long)*(int *)(lVar11 + 0x5c));
            iVar9 = *(int *)(lVar11 + 0x58);
            if (!bVar19) {
              *(undefined8 *)puVar6 = 0;
              nn::os::SignalLightEvent((LightEventType *)(puVar6 + 8));
            }
            if (iVar8 != iVar9) goto LAB_01a6b01c;
            if (lVar15 == 0) {
              iVar9 = FUN_00c5d9a0(uVar16,0xffffffff,auStack_80);
              unaff_w23 = false;
              if ((iVar9 == 6) && (-1 < *(int *)(lVar11 + 0x58))) {
                lVar18 = *(long *)puVar6;
                lVar17 = nn::os::GetCurrentThread();
                if (lVar17 == lVar18) {
                  bVar19 = true;
                }
                else {
                  uVar12 = nn::os::GetCurrentThread();
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
                          if (cVar4 == '\0') goto LAB_01a6b184;
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
LAB_01a6b184:
                  bVar19 = false;
                }
                iVar8 = FUN_00c5fc50(uVar16,0xfff0b9d8,(long)*(int *)(lVar11 + 0x5c));
                iVar9 = *(int *)(lVar11 + 0x58);
                if (!bVar19) {
                  *(undefined8 *)puVar6 = 0;
                  nn::os::SignalLightEvent((LightEventType *)(puVar6 + 8));
                }
                if (iVar8 != iVar9) goto LAB_01a6b01c;
                goto LAB_01a6af30;
              }
            }
            else {
              iVar9 = FUN_00c5d9a0(uVar16,0xffffffff,lVar15);
              if ((iVar9 != 5) || (iVar9 = FUN_00c5d9a0(uVar16,0xffffffff,auStack_80), iVar9 != 6))
              goto LAB_01a6b01c;
LAB_01a6af30:
              FUN_00ca1900(uVar16,local_98);
              FUN_00c5d960(uVar16,(long)param_2);
              FUN_00c5d960(uVar16,(long)param_3);
              iVar9 = FUN_00c5d980(uVar16);
              FUN_00c5dbe0(uVar16,&LAB_021099f0,0);
              FUN_00c5dcd0(uVar16,iVar9 - iVar10,1);
              iVar10 = FUN_00c5ddd0(uVar16,iVar10,1,iVar9 - iVar10,0,0);
              if (iVar10 != 0) {
                uVar16 = FUN_00c646d0(uVar16,0xffffffff,0);
                *(undefined8 *)PTR_DAT_047d4238 = uVar16;
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("0","CallImpl",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/invoker.h"
                           ,0x89,"Lua panic: function(%s.%s) error: %s",lVar15,auStack_80,uVar16);
              }
              iVar10 = FUN_00cc4dc0(uVar16);
              unaff_w23 = iVar10 != 0;
            }
          }
          FUN_00c5db00(uVar16,0);
          if (!bVar5) {
            *(undefined8 *)puVar6 = 0;
            nn::os::SignalLightEvent((LightEventType *)(puVar6 + 8));
          }
          FUN_00cecfd8(local_98);
          puVar7 = local_a8;
          if (local_a8 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_a8 + 3);
            do {
              sVar14 = *psVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar14 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar14 == 1) {
              piVar2 = (int *)((long)local_a8 + 0x1c);
              do {
                iVar10 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar10 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar15 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar15;
                local_68 = *puVar7;
                FUN_00c44438(lVar15 + 0x8040,&local_68);
              }
            }
            else if (sVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x33,"Reference counter underflows.");
            }
          }
          lVar15 = *(long *)(lVar13 + 8);
          psVar1 = (short *)(lVar15 + 0x1a);
          do {
            sVar14 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar14 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar14 == 1) {
            *(undefined8 *)(lVar15 + 0x10) = 0;
            (**(code **)(*(long *)(lVar13 + -0x28) + 0x50))();
          }
          else if (sVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        break;
      }
      sVar14 = sVar3;
    } while (sVar3 != 0);
  }
  return unaff_w23 != '\0';
}


