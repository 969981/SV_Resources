/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a077e8; name: FUN_02a077e8
 */


uint FUN_02a077e8(undefined8 param_1)

{
  long *plVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  ushort uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  short sVar12;
  int iVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  undefined8 *puVar23;
  uint uVar24;
  long *plVar25;
  long *local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  
  puVar9 = PTR_DAT_047d4c98;
  if (((*PTR_DAT_047d4c98 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar13 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  puVar11 = PTR_DAT_047d4ca8;
  puVar10 = PTR_DAT_047d4ca0;
  lVar19 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar19;
  puVar8 = PTR_DAT_047d4890;
  puVar7 = PTR_DAT_047d4888;
  plVar25 = *(long **)(lVar19 + 0x1c8);
  for (plVar22 = *(long **)(lVar19 + 0x1c0); plVar22 != plVar25; plVar22 = plVar22 + 1) {
    lVar19 = *plVar22;
    puVar23 = (undefined8 *)(lVar19 + 0x28);
    plVar14 = (long *)(**(code **)*puVar23)(puVar23);
    if (((*puVar7 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar7), iVar13 != 0)) {
      uVar18 = FUN_01b3fb0c();
      *(undefined8 *)puVar8 = uVar18;
      __cxa_guard_release(puVar7);
    }
    for (; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
      if (plVar14 == (long *)puVar8) {
        if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d4c98);
        }
        lVar20 = *(long *)puVar10;
        *(long *)puVar11 = lVar20;
        puVar7 = PTR_DAT_047d8f00;
        puVar9 = PTR_DAT_047d8ef8;
        plVar22 = *(long **)(lVar20 + 0x1c0);
        plVar25 = *(long **)(lVar20 + 0x1c8);
        goto joined_r0x02a078cc;
      }
    }
  }
LAB_02a083c8:
  uVar24 = 0;
LAB_02a0836c:
  return uVar24 & 1;
joined_r0x02a078cc:
  if (plVar22 == plVar25) goto LAB_02a083c8;
  lVar20 = *plVar22;
  plVar14 = (long *)(*(code *)**(undefined8 **)(lVar20 + 0x28))((undefined8 *)(lVar20 + 0x28));
  if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar9), iVar13 != 0)) {
    uVar18 = FUN_01b3fb0c();
    *(undefined8 *)puVar7 = uVar18;
    __cxa_guard_release(puVar9);
  }
  while( true ) {
    if (plVar14 == (long *)0x0) goto LAB_02a07918;
    if (plVar14 == (long *)puVar7) break;
    plVar14 = (long *)*plVar14;
  }
  if (((*PTR_DAT_047d4568 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_047d4568), iVar13 != 0)) {
    FUN_00100190(&LAB_02ace3a0,PTR_DAT_047d4570,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4568);
  }
  lVar21 = *(long *)PTR_DAT_047d4570;
  *(long *)PTR_DAT_047d4578 = lVar21;
  local_68 = *(long **)(lVar21 + 0x28);
  if (local_68 != (long *)0x0) {
    plVar22 = local_68 + 5;
    do {
      lVar21 = *plVar22;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar4) {
        *(int *)plVar22 = (int)lVar21 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar21 == -1) goto LAB_02a084cc;
  }
  uVar15 = FUN_02a084f8(param_1,&local_68);
  plVar22 = local_68;
  puVar9 = PTR_DAT_047d8cc8;
  if ((uVar15 & 1) == 0) {
    uVar15 = 0;
    plVar14 = (long *)0x0;
    plVar22 = (long *)PTR_DAT_047d8cd0;
    do {
      uVar16 = FUN_01b28ff0(uVar15 & 0xffffffff);
      if ((uVar16 & 1) != 0) {
        if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar9), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d94a0,plVar22,&PTR_LOOP_04483000);
          __cxa_guard_release(puVar9);
        }
        lVar21 = *plVar22;
        *(long *)PTR_DAT_047d8cd8 = lVar21;
        if (lVar21 == 0) {
          uVar18 = 0;
        }
        else {
          uVar18 = *(undefined8 *)(lVar21 + 0x50);
        }
        local_70 = (long *)FUN_0167513c(&local_78,uVar18);
        if (local_70 != (long *)0x0) {
          plVar1 = local_70 + 5;
          do {
            lVar21 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = (int)lVar21 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((int)lVar21 == -1) goto LAB_02a084cc;
        }
        FUN_01b2af80(&local_78,uVar15 & 0xffffffff,0);
        if (local_78 != (long *)0x0) {
          lVar21 = local_78[0xe];
          if ((*(byte *)(*(long *)(lVar21 + 0x10) + 4) >> 2 & 1) == 0) {
            sVar12 = FUN_00cf44f4();
            if (sVar12 != 0) {
              lVar21 = local_78[0xe];
              goto LAB_02a07dc0;
            }
          }
          else {
LAB_02a07dc0:
            sVar12 = FUN_00cf44f4(lVar21);
            if (sVar12 != 0) {
              (**(code **)(*local_70 + 0x28))(local_70,local_78);
            }
          }
          if (local_78 != (long *)0x0) {
            plVar1 = local_78 + 5;
            do {
              lVar21 = *plVar1;
              iVar13 = (int)lVar21 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *(int *)plVar1 = iVar13;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar13 == 0) {
              (**(code **)(*local_78 + 0x10))();
            }
            else if ((int)lVar21 == 0) goto LAB_02a08484;
          }
        }
        FUN_01b2af80(&local_78,uVar15 & 0xffffffff,1);
        if (local_78 != (long *)0x0) {
          lVar21 = local_78[0xe];
          if ((*(byte *)(*(long *)(lVar21 + 0x10) + 4) >> 2 & 1) == 0) {
            sVar12 = FUN_00cf44f4();
            if (sVar12 != 0) {
              lVar21 = local_78[0xe];
              goto LAB_02a07e40;
            }
          }
          else {
LAB_02a07e40:
            sVar12 = FUN_00cf44f4(lVar21);
            if (sVar12 != 0) {
              (**(code **)(*local_70 + 0x28))(local_70,local_78);
            }
          }
          if (local_78 != (long *)0x0) {
            plVar1 = local_78 + 5;
            do {
              lVar21 = *plVar1;
              iVar13 = (int)lVar21 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *(int *)plVar1 = iVar13;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar13 == 0) {
              (**(code **)(*local_78 + 0x10))();
            }
            else if ((int)lVar21 == 0) goto LAB_02a08484;
          }
        }
        FUN_01b2af80(&local_78,uVar15 & 0xffffffff,2);
        if (local_78 != (long *)0x0) {
          lVar21 = local_78[0xe];
          if ((*(byte *)(*(long *)(lVar21 + 0x10) + 4) >> 2 & 1) == 0) {
            sVar12 = FUN_00cf44f4();
            if (sVar12 != 0) {
              lVar21 = local_78[0xe];
              goto LAB_02a07ec0;
            }
          }
          else {
LAB_02a07ec0:
            sVar12 = FUN_00cf44f4(lVar21);
            if (sVar12 != 0) {
              (**(code **)(*local_70 + 0x28))(local_70,local_78);
            }
          }
          if (local_78 != (long *)0x0) {
            plVar1 = local_78 + 5;
            do {
              lVar21 = *plVar1;
              iVar13 = (int)lVar21 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *(int *)plVar1 = iVar13;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar13 == 0) {
              (**(code **)(*local_78 + 0x10))();
            }
            else if ((int)lVar21 == 0) goto LAB_02a08484;
          }
        }
        FUN_01b2af80(&local_78,uVar15 & 0xffffffff,3);
        if (local_78 != (long *)0x0) {
          lVar21 = local_78[0xe];
          if ((*(byte *)(*(long *)(lVar21 + 0x10) + 4) >> 2 & 1) == 0) {
            sVar12 = FUN_00cf44f4();
            if (sVar12 != 0) {
              lVar21 = local_78[0xe];
              goto LAB_02a07f40;
            }
          }
          else {
LAB_02a07f40:
            sVar12 = FUN_00cf44f4(lVar21);
            if (sVar12 != 0) {
              (**(code **)(*local_70 + 0x28))(local_70,local_78);
            }
          }
          if (local_78 != (long *)0x0) {
            plVar1 = local_78 + 5;
            do {
              lVar21 = *plVar1;
              iVar13 = (int)lVar21 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *(int *)plVar1 = iVar13;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar13 == 0) {
              (**(code **)(*local_78 + 0x10))();
            }
            else if ((int)lVar21 == 0) goto LAB_02a08484;
          }
        }
        FUN_01b2af80(&local_78,uVar15 & 0xffffffff,4);
        if (local_78 != (long *)0x0) {
          lVar21 = local_78[0xe];
          if ((*(byte *)(*(long *)(lVar21 + 0x10) + 4) >> 2 & 1) == 0) {
            sVar12 = FUN_00cf44f4();
            if (sVar12 != 0) {
              lVar21 = local_78[0xe];
              goto LAB_02a07fc0;
            }
          }
          else {
LAB_02a07fc0:
            sVar12 = FUN_00cf44f4(lVar21);
            if (sVar12 != 0) {
              (**(code **)(*local_70 + 0x28))(local_70,local_78);
            }
          }
          if (local_78 != (long *)0x0) {
            plVar1 = local_78 + 5;
            do {
              lVar21 = *plVar1;
              iVar13 = (int)lVar21 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *(int *)plVar1 = iVar13;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar13 == 0) {
              (**(code **)(*local_78 + 0x10))();
            }
            else if ((int)lVar21 == 0) goto LAB_02a08484;
          }
        }
        FUN_01b2af80(&local_78,uVar15 & 0xffffffff,5);
        if (local_78 != (long *)0x0) {
          lVar21 = local_78[0xe];
          if ((*(byte *)(*(long *)(lVar21 + 0x10) + 4) >> 2 & 1) == 0) {
            sVar12 = FUN_00cf44f4();
            if (sVar12 != 0) {
              lVar21 = local_78[0xe];
              goto LAB_02a08040;
            }
          }
          else {
LAB_02a08040:
            sVar12 = FUN_00cf44f4(lVar21);
            if (sVar12 != 0) {
              (**(code **)(*local_70 + 0x28))(local_70,local_78);
            }
          }
          if (local_78 != (long *)0x0) {
            plVar1 = local_78 + 5;
            do {
              lVar21 = *plVar1;
              iVar13 = (int)lVar21 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *(int *)plVar1 = iVar13;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar13 == 0) {
              (**(code **)(*local_78 + 0x10))();
            }
            else if ((int)lVar21 == 0) goto LAB_02a08484;
          }
        }
        uVar16 = FUN_02a084f8(param_1,&local_70);
        if ((uVar16 & 1) == 0) {
          bVar4 = true;
          plVar25 = (long *)((ulong)plVar25 & 0xffffffff);
        }
        else {
          lVar21 = 0;
          do {
            uVar2 = *(ushort *)(lVar19 + uVar15 * 0xc + lVar21 * 2 + 0x526);
            uVar6 = uVar2 >> 8;
            if (uVar6 < 0x21 && (uVar2 & 0xfe) < 0x1e) {
              FUN_00eebacc(&local_78,lVar20,uVar6,uVar2 & 0xff);
              plVar22 = local_78;
              lVar17 = local_78[0xe];
              if ((*(byte *)(*(long *)(lVar17 + 0x10) + 4) >> 2 & 1) == 0) {
                sVar12 = FUN_00cf44f4();
                if (sVar12 != 0) {
                  lVar17 = plVar22[0xe];
                  goto LAB_02a080f8;
                }
              }
              else {
LAB_02a080f8:
                uVar16 = FUN_00cf4cfc(lVar17);
                if (((uVar16 & 1) == 0) &&
                   ((*(ushort *)(*(long *)(plVar22[0xe] + 0x10) + 4) >> 2 & 1) == 0)) {
                  if (0x33 < *(uint *)(*(long *)PTR_DAT_047d90c8 + 0x3d4)) {
                    uVar16 = FUN_00e99324(plVar22[0xe],0x34);
                    if ((uVar16 & 1) != 0) goto LAB_02a08198;
                    if (0x33 < *(uint *)(*(long *)PTR_DAT_047d90c8 + 0x3d4)) {
                      FUN_01e2ab50(plVar22[0xe],0x34);
                    }
                  }
                  plVar25 = plVar22 + 5;
                  local_80 = plVar22;
                  do {
                    lVar17 = *plVar25;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                    if (bVar4) {
                      *(int *)plVar25 = (int)lVar17 + 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if ((int)lVar17 == -1) {
LAB_02a084cc:
                    /* WARNING: Subroutine does not return */
                    nn::diag::detail::AbortImpl
                              ("count != 0","IncrementReferenceInternal",
                               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                               ,0x53,"Reference counter overflows.");
                  }
                  FUN_0152e9a8(lVar20,uVar6,uVar2 & 0xff,&local_80);
                  if (local_80 != (long *)0x0) {
                    plVar22 = local_80 + 5;
                    do {
                      iVar13 = (int)*plVar22;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                      if (bVar4) {
                        *(int *)plVar22 = iVar13 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (iVar13 == 1) {
                      (**(code **)(*local_80 + 0x10))();
                    }
                    else if (iVar13 == 0) goto LAB_02a08484;
                  }
                  plVar14 = (long *)0x1;
                }
              }
LAB_02a08198:
              if (local_78 != (long *)0x0) {
                plVar22 = local_78 + 5;
                do {
                  lVar17 = *plVar22;
                  iVar13 = (int)lVar17 + -1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                  if (bVar4) {
                    *(int *)plVar22 = iVar13;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar13 == 0) {
                  (**(code **)(*local_78 + 0x10))();
                }
                else if ((int)lVar17 == 0) goto LAB_02a08484;
              }
            }
            lVar21 = lVar21 + 1;
          } while (lVar21 != 6);
          bVar4 = false;
          plVar22 = (long *)PTR_DAT_047d8cd0;
          plVar25 = plVar14;
        }
        uVar24 = (uint)plVar25;
        if (local_70 != (long *)0x0) {
          plVar1 = local_70 + 5;
          do {
            lVar21 = *plVar1;
            iVar13 = (int)lVar21 + -1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *(int *)plVar1 = iVar13;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar13 == 0) {
            (**(code **)(*local_70 + 0x10))();
          }
          else if ((int)lVar21 == 0) goto LAB_02a08484;
        }
        if (bVar4) goto LAB_02a08264;
        break;
      }
      plVar25 = (long *)((ulong)plVar25 & 0xffffffff);
LAB_02a08264:
      uVar24 = (uint)plVar14;
      uVar15 = uVar15 + 1;
    } while (uVar15 != 6);
    plVar22 = local_68;
    if (local_68 == (long *)0x0) goto LAB_02a0836c;
  }
  else {
    lVar19 = (**(code **)(*local_68 + 0x60))(local_68,0);
    if (lVar19 == 0) {
LAB_02a07a28:
      uVar24 = 0;
    }
    else {
      lVar20 = *(long *)(lVar19 + 0x70);
      if ((*(byte *)(*(long *)(lVar20 + 0x10) + 4) >> 2 & 1) == 0) {
        sVar12 = FUN_00cf44f4();
        if (sVar12 == 0) goto LAB_02a07a28;
        lVar20 = *(long *)(lVar19 + 0x70);
      }
      uVar15 = FUN_00cf4cfc(lVar20);
      puVar9 = PTR_DAT_047d90c8;
      uVar24 = 0;
      if (((uVar15 & 1) == 0) &&
         ((*(ushort *)(*(long *)(*(long *)(lVar19 + 0x70) + 0x10) + 4) >> 2 & 1) == 0)) {
        if (0x33 < *(uint *)(*(long *)PTR_DAT_047d90c8 + 0x3d4)) {
          uVar15 = FUN_00e99324(*(long *)(lVar19 + 0x70),0x34);
          if ((uVar15 & 1) != 0) goto LAB_02a07a28;
          if (0x33 < *(uint *)(*(long *)puVar9 + 0x3d4)) {
            FUN_01e2ab50(*(undefined8 *)(lVar19 + 0x70),0x34);
          }
        }
        uVar24 = 1;
      }
    }
    lVar19 = (**(code **)(*plVar22 + 0x60))(plVar22,1);
    if (lVar19 != 0) {
      lVar20 = *(long *)(lVar19 + 0x70);
      if ((*(byte *)(*(long *)(lVar20 + 0x10) + 4) >> 2 & 1) == 0) {
        sVar12 = FUN_00cf44f4();
        if (sVar12 == 0) goto LAB_02a07ac4;
        lVar20 = *(long *)(lVar19 + 0x70);
      }
      uVar15 = FUN_00cf4cfc(lVar20);
      puVar9 = PTR_DAT_047d90c8;
      if (((uVar15 & 1) == 0) &&
         ((*(ushort *)(*(long *)(*(long *)(lVar19 + 0x70) + 0x10) + 4) >> 2 & 1) == 0)) {
        if (0x33 < *(uint *)(*(long *)PTR_DAT_047d90c8 + 0x3d4)) {
          uVar15 = FUN_00e99324(*(long *)(lVar19 + 0x70),0x34);
          if ((uVar15 & 1) != 0) goto LAB_02a07ac4;
          if (0x33 < *(uint *)(*(long *)puVar9 + 0x3d4)) {
            FUN_01e2ab50(*(undefined8 *)(lVar19 + 0x70),0x34);
          }
        }
        uVar24 = 1;
      }
    }
LAB_02a07ac4:
    lVar19 = (**(code **)(*plVar22 + 0x60))(plVar22,2);
    if (lVar19 != 0) {
      lVar20 = *(long *)(lVar19 + 0x70);
      if ((*(byte *)(*(long *)(lVar20 + 0x10) + 4) >> 2 & 1) == 0) {
        sVar12 = FUN_00cf44f4();
        if (sVar12 == 0) goto LAB_02a07b5c;
        lVar20 = *(long *)(lVar19 + 0x70);
      }
      uVar15 = FUN_00cf4cfc(lVar20);
      puVar9 = PTR_DAT_047d90c8;
      if (((uVar15 & 1) == 0) &&
         ((*(ushort *)(*(long *)(*(long *)(lVar19 + 0x70) + 0x10) + 4) >> 2 & 1) == 0)) {
        if (0x33 < *(uint *)(*(long *)PTR_DAT_047d90c8 + 0x3d4)) {
          uVar15 = FUN_00e99324(*(long *)(lVar19 + 0x70),0x34);
          if ((uVar15 & 1) != 0) goto LAB_02a07b5c;
          if (0x33 < *(uint *)(*(long *)puVar9 + 0x3d4)) {
            FUN_01e2ab50(*(undefined8 *)(lVar19 + 0x70),0x34);
          }
        }
        uVar24 = 1;
      }
    }
LAB_02a07b5c:
    lVar19 = (**(code **)(*plVar22 + 0x60))(plVar22,3);
    if (lVar19 != 0) {
      lVar20 = *(long *)(lVar19 + 0x70);
      if ((*(byte *)(*(long *)(lVar20 + 0x10) + 4) >> 2 & 1) == 0) {
        sVar12 = FUN_00cf44f4();
        if (sVar12 == 0) goto LAB_02a07bf4;
        lVar20 = *(long *)(lVar19 + 0x70);
      }
      uVar15 = FUN_00cf4cfc(lVar20);
      puVar9 = PTR_DAT_047d90c8;
      if (((uVar15 & 1) == 0) &&
         ((*(ushort *)(*(long *)(*(long *)(lVar19 + 0x70) + 0x10) + 4) >> 2 & 1) == 0)) {
        if (0x33 < *(uint *)(*(long *)PTR_DAT_047d90c8 + 0x3d4)) {
          uVar15 = FUN_00e99324(*(long *)(lVar19 + 0x70),0x34);
          if ((uVar15 & 1) != 0) goto LAB_02a07bf4;
          if (0x33 < *(uint *)(*(long *)puVar9 + 0x3d4)) {
            FUN_01e2ab50(*(undefined8 *)(lVar19 + 0x70),0x34);
          }
        }
        uVar24 = 1;
      }
    }
LAB_02a07bf4:
    lVar19 = (**(code **)(*plVar22 + 0x60))(plVar22,4);
    if (lVar19 != 0) {
      lVar20 = *(long *)(lVar19 + 0x70);
      if ((*(byte *)(*(long *)(lVar20 + 0x10) + 4) >> 2 & 1) == 0) {
        sVar12 = FUN_00cf44f4();
        if (sVar12 == 0) goto LAB_02a07c8c;
        lVar20 = *(long *)(lVar19 + 0x70);
      }
      uVar15 = FUN_00cf4cfc(lVar20);
      puVar9 = PTR_DAT_047d90c8;
      if (((uVar15 & 1) == 0) &&
         ((*(ushort *)(*(long *)(*(long *)(lVar19 + 0x70) + 0x10) + 4) >> 2 & 1) == 0)) {
        if (0x33 < *(uint *)(*(long *)PTR_DAT_047d90c8 + 0x3d4)) {
          uVar15 = FUN_00e99324(*(long *)(lVar19 + 0x70),0x34);
          if ((uVar15 & 1) != 0) goto LAB_02a07c8c;
          if (0x33 < *(uint *)(*(long *)puVar9 + 0x3d4)) {
            FUN_01e2ab50(*(undefined8 *)(lVar19 + 0x70),0x34);
          }
        }
        uVar24 = 1;
      }
    }
LAB_02a07c8c:
    lVar19 = (**(code **)(*plVar22 + 0x60))(plVar22,5);
    if (lVar19 != 0) {
      lVar20 = *(long *)(lVar19 + 0x70);
      if ((*(byte *)(*(long *)(lVar20 + 0x10) + 4) >> 2 & 1) == 0) {
        sVar12 = FUN_00cf44f4();
        if (sVar12 == 0) goto LAB_02a08350;
        lVar20 = *(long *)(lVar19 + 0x70);
      }
      uVar15 = FUN_00cf4cfc(lVar20);
      puVar9 = PTR_DAT_047d90c8;
      if (((uVar15 & 1) == 0) &&
         ((*(ushort *)(*(long *)(*(long *)(lVar19 + 0x70) + 0x10) + 4) >> 2 & 1) == 0)) {
        if (0x33 < *(uint *)(*(long *)PTR_DAT_047d90c8 + 0x3d4)) {
          uVar15 = FUN_00e99324(*(long *)(lVar19 + 0x70),0x34);
          if ((uVar15 & 1) != 0) goto LAB_02a08350;
          if (0x33 < *(uint *)(*(long *)puVar9 + 0x3d4)) {
            FUN_01e2ab50(*(undefined8 *)(lVar19 + 0x70),0x34);
          }
        }
        uVar24 = 1;
      }
    }
  }
LAB_02a08350:
  plVar25 = plVar22 + 5;
  do {
    lVar19 = *plVar25;
    iVar13 = (int)lVar19 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar25,0x10);
    if (bVar4) {
      *(int *)plVar25 = iVar13;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar13 == 0) {
    (**(code **)(*plVar22 + 0x10))(plVar22);
  }
  else if ((int)lVar19 == 0) {
LAB_02a08484:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
  goto LAB_02a0836c;
LAB_02a07918:
  plVar22 = plVar22 + 1;
  goto joined_r0x02a078cc;
}


