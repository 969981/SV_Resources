/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01568734; name: FUN_01568734
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01568734(long param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 *puVar3;
  MutexType *pMVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  bool bVar16;
  long *plVar17;
  undefined8 uVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  float *pfVar25;
  uint uVar26;
  undefined4 uVar27;
  int iVar28;
  uint uVar29;
  undefined1 auVar30 [12];
  int iVar36;
  int iVar37;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar31 [12];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  int iVar40;
  int iVar41;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  long *local_c8;
  long *local_c0;
  long *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  float local_80;
  float fStack_7c;
  float fStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  long *local_48;
  
  if (*(int *)(param_1 + 0x74) != 2) {
    return 0;
  }
  local_48 = (long *)0x0;
  if (param_2 == 0) {
    param_2 = *(int *)(param_1 + 0x100);
  }
  local_b0 = *(undefined8 *)PTR_DAT_047ddaf0;
  uStack_a8 = *(undefined8 *)(PTR_DAT_047ddaf0 + 8);
  local_a0 = *(undefined8 *)(PTR_DAT_047ddaf0 + 0x10);
  uStack_98 = *(ulong *)(PTR_DAT_047ddaf0 + 0x18);
  if (param_2 == 3) {
    FUN_00cb1ce0(param_1 + 0x160,&local_48);
LAB_0156879c:
    bVar16 = false;
  }
  else {
    if (param_2 == 2) {
      FUN_00cb4960(param_1 + 0x130,&local_48);
      goto LAB_0156879c;
    }
    if (param_2 == 1) {
      auVar38 = *(undefined1 (*) [16])(param_1 + 0x110);
      auVar42 = NEON_ext(auVar38,auVar38,8,1);
      uStack_88 = (ulong)auVar42._0_4_;
      local_90 = auVar38._0_8_;
      FUN_00e81a84(&local_70,&local_90);
      plVar17 = local_48;
      local_48 = local_70;
      local_70 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        if (plVar17[1] != 0) {
          plVar20 = plVar17 + 2;
          do {
            lVar23 = *plVar20;
            cVar6 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar16) {
              *plVar20 = lVar23 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar23 + -1 == 0) {
            (**(code **)(*plVar17 + 0x18))();
          }
        }
        if ((local_70 != (long *)0x0) && (local_70[1] != 0)) {
          plVar17 = local_70 + 2;
          do {
            lVar23 = *plVar17;
            cVar6 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar16) {
              *plVar17 = lVar23 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar23 + -1 == 0) {
            (**(code **)(*local_70 + 0x18))();
          }
        }
      }
      goto LAB_0156879c;
    }
    if (param_2 != 4) {
      return 0;
    }
    local_90 = (long *)0x0;
    local_70 = (long *)0x0;
    FUN_00cb3978(param_1 + 400,&local_70,&local_90);
    plVar17 = local_90;
    fVar8 = *(float *)(param_1 + 0x1a0);
    fVar9 = *(float *)(param_1 + 0x1a4);
    fVar10 = *(float *)(param_1 + 0x1a8);
    fVar11 = *(float *)(param_1 + 0x1ac);
    auVar38._0_4_ = fVar8 * fVar8 + fVar9 * fVar9;
    auVar38._4_4_ = fVar10 * fVar10 + fVar11 * fVar11;
    auVar38._8_4_ = fVar8 * fVar8 + fVar9 * fVar9;
    auVar38._12_4_ = fVar10 * fVar10 + fVar11 * fVar11;
    auVar38 = NEON_ext(auVar38,auVar38,4,1);
    auVar42._0_4_ = auVar38._0_4_ + auVar38._4_4_;
    auVar42._4_4_ = auVar38._8_4_ + auVar38._12_4_;
    auVar42._8_4_ = auVar38._0_4_ + auVar38._4_4_;
    auVar42._12_4_ = auVar38._8_4_ + auVar38._12_4_;
    if (((int)SQRT(auVar42._0_4_) + 0x800000U & 0x7f000000) == 0) {
      auVar46._8_8_ = _UNK_03cabe58;
      auVar46._0_8_ = _DAT_03cabe50;
    }
    else {
      auVar38 = NEON_frsqrte(auVar42,4);
      auVar45._0_4_ = auVar42._0_4_ * auVar38._0_4_;
      auVar45._4_4_ = auVar42._4_4_ * auVar38._4_4_;
      auVar45._8_4_ = auVar42._8_4_ * auVar38._8_4_;
      auVar45._12_4_ = auVar42._12_4_ * auVar38._12_4_;
      auVar46 = NEON_frsqrts(auVar38,auVar45,4);
      auVar43._0_4_ = auVar38._0_4_ * auVar46._0_4_;
      auVar43._4_4_ = auVar38._4_4_ * auVar46._4_4_;
      auVar43._8_4_ = auVar38._8_4_ * auVar46._8_4_;
      auVar43._12_4_ = auVar38._12_4_ * auVar46._12_4_;
      auVar47._0_4_ = auVar42._0_4_ * auVar43._0_4_;
      auVar47._4_4_ = auVar42._4_4_ * auVar43._4_4_;
      auVar47._8_4_ = auVar42._8_4_ * auVar43._8_4_;
      auVar47._12_4_ = auVar42._12_4_ * auVar43._12_4_;
      iVar28 = -(uint)(auVar42._0_4_ == 0.0);
      iVar36 = -(uint)(auVar42._4_4_ == 0.0);
      iVar37 = -(uint)(auVar42._8_4_ == 0.0);
      iVar40 = -(uint)(auVar42._12_4_ == 0.0);
      auVar39[0] = ~(byte)iVar28;
      auVar39[1] = ~(byte)((uint)iVar28 >> 8);
      auVar39[2] = ~(byte)((uint)iVar28 >> 0x10);
      auVar39[3] = ~(byte)((uint)iVar28 >> 0x18);
      auVar39[4] = ~(byte)iVar36;
      auVar39[5] = ~(byte)((uint)iVar36 >> 8);
      auVar39[6] = ~(byte)((uint)iVar36 >> 0x10);
      auVar39[7] = ~(byte)((uint)iVar36 >> 0x18);
      auVar39[8] = ~(byte)iVar37;
      auVar39[9] = ~(byte)((uint)iVar37 >> 8);
      auVar39[10] = ~(byte)((uint)iVar37 >> 0x10);
      auVar39[0xb] = ~(byte)((uint)iVar37 >> 0x18);
      auVar39[0xc] = ~(byte)iVar40;
      auVar39[0xd] = ~(byte)((uint)iVar40 >> 8);
      auVar39[0xe] = ~(byte)((uint)iVar40 >> 0x10);
      auVar39[0xf] = ~(byte)((uint)iVar40 >> 0x18);
      auVar38 = NEON_frsqrts(auVar43,auVar47,4);
      auVar35._0_4_ = fVar8 * auVar43._0_4_ * auVar38._0_4_;
      auVar35._4_4_ = fVar9 * auVar43._4_4_ * auVar38._4_4_;
      auVar35._8_4_ = fVar10 * auVar43._8_4_ * auVar38._8_4_;
      auVar35._12_4_ = fVar11 * auVar43._12_4_ * auVar38._12_4_;
      auVar44._8_8_ = _UNK_03cabe58;
      auVar44._0_8_ = _DAT_03cabe50;
      auVar46 = auVar35 ^ (auVar35 ^ auVar44) & ~auVar39;
    }
    auVar38 = *(undefined1 (*) [16])(param_1 + 400);
    auVar42 = NEON_ext(auVar38,auVar38,8,1);
    uStack_98 = (ulong)auVar42._0_4_;
    local_a0 = auVar38._0_8_;
    uStack_a8 = auVar46._8_8_;
    local_b0 = auVar46._0_8_;
    *(undefined8 *)(param_1 + 0x210) = *(undefined8 *)(param_1 + 0x1b0);
    *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_1 + 0x1b8);
    if ((int)local_90[5] != 0) {
      local_c0 = local_90;
      if ((local_90 != (long *)0x0) && (local_90[1] != 0)) {
        plVar20 = local_90 + 2;
        do {
          cVar6 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar16) {
            *plVar20 = *plVar20 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      FUN_00cb0934(&local_b8,&local_c0);
      plVar20 = local_90;
      local_90 = local_b8;
      local_b8 = (long *)0x0;
      if (plVar20 != (long *)0x0) {
        if (plVar20[1] != 0) {
          plVar19 = plVar20 + 2;
          do {
            lVar23 = *plVar19;
            cVar6 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar16) {
              *plVar19 = lVar23 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar23 + -1 == 0) {
            (**(code **)(*plVar20 + 0x18))();
          }
        }
        if ((local_b8 != (long *)0x0) && (local_b8[1] != 0)) {
          plVar20 = local_b8 + 2;
          do {
            lVar23 = *plVar20;
            cVar6 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar16) {
              *plVar20 = lVar23 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar23 + -1 == 0) {
            (**(code **)(*local_b8 + 0x18))();
          }
        }
      }
      if ((plVar17 != (long *)0x0) && (plVar17[1] != 0)) {
        plVar20 = plVar17 + 2;
        do {
          lVar23 = *plVar20;
          cVar6 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar16) {
            *plVar20 = lVar23 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar23 + -1 == 0) {
          (**(code **)(*plVar17 + 0x18))(plVar17);
        }
      }
      puVar15 = PTR_DAT_047d8c10;
      puVar14 = PTR_DAT_047d8c08;
      puVar13 = PTR_DAT_047d8c00;
      if (*(long *)(param_1 + 0x1e8) != 0) {
        if (((*PTR_DAT_047d8c00 & 1) == 0) &&
           (iVar28 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar28 != 0)) {
          FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d8c00);
        }
        lVar23 = *(long *)puVar14;
        *(long *)puVar15 = lVar23;
        lVar23 = *(long *)(lVar23 + 0x70);
        uVar18 = *(undefined8 *)(param_1 + 0x1e8);
        pMVar4 = (MutexType *)(lVar23 + 0x120);
        nn::os::LockMutex(pMVar4);
        FUN_00cb2b6c(*(undefined8 *)(lVar23 + 0x20),uVar18);
        nn::os::UnlockMutex(pMVar4);
      }
      if (((*puVar13 & 1) == 0) && (iVar28 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar28 != 0)) {
        FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8c00);
      }
      lVar23 = *(long *)puVar14;
      *(long *)puVar15 = lVar23;
      uVar18 = *(undefined8 *)(lVar23 + 0x70);
      local_c8 = local_90;
      if ((local_90 != (long *)0x0) && (local_90[1] != 0)) {
        plVar17 = local_90 + 2;
        do {
          cVar6 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar16) {
            *plVar17 = *plVar17 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      FUN_00cb2ed8(uVar18,local_70,&local_c8);
      if ((local_c8 != (long *)0x0) && (local_c8[1] != 0)) {
        plVar17 = local_c8 + 2;
        do {
          lVar23 = *plVar17;
          cVar6 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar16) {
            *plVar17 = lVar23 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar23 + -1 == 0) {
          (**(code **)(*local_c8 + 0x18))();
        }
      }
      plVar17 = *(long **)(param_1 + 0x1e8);
      if (plVar17 != local_70) {
        if ((local_70 != (long *)0x0) && (local_70[1] != 0)) {
          plVar17 = local_70 + 2;
          do {
            cVar6 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar16) {
              *plVar17 = *plVar17 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          plVar17 = *(long **)(param_1 + 0x1e8);
        }
        *(long **)(param_1 + 0x1e8) = local_70;
        if ((plVar17 != (long *)0x0) && (plVar17[1] != 0)) {
          plVar20 = plVar17 + 2;
          do {
            lVar23 = *plVar20;
            cVar6 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar16) {
              *plVar20 = lVar23 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar23 + -1 == 0) {
            (**(code **)(*plVar17 + 0x18))(plVar17);
          }
        }
      }
    }
    plVar17 = local_48;
    bVar16 = (int)local_70[0xd] == 0;
    plVar20 = local_70;
    plVar19 = local_48;
    if (local_48 != local_70) {
      if (local_70 == (long *)0x0) {
        plVar20 = (long *)0x0;
      }
      else if (local_70[1] != 0) {
        plVar19 = local_70 + 2;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar7) {
            *plVar19 = *plVar19 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      plVar19 = local_70;
      if (local_48 != (long *)0x0) {
        plVar20 = local_70;
        if (local_48[1] != 0) {
          plVar20 = local_48 + 2;
          do {
            lVar23 = *plVar20;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar7) {
              *plVar20 = lVar23 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          plVar20 = local_70;
          if (lVar23 + -1 == 0) {
            lVar23 = *local_48;
            local_48 = local_70;
            (**(code **)(lVar23 + 0x18))(plVar17);
            plVar20 = local_48;
          }
        }
        local_48 = plVar20;
        plVar20 = local_70;
        plVar19 = local_48;
      }
    }
    local_48 = plVar19;
    if ((plVar20 != (long *)0x0) && (plVar20[1] != 0)) {
      plVar17 = plVar20 + 2;
      do {
        lVar23 = *plVar17;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar7) {
          *plVar17 = lVar23 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar23 + -1 == 0) {
        (**(code **)(*plVar20 + 0x18))();
      }
    }
    if ((local_90 != (long *)0x0) && (local_90[1] != 0)) {
      plVar17 = local_90 + 2;
      do {
        lVar23 = *plVar17;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar7) {
          *plVar17 = lVar23 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar23 + -1 == 0) {
        (**(code **)(*local_90 + 0x18))();
      }
    }
  }
  plVar17 = *(long **)(param_1 + 0x1f0);
  *(int *)(param_1 + 0x100) = param_2;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  if ((plVar17 != (long *)0x0) && (plVar17[1] != 0)) {
    plVar20 = plVar17 + 2;
    do {
      lVar23 = *plVar20;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar7) {
        *plVar20 = lVar23 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar23 + -1 == 0) {
      (**(code **)(*plVar17 + 0x18))();
    }
  }
  plVar17 = *(long **)(param_1 + 0x1f8);
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  if ((plVar17 != (long *)0x0) && (plVar17[1] != 0)) {
    plVar20 = plVar17 + 2;
    do {
      lVar23 = *plVar20;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar7) {
        *plVar20 = lVar23 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar23 + -1 == 0) {
      (**(code **)(*plVar17 + 0x18))();
    }
  }
  plVar17 = local_48;
  puVar13 = PTR_DAT_047d1a08;
  if ((local_48 == (long *)0x0) || ((*(ushort *)((long)local_48 + 0x1a) & 1) == 0)) {
    puVar3 = (undefined8 *)(param_1 + 0x1f8);
    uVar22 = FUN_00cb0cc0(local_48,puVar3,&local_b0);
    plVar17 = local_48;
    if (((uVar22 & 1) == 0) || (plVar20 = (long *)*puVar3, local_48 == plVar20)) goto LAB_015688d8;
    if ((plVar20 != (long *)0x0) && (plVar20[1] != 0)) {
      plVar20 = plVar20 + 2;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar7) {
          *plVar20 = *plVar20 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plVar20 = (long *)*puVar3;
    }
    plVar17 = plVar20;
    if ((local_48 == (long *)0x0) || (local_48[1] == 0)) goto LAB_015688d8;
    plVar17 = local_48 + 2;
    do {
      lVar23 = *plVar17 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *plVar17 = lVar23;
        cVar6 = ExclusiveMonitorsStatus();
      }
      plVar19 = local_48;
    } while (cVar6 != '\0');
  }
  else {
    local_70 = (long *)&DAT_00000080;
    uStack_88 = _UNK_03caa988;
    local_90 = _DAT_03caa980;
    uVar18 = (**(code **)PTR_DAT_047d1a08)(0,&local_70,0);
    if (*(code **)(puVar13 + 0x10) != (code *)0x0) {
      (**(code **)(puVar13 + 0x10))(uVar18,"hknpScaledConvexShape");
    }
    FUN_00cb10b4(uVar18,plVar17,&local_90,1,1);
    plVar17 = *(long **)(param_1 + 0x1f0);
    *(undefined8 *)(param_1 + 0x1f0) = uVar18;
    if ((plVar17 != (long *)0x0) && (plVar17[1] != 0)) {
      plVar20 = plVar17 + 2;
      do {
        lVar23 = *plVar20;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar7) {
          *plVar20 = lVar23 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar23 + -1 == 0) {
        (**(code **)(*plVar17 + 0x18))();
      }
    }
    plVar20 = *(long **)(param_1 + 0x1f0);
    plVar17 = local_48;
    if (local_48 == plVar20) goto LAB_015688d8;
    if ((plVar20 != (long *)0x0) && (plVar20[1] != 0)) {
      plVar20 = plVar20 + 2;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar7) {
          *plVar20 = *plVar20 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plVar20 = *(long **)(param_1 + 0x1f0);
    }
    plVar17 = plVar20;
    if ((local_48 == (long *)0x0) || (local_48[1] == 0)) goto LAB_015688d8;
    plVar17 = local_48 + 2;
    do {
      lVar23 = *plVar17 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *plVar17 = lVar23;
        cVar6 = ExclusiveMonitorsStatus();
      }
      plVar19 = local_48;
    } while (cVar6 != '\0');
  }
  local_48 = plVar20;
  plVar17 = local_48;
  if (lVar23 == 0) {
    (**(code **)(*plVar19 + 0x18))();
    plVar17 = local_48;
  }
LAB_015688d8:
  local_48 = plVar17;
  uVar12 = _UNK_03cab278;
  uVar18 = _DAT_03cab270;
  lVar23 = *(long *)(param_1 + 0x1f0);
  if (lVar23 == 0) {
    lVar23 = *(long *)(param_1 + 0x1f8);
    if (lVar23 != 0) {
      plVar17 = (long *)(lVar23 + 0x48);
      uVar26 = 0;
      do {
        uVar29 = uVar26;
        uVar26 = 0xffffffff;
        if ((*(uint *)(lVar23 + 0x50) & ((int)*(uint *)(lVar23 + 0x50) >> 0x1f ^ 0xffffffffU)) ==
            uVar29) goto LAB_01568af0;
        uVar26 = uVar29 + 1;
      } while ((*(byte *)((long)plVar17 + (ulong)(uVar29 & 0xffff) * 0x40 + *plVar17 + 0x1e) & 1) !=
               0);
      uVar26 = uVar29;
LAB_01568af0:
      auVar32._0_8_ =
           (long *)CONCAT44(*(float *)(param_1 + 0x214) * *(float *)(param_1 + 0x204),
                            *(float *)(param_1 + 0x210) * *(float *)(param_1 + 0x200));
      auVar32._8_4_ = *(float *)(param_1 + 0x218) * *(float *)(param_1 + 0x208);
      auVar32._12_4_ = *(float *)(param_1 + 0x21c) * *(float *)(param_1 + 0x20c);
      auVar38 = NEON_ext(auVar32,auVar32,8,1);
      uStack_68 = (ulong)auVar38._0_4_;
      local_70 = auVar32._0_8_;
      if (uVar26 != 0xffffffff) {
        auVar38 = NEON_fmov(0x3f800000,4);
        lVar24 = lVar23;
        while( true ) {
          local_b8 = (long *)CONCAT62(local_b8._2_6_,(short)uVar26);
          pfVar25 = (float *)(lVar24 + 0x48 +
                             (ulong)(uVar26 & 0xffff) * 0x40 + *(long *)(lVar24 + 0x48));
          local_80 = pfVar25[4];
          fStack_7c = pfVar25[5];
          fStack_78 = pfVar25[6];
          uVar22 = *(ulong *)(pfVar25 + 2);
          plVar20 = *(long **)pfVar25;
          uStack_74 = 0;
          local_90._0_4_ = SUB84(plVar20,0);
          local_90._4_4_ = (float)((ulong)plVar20 >> 0x20);
          uStack_88._0_4_ = (float)uVar22;
          uStack_88._4_4_ = (float)(uVar22 >> 0x20);
          bVar5 = *(byte *)((long)pfVar25 + 0x1e);
          pfVar25[2] = (float)uStack_88;
          pfVar25[3] = uStack_88._4_4_;
          *pfVar25 = (float)local_90;
          pfVar25[1] = local_90._4_4_;
          auVar33._0_4_ = (float)local_90 * (float)local_90;
          auVar33._4_4_ = local_90._4_4_ * local_90._4_4_;
          auVar33._8_4_ = (float)uStack_88 * (float)uStack_88;
          auVar33._12_4_ = uStack_88._4_4_ * uStack_88._4_4_;
          auVar42 = NEON_ext(auVar33,auVar33,8,1);
          bVar1 = (7.6154333e-07 < auVar42._0_4_ + auVar33._0_4_ + auVar33._4_4_) << 2;
          *(byte *)((long)pfVar25 + 0x1e) = bVar5 & 0xfb | bVar1;
          pfVar25[4] = local_80;
          pfVar25[5] = fStack_7c;
          pfVar25[6] = fStack_78;
          iVar28 = -(uint)(fStack_78 == 0.0);
          uVar29 = (uint)(byte)(~-(local_80 == 0.0) & (byte)uVar18);
          bVar48 = (byte)((ulong)uVar18 >> 0x20);
          bVar49 = (byte)((ulong)uVar18 >> 0x38);
          auVar30._0_8_ =
               CONCAT17(~(byte)(-(uint)(fStack_7c == 0.0) >> 0x18) & bVar49,
                        (uint7)CONCAT14(~(byte)-(uint)(fStack_7c == 0.0) & bVar48,uVar29));
          auVar30[8] = ~(byte)iVar28 & (byte)uVar12;
          bVar50 = (byte)((ulong)uVar12 >> 8);
          auVar30[9] = ~(byte)((uint)iVar28 >> 8) & bVar50;
          bVar51 = (byte)((ulong)uVar12 >> 0x10);
          auVar30[10] = ~(byte)((uint)iVar28 >> 0x10) & bVar51;
          bVar52 = (byte)((ulong)uVar12 >> 0x18);
          auVar30[0xb] = ~(byte)((uint)iVar28 >> 0x18) & bVar52;
          bVar2 = ((uVar29 + (int)((ulong)auVar30._0_8_ >> 0x20) + auVar30._8_4_ & 7) != 0) << 1;
          *(byte *)((long)pfVar25 + 0x1e) = bVar5 & 0xf9 | bVar1 | bVar2;
          pfVar25[8] = (float)local_70;
          pfVar25[9] = local_70._4_4_;
          pfVar25[10] = (float)uStack_68;
          iVar28 = -(uint)(local_70._4_4_ == auVar38._4_4_);
          iVar36 = -(uint)((float)uStack_68 == auVar38._8_4_);
          iVar37 = -(uint)(uStack_68._4_4_ == auVar38._12_4_);
          uVar29 = (uint)(byte)(~-((float)local_70 == auVar38._0_4_) & (byte)uVar18);
          auVar31._0_8_ =
               CONCAT17(~(byte)((uint)iVar28 >> 0x18) & bVar49,
                        (uint7)CONCAT14(~(byte)iVar28 & bVar48,uVar29));
          auVar31[8] = ~(byte)iVar36 & (byte)uVar12;
          auVar31[9] = ~(byte)((uint)iVar36 >> 8) & bVar50;
          auVar31[10] = ~(byte)((uint)iVar36 >> 0x10) & bVar51;
          auVar31[0xb] = ~(byte)((uint)iVar36 >> 0x18) & bVar52;
          auVar34[0xc] = ~(byte)iVar37 & (byte)((ulong)uVar12 >> 0x20);
          auVar34._0_12_ = auVar31;
          auVar34[0xd] = ~(byte)((uint)iVar37 >> 8) & (byte)((ulong)uVar12 >> 0x28);
          auVar34[0xe] = ~(byte)((uint)iVar37 >> 0x10) & (byte)((ulong)uVar12 >> 0x30);
          auVar34[0xf] = ~(byte)((uint)iVar37 >> 0x18) & (byte)((ulong)uVar12 >> 0x38);
          *(byte *)((long)pfVar25 + 0x1e) =
               bVar5 & 0xf0 |
               bVar5 & 1 | bVar1 | bVar2 |
               ((uVar29 + (int)((ulong)auVar31._0_8_ >> 0x20) + auVar31._8_4_ + auVar34._12_4_ & 7)
               != 0) << 3;
          local_90 = plVar20;
          uStack_88 = uVar22;
          FUN_00cb0a40(lVar24,&local_b8,1);
          uVar22 = FUN_00cb2110(lVar24);
          if (*(char *)(lVar24 + 0x94) != '\0') {
            uVar27 = 2;
            if ((uVar22 & 1) != 0) {
              uVar27 = 3;
            }
            FUN_00cb04b4(lVar24 + 0xa0,lVar24,uVar27);
          }
          uVar29 = uVar26 + 1;
          do {
            uVar26 = uVar29;
            if (*(int *)(lVar23 + 0x50) <= (int)uVar26) goto LAB_015689f4;
            uVar29 = uVar26 + 1;
          } while ((*(byte *)((long)plVar17 + (ulong)(uVar26 & 0xffff) * 0x40 + *plVar17 + 0x1e) & 1
                   ) != 0);
          if (uVar26 + 1 == 0) break;
          lVar24 = *(long *)(param_1 + 0x1f8);
        }
      }
    }
  }
  else {
    auVar38 = *(undefined1 (*) [16])(param_1 + 0x200);
    uVar26 = *(uint *)(lVar23 + 0x5c);
    auVar42 = NEON_ext(auVar38,auVar38,8,1);
    pfVar25 = (float *)(lVar23 + 0x50);
    *(ulong *)(lVar23 + 0x58) = (ulong)auVar42._0_4_;
    *(long *)pfVar25 = auVar38._0_8_;
    lVar21 = *(long *)(lVar23 + 0x40);
    lVar24 = 0;
    if (lVar21 != 0) {
      lVar24 = lVar21 + lVar23 + 0x40;
    }
    *(undefined4 *)(lVar23 + 0x20) = *(undefined4 *)(lVar24 + 0x20);
    iVar28 = *(int *)(lVar24 + 0x40);
    lVar21 = 0;
    if (iVar28 != 0) {
      lVar21 = (long)iVar28 + lVar24 + 0x40;
    }
    FUN_00cb0560(lVar21,*(undefined4 *)(lVar24 + 0x44),1,pfVar25,(undefined4 *)(lVar23 + 0x20),
                 lVar23 + 0x60);
    fVar8 = *pfVar25;
    iVar40 = -(uint)(*(float *)(lVar23 + 0x54) == fVar8);
    iVar41 = -(uint)(*(float *)(lVar23 + 0x58) == fVar8);
    iVar28 = -(uint)(fVar8 < 0.0);
    iVar36 = -(uint)(*(float *)(lVar23 + 0x54) < 0.0);
    iVar37 = -(uint)(*(float *)(lVar23 + 0x58) < 0.0);
    uVar29 = 0x3f000000;
    if (CONCAT13((byte)((uint)iVar40 >> 0x18) & (byte)((uint)iVar41 >> 0x18),
                 CONCAT12((byte)((uint)iVar40 >> 0x10) & (byte)((uint)iVar41 >> 0x10),
                          CONCAT11((byte)((uint)iVar40 >> 8) & (byte)((uint)iVar41 >> 8),
                                   (byte)iVar40 & (byte)iVar41))) != 0) {
      uVar29 = CONCAT13((byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar28 >> 0x18) &
                        (byte)((uint)iVar37 >> 0x18),
                        CONCAT12((byte)((uint)iVar36 >> 0x10) & (byte)((uint)iVar28 >> 0x10) &
                                 (byte)((uint)iVar37 >> 0x10),
                                 CONCAT11((byte)((uint)iVar36 >> 8) & (byte)((uint)iVar28 >> 8) &
                                          (byte)((uint)iVar37 >> 8),
                                          (byte)iVar36 & (byte)iVar28 & (byte)iVar37))) == 0 |
               0x3f000000;
    }
    uVar29 = uVar29 | ((byte)POPCOUNT(((byte)iVar36 & 2) + (fVar8 < 0.0) | (byte)iVar37 & 4) & 1) <<
                      1;
    *(uint *)(lVar23 + 0x5c) = uVar29;
    if ((uVar26 >> 2 & 1) != 0) {
      *(uint *)(lVar23 + 0x5c) = uVar29 | 0x3f000004;
      FUN_00cb04b4(lVar23 + 0x70,lVar23,3);
    }
  }
LAB_015689f4:
  if (((*PTR_DAT_047d8c00 & 1) == 0) &&
     (iVar28 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar28 != 0)) {
    FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c00);
  }
  lVar23 = *(long *)PTR_DAT_047d8c08;
  *(long *)PTR_DAT_047d8c10 = lVar23;
  pMVar4 = (MutexType *)(*(long *)(lVar23 + 0x70) + 0x120);
  nn::os::LockMutex(pMVar4);
  *(bool *)(param_1 + 0xff) = bVar16;
  (**(code **)(**(long **)(param_1 + 0xd0) + 0x220))
            (*(long **)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xd8),local_48,0);
  nn::os::UnlockMutex(pMVar4);
  if ((local_48 != (long *)0x0) && (local_48[1] != 0)) {
    plVar17 = local_48 + 2;
    do {
      lVar23 = *plVar17;
      cVar6 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar16) {
        *plVar17 = lVar23 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar23 == 1) {
      (**(code **)(*local_48 + 0x18))();
    }
  }
  return 1;
}


