/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011fbdf0; name: FUN_011fbdf0
 */


void FUN_011fbdf0(long param_1,long *param_2,char param_3)

{
  MutexType *pMVar1;
  short *psVar2;
  undefined8 *puVar3;
  int *piVar4;
  short sVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  char cVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  code *pcVar19;
  ulong uVar20;
  short sVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  long *plVar24;
  long *plVar25;
  ulong unaff_x25;
  long *plVar26;
  long lVar27;
  ulong uVar28;
  float fVar29;
  long *local_f8;
  long *local_f0;
  ulong local_e8;
  long *local_e0;
  long *local_d8;
  long *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long *local_b0;
  ulong local_a8;
  long *local_a0;
  long local_98;
  long *local_90;
  undefined4 local_88;
  long *local_80;
  long lStack_78;
  long *local_70;
  long local_68;
  
  cVar13 = param_3;
  if (param_3 == '\0') {
    if (((*PTR_DAT_047d89f8 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d89f8), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d8ed8,PTR_DAT_047d8a00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d89f8);
    }
    lVar14 = *(long *)PTR_DAT_047d8a00;
    *(long *)PTR_DAT_047d8a08 = lVar14;
    cVar13 = *(char *)(lVar14 + 0x2c);
  }
  *(char *)(param_1 + 0x170) = cVar13;
  local_b0 = (long *)*param_2;
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x18))();
  }
  local_a8 = param_2[1];
  local_a0 = (long *)param_2[2];
  local_98 = param_2[3];
  local_90 = (long *)param_2[4];
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x18))();
  }
  local_88 = (undefined4)param_2[5];
  if (*(code **)(param_1 + 0xf0) != (code *)0x0) {
    local_80 = (long *)CONCAT71(local_80._1_7_,param_3);
    (**(code **)(param_1 + 0xf0))(&local_f0,param_1 + 0x110,&local_80,param_2);
    plVar24 = local_b0;
    local_b0 = (long *)0x0;
    if (plVar24 != (long *)0x0) {
      (**(code **)(*plVar24 + 0x20))();
    }
    plVar24 = local_90;
    local_b0 = local_f0;
    local_f0 = (long *)0x0;
    local_a8 = local_e8;
    local_a0 = local_e0;
    local_98 = (long)local_d8;
    local_90 = (long *)0x0;
    if (plVar24 != (long *)0x0) {
      (**(code **)(*plVar24 + 0x20))(plVar24);
    }
    local_90 = local_d0;
    local_d0 = (long *)0x0;
    local_88 = (undefined4)local_c8;
    if (local_f0 != (long *)0x0) {
      (**(code **)(*local_f0 + 0x20))();
    }
  }
  pMVar1 = (MutexType *)(param_1 + 0x28);
  nn::os::LockMutex(pMVar1);
  uVar17 = local_a8;
  local_c0 = 0;
  uStack_b8 = 0;
  plVar24 = (long *)(param_1 + 0x178);
  local_d0 = (long *)0x0;
  local_c8 = 0;
  local_f0 = (long *)(PTR_DAT_047dda78 + 0x10);
  local_e0 = (long *)0x0;
  local_d8 = (long *)0x0;
  local_e8 = 0;
  uVar28 = *(ulong *)(param_1 + 0x180);
  if (uVar28 == 0) {
LAB_011fbf98:
    plVar26 = (long *)(**(code **)(**(long **)(param_1 + 0x1b0) + 0x10))
                                (*(long **)(param_1 + 0x1b0),0x80,8);
    if (plVar26 == (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x1b0) + 0xe8))();
    }
    uVar22 = *(undefined8 *)(param_1 + 0x1b0);
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar14 != 0) {
      if (0xf < *(ulong *)(lVar14 + 0x80)) {
LAB_011fcdf4:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = uVar22;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    }
    plVar26[2] = (long)local_b0;
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x18))();
    }
    plVar26[3] = local_a8;
    plVar26[4] = (long)local_a0;
    plVar26[5] = local_98;
    plVar26[6] = (long)local_90;
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x18))();
    }
    plVar10 = plVar26 + 9;
    *plVar10 = 0;
    plVar26[10] = 0;
    plVar26[0xb] = 0;
    puVar7 = PTR_DAT_047ddcf0;
    *(undefined4 *)(plVar26 + 7) = local_88;
    plVar26[0xc] = 0;
    plVar26[0xd] = 0;
    plVar26[8] = (long)(puVar7 + 0x10);
    plVar26[0xe] = 0;
    plVar26[0xf] = 0;
    do {
      plVar25 = local_e0;
      cVar13 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(&local_e0,0x10);
      if (bVar6) {
        local_e0 = (long *)0x0;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    plVar9 = (long *)*plVar10;
    *plVar10 = 0;
    if (plVar9 != (long *)0x0) {
      lVar18 = plVar9[6];
      psVar2 = (short *)(lVar18 + 0x1a);
      do {
        sVar21 = *psVar2;
        cVar13 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar21 + -1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if (sVar21 == 1) {
        *(undefined8 *)(lVar18 + 0x10) = 0;
        (**(code **)(*plVar9 + 0x50))();
      }
      else if (sVar21 == 0) goto LAB_011fc664;
    }
    uVar15 = local_e8;
    local_e8 = 0;
    *plVar10 = uVar15;
    FUN_011fd444(&local_80,plVar25);
    plVar9 = (long *)0x0;
    if (local_80 != (long *)0x0) {
      if (*(short *)((long)local_80 + 0x1a) == 0) {
        plVar9 = (long *)0x0;
      }
      else {
        psVar2 = (short *)((long)local_80 + 0x1a);
        sVar21 = *(short *)((long)local_80 + 0x1a);
        do {
          sVar5 = *psVar2;
          if (sVar5 == sVar21) {
            cVar13 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar6) {
              *psVar2 = sVar21 + 1;
              cVar13 = ExclusiveMonitorsStatus();
            }
            if (cVar13 != '\0') goto LAB_011fcb84;
            bVar6 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_011fcb84:
            bVar6 = false;
          }
          if (bVar6) {
            plVar9 = (long *)0x0;
            if (local_80[2] != 0) {
              plVar9 = (long *)(local_80[2] + -0x28);
            }
            break;
          }
          plVar9 = (long *)0x0;
          sVar21 = sVar5;
        } while (sVar5 != 0);
      }
    }
    plVar16 = (long *)*plVar10;
    if (plVar16 != plVar9) {
      plVar25 = (long *)0x0;
      *plVar10 = 0;
      if (plVar16 != (long *)0x0) {
        lVar18 = plVar16[6];
        psVar2 = (short *)(lVar18 + 0x1a);
        do {
          sVar21 = *psVar2;
          cVar13 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar6) {
            *psVar2 = sVar21 + -1;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        if (sVar21 == 1) {
          *(undefined8 *)(lVar18 + 0x10) = 0;
          (**(code **)(*plVar16 + 0x50))(plVar16);
        }
        else if (sVar21 == 0) goto LAB_011fc664;
        plVar25 = (long *)0x0;
      }
    }
    plVar26[10] = (long)plVar25;
    if (plVar9 != (long *)0x0) {
      lVar18 = plVar9[6];
      psVar2 = (short *)(lVar18 + 0x1a);
      do {
        sVar21 = *psVar2;
        cVar13 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar21 + -1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if (sVar21 == 1) {
        *(undefined8 *)(lVar18 + 0x10) = 0;
        (**(code **)(*plVar9 + 0x50))();
      }
      else if (sVar21 == 0) goto LAB_011fc664;
    }
    plVar10 = local_80;
    if (local_80 != (long *)0x0) {
      plVar25 = local_80 + 3;
      do {
        sVar21 = (short)*plVar25;
        cVar13 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar6) {
          *(short *)plVar25 = sVar21 + -1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if (sVar21 == 1) {
        piVar4 = (int *)((long)local_80 + 0x1c);
        do {
          iVar8 = *piVar4;
          cVar13 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar6) {
            *piVar4 = -1;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar18;
          local_68 = *plVar10;
          FUN_00c44438(lVar18 + 0x8040,&local_68);
        }
      }
      else if (sVar21 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    plVar10 = (long *)plVar26[0xb];
    plVar26[0xb] = 0;
    if (plVar10 != (long *)0x0) {
      lVar18 = plVar10[6];
      psVar2 = (short *)(lVar18 + 0x1a);
      do {
        sVar21 = *psVar2;
        cVar13 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar21 + -1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if (sVar21 == 1) {
        *(undefined8 *)(lVar18 + 0x10) = 0;
        (**(code **)(*plVar10 + 0x50))();
      }
      else if (sVar21 == 0) goto LAB_011fc664;
    }
    plVar10 = local_d8;
    local_d8 = (long *)0x0;
    plVar26[0xb] = (long)plVar10;
    FUN_00ecc978(plVar26 + 0xc,&local_d0);
    FUN_00eccc4c(plVar26 + 0xe,&local_c0);
    plVar26[8] = (long)(PTR_DAT_047dda78 + 0x10);
    if (lVar14 != 0) {
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
    }
    *plVar26 = 0;
    plVar26[1] = uVar17;
    fVar29 = (float)(*(long *)(param_1 + 0x1d0) + 1);
    if ((uVar28 == 0) || (*(float *)(param_1 + 0x1d8) * (float)uVar28 < fVar29)) {
      uVar28 = (ulong)(uVar28 < 3 || (uVar28 & uVar28 - 1) != 0) | uVar28 << 1;
      uVar15 = (ulong)(fVar29 / *(float *)(param_1 + 0x1d8));
      if (uVar15 <= uVar28) {
        uVar15 = uVar28;
      }
      if (uVar15 - 1 == 0) {
        uVar15 = 2;
      }
      else if ((uVar15 & uVar15 - 1) != 0) {
        uVar15 = std::__next_prime(uVar15);
      }
      uVar28 = *(ulong *)(param_1 + 0x180);
      if (uVar28 < uVar15) {
        uVar12 = uVar15;
LAB_011fc820:
        FUN_011ff290(plVar24,uVar12);
      }
      else if (uVar15 < uVar28) {
        uVar12 = (ulong)((float)*(ulong *)(param_1 + 0x1d0) / *(float *)(param_1 + 0x1d8));
        if ((uVar28 < 3) ||
           (uVar20 = uVar28 - (uVar28 >> 1 & 0x5555555555555555),
           uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333),
           1 < (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
          uVar12 = std::__next_prime(uVar12);
        }
        else if (1 < uVar12) {
          uVar12 = 1L << (-LZCOUNT(uVar12 - 1) & 0x3fU);
        }
        if (uVar12 <= uVar15) {
          uVar12 = uVar15;
        }
        if (uVar12 < uVar28) goto LAB_011fc820;
      }
      uVar28 = *(ulong *)(param_1 + 0x180);
      if ((uVar28 & uVar28 - 1) == 0) {
        unaff_x25 = uVar28 - 1 & uVar17;
      }
      else if (uVar17 < uVar28) {
        unaff_x25 = uVar17;
      }
      else {
        uVar15 = 0;
        if (uVar28 != 0) {
          uVar15 = uVar17 / uVar28;
        }
        unaff_x25 = uVar17 - uVar15 * uVar28;
      }
    }
    plVar10 = *(long **)(*plVar24 + unaff_x25 * 8);
    if (plVar10 == (long *)0x0) {
      *plVar26 = *(long *)(param_1 + 0x1a8);
      *(long **)(param_1 + 0x1a8) = plVar26;
      *(long *)(*(long *)(param_1 + 0x178) + unaff_x25 * 8) = param_1 + 0x1a8;
      if (*plVar26 != 0) {
        uVar17 = *(ulong *)(*plVar26 + 8);
        if ((uVar28 & uVar28 - 1) == 0) {
          uVar17 = uVar17 & uVar28 - 1;
        }
        else if (uVar28 <= uVar17) {
          uVar15 = 0;
          if (uVar28 != 0) {
            uVar15 = uVar17 / uVar28;
          }
          uVar17 = uVar17 - uVar15 * uVar28;
        }
        plVar10 = (long *)(*plVar24 + uVar17 * 8);
        goto LAB_011fc19c;
      }
    }
    else {
      *plVar26 = *plVar10;
LAB_011fc19c:
      *plVar10 = (long)plVar26;
    }
    bVar6 = false;
    *(long *)(param_1 + 0x1d0) = *(long *)(param_1 + 0x1d0) + 1;
  }
  else {
    uVar15 = uVar28 - (uVar28 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      unaff_x25 = uVar28 - 1 & local_a8;
    }
    else {
      unaff_x25 = local_a8;
      if (uVar28 <= local_a8) {
        uVar12 = 0;
        if (uVar28 != 0) {
          uVar12 = local_a8 / uVar28;
        }
        unaff_x25 = local_a8 - uVar12 * uVar28;
      }
    }
    plVar26 = *(long **)(*plVar24 + unaff_x25 * 8);
    if (plVar26 == (long *)0x0) goto LAB_011fbf98;
    plVar10 = (long *)PTR_DAT_047d8b70;
    if (local_b0 != (long *)0x0) {
      plVar10 = local_b0 + 6;
    }
    if (uVar15 < 2) {
      bVar6 = true;
      do {
        plVar26 = (long *)*plVar26;
        if ((plVar26 == (long *)0x0) ||
           (plVar26[1] != local_a8 && (plVar26[1] & uVar28 - 1) != unaff_x25)) goto LAB_011fbf98;
        plVar25 = (long *)PTR_DAT_047d8b70;
        if (plVar26[2] != 0) {
          plVar25 = (long *)(plVar26[2] + 0x30);
        }
      } while (*plVar25 != *plVar10);
    }
    else {
      bVar6 = true;
      do {
        plVar26 = (long *)*plVar26;
        if (plVar26 == (long *)0x0) goto LAB_011fbf98;
        uVar15 = plVar26[1];
        if (uVar15 != local_a8) {
          if (uVar28 <= uVar15) {
            uVar12 = 0;
            if (uVar28 != 0) {
              uVar12 = uVar15 / uVar28;
            }
            uVar15 = uVar15 - uVar12 * uVar28;
          }
          if (uVar15 != unaff_x25) goto LAB_011fbf98;
        }
        plVar25 = (long *)PTR_DAT_047d8b70;
        if (plVar26[2] != 0) {
          plVar25 = (long *)(plVar26[2] + 0x30);
        }
      } while (*plVar25 != *plVar10);
    }
  }
  FUN_011fcdfc(&local_f0);
  if (bVar6) {
    nn::os::UnlockMutex(pMVar1);
  }
  else {
    plVar24 = plVar26 + 8;
    nn::os::UnlockMutex(pMVar1);
    uVar17 = FUN_011fd7e8(plVar24,1,&local_b0,0,*(undefined8 *)(param_1 + 8));
    if ((uVar17 & 1) == 0) {
      plVar26 = (long *)0x0;
    }
    else {
      plVar26 = (long *)plVar26[0xc];
      if (plVar26 != (long *)0x0) {
        lVar14 = plVar26[6];
        if (*(long *)(lVar14 + 0x10) == 0) goto LAB_011fcdd4;
        psVar2 = (short *)(lVar14 + 0x1a);
        do {
          sVar21 = *psVar2;
          cVar13 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar6) {
            *psVar2 = sVar21 + 1;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        if (sVar21 == 0) {
          uVar22 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
          *(undefined8 *)(lVar14 + 8) = uVar22;
          *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
        }
        else if (sVar21 == -1) goto LAB_011fc738;
      }
    }
    if (((*PTR_DAT_047d8c58 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8c58), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d9368,PTR_DAT_047d8c60,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c58);
    }
    uVar22 = *(undefined8 *)PTR_DAT_047d8c60;
    *(undefined8 *)PTR_DAT_047d8c68 = uVar22;
    FUN_00cbf5d4(&local_f8,uVar22,plVar26[1]);
    local_70 = local_f8;
    local_80 = plVar24;
    lStack_78 = param_1;
    if (local_f8 != (long *)0x0) {
      lVar14 = local_f8[6];
      if (*(long *)(lVar14 + 0x10) == 0) {
LAB_011fcdd4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar2 = (short *)(lVar14 + 0x1a);
      do {
        sVar21 = *psVar2;
        cVar13 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar21 + 1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if (sVar21 == 0) {
        uVar22 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar22;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar21 == -1) {
LAB_011fc738:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    plVar24 = (long *)0x0;
    if (local_f8 != (long *)0x0) {
      plVar24 = local_f8 + 0xb;
    }
    if ((*(byte *)((long)plVar26 + 0x6d) & 1) == 0) {
      if ((*(byte *)((long)plVar26 + 0x6c) & 1) == 0) {
        plVar10 = plVar26 + 0xf;
        lVar14 = nn::os::GetCurrentThread();
LAB_011fc294:
        if (*plVar10 == 0) goto code_r0x011fc29c;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar26 + 0x10));
        do {
          if (*plVar10 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(plVar26 + 0x10));
              while (*plVar10 == 0) {
                cVar13 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                if (bVar6) {
                  *plVar10 = lVar14;
                  cVar13 = ExclusiveMonitorsStatus();
                }
                if (cVar13 == '\0') goto LAB_011fc2a4;
              }
            } while( true );
          }
          cVar13 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *plVar10 = lVar14;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
LAB_011fc2a4:
        if ((*(byte *)((long)plVar26 + 0x6c) & 1) == 0) {
          local_f0 = local_80;
          local_e8 = lStack_78;
          local_e0 = local_70;
          if (local_70 != (long *)0x0) {
            lVar14 = local_70[6];
            if (*(long *)(lVar14 + 0x10) == 0) goto LAB_011fcdd4;
            psVar2 = (short *)(lVar14 + 0x1a);
            do {
              sVar21 = *psVar2;
              cVar13 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar6) {
                *psVar2 = sVar21 + 1;
                cVar13 = ExclusiveMonitorsStatus();
              }
            } while (cVar13 != '\0');
            if (sVar21 == 0) {
              uVar22 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
              *(undefined8 *)(lVar14 + 8) = uVar22;
              *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
            }
            else if (sVar21 == -1) goto LAB_011fc738;
          }
          local_d8 = plVar24;
          if ((ulong)plVar26[0x1a] < (ulong)plVar26[0x1b]) {
            FUN_011ff5fc(plVar26 + 0x19,&local_f0);
            if (local_e0 != (long *)0x0) {
              lVar14 = local_e0[6];
              psVar2 = (short *)(lVar14 + 0x1a);
              do {
                sVar21 = *psVar2;
                cVar13 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                if (bVar6) {
                  *psVar2 = sVar21 + -1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
              if (sVar21 == 1) {
                *(undefined8 *)(lVar14 + 0x10) = 0;
                (**(code **)(*local_e0 + 0x50))();
              }
              else if (sVar21 == 0) goto LAB_011fc664;
            }
          }
          else {
            uVar17 = plVar26[0x1d];
            lVar14 = plVar26[0x1a] - plVar26[0x19] >> 4;
            if (0x7ffffffffffffffe < uVar17) {
              uVar17 = 0x7fffffffffffffff;
            }
            uVar28 = lVar14 * -0x71c71c71c71c71c7 + 1;
            if (uVar17 < uVar28) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar18 = plVar26[0x1b] - plVar26[0x19] >> 4;
            uVar15 = lVar18 * 0x1c71c71c71c71c72;
            if (uVar28 <= uVar15) {
              uVar28 = uVar15;
            }
            plVar10 = plVar26 + 0x1c;
            if (uVar17 >> 1 <= (ulong)(lVar18 * -0x71c71c71c71c71c7)) {
              uVar28 = uVar17;
            }
            if (uVar28 == 0) {
              lVar18 = 0;
            }
            else {
              lVar18 = (**(code **)(*(long *)*plVar10 + 0x10))((long *)*plVar10,uVar28 * 0x90,0x10);
              if (lVar18 == 0) {
                (**(code **)(*(long *)*plVar10 + 0xe8))();
              }
            }
            lVar27 = *plVar10;
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar11 = nn::os::GetTlsValue(DAT_04865a30);
            plVar25 = local_e0;
            if (lVar11 != 0) {
              if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_011fcdf4;
              *(long *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = lVar27;
              *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
              plVar24 = local_d8;
            }
            lVar27 = lVar18 + lVar14 * 0x10;
            *(undefined8 *)(lVar27 + 0x10) = 0;
            *(undefined8 *)(lVar27 + 0x18) = 0;
            *(long **)(lVar27 + 0x20) = local_f0;
            *(ulong *)(lVar27 + 0x28) = local_e8;
            puVar23 = (undefined8 *)(lVar18 + lVar14 * 0x10);
            local_e0 = (long *)0x0;
            *(long **)(lVar27 + 0x30) = plVar25;
            *puVar23 = &LAB_011ca534;
            *(undefined1 **)(lVar27 + 8) = &LAB_02b7b0f4;
            *(undefined1 **)(lVar27 + 0x10) = &LAB_02b7b16c;
            *(undefined1 **)(lVar27 + 0x18) = &LAB_02b7b234;
            *(long **)(lVar27 + 0x80) = plVar24;
            if (lVar11 != 0) {
              *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
            }
            lVar14 = plVar26[0x19];
            lVar27 = plVar26[0x1a];
            puVar3 = puVar23 + 0x12;
            if (lVar27 == lVar14) {
              lVar27 = lVar14;
            }
            else {
              do {
                puVar23 = puVar23 + -0x12;
                lVar27 = lVar27 + -0x90;
                FUN_00cbf394(plVar10,puVar23,lVar27);
              } while (lVar14 != lVar27);
              lVar14 = plVar26[0x19];
              lVar27 = plVar26[0x1a];
            }
            plVar26[0x19] = (long)puVar23;
            plVar26[0x1a] = (long)puVar3;
            lVar11 = plVar26[0x1b];
            plVar26[0x1b] = lVar18 + uVar28 * 0x90;
            while (lVar18 = lVar27, lVar18 != lVar14) {
              pcVar19 = *(code **)(lVar18 + -0x88);
              lVar27 = lVar18 + -0x90;
              if (pcVar19 != (code *)0x0) {
                *(undefined8 *)(lVar18 + -0x80) = 0;
                *(undefined8 *)(lVar18 + -0x78) = 0;
                *(undefined8 *)(lVar18 + -0x90) = 0;
                *(undefined8 *)(lVar18 + -0x88) = 0;
                (*pcVar19)(lVar18 + -0x70);
              }
            }
            if (lVar14 != 0) {
              plVar10 = (long *)*plVar10;
              uVar17 = (**(code **)(*plVar10 + 0xf8))(plVar10);
              if (((uVar17 & 1) == 0) || (lVar18 = FUN_00c4e600(), *(int *)(lVar18 + 0x12c8) < 1)) {
                (**(code **)(*plVar10 + 0x18))(plVar10,lVar14,lVar11 - lVar14,0x10);
              }
              else {
                FUN_00c48fe8(plVar10,lVar14,lVar11 - lVar14,0x10);
              }
            }
          }
        }
        else {
          FUN_011ca544(&local_80,plVar26[0xc],(int)plVar26[0xd]);
        }
        plVar26[0xf] = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar26 + 0x10));
        goto LAB_011fc4c4;
      }
      FUN_011ca544(&local_80,plVar26[0xc],(int)plVar26[0xd]);
    }
LAB_011fc4c4:
    if (local_70 != (long *)0x0) {
      lVar14 = local_70[6];
      psVar2 = (short *)(lVar14 + 0x1a);
      do {
        sVar21 = *psVar2;
        cVar13 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar21 + -1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if (sVar21 == 1) {
        *(undefined8 *)(lVar14 + 0x10) = 0;
        (**(code **)(*local_70 + 0x50))();
      }
      else if (sVar21 == 0) goto LAB_011fc664;
    }
    if (local_f8 != (long *)0x0) {
      lVar14 = local_f8[6];
      psVar2 = (short *)(lVar14 + 0x1a);
      do {
        sVar21 = *psVar2;
        cVar13 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar21 + -1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if (sVar21 == 1) {
        *(undefined8 *)(lVar14 + 0x10) = 0;
        (**(code **)(*local_f8 + 0x50))();
      }
      else if (sVar21 == 0) goto LAB_011fc664;
    }
    lVar14 = plVar26[6];
    psVar2 = (short *)(lVar14 + 0x1a);
    do {
      sVar21 = *psVar2;
      cVar13 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar21 + -1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if (sVar21 == 1) {
      *(undefined8 *)(lVar14 + 0x10) = 0;
      (**(code **)(*plVar26 + 0x50))(plVar26);
    }
    else if (sVar21 == 0) {
LAB_011fc664:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  return;
code_r0x011fc29c:
  cVar13 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar6) {
    *plVar10 = lVar14;
    cVar13 = ExclusiveMonitorsStatus();
  }
  if (cVar13 == '\0') goto LAB_011fc2a4;
  goto LAB_011fc294;
}


