/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029b1f68; name: thunk_FUN_010d9d54
 */


void thunk_FUN_010d9d54(long param_1,undefined8 *param_2)

{
  long *plVar1;
  LightEventType *pLVar2;
  int *piVar3;
  uint *puVar4;
  ulong *puVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  ulong uVar21;
  long lVar22;
  long *plVar23;
  float fVar24;
  long *plStack_f0;
  long *plStack_e8;
  undefined1 *puStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long *plStack_c8;
  undefined4 uStack_c0;
  long *plStack_b8;
  undefined1 *puStack_b0;
  long *plStack_a8;
  long lStack_a0;
  long *plStack_98;
  undefined4 uStack_90;
  undefined1 *puStack_88;
  long *plStack_80;
  long lStack_78;
  long *plStack_70;
  
  if (param_2 == (undefined8 *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    uVar18 = *(ulong *)PTR_DAT_047d3e30;
    lVar19 = *(long *)(PTR_DAT_047d3e30 + 8);
    lVar22 = *(long *)(PTR_DAT_047d3e30 + 0x10);
    plVar16 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (plVar16 == (long *)0x0) goto LAB_010d9dc8;
  }
  else {
    plVar16 = (long *)param_2[1];
    puVar5 = (ulong *)PTR_DAT_047d8b70;
    if (plVar16 != (long *)0x0) {
      puVar5 = (ulong *)(plVar16 + 6);
    }
    uVar18 = *puVar5;
    plVar1 = (long *)PTR_PTR_047d4508;
    if (plVar16 != (long *)0x0) {
      plVar1 = plVar16 + 7;
    }
    lVar19 = *plVar1;
    if (plVar16 == (long *)0x0) {
      lVar22 = 0;
      goto LAB_010d9dc8;
    }
    lVar22 = plVar16[8];
  }
  (**(code **)(*plVar16 + 0x18))(plVar16);
LAB_010d9dc8:
  plVar1 = (long *)(param_1 + 0x210);
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar10;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_010d9de4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x218));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x218));
        while (*plVar1 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar10;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_010d9de4;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar10;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_010d9de4:
  if (param_2 == (undefined8 *)0x0) {
    if (*(long *)(param_1 + 0x228) != 0) {
LAB_010da494:
      *(undefined8 *)(param_1 + 0x210) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x218));
      goto LAB_010da010;
    }
  }
  else {
    uVar15 = *(ulong *)(param_1 + 0x250);
    if (uVar15 != 0) {
      uVar21 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
      uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
      uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar21 < 2) {
        uVar13 = uVar15 - 1 & uVar18;
      }
      else {
        uVar13 = uVar18;
        if (uVar15 <= uVar18) {
          uVar13 = 0;
          if (uVar15 != 0) {
            uVar13 = uVar18 / uVar15;
          }
          uVar13 = uVar18 - uVar13 * uVar15;
        }
      }
      plVar17 = *(long **)(*(long *)(param_1 + 0x248) + uVar13 * 8);
      if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
        if (uVar21 < 2) {
          do {
            if (plVar17[1] == uVar18) {
              if (plVar17[2] == uVar18) goto LAB_010da488;
            }
            else if ((plVar17[1] & uVar15 - 1) != uVar13) break;
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
        else {
          do {
            uVar21 = plVar17[1];
            if (uVar21 == uVar18) {
              if (plVar17[2] == uVar18) {
LAB_010da488:
                *(int *)(plVar17 + 6) = (int)plVar17[6] + 1;
                goto LAB_010da494;
              }
            }
            else {
              if (uVar15 <= uVar21) {
                uVar8 = 0;
                if (uVar15 != 0) {
                  uVar8 = uVar21 / uVar15;
                }
                uVar21 = uVar21 - uVar8 * uVar15;
              }
              if (uVar21 != uVar13) break;
            }
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
      }
    }
  }
  pLVar2 = (LightEventType *)(param_1 + 0x218);
  *(undefined8 *)(param_1 + 0x210) = 0;
  nn::os::SignalLightEvent(pLVar2);
  plVar17 = *(long **)(param_1 + 0x168);
  if (plVar17 == (long *)0x0) {
    plVar17 = *(long **)(param_1 + 8);
  }
  piVar3 = (int *)((long)*(uint **)(param_1 + 0x1f0) + (ulong)**(uint **)(param_1 + 0x1f0));
  if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
     (uVar15 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar15 == 0)) {
    lVar10 = 0;
  }
  else {
    puVar4 = (uint *)((long)piVar3 + uVar15);
    lVar10 = (long)puVar4 + (ulong)*puVar4;
  }
  puVar11 = (undefined1 *)(**(code **)(*plVar17 + 0x10))(plVar17,0x140,8);
  if (puVar11 == (undefined1 *)0x0) {
    lStack_78 = 0;
    plStack_70 = (long *)0x0;
    puStack_88 = (undefined1 *)0x0;
    plStack_80 = (long *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar12 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_010da6a8;
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar17;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    FUN_010da6e8(puVar11,plVar17,lVar10);
    lStack_78 = 0x140;
    plStack_70 = (long *)&DAT_00000008;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    puStack_88 = puVar11;
    plStack_80 = plVar17;
  }
  plStack_d8 = (long *)0x0;
  plStack_e8 = (long *)&DAT_cbf29ce484222645;
  puStack_e0 = &DAT_03c886bc;
  FUN_00ffd4c8(&plStack_b8,param_1 + 0x40,&plStack_e8);
  uVar20 = 0;
  if (param_2 != (undefined8 *)0x0) {
    FUN_010de8f0(&plStack_f0,param_2 + 2);
    FUN_01467264(&plStack_e8,&plStack_b8,&plStack_f0,&DAT_03c886bc);
    plVar23 = plStack_b8;
    plStack_b8 = (long *)0x0;
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x20))();
    }
    plVar23 = plStack_98;
    plStack_b8 = plStack_e8;
    plStack_e8 = (long *)0x0;
    puStack_b0 = puStack_e0;
    plStack_a8 = plStack_d8;
    lStack_a0 = lStack_d0;
    plStack_98 = (long *)0x0;
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x20))(plVar23);
    }
    plStack_98 = plStack_c8;
    plStack_c8 = (long *)0x0;
    uStack_90 = uStack_c0;
    if (plStack_e8 != (long *)0x0) {
      (**(code **)(*plStack_e8 + 0x20))();
    }
    if (plStack_f0 != (long *)0x0) {
      (**(code **)(*plStack_f0 + 0x20))();
    }
    uVar20 = *param_2;
  }
  for (plVar23 = *(long **)(puVar11 + 0x38); plVar23 != (long *)0x0; plVar23 = (long *)*plVar23) {
    (**(code **)(*(long *)plVar23[6] + 0x10))((long *)plVar23[6],plVar17,&plStack_b8,uVar20);
  }
  for (plVar23 = *(long **)(puVar11 + 0xa0); plVar23 != (long *)0x0; plVar23 = (long *)*plVar23) {
    (**(code **)(*(long *)plVar23[6] + 0x10))((long *)plVar23[6],plVar17,&plStack_b8,uVar20);
  }
  for (plVar17 = *(long **)(puVar11 + 0x38); plVar17 != (long *)0x0; plVar17 = (long *)*plVar17) {
    (**(code **)(*(long *)plVar17[6] + 0x18))();
  }
  for (plVar17 = *(long **)(puVar11 + 0xa0); plVar17 != (long *)0x0; plVar17 = (long *)*plVar17) {
    (**(code **)(*(long *)plVar17[6] + 0x18))();
  }
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar10;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_010d9fbc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent(pLVar2);
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar2);
        while (*plVar1 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar10;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_010d9fbc;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar10;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_010d9fbc:
  puVar11 = puStack_88;
  if (param_2 == (undefined8 *)0x0) {
    puStack_88 = (undefined1 *)0x0;
    lVar22 = *(long *)(param_1 + 0x228);
    *(undefined1 **)(param_1 + 0x228) = puVar11;
    if (lVar22 != 0) {
      FUN_010de998(param_1 + 0x230);
    }
    *(long **)(param_1 + 0x240) = plStack_70;
    *(long *)(param_1 + 0x238) = lStack_78;
    *(long **)(param_1 + 0x230) = plStack_80;
  }
  else {
    plStack_e8 = (long *)CONCAT44(plStack_e8._4_4_,1);
    plVar17 = (long *)(param_1 + 0x248);
    puStack_88 = (undefined1 *)0x0;
    puStack_e0 = puVar11;
    plStack_d8 = plStack_80;
    lStack_d0 = lStack_78;
    plStack_c8 = plStack_70;
    uVar21 = *(ulong *)(param_1 + 0x250);
    uVar15 = 0;
    if (uVar21 != 0) {
      uVar13 = uVar21 - 1;
      if ((uVar21 & uVar13) == 0) {
        uVar15 = uVar13 & uVar18;
        plVar23 = *(long **)(*plVar17 + uVar15 * 8);
        if (plVar23 != (long *)0x0) {
          while ((plVar23 = (long *)*plVar23, plVar23 != (long *)0x0 &&
                 (plVar23[1] == uVar18 || (plVar23[1] & uVar13) == uVar15))) {
            if (plVar23[2] == uVar18) goto LAB_010da52c;
          }
        }
      }
      else {
        uVar15 = uVar18;
        if (uVar21 <= uVar18) {
          uVar15 = 0;
          if (uVar21 != 0) {
            uVar15 = uVar18 / uVar21;
          }
          uVar15 = uVar18 - uVar15 * uVar21;
        }
        plVar23 = *(long **)(*plVar17 + uVar15 * 8);
        if (plVar23 != (long *)0x0) {
          while (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0) {
            uVar13 = plVar23[1];
            if (uVar13 != uVar18) {
              if (uVar21 <= uVar13) {
                uVar8 = 0;
                if (uVar21 != 0) {
                  uVar8 = uVar13 / uVar21;
                }
                uVar13 = uVar13 - uVar8 * uVar21;
              }
              if (uVar13 != uVar15) break;
            }
            if (plVar23[2] == uVar18) {
LAB_010da52c:
              puStack_e0 = (undefined1 *)0x0;
              if (puVar11 != (undefined1 *)0x0) {
                FUN_010de998(&plStack_d8);
              }
              goto LAB_010d9fe8;
            }
          }
        }
      }
    }
    plVar23 = (long *)(**(code **)(**(long **)(param_1 + 0x280) + 0x10))
                                (*(long **)(param_1 + 0x280),0x58,8);
    if (plVar23 == (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x280) + 0xe8))();
    }
    uVar20 = *(undefined8 *)(param_1 + 0x280);
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar10 != 0) {
      if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_010da6a8:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar20;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    }
    plVar23[2] = uVar18;
    plVar23[3] = lVar19;
    plVar23[4] = lVar22;
    plVar23[5] = (long)plVar16;
    if (plVar16 != (long *)0x0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
    puVar11 = puStack_e0;
    *(undefined4 *)(plVar23 + 6) = plStack_e8._0_4_;
    puStack_e0 = (undefined1 *)0x0;
    plVar23[9] = lStack_d0;
    plVar23[10] = (long)plStack_c8;
    plVar23[7] = (long)puVar11;
    plVar23[8] = (long)plStack_d8;
    if (lVar10 != 0) {
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    }
    *plVar23 = 0;
    plVar23[1] = uVar18;
    fVar24 = (float)(*(long *)(param_1 + 0x2a0) + 1);
    if ((uVar21 == 0) || (*(float *)(param_1 + 0x2a8) * (float)uVar21 < fVar24)) {
      uVar15 = (ulong)(uVar21 < 3 || (uVar21 & uVar21 - 1) != 0) | uVar21 << 1;
      uVar21 = (ulong)(fVar24 / *(float *)(param_1 + 0x2a8));
      if (uVar21 <= uVar15) {
        uVar21 = uVar15;
      }
      FUN_010dfc44(plVar17,uVar21);
      uVar21 = *(ulong *)(param_1 + 0x250);
      if ((uVar21 & uVar21 - 1) == 0) {
        uVar15 = uVar21 - 1 & uVar18;
      }
      else if (uVar18 < uVar21) {
        uVar15 = uVar18;
      }
      else {
        uVar15 = 0;
        if (uVar21 != 0) {
          uVar15 = uVar18 / uVar21;
        }
        uVar15 = uVar18 - uVar15 * uVar21;
      }
    }
    plVar14 = *(long **)(*plVar17 + uVar15 * 8);
    if (plVar14 == (long *)0x0) {
      *plVar23 = *(long *)(param_1 + 0x278);
      *(long **)(param_1 + 0x278) = plVar23;
      *(long *)(*(long *)(param_1 + 0x248) + uVar15 * 8) = param_1 + 0x278;
      if (*plVar23 != 0) {
        uVar18 = *(ulong *)(*plVar23 + 8);
        if ((uVar21 & uVar21 - 1) == 0) {
          uVar18 = uVar18 & uVar21 - 1;
        }
        else if (uVar21 <= uVar18) {
          uVar15 = 0;
          if (uVar21 != 0) {
            uVar15 = uVar18 / uVar21;
          }
          uVar18 = uVar18 - uVar15 * uVar21;
        }
        plVar14 = (long *)(*plVar17 + uVar18 * 8);
        goto LAB_010da438;
      }
    }
    else {
      *plVar23 = *plVar14;
LAB_010da438:
      *plVar14 = (long)plVar23;
    }
    *(long *)(param_1 + 0x2a0) = *(long *)(param_1 + 0x2a0) + 1;
    puStack_e0 = (undefined1 *)0x0;
  }
LAB_010d9fe8:
  *plVar1 = 0;
  nn::os::SignalLightEvent(pLVar2);
  if (plStack_98 != (long *)0x0) {
    (**(code **)(*plStack_98 + 0x20))();
  }
  if (plStack_b8 != (long *)0x0) {
    (**(code **)(*plStack_b8 + 0x20))();
  }
  puVar11 = puStack_88;
  puStack_88 = (undefined1 *)0x0;
  if (puVar11 != (undefined1 *)0x0) {
    FUN_010de998(&plStack_80);
  }
LAB_010da010:
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x20))(plVar16);
  }
  return;
}


