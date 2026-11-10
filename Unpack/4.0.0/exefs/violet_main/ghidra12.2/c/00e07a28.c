/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e07a28; name: FUN_00e07a28
 */


/* WARNING: Removing unreachable block (ram,0x00e08344) */
/* WARNING: Removing unreachable block (ram,0x00e08350) */
/* WARNING: Removing unreachable block (ram,0x00e08358) */
/* WARNING: Removing unreachable block (ram,0x00e08360) */
/* WARNING: Removing unreachable block (ram,0x00e08368) */
/* WARNING: Removing unreachable block (ram,0x00e08390) */
/* WARNING: Removing unreachable block (ram,0x00e08370) */
/* WARNING: Removing unreachable block (ram,0x00e08374) */
/* WARNING: Removing unreachable block (ram,0x00e08388) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e07a28(long param_1,undefined8 *param_2)

{
  MutexType *pMVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  long *plVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  long lVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  int iVar26;
  float fVar27;
  int iVar30;
  int iVar32;
  undefined1 auVar28 [16];
  float fVar31;
  int iVar33;
  undefined1 auVar29 [16];
  float fVar34;
  float fVar35;
  undefined1 auVar36 [12];
  float fVar39;
  undefined1 auVar37 [16];
  float fVar40;
  undefined1 auVar38 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  long *local_a0;
  long *local_98;
  long *local_90;
  long local_88;
  undefined8 local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  undefined4 local_34;
  
  lVar17 = *(long *)(param_1 + 0x378);
  lVar10 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
  lVar23 = *(long *)(lVar10 + 8);
  lVar10 = *(long *)(lVar17 + 0x28);
  nn::os::LockMutex((MutexType *)(lVar10 + 0x130));
  fVar27 = 0.033333335;
  if (*(char *)(lVar10 + 0x128) != '\0') {
    fVar27 = (float)((double)lVar23 / 1000000000.0);
  }
  plVar16 = (long *)**(long **)(lVar10 + 0x20);
  plVar20 = (long *)(*(long **)(lVar10 + 0x20))[1];
  if (plVar16 == plVar20) {
    plVar12 = plVar16;
  }
  else {
    lVar17 = *plVar16;
    if (*(int *)(lVar17 + 0x40) != 3) {
      do {
        plVar12 = plVar20;
        if (plVar20 + -1 == plVar16) goto LAB_00e07af8;
        lVar17 = plVar16[1];
        plVar16 = plVar16 + 1;
      } while (*(int *)(lVar17 + 0x40) != 3);
    }
    local_90 = *(long **)(lVar10 + 8);
    if ((local_90 != (long *)0x0) && (local_90[1] != 0)) {
      plVar12 = local_90 + 2;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *plVar12 = *plVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    local_34 = FUN_00e0ec9c(lVar17,&local_90);
    FUN_00e0eabc(lVar10 + 0x40,&local_34);
    if ((local_90 != (long *)0x0) && (local_90[1] != 0)) {
      plVar12 = local_90 + 2;
      do {
        lVar17 = *plVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *plVar12 = lVar17 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar17 + -1 == 0) {
        (**(code **)(*local_90 + 0x18))();
      }
    }
    plVar12 = plVar16;
  }
  plVar16 = plVar12 + 1;
  if (plVar12 != plVar20 && plVar16 != plVar20) {
    do {
      lVar17 = *plVar16;
      if (*(int *)(lVar17 + 0x40) == 3) {
        local_90 = *(long **)(lVar10 + 8);
        if ((local_90 != (long *)0x0) && (local_90[1] != 0)) {
          plVar13 = local_90 + 2;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar5) {
              *plVar13 = *plVar13 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        local_34 = FUN_00e0ec9c(lVar17,&local_90);
        FUN_00e0eabc(lVar10 + 0x40,&local_34);
        if ((local_90 != (long *)0x0) && (local_90[1] != 0)) {
          plVar13 = local_90 + 2;
          do {
            lVar17 = *plVar13;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar5) {
              *plVar13 = lVar17 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar17 + -1 == 0) {
            (**(code **)(*local_90 + 0x18))();
          }
        }
      }
      else {
        FUN_00e0bf3c(plVar12,plVar16);
        plVar12 = plVar12 + 1;
      }
      plVar16 = plVar16 + 1;
    } while (plVar16 != plVar20);
  }
LAB_00e07af8:
  lVar19 = *(long *)(lVar10 + 0x20);
  lVar23 = *(long *)(lVar19 + 8);
  lVar17 = lVar23 - (long)plVar12;
  if (lVar17 != 0) {
    if ((long)plVar12 + lVar17 != lVar23) {
      do {
        FUN_00e0bf3c(plVar12,plVar12 + (lVar17 >> 3));
        plVar12 = plVar12 + 1;
      } while ((long *)(lVar23 + (lVar17 >> 3) * -8) != plVar12);
    }
    FUN_00e0c1c0(lVar19,plVar12);
  }
  puVar18 = *(undefined8 **)(lVar10 + 0x108);
  plVar16 = (long *)*puVar18;
  plVar20 = (long *)puVar18[1];
  if ((plVar16 != plVar20) && (*(int *)(*plVar16 + 0x40) != 4)) {
    plVar12 = plVar16;
    do {
      if (plVar20 + -1 == plVar12) {
        plVar16 = plVar20;
        goto LAB_00e07b58;
      }
      plVar16 = plVar12 + 1;
      plVar13 = plVar12 + 1;
      plVar12 = plVar16;
    } while (*(int *)(*plVar13 + 0x40) != 4);
  }
  if (plVar16 != plVar20) {
    plVar12 = plVar16 + 1;
    if (plVar12 != plVar20) {
      do {
        plVar13 = plVar16;
        if (*(int *)(*plVar12 + 0x40) != 4) {
          plVar13 = (long *)*plVar16;
          *plVar16 = 0;
          if (plVar13 != (long *)0x0) {
            lVar17 = plVar13[6];
            psVar2 = (short *)(lVar17 + 0x1a);
            do {
              sVar3 = *psVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar5) {
                *psVar2 = sVar3 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar3 == 1) {
              *(undefined8 *)(lVar17 + 0x10) = 0;
              (**(code **)(*plVar13 + 0x50))();
            }
            else if (sVar3 == 0) goto LAB_00e0817c;
          }
          lVar17 = *plVar12;
          *plVar12 = 0;
          plVar13 = plVar16 + 1;
          *plVar16 = lVar17;
        }
        plVar12 = plVar12 + 1;
        plVar16 = plVar13;
      } while (plVar12 != plVar20);
      puVar18 = *(undefined8 **)(lVar10 + 0x108);
    }
  }
LAB_00e07b58:
  plVar20 = (long *)puVar18[1];
  if (plVar16 != plVar20) {
    while (plVar20 != plVar16) {
      plVar20 = plVar20 + -1;
      plVar12 = (long *)*plVar20;
      if (plVar12 != (long *)0x0) {
        lVar17 = plVar12[6];
        psVar2 = (short *)(lVar17 + 0x1a);
        do {
          sVar3 = *psVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar17 + 0x10) = 0;
          (**(code **)(*plVar12 + 0x50))();
        }
        else if (sVar3 == 0) {
LAB_00e0817c:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
    puVar18[1] = plVar16;
  }
  plVar16 = (long *)**(long **)(lVar10 + 0x20);
  if (plVar16 != (long *)(*(long **)(lVar10 + 0x20))[1]) {
    do {
      plVar20 = plVar16;
      lVar17 = *plVar20;
      if (*(int *)(lVar17 + 0x40) == 1) {
        local_68 = *(long **)(lVar10 + 8);
        if ((local_68 != (long *)0x0) && (local_68[1] != 0)) {
          plVar16 = local_68 + 2;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar5) {
              *plVar16 = *plVar16 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        uVar9 = FUN_00e0bfd4(lVar10 + 0x40);
        FUN_00e0c268(lVar17,&local_68,uVar9);
        if ((local_68 != (long *)0x0) && (local_68[1] != 0)) {
          plVar16 = local_68 + 2;
          do {
            lVar17 = *plVar16;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar5) {
              *plVar16 = lVar17 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar17 + -1 == 0) {
            (**(code **)(*local_68 + 0x18))();
          }
        }
      }
      plVar16 = plVar20 + 1;
    } while (plVar16 != (long *)(*(undefined8 **)(lVar10 + 0x20))[1]);
    plVar12 = (long *)**(undefined8 **)(lVar10 + 0x20);
    if (plVar12 != plVar16) {
      FUN_00e08eac(*plVar12);
      if ((plVar12 != plVar20) && (FUN_00e08eac(plVar12[1]), plVar12 + 1 != plVar20)) {
        plVar12 = plVar12 + 1;
        do {
          plVar12 = plVar12 + 1;
          FUN_00e08eac(*plVar12);
        } while (plVar20 != plVar12);
      }
    }
  }
  pMVar1 = (MutexType *)(lVar10 + 0x150);
  nn::os::LockMutex(pMVar1);
  puVar18 = (undefined8 *)**(long **)(lVar10 + 0x108);
  if (puVar18 != (undefined8 *)(*(long **)(lVar10 + 0x108))[1]) {
    do {
      uVar11 = *puVar18;
      local_70 = *(long **)(lVar10 + 8);
      if ((local_70 != (long *)0x0) && (local_70[1] != 0)) {
        plVar16 = local_70 + 2;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar5) {
            *plVar16 = *plVar16 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      local_78 = *(long **)(lVar10 + 0x100);
      if ((local_78 != (long *)0x0) && (local_78[1] != 0)) {
        plVar16 = local_78 + 2;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar5) {
            *plVar16 = *plVar16 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      FUN_00e08620(uVar11,&local_70,&local_78,lVar10 + 0x10);
      if ((local_78 != (long *)0x0) && (local_78[1] != 0)) {
        plVar16 = local_78 + 2;
        do {
          lVar17 = *plVar16;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar5) {
            *plVar16 = lVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar17 + -1 == 0) {
          (**(code **)(*local_78 + 0x18))();
        }
      }
      if ((local_70 != (long *)0x0) && (local_70[1] != 0)) {
        plVar16 = local_70 + 2;
        do {
          lVar17 = *plVar16;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar5) {
            *plVar16 = lVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar17 + -1 == 0) {
          (**(code **)(*local_70 + 0x18))();
        }
      }
      puVar18 = puVar18 + 1;
    } while (puVar18 != *(undefined8 **)(*(long *)(lVar10 + 0x108) + 8));
  }
  nn::os::UnlockMutex(pMVar1);
  FUN_00e09394(fVar27,*(undefined8 *)(lVar10 + 8));
  nn::os::LockMutex(pMVar1);
  plVar16 = (long *)**(long **)(lVar10 + 0x108);
  if (plVar16 != (long *)(*(long **)(lVar10 + 0x108))[1]) {
    uVar11 = NEON_fmov(0x3f800000,4);
    do {
      lVar17 = *plVar16;
      plVar20 = *(long **)(lVar10 + 8);
      if ((plVar20 != (long *)0x0) && (plVar20[1] != 0)) {
        plVar12 = plVar20 + 2;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *plVar12 = *plVar12 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plVar12 = *(long **)(lVar10 + 0x100);
      if ((plVar12 != (long *)0x0) && (plVar12[1] != 0)) {
        plVar13 = plVar12 + 2;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar5) {
            *plVar13 = *plVar13 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (((*(char *)(lVar17 + 0x57c) != '\0') || (*(int *)(lVar17 + 0x578) == 2)) &&
         (*(int *)(lVar17 + 0x40) == 2)) {
        uVar9 = *(undefined4 *)(lVar17 + 0x100);
        uVar6 = *(undefined4 *)(lVar17 + 0x104);
        lVar23 = *(long *)(lVar17 + 0x130);
        *(undefined4 *)(lVar23 + 0x38) = *(undefined4 *)(lVar17 + 0x108);
        *(undefined4 *)(lVar23 + 0x3c) = 0;
        *(undefined4 *)(lVar23 + 0x30) = uVar9;
        *(undefined4 *)(lVar23 + 0x34) = uVar6;
        uVar9 = *(undefined4 *)(lVar17 + 0xe0);
        uVar6 = *(undefined4 *)(lVar17 + 0xe4);
        lVar23 = *(long *)(lVar17 + 0x130);
        *(undefined4 *)(lVar23 + 0x48) = *(undefined4 *)(lVar17 + 0xe8);
        *(undefined4 *)(lVar23 + 0x4c) = 0;
        *(undefined4 *)(lVar23 + 0x40) = uVar9;
        *(undefined4 *)(lVar23 + 0x44) = uVar6;
        uVar9 = *(undefined4 *)(lVar17 + 0xf0);
        uVar6 = *(undefined4 *)(lVar17 + 0xf4);
        lVar23 = *(long *)(lVar17 + 0x130);
        auVar42._4_12_ = SUB1612(ZEXT816(0),4);
        auVar42._0_4_ = *(undefined4 *)(lVar17 + 0xf8);
        *(long *)(lVar23 + 0x58) = auVar42._0_8_;
        *(undefined4 *)(lVar23 + 0x50) = uVar9;
        *(undefined4 *)(lVar23 + 0x54) = uVar6;
        uVar8 = _UNK_03cabe58;
        uVar7 = _DAT_03cabe50;
        auVar28 = *(undefined1 (*) [16])(*(long *)(lVar17 + 0x48) + 0x1c0);
        if ((*(char *)(lVar17 + 0x57c) == '\0') && (*(int *)(lVar17 + 0x578) == 2)) {
          fVar27 = *(float *)(lVar17 + 0x110) - *(float *)(lVar17 + 0x100);
          fVar31 = *(float *)(lVar17 + 0x114) - *(float *)(lVar17 + 0x104);
          fVar35 = *(float *)(lVar17 + 0x118) - *(float *)(lVar17 + 0x108);
          fVar40 = *(float *)(lVar17 + 0x11c) - *(float *)(lVar17 + 0x10c);
          auVar21._0_4_ = fVar27 * fVar27 + fVar31 * fVar31;
          auVar21._4_4_ = fVar35 * fVar35 + fVar40 * fVar40;
          auVar21._8_4_ = fVar27 * fVar27 + fVar31 * fVar31;
          auVar21._12_4_ = fVar35 * fVar35 + fVar40 * fVar40;
          auVar28 = NEON_ext(auVar21,auVar21,4,1);
          auVar22._0_4_ = auVar28._0_4_ + auVar28._4_4_;
          auVar22._4_4_ = auVar28._8_4_ + auVar28._12_4_;
          auVar22._8_4_ = auVar28._0_4_ + auVar28._4_4_;
          auVar22._12_4_ = auVar28._8_4_ + auVar28._12_4_;
          auVar28 = NEON_frsqrte(auVar22,4);
          auVar41._0_4_ = auVar22._0_4_ * auVar28._0_4_;
          auVar41._4_4_ = auVar22._4_4_ * auVar28._4_4_;
          auVar41._8_4_ = auVar22._8_4_ * auVar28._8_4_;
          auVar41._12_4_ = auVar22._12_4_ * auVar28._12_4_;
          auVar42 = NEON_frsqrts(auVar28,auVar41,4);
          auVar37._0_4_ = auVar28._0_4_ * auVar42._0_4_;
          auVar37._4_4_ = auVar28._4_4_ * auVar42._4_4_;
          auVar37._8_4_ = auVar28._8_4_ * auVar42._8_4_;
          auVar37._12_4_ = auVar28._12_4_ * auVar42._12_4_;
          auVar43._0_4_ = auVar22._0_4_ * auVar37._0_4_;
          auVar43._4_4_ = auVar22._4_4_ * auVar37._4_4_;
          auVar43._8_4_ = auVar22._8_4_ * auVar37._8_4_;
          auVar43._12_4_ = auVar22._12_4_ * auVar37._12_4_;
          iVar26 = -(uint)(auVar22._0_4_ == 0.0);
          iVar30 = -(uint)(auVar22._4_4_ == 0.0);
          iVar32 = -(uint)(auVar22._8_4_ == 0.0);
          iVar33 = -(uint)(auVar22._12_4_ == 0.0);
          auVar28 = NEON_frsqrts(auVar37,auVar43,4);
          fVar27 = fVar27 * auVar37._0_4_ * auVar28._0_4_;
          fVar31 = fVar31 * auVar37._4_4_ * auVar28._4_4_;
          fVar35 = fVar35 * auVar37._8_4_ * auVar28._8_4_;
          fVar40 = fVar40 * auVar37._12_4_ * auVar28._12_4_;
          fVar34 = (float)CONCAT13((byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                                   CONCAT12((byte)((uint)fVar27 >> 0x10) &
                                            ~(byte)((uint)iVar26 >> 0x10),
                                            CONCAT11((byte)((uint)fVar27 >> 8) &
                                                     ~(byte)((uint)iVar26 >> 8),
                                                     SUB41(fVar27,0) & ~(byte)iVar26)));
          auVar24._0_8_ =
               CONCAT17((byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18),
                        CONCAT16((byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10),
                                 CONCAT15((byte)((uint)fVar31 >> 8) & ~(byte)((uint)iVar30 >> 8),
                                          CONCAT14(SUB41(fVar31,0) & ~(byte)iVar30,fVar34))));
          auVar24[8] = SUB41(fVar35,0) & ~(byte)iVar32;
          auVar24[9] = (byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar32 >> 8);
          auVar24[10] = (byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar32 >> 0x10);
          auVar24[0xb] = (byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18);
          auVar24[0xc] = SUB41(fVar40,0) & ~(byte)iVar33;
          auVar24[0xd] = (byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar33 >> 8);
          auVar24[0xe] = (byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar33 >> 0x10);
          auVar24[0xf] = (byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar33 >> 0x18);
          auVar28 = NEON_ext(auVar24,auVar24,8,1);
          fVar39 = auVar28._0_4_;
          auVar28._8_4_ = fVar39;
          auVar28._0_8_ = auVar24._0_8_;
          auVar28._12_4_ = 0;
          *(ulong *)(lVar17 + 0x5a8) = (ulong)(uint)fVar39;
          *(undefined8 *)(lVar17 + 0x5a0) = auVar24._0_8_;
          lVar23 = *(long *)(lVar17 + 0x130);
          lVar17 = *(long *)(lVar23 + 0x100);
          fVar27 = *(float *)(lVar17 + 0x40);
          fVar31 = *(float *)(lVar17 + 0x44);
          fVar35 = *(float *)(lVar17 + 0x48);
          fVar40 = *(float *)(lVar17 + 0x4c);
          auVar36._0_4_ = fVar27 * fVar34;
          auVar36._4_4_ = fVar31 * (float)((ulong)auVar24._0_8_ >> 0x20);
          auVar36._8_4_ = fVar35 * fVar39;
        }
        else {
          lVar23 = *(long *)(lVar17 + 0x130);
          if (*(int *)(*(long *)(lVar17 + 0x48) + 400) != 0) {
            *(undefined8 *)(lVar23 + 0x80) = 0;
            *(undefined8 *)(lVar23 + 0x88) = 0;
            *(undefined4 *)(lVar23 + 0x60) = 0x5f7ffff0;
            *(undefined8 *)(lVar23 + 0x78) = uVar8;
            *(undefined8 *)(lVar23 + 0x70) = uVar7;
            goto LAB_00e07e70;
          }
          lVar17 = *(long *)(lVar23 + 0x100);
          fVar27 = *(float *)(lVar17 + 0x40);
          fVar31 = *(float *)(lVar17 + 0x44);
          fVar35 = *(float *)(lVar17 + 0x48);
          fVar40 = *(float *)(lVar17 + 0x4c);
          auVar36._0_4_ = auVar28._0_4_ * fVar27;
          auVar36._4_4_ = auVar28._4_4_ * fVar31;
          auVar36._8_4_ = auVar28._8_4_ * fVar35;
        }
        fVar34 = auVar36._0_4_ + auVar36._4_4_ + auVar36._8_4_;
        fVar39 = auVar36._0_4_ + auVar36._4_4_ + auVar36._8_4_;
        auVar25._0_4_ = auVar28._0_4_ - fVar27 * fVar34;
        auVar25._4_4_ = auVar28._4_4_ - fVar31 * fVar39;
        auVar25._8_4_ = auVar28._8_4_ - fVar35 * fVar34;
        auVar25._12_4_ = auVar28._12_4_ - fVar40 * fVar39;
        fVar35 = auVar25._0_4_ * auVar25._0_4_ + auVar25._4_4_ * auVar25._4_4_ +
                 auVar25._8_4_ * auVar25._8_4_;
        fVar40 = auVar25._0_4_ * auVar25._0_4_ + auVar25._4_4_ * auVar25._4_4_ +
                 auVar25._8_4_ * auVar25._8_4_;
        fVar27 = 0.0;
        fVar31 = 0.0;
        if (fVar35 != 0.0) {
          fVar27 = (float)uVar11 / SQRT(fVar35);
          fVar31 = (float)((ulong)uVar11 >> 0x20) / SQRT(fVar40);
        }
        uVar15 = CONCAT44(-(uint)(0.0 < fVar40),-(uint)(0.0 < fVar35)) & 0x100000001;
        iVar26 = (int)uVar15;
        iVar30 = (int)(uVar15 >> 0x20);
        auVar29._0_4_ = auVar25._0_4_ * fVar27;
        auVar29._4_4_ = auVar25._4_4_ * fVar31;
        auVar29._8_4_ = auVar25._8_4_ * fVar27;
        auVar29._12_4_ = auVar25._12_4_ * fVar31;
        auVar38._0_4_ = (iVar26 << 0x1f) >> 0x1f;
        auVar38._4_4_ = (iVar30 << 0x1f) >> 0x1f;
        auVar38._8_4_ = (iVar26 << 0x1f) >> 0x1f;
        auVar38._12_4_ = (iVar30 << 0x1f) >> 0x1f;
        auVar25 = auVar25 ^ (auVar25 ^ auVar29) & auVar38;
        *(long *)(lVar23 + 0x88) = auVar25._8_8_;
        *(long *)(lVar23 + 0x80) = auVar25._0_8_;
      }
LAB_00e07e70:
      if ((plVar12 != (long *)0x0) && (plVar12[1] != 0)) {
        plVar13 = plVar12 + 2;
        do {
          lVar17 = *plVar13;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar5) {
            *plVar13 = lVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar17 + -1 == 0) {
          (**(code **)(*plVar12 + 0x18))();
        }
      }
      if ((plVar20 != (long *)0x0) && (plVar20[1] != 0)) {
        plVar12 = plVar20 + 2;
        do {
          lVar17 = *plVar12;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *plVar12 = lVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar17 + -1 == 0) {
          (**(code **)(*plVar20 + 0x18))(plVar20);
        }
      }
      plVar16 = plVar16 + 1;
    } while (plVar16 != *(long **)(*(long *)(lVar10 + 0x108) + 8));
  }
  plVar16 = (long *)(PTR_DAT_047e3318 + 0x10);
  local_88 = 0;
  local_80 = -0x8000000000000000;
  local_90 = plVar16;
  FUN_00e08c14(*(undefined8 *)(lVar10 + 0x100),&local_90,1);
  puVar14 = *(undefined8 **)(lVar10 + 0x108);
  for (puVar18 = (undefined8 *)*puVar14; lVar17 = local_80, puVar18 != (undefined8 *)puVar14[1];
      puVar18 = puVar18 + 1) {
    uVar11 = *puVar18;
    local_98 = *(long **)(lVar10 + 8);
    if ((local_98 != (long *)0x0) && (local_98[1] != 0)) {
      plVar20 = local_98 + 2;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar5) {
          *plVar20 = *plVar20 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    local_a0 = *(long **)(lVar10 + 0x100);
    if ((local_a0 != (long *)0x0) && (local_a0[1] != 0)) {
      plVar20 = local_a0 + 2;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar5) {
          *plVar20 = *plVar20 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_00e0848c(uVar11,&local_98,&local_a0);
    if ((local_a0 != (long *)0x0) && (local_a0[1] != 0)) {
      plVar20 = local_a0 + 2;
      do {
        lVar17 = *plVar20;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar5) {
          *plVar20 = lVar17 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar17 + -1 == 0) {
        (**(code **)(*local_a0 + 0x18))();
      }
    }
    if ((local_98 != (long *)0x0) && (local_98[1] != 0)) {
      plVar20 = local_98 + 2;
      do {
        lVar17 = *plVar20;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar5) {
          *plVar20 = lVar17 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar17 + -1 == 0) {
        (**(code **)(*local_98 + 0x18))();
      }
    }
    puVar14 = *(undefined8 **)(lVar10 + 0x108);
  }
  uVar15 = (ulong)local_80._4_4_;
  local_80 = (ulong)local_80._4_4_ << 0x20;
  local_90 = plVar16;
  if ((-1 < lVar17) && (local_88 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_88,uVar15 << 3);
  }
  nn::os::UnlockMutex(pMVar1);
  nn::os::UnlockMutex((MutexType *)(lVar10 + 0x130));
  return;
}


