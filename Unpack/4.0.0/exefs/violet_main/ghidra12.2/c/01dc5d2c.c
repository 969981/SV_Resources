/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dc5d2c; name: FUN_01dc5d2c
 */


void FUN_01dc5d2c(long param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,
                 uint param_7,int param_8,int param_9)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  long *local_78;
  long *local_70;
  long *local_68;
  
  if ((param_2 != 3) && (param_5 != 3)) {
    if (param_2 == 0) {
      if (param_5 == 0) {
        if ((param_8 == 1) && (param_9 == 1)) {
          FUN_01dc63b4(*(undefined8 *)(param_1 + 0x38),param_3,param_4,param_6,param_7);
          FUN_01dc6528(*(undefined8 *)(param_1 + 0x40),param_3,param_4,param_6,param_7);
          return;
        }
        uVar16 = 0;
        if ((param_8 != 0) && (param_9 != 0)) {
          uVar16 = 0;
          iVar13 = 0;
          uVar11 = param_4;
          do {
            uVar14 = uVar11;
            iVar15 = param_8;
            do {
              lVar8 = FUN_010f26f8(param_1,0,param_3,uVar14);
              uVar2 = 0;
              if (lVar8 != 0) {
                uVar2 = 1 << (ulong)(uVar14 & 0x1f);
              }
              iVar15 = iVar15 + -1;
              uVar16 = uVar2 | uVar16;
              uVar14 = uVar14 + 1;
            } while (iVar15 != 0);
            iVar13 = iVar13 + 1;
            uVar11 = uVar11 + 6;
          } while (iVar13 != param_9);
        }
        uVar10 = *(undefined8 *)(param_1 + 0x38);
        local_68 = *(long **)(param_1 + 0x48);
        if (local_68 != (long *)0x0) {
          plVar7 = local_68 + 5;
          do {
            lVar8 = *plVar7;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar5) {
              *(int *)plVar7 = (int)lVar8 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((int)lVar8 == -1) {
LAB_01dc6364:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","IncrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                       ,0x53,"Reference counter overflows.");
          }
        }
        FUN_01dc662c(uVar10,param_3,param_4,param_6,param_7,param_8,param_9,&local_68,
                     *(undefined8 *)(param_1 + 0x1a8));
        if (local_68 != (long *)0x0) {
          plVar7 = local_68 + 5;
          do {
            lVar8 = *plVar7;
            iVar13 = (int)lVar8 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar5) {
              *(int *)plVar7 = iVar13;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar13 == 0) {
            (**(code **)(*local_68 + 0x10))();
          }
          else if ((int)lVar8 == 0) {
LAB_01dc638c:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
        if ((param_3 == param_6) && (param_4 < param_7)) {
          if ((0 < param_9) && (0 < param_8)) {
            iVar13 = param_7 + param_9 * 6;
            iVar15 = param_4 + param_9 * 6;
            do {
              iVar12 = param_8 + -7;
              do {
                if ((uVar16 >> (ulong)(iVar15 + iVar12 & 0x1f) & 1) != 0) {
                  FUN_01dc6528(*(undefined8 *)(param_1 + 0x40),param_3,iVar15 + iVar12,param_3,
                               iVar13 + iVar12);
                }
                iVar6 = iVar12 + 7;
                iVar12 = iVar12 + -1;
              } while (1 < iVar6);
              iVar13 = iVar13 + -6;
              iVar15 = iVar15 + -6;
              bVar5 = 1 < param_9;
              param_9 = param_9 + -1;
            } while (bVar5);
          }
        }
        else if ((param_9 != 0) && (param_8 != 0)) {
          iVar13 = 0;
          do {
            uVar14 = param_4;
            iVar15 = param_8;
            uVar11 = param_7;
            do {
              if ((uVar16 >> (ulong)(uVar14 & 0x1f) & 1) != 0) {
                FUN_01dc6528(*(undefined8 *)(param_1 + 0x40),param_3,uVar14,param_6,uVar11);
              }
              uVar11 = uVar11 + 1;
              uVar14 = uVar14 + 1;
              iVar15 = iVar15 + -1;
            } while (iVar15 != 0);
            param_4 = param_4 + 6;
            iVar13 = iVar13 + 1;
            param_7 = param_7 + 6;
          } while (iVar13 != param_9);
        }
      }
      else {
        bVar5 = param_7 < *(byte *)(*(long *)(param_1 + 0x30) + 0x90);
        param_6 = param_3;
        uVar16 = param_7;
        param_7 = param_4;
        if (bVar5) goto LAB_01dc5e0c;
        if ((param_9 != 0) && (param_8 != 0)) {
          iVar13 = 0;
          do {
            iVar15 = 0;
            do {
              iVar12 = param_4 % 6 + (iVar13 + param_4 / 6) * 6 + iVar15;
              lVar8 = FUN_010f26f8(param_1,0,param_3,iVar12);
              if (lVar8 != 0) {
                uVar9 = (**(code **)(**(long **)(param_1 + 0x30) + 0x28))
                                  (*(long **)(param_1 + 0x30),lVar8);
                if ((uVar9 & 1) != 0) {
                  uVar10 = *(undefined8 *)(param_1 + 0x38);
                  plVar7 = *(long **)(param_1 + 0x48);
                  local_70 = plVar7;
                  if (plVar7 == (long *)0x0) {
                    FUN_0152ed18(uVar10,param_3,iVar12,&local_70);
                  }
                  else {
                    plVar1 = plVar7 + 5;
                    do {
                      lVar8 = *plVar1;
                      cVar4 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                      if (bVar5) {
                        *(int *)plVar1 = (int)lVar8 + 1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    if ((int)lVar8 == -1) goto LAB_01dc6364;
                    FUN_0152ed18(uVar10,param_3,iVar12,&local_70);
                    if (plVar7 != (long *)0x0) {
                      plVar1 = plVar7 + 5;
                      do {
                        lVar8 = *plVar1;
                        iVar6 = (int)lVar8 + -1;
                        cVar4 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                        if (bVar5) {
                          *(int *)plVar1 = iVar6;
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                      if (iVar6 == 0) {
                        (**(code **)(*plVar7 + 0x10))(plVar7);
                      }
                      else if ((int)lVar8 == 0) goto LAB_01dc638c;
                    }
                  }
                }
                FUN_01dc6af4(*(undefined8 *)(param_1 + 0x40),param_3,iVar12);
                FUN_01dc6c18(*(undefined8 *)(param_1 + 0x40),0);
                FUN_01dc6c18(*(undefined8 *)(param_1 + 0x40),1);
                FUN_01dc6c18(*(undefined8 *)(param_1 + 0x40),2);
                FUN_01dc6c18(*(undefined8 *)(param_1 + 0x40),3);
                FUN_01dc6c18(*(undefined8 *)(param_1 + 0x40),4);
                FUN_01dc6c18(*(undefined8 *)(param_1 + 0x40),5);
              }
              iVar15 = iVar15 + 1;
            } while (iVar15 != param_8);
            iVar13 = iVar13 + 1;
          } while (iVar13 != param_9);
        }
      }
    }
    else if (param_5 == 0) {
      uVar16 = param_4;
      if (param_9 == 1) {
LAB_01dc5e0c:
        FUN_01dc6fe4(param_1,param_6,param_7,uVar16);
        return;
      }
      if (param_9 != 0) {
        iVar13 = 0;
        do {
          uVar10 = (**(code **)(**(long **)(param_1 + 0x30) + 0x68))
                             (*(long **)(param_1 + 0x30),param_4);
          FUN_00feea48(*(undefined8 *)(param_1 + 0x48),uVar10);
          uVar10 = *(undefined8 *)(param_1 + 0x38);
          local_78 = *(long **)(param_1 + 0x48);
          if (local_78 == (long *)0x0) {
            plVar7 = (long *)0x0;
          }
          else {
            plVar7 = local_78 + 5;
            do {
              lVar8 = *plVar7;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar5) {
                *(int *)plVar7 = (int)lVar8 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if ((int)lVar8 == -1) goto LAB_01dc6364;
            plVar7 = local_78;
          }
          FUN_0152ee44(uVar10,&local_78,param_6,param_7 + iVar13 * 6);
          if (plVar7 != (long *)0x0) {
            plVar1 = plVar7 + 5;
            do {
              lVar8 = *plVar1;
              iVar15 = (int)lVar8 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *(int *)plVar1 = iVar15;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar15 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
            else if ((int)lVar8 == 0) goto LAB_01dc638c;
          }
          (**(code **)(**(long **)(param_1 + 0x30) + 0x48))(*(long **)(param_1 + 0x30),param_4);
          iVar13 = iVar13 + 1;
        } while (iVar13 != param_9);
      }
    }
    else {
      plVar7 = *(long **)(param_1 + 0x30);
      bVar3 = *(byte *)(plVar7 + 0x12);
      if (param_9 == 1) {
        if (param_7 < bVar3) {
                    /* WARNING: Could not recover jumptable at 0x01dc5dbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar7 + 0x50))(plVar7,param_4,param_7);
          return;
        }
        uVar10 = (**(code **)(*plVar7 + 0x68))(plVar7,param_4);
        FUN_00f329b4(uVar10,param_1 + 0x50);
        (**(code **)(**(long **)(param_1 + 0x30) + 0x48))(*(long **)(param_1 + 0x30),param_4);
        FUN_00f13ad8(*(undefined8 *)(param_1 + 0x48),param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x01dc6144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 0x30) + 0x28))
                  (*(long **)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x48));
        return;
      }
      if ((param_9 != 0) && (bVar3 <= param_7)) {
        while( true ) {
          (**(code **)(*plVar7 + 0x50))(plVar7,param_4,bVar3);
          param_9 = param_9 + -1;
          if (param_9 == 0) break;
          plVar7 = *(long **)(param_1 + 0x30);
        }
      }
    }
  }
  return;
}


