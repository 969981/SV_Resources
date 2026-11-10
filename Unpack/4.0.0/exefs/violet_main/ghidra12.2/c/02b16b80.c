/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b16b80; name: FUN_02b16b80
 */


void FUN_02b16b80(long param_1,undefined8 *param_2,undefined1 *param_3,undefined1 *param_4,
                 undefined4 *param_5,char *param_6)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  short sVar12;
  long lVar13;
  bool bVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_78 [24];
  
  if ((((*(long *)(param_1 + 0x160) != 0) && (*(short *)(*(long *)(param_1 + 0x160) + 0x1a) != 0))
      && (lVar11 = *(long *)(param_1 + 0x160), lVar11 != 0)) && (*(short *)(lVar11 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar11 + 0x1a);
    sVar12 = *(short *)(lVar11 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar12) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar12 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_02b16c28;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02b16c28:
        bVar4 = false;
      }
      if (bVar4) {
        lVar11 = *(long *)(lVar11 + 0x10);
        if (lVar11 == 0) {
          return;
        }
        FUN_00d9ec44(auStack_78,2,*param_2);
        if (((*PTR_DAT_047d6c20 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d6c20);
        }
        lVar13 = *(long *)PTR_DAT_047d6c28;
        *(long *)PTR_DAT_047d6c30 = lVar13;
        if (*(undefined8 **)(lVar11 + 0x28) == (undefined8 *)0x0) {
          uVar15 = 0;
        }
        else {
          uVar15 = **(undefined8 **)(lVar11 + 0x28);
        }
        if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar9 = nn::os::GetTlsValue(DAT_04865a30);
        if ((lVar9 != 0) && (*(int *)(lVar9 + 0x90) != -1)) {
          *(undefined8 *)(lVar13 + (long)*(int *)(lVar9 + 0x90) * 8 + 0x6a0) = uVar15;
        }
        puVar5 = PTR_DAT_047d38f8;
        lVar17 = *(long *)(lVar11 + 0xd8);
        lVar9 = *(long *)PTR_DAT_047d38f8;
        lVar13 = nn::os::GetCurrentThread();
        if (lVar13 == lVar9) {
          bVar4 = true;
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
                  bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
                  if (bVar4) {
                    *(undefined8 *)puVar5 = uVar15;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                  if (cVar3 == '\0') goto LAB_02b16f6c;
                }
              } while( true );
            }
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
            if (bVar4) {
              *(undefined8 *)puVar5 = uVar15;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
LAB_02b16f6c:
          bVar4 = false;
        }
        uVar15 = *(undefined8 *)(lVar17 + 0x70);
        lVar13 = *(long *)(lVar11 + 0x98);
        lVar9 = *(long *)(lVar17 + 0x80);
        iVar8 = 5;
        if (lVar13 == 0) {
          iVar8 = 6;
        }
        if (-1 < *(int *)(lVar9 + 0x58)) {
          lVar16 = *(long *)puVar5;
          lVar17 = nn::os::GetCurrentThread();
          if (lVar17 == lVar16) {
            bVar14 = true;
          }
          else {
            uVar10 = nn::os::GetCurrentThread();
            do {
              if (*(long *)puVar5 != 0) {
                do {
                  ClearExclusiveLocal();
                  nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
                  while (*(long *)puVar5 == 0) {
                    cVar3 = '\x01';
                    bVar14 = (bool)ExclusiveMonitorPass(puVar5,0x10);
                    if (bVar14) {
                      *(undefined8 *)puVar5 = uVar10;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                    if (cVar3 == '\0') goto LAB_02b16f94;
                  }
                } while( true );
              }
              cVar3 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(puVar5,0x10);
              if (bVar14) {
                *(undefined8 *)puVar5 = uVar10;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
LAB_02b16f94:
            bVar14 = false;
          }
          iVar6 = FUN_00c5fc50(uVar15,0xfff0b9d8,(long)*(int *)(lVar9 + 0x5c));
          iVar7 = *(int *)(lVar9 + 0x58);
          if (!bVar14) {
            *(undefined8 *)puVar5 = 0;
            nn::os::SignalLightEvent((LightEventType *)(puVar5 + 8));
          }
          if (iVar6 == iVar7) {
            if (lVar13 == 0) {
              iVar7 = FUN_00c5d9a0(uVar15,0xffffffff,auStack_78);
              if ((iVar7 != 6) || (*(int *)(lVar9 + 0x58) < 0)) goto LAB_02b16ea0;
              lVar16 = *(long *)puVar5;
              lVar17 = nn::os::GetCurrentThread();
              if (lVar17 == lVar16) {
                bVar14 = true;
              }
              else {
                uVar10 = nn::os::GetCurrentThread();
                do {
                  if (*(long *)puVar5 != 0) {
                    do {
                      ClearExclusiveLocal();
                      nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
                      while (*(long *)puVar5 == 0) {
                        cVar3 = '\x01';
                        bVar14 = (bool)ExclusiveMonitorPass(puVar5,0x10);
                        if (bVar14) {
                          *(undefined8 *)puVar5 = uVar10;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                        if (cVar3 == '\0') goto LAB_02b16fd8;
                      }
                    } while( true );
                  }
                  cVar3 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(puVar5,0x10);
                  if (bVar14) {
                    *(undefined8 *)puVar5 = uVar10;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
LAB_02b16fd8:
                bVar14 = false;
              }
              iVar6 = FUN_00c5fc50(uVar15,0xfff0b9d8,(long)*(int *)(lVar9 + 0x5c));
              iVar7 = *(int *)(lVar9 + 0x58);
              if (!bVar14) {
                *(undefined8 *)puVar5 = 0;
                nn::os::SignalLightEvent((LightEventType *)(puVar5 + 8));
              }
              if (iVar6 != iVar7) goto LAB_02b16ea0;
            }
            else {
              iVar7 = FUN_00c5d9a0(uVar15,0xffffffff,lVar13);
              if ((iVar7 != 5) || (iVar7 = FUN_00c5d9a0(uVar15,0xffffffff,auStack_78), iVar7 != 6))
              goto LAB_02b16ea0;
            }
            FUN_01424730(uVar15,param_1 + 0x150);
            FUN_00c5d960(uVar15,*param_3);
            FUN_00c5d960(uVar15,*param_4);
            FUN_00c5d960(uVar15,*param_5);
            FUN_00c419e0(uVar15,*param_6 != '\0');
            iVar7 = FUN_00c5d980(uVar15);
            FUN_00c5dbe0(uVar15,&LAB_021099f0,0);
            FUN_00c5dcd0(uVar15,iVar7 - iVar8,1);
            iVar8 = FUN_00c5ddd0(uVar15,iVar8,0,iVar7 - iVar8,0,0);
            if (iVar8 != 0) {
              uVar15 = FUN_00c646d0(uVar15,0xffffffff,0);
              *(undefined8 *)PTR_DAT_047d4238 = uVar15;
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("0","CallImpl",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/invoker.h"
                         ,0x89,"Lua panic: function(%s.%s) error: %s",lVar13,auStack_78,uVar15);
            }
          }
        }
LAB_02b16ea0:
        FUN_00c5db00(uVar15,0);
        if (!bVar4) {
          *(undefined8 *)puVar5 = 0;
          nn::os::SignalLightEvent((LightEventType *)(puVar5 + 8));
        }
        lVar13 = *(long *)(lVar11 + 8);
        psVar1 = (short *)(lVar13 + 0x1a);
        do {
          sVar12 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar12 == 1) {
          *(undefined8 *)(lVar13 + 0x10) = 0;
          (**(code **)(*(long *)(lVar11 + -0x28) + 0x50))((long *)(lVar11 + -0x28));
          return;
        }
        if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar12 = sVar2;
    } while (sVar2 != 0);
  }
  return;
}


