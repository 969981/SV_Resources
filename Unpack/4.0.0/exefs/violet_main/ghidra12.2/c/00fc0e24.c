/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fc0e24; name: FUN_00fc0e24
 */


void FUN_00fc0e24(long param_1)

{
  short *psVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  ulong uVar22;
  short sVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  float fVar29;
  long local_138;
  long lStack_130;
  long local_128;
  long *local_120;
  undefined1 auStack_118 [48];
  long *local_e8;
  long *local_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long *local_90;
  undefined8 local_88;
  char *local_80;
  undefined8 uStack_78;
  long *local_70;
  
  if (((*PTR_DAT_047d91f8 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d91f8), iVar10 != 0)) {
    FUN_00100190(&LAB_00aa89a4,PTR_DAT_047d9200,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d91f8);
  }
  lVar16 = *(long *)PTR_DAT_047d9200;
  *(long *)PTR_DAT_047d9208 = lVar16;
  if (*(long *)(lVar16 + 0x40) == 0) {
    return;
  }
  if (*(short *)(*(long *)(lVar16 + 0x40) + 0x1a) == 0) {
    return;
  }
  lVar16 = *(long *)(lVar16 + 0x40);
  if (lVar16 == 0) {
    return;
  }
  if (*(short *)(lVar16 + 0x1a) == 0) {
    return;
  }
  psVar1 = (short *)(lVar16 + 0x1a);
  sVar23 = *(short *)(lVar16 + 0x1a);
  do {
    sVar6 = *psVar1;
    if (sVar6 == sVar23) {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar23 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
      if (cVar7 != '\0') goto LAB_00fc0f20;
      bVar8 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00fc0f20:
      bVar8 = false;
    }
    if (bVar8) {
      lVar16 = *(long *)(lVar16 + 0x10);
      if (lVar16 == 0) {
        return;
      }
      uVar11 = FUN_01e41a3c((long *)(lVar16 + -0x28),0);
      FUN_018e4e14(auStack_118,uVar11);
      if (local_e8 == (long *)0x0) goto LAB_00fc157c;
      plVar2 = (long *)(param_1 + 2000);
      plVar3 = (long *)(param_1 + 0x7a0);
      puVar4 = PTR_DAT_047d66f8 + 0x10;
      plVar24 = local_e8;
      break;
    }
    sVar23 = sVar6;
    if (sVar6 == 0) {
      return;
    }
  } while( true );
  do {
    plVar25 = *(long **)(param_1 + 8);
    if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar12 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00fc1848;
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar25;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    plVar13 = (long *)(**(code **)(*plVar25 + 0x10))(plVar25,0xc0,0x10);
    if (plVar13 == (long *)0x0) {
      (**(code **)(*plVar25 + 0xe8))(plVar25);
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("ptr","Create",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
                 ,0x40);
    }
    *plVar13 = (long)puVar4;
    plVar13[2] = 0;
    *(undefined4 *)(plVar13 + 3) = 0;
    if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    puVar9 = PTR_DAT_047d8c78;
    if (lVar14 == 0) {
      lVar17 = 0;
    }
    else {
      lVar17 = 0;
      if (*(long *)(lVar14 + 0x80) != 0) {
        lVar17 = *(long *)(lVar14 + *(long *)(lVar14 + 0x80) * 8 + -8);
      }
    }
    puVar5 = PTR_DAT_047d8c78 + 0x88;
    *plVar13 = (long)(PTR_DAT_047d8c78 + 0x10);
    plVar13[1] = lVar17;
    plVar13[4] = (long)puVar5;
    plVar28 = plVar13 + 5;
    *plVar28 = (long)(puVar9 + 0xd8);
    plVar26 = plVar13 + 6;
    *plVar26 = 0;
    plVar13[7] = 0;
    FUN_00d1a3f4(plVar26,plVar28);
    *plVar13 = (long)&DAT_04547058;
    plVar13[1] = (long)plVar25;
    plVar13[4] = (long)&PTR_LAB_045470d0;
    *plVar28 = (long)&PTR_FUN_04547120;
    plVar13[0x16] = 0;
    *(undefined4 *)(plVar13 + 0x17) = 0;
    *(undefined1 *)((long)plVar13 + 0xbc) = 0;
    plVar13[2] = (long)plVar13;
    *(undefined4 *)(plVar13 + 3) = 0x1000c0;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    lVar12 = *plVar26;
    if (*(long *)(lVar12 + 0x10) == 0) goto LAB_00fc1800;
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar23 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar23 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar23 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
      *(undefined8 *)(lVar12 + 8) = uVar11;
      *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
    }
    else if (sVar23 == -1) goto LAB_00fc1820;
    local_138 = plVar24[3];
    lStack_130 = plVar24[4];
    local_128 = plVar24[5];
    local_120 = (long *)plVar24[6];
    if (local_120 != (long *)0x0) {
      (**(code **)(*local_120 + 0x18))();
    }
    local_70 = (long *)0x0;
    local_88 = 0x1e17b9297d36f334;
    local_80 = "world/data/pokemon/collision/pokemon_collision_unique_data/";
    uStack_78 = 0x3b;
    lVar12 = FUN_01221220(&local_a8,plVar13[1]);
    if (lVar12 != 0) {
      lVar14 = *(long *)(lVar12 + 0x30);
      if (*(long *)(lVar14 + 0x10) == 0) goto LAB_00fc1800;
      psVar1 = (short *)(lVar14 + 0x1a);
      do {
        sVar23 = *psVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar23 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar23 == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar11;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar23 == -1) goto LAB_00fc1820;
    }
    plVar25 = (long *)plVar13[0x16];
    plVar13[0x16] = 0;
    if (plVar25 != (long *)0x0) {
      lVar14 = plVar25[6];
      psVar1 = (short *)(lVar14 + 0x1a);
      do {
        sVar23 = *psVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar23 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar23 == 1) {
        *(undefined8 *)(lVar14 + 0x10) = 0;
        (**(code **)(*plVar25 + 0x50))();
      }
      else if (sVar23 == 0) goto LAB_00fc15ac;
    }
    plVar13[0x16] = lVar12;
    FUN_01221800(&local_b0,&local_88,&local_138);
    plVar27 = local_b0;
    plVar25 = (long *)PTR_DAT_047d8b70;
    if (local_b0 != (long *)0x0) {
      plVar25 = local_b0 + 6;
    }
    local_a8 = *plVar25;
    plVar25 = (long *)PTR_PTR_047d4508;
    if (local_b0 != (long *)0x0) {
      plVar25 = local_b0 + 7;
    }
    lStack_a0 = *plVar25;
    if (local_b0 == (long *)0x0) {
      local_98 = 0;
    }
    else {
      local_98 = local_b0[8];
      local_90 = (long *)0x0;
      (**(code **)(*local_b0 + 0x18))(local_b0);
    }
    local_90 = plVar27;
    FUN_012214a8(lVar12,&local_a8);
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x20))();
    }
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x20))();
    }
    *(undefined4 *)(plVar13 + 0x17) = 0;
    *(undefined1 *)((long)plVar13 + 0xbc) = 0;
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    if (local_120 != (long *)0x0) {
      (**(code **)(*local_120 + 0x20))();
    }
    plVar27 = (long *)plVar24[2];
    plVar25 = *(long **)(param_1 + 0x7a8);
    if (plVar25 == (long *)0x0) {
LAB_00fc123c:
      plVar19 = (long *)(**(code **)(**(long **)(param_1 + 0x7d8) + 0x10))
                                  (*(long **)(param_1 + 0x7d8),0x20,8);
      if (plVar19 == (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x7d8) + 0xe8))();
      }
      uVar11 = *(undefined8 *)(param_1 + 0x7d8);
      if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar12 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar12 != 0) {
        if (0xf < *(ulong *)(lVar12 + 0x80)) {
LAB_00fc1848:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar11;
        *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      }
      plVar19[2] = plVar24[2];
      plVar19[3] = (long)plVar13;
      lVar14 = plVar13[6];
      if (*(long *)(lVar14 + 0x10) == 0) {
LAB_00fc1800:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar14 + 0x1a);
      do {
        sVar23 = *psVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar23 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar23 == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar11;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar23 == -1) {
LAB_00fc1820:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
      if (lVar12 != 0) {
        *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      }
      *plVar19 = 0;
      plVar19[1] = (long)plVar27;
      fVar29 = (float)(*(long *)(param_1 + 0x7f8) + 1);
      if ((plVar25 == (long *)0x0) || (*(float *)(param_1 + 0x800) * (float)plVar25 < fVar29)) {
        uVar18 = (ulong)(plVar25 < (long *)0x3 || ((ulong)plVar25 & (long)plVar25 - 1U) != 0) |
                 (long)plVar25 << 1;
        uVar22 = (ulong)(fVar29 / *(float *)(param_1 + 0x800));
        if (uVar22 <= uVar18) {
          uVar22 = uVar18;
        }
        if (uVar22 - 1 == 0) {
          uVar22 = 2;
        }
        else if ((uVar22 & uVar22 - 1) != 0) {
          uVar22 = std::__next_prime(uVar22);
        }
        uVar18 = *(ulong *)(param_1 + 0x7a8);
        if (uVar18 < uVar22) {
          uVar15 = uVar22;
LAB_00fc150c:
          FUN_01e41a50(plVar3,uVar15);
        }
        else if (uVar22 < uVar18) {
          uVar15 = (ulong)((float)*(ulong *)(param_1 + 0x7f8) / *(float *)(param_1 + 0x800));
          if ((uVar18 < 3) ||
             (uVar20 = uVar18 - (uVar18 >> 1 & 0x5555555555555555),
             uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333),
             1 < (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
            uVar15 = std::__next_prime(uVar15);
          }
          else if (1 < uVar15) {
            uVar15 = 1L << (-LZCOUNT(uVar15 - 1) & 0x3fU);
          }
          if (uVar15 <= uVar22) {
            uVar15 = uVar22;
          }
          if (uVar15 < uVar18) goto LAB_00fc150c;
        }
        plVar25 = *(long **)(param_1 + 0x7a8);
        if (((ulong)plVar25 & (long)plVar25 - 1U) == 0) {
          plVar28 = (long *)((long)plVar25 - 1U & (ulong)plVar27);
        }
        else {
          plVar28 = plVar27;
          if (plVar25 <= plVar27) {
            uVar18 = 0;
            if (plVar25 != (long *)0x0) {
              uVar18 = (ulong)plVar27 / (ulong)plVar25;
            }
            plVar28 = (long *)((long)plVar27 - uVar18 * (long)plVar25);
          }
        }
      }
      plVar27 = *(long **)(*plVar3 + (long)plVar28 * 8);
      if (plVar27 == (long *)0x0) {
        *plVar19 = *plVar2;
        *plVar2 = (long)plVar19;
        *(long **)(*plVar3 + (long)plVar28 * 8) = plVar2;
        if (*plVar19 != 0) {
          plVar28 = *(long **)(*plVar19 + 8);
          if (((ulong)plVar25 & (long)plVar25 - 1U) == 0) {
            plVar28 = (long *)((ulong)plVar28 & (long)plVar25 - 1U);
          }
          else if (plVar25 <= plVar28) {
            uVar18 = 0;
            if (plVar25 != (long *)0x0) {
              uVar18 = (ulong)plVar28 / (ulong)plVar25;
            }
            plVar28 = (long *)((long)plVar28 - uVar18 * (long)plVar25);
          }
          plVar27 = (long *)(*plVar3 + (long)plVar28 * 8);
          goto LAB_00fc1368;
        }
      }
      else {
        *plVar19 = *plVar27;
LAB_00fc1368:
        *plVar27 = (long)plVar19;
      }
      *(long *)(param_1 + 0x7f8) = *(long *)(param_1 + 0x7f8) + 1;
    }
    else {
      uVar18 = (long)plVar25 - 1;
      if (((ulong)plVar25 & uVar18) == 0) {
        plVar28 = (long *)(uVar18 & (ulong)plVar27);
        plVar19 = *(long **)(*plVar3 + (long)plVar28 * 8);
        if (plVar19 == (long *)0x0) goto LAB_00fc123c;
        do {
          plVar19 = (long *)*plVar19;
          if ((plVar19 == (long *)0x0) ||
             ((long *)plVar19[1] != plVar27 && (long *)((ulong)plVar19[1] & uVar18) != plVar28))
          goto LAB_00fc123c;
        } while ((long *)plVar19[2] != plVar27);
      }
      else {
        plVar28 = plVar27;
        if (plVar25 <= plVar27) {
          uVar18 = 0;
          if (plVar25 != (long *)0x0) {
            uVar18 = (ulong)plVar27 / (ulong)plVar25;
          }
          plVar28 = (long *)((long)plVar27 - uVar18 * (long)plVar25);
        }
        plVar19 = *(long **)(*plVar3 + (long)plVar28 * 8);
        if (plVar19 == (long *)0x0) goto LAB_00fc123c;
        do {
          plVar19 = (long *)*plVar19;
          if (plVar19 == (long *)0x0) goto LAB_00fc123c;
          plVar21 = (long *)plVar19[1];
          if (plVar21 != plVar27) {
            if (plVar25 <= plVar21) {
              uVar18 = 0;
              if (plVar25 != (long *)0x0) {
                uVar18 = (ulong)plVar21 / (ulong)plVar25;
              }
              plVar21 = (long *)((long)plVar21 - uVar18 * (long)plVar25);
            }
            if (plVar21 != plVar28) goto LAB_00fc123c;
          }
        } while ((long *)plVar19[2] != plVar27);
      }
    }
    lVar12 = *plVar26;
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar23 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar23 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar23 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar13 + 0x50))(plVar13);
    }
    else if (sVar23 == 0) goto LAB_00fc15ac;
    plVar24 = (long *)*plVar24;
  } while (plVar24 != (long *)0x0);
LAB_00fc157c:
  FUN_016892c0(auStack_118);
  lVar12 = *(long *)(lVar16 + 8);
  psVar1 = (short *)(lVar12 + 0x1a);
  do {
    sVar23 = *psVar1;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar8) {
      *psVar1 = sVar23 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (sVar23 == 1) {
    *(undefined8 *)(lVar12 + 0x10) = 0;
    (**(code **)(*(long *)(lVar16 + -0x28) + 0x50))();
  }
  else if (sVar23 == 0) {
LAB_00fc15ac:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


