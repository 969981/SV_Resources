/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02acd088; name: FUN_02acd088
 */


void FUN_02acd088(undefined8 *param_1,ulong *param_2)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong unaff_x28;
  float fVar21;
  undefined8 *local_78 [2];
  undefined8 local_68;
  
  if (((DAT_04840580 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04840580), iVar7 != 0)) {
    FUN_00100190(&LAB_02ace3a0,&DAT_04840570,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840580);
  }
  lVar12 = DAT_04840570;
  DAT_04840568 = DAT_04840570;
  uVar13 = *(ulong *)(DAT_04840570 + 0x68);
  plVar1 = (long *)(DAT_04840570 + 0x60);
  if (uVar13 != 0) {
    uVar15 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar9 = *param_2;
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      uVar8 = uVar13 - 1 & uVar9;
    }
    else {
      uVar8 = uVar9;
      if (uVar13 <= uVar9) {
        uVar8 = 0;
        if (uVar13 != 0) {
          uVar8 = uVar9 / uVar13;
        }
        uVar8 = uVar9 - uVar8 * uVar13;
      }
    }
    plVar16 = *(long **)(*plVar1 + uVar8 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar15 < 2) {
        do {
          if (plVar16[1] == uVar9) {
            if (plVar16[2] == uVar9) goto LAB_02acd4a0;
          }
          else if ((plVar16[1] & uVar13 - 1) != uVar8) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar15 = plVar16[1];
          if (uVar15 == uVar9) {
            if (plVar16[2] == uVar9) goto LAB_02acd4a0;
          }
          else {
            if (uVar13 <= uVar15) {
              uVar10 = 0;
              if (uVar13 != 0) {
                uVar10 = uVar15 / uVar13;
              }
              uVar15 = uVar15 - uVar10 * uVar13;
            }
            if (uVar15 != uVar8) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
  plVar16 = (long *)FUN_01221220(local_78,*(undefined8 *)(DAT_04840570 + 8));
  if (plVar16 != (long *)0x0) {
    lVar17 = plVar16[6];
    if (*(long *)(lVar17 + 0x10) == 0) goto LAB_02acd878;
    psVar2 = (short *)(lVar17 + 0x1a);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 0) {
      uVar18 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
      *(undefined8 *)(lVar17 + 8) = uVar18;
      *(undefined4 *)(lVar17 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) goto LAB_02acd898;
  }
  FUN_012214a8(plVar16,param_2);
  uVar13 = *param_2;
  uVar15 = *(ulong *)(lVar12 + 0x68);
  if (uVar15 == 0) {
LAB_02acd2d4:
    plVar14 = (long *)(**(code **)(**(long **)(lVar12 + 0x98) + 0x10))
                                (*(long **)(lVar12 + 0x98),0x20,8);
    if (plVar14 == (long *)0x0) {
      (**(code **)(**(long **)(lVar12 + 0x98) + 0xe8))();
    }
    uVar18 = *(undefined8 *)(lVar12 + 0x98);
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar17 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar17 != 0) {
      if (0xf < *(ulong *)(lVar17 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = uVar18;
      *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
    }
    plVar14[2] = *param_2;
    plVar14[3] = (long)plVar16;
    if (plVar16 != (long *)0x0) {
      lVar19 = plVar16[6];
      if (*(long *)(lVar19 + 0x10) == 0) {
LAB_02acd878:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar2 = (short *)(lVar19 + 0x1a);
      do {
        sVar4 = *psVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar4 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 0) {
        uVar18 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
        *(undefined8 *)(lVar19 + 8) = uVar18;
        *(undefined4 *)(lVar19 + 0x1c) = 0xfffffffe;
      }
      else if (sVar4 == -1) {
LAB_02acd898:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    if (lVar17 != 0) {
      *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
    }
    *plVar14 = 0;
    plVar14[1] = uVar13;
    fVar21 = (float)(*(long *)(lVar12 + 0xb8) + 1);
    if ((uVar15 == 0) || (*(float *)(lVar12 + 0xc0) * (float)uVar15 < fVar21)) {
      uVar15 = (ulong)(uVar15 < 3 || (uVar15 & uVar15 - 1) != 0) | uVar15 << 1;
      uVar9 = (ulong)(fVar21 / *(float *)(lVar12 + 0xc0));
      if (uVar9 <= uVar15) {
        uVar9 = uVar15;
      }
      if (uVar9 - 1 == 0) {
        uVar9 = 2;
      }
      else if ((uVar9 & uVar9 - 1) != 0) {
        uVar9 = std::__next_prime(uVar9);
      }
      uVar15 = *(ulong *)(lVar12 + 0x68);
      if (uVar15 < uVar9) {
        uVar8 = uVar9;
LAB_02acd420:
        FUN_02ace05c(plVar1,uVar8);
      }
      else if (uVar9 < uVar15) {
        uVar8 = (ulong)((float)*(ulong *)(lVar12 + 0xb8) / *(float *)(lVar12 + 0xc0));
        if ((uVar15 < 3) ||
           (uVar10 = uVar15 - (uVar15 >> 1 & 0x5555555555555555),
           uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333),
           1 < (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
          uVar8 = std::__next_prime(uVar8);
        }
        else if (1 < uVar8) {
          uVar8 = 1L << (-LZCOUNT(uVar8 - 1) & 0x3fU);
        }
        if (uVar8 <= uVar9) {
          uVar8 = uVar9;
        }
        if (uVar8 < uVar15) goto LAB_02acd420;
      }
      uVar15 = *(ulong *)(lVar12 + 0x68);
      if ((uVar15 & uVar15 - 1) == 0) {
        unaff_x28 = uVar15 - 1 & uVar13;
      }
      else if (uVar13 < uVar15) {
        unaff_x28 = uVar13;
      }
      else {
        uVar9 = 0;
        if (uVar15 != 0) {
          uVar9 = uVar13 / uVar15;
        }
        unaff_x28 = uVar13 - uVar9 * uVar15;
      }
    }
    plVar11 = *(long **)(*plVar1 + unaff_x28 * 8);
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)(lVar12 + 0x90);
      *plVar14 = *plVar11;
      *plVar11 = (long)plVar14;
      *(long **)(*(long *)(lVar12 + 0x60) + unaff_x28 * 8) = plVar11;
      if (*plVar14 != 0) {
        uVar13 = *(ulong *)(*plVar14 + 8);
        if ((uVar15 & uVar15 - 1) == 0) {
          uVar13 = uVar13 & uVar15 - 1;
        }
        else if (uVar15 <= uVar13) {
          uVar9 = 0;
          if (uVar15 != 0) {
            uVar9 = uVar13 / uVar15;
          }
          uVar13 = uVar13 - uVar9 * uVar15;
        }
        plVar11 = (long *)(*plVar1 + uVar13 * 8);
        goto LAB_02acd5c4;
      }
    }
    else {
      *plVar14 = *plVar11;
LAB_02acd5c4:
      *plVar11 = (long)plVar14;
    }
    *(long *)(lVar12 + 0xb8) = *(long *)(lVar12 + 0xb8) + 1;
  }
  else {
    uVar9 = uVar15 - 1;
    if ((uVar15 & uVar9) == 0) {
      unaff_x28 = uVar9 & uVar13;
      plVar14 = *(long **)(*plVar1 + unaff_x28 * 8);
      if (plVar14 == (long *)0x0) goto LAB_02acd2d4;
      do {
        plVar14 = (long *)*plVar14;
        if ((plVar14 == (long *)0x0) || (plVar14[1] != uVar13 && (plVar14[1] & uVar9) != unaff_x28))
        goto LAB_02acd2d4;
      } while (plVar14[2] != uVar13);
    }
    else {
      unaff_x28 = uVar13;
      if (uVar15 <= uVar13) {
        uVar9 = 0;
        if (uVar15 != 0) {
          uVar9 = uVar13 / uVar15;
        }
        unaff_x28 = uVar13 - uVar9 * uVar15;
      }
      plVar14 = *(long **)(*plVar1 + unaff_x28 * 8);
      if (plVar14 == (long *)0x0) goto LAB_02acd2d4;
      do {
        plVar14 = (long *)*plVar14;
        if (plVar14 == (long *)0x0) goto LAB_02acd2d4;
        uVar9 = plVar14[1];
        if (uVar9 != uVar13) {
          if (uVar15 <= uVar9) {
            uVar8 = 0;
            if (uVar15 != 0) {
              uVar8 = uVar9 / uVar15;
            }
            uVar9 = uVar9 - uVar8 * uVar15;
          }
          if (uVar9 != unaff_x28) goto LAB_02acd2d4;
        }
      } while (plVar14[2] != uVar13);
    }
  }
  (**(code **)(*plVar16 + 0x18))(local_78,plVar16);
  *param_1 = 0;
  param_1[1] = 0;
  plVar1 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    plVar1 = plVar16 + 5;
  }
  puVar20 = local_78[0];
  if ((long *)local_78[0][2] == plVar1) {
    FUN_009442b8(param_1,local_78);
    puVar20 = local_78[0];
  }
  if (puVar20 != (undefined8 *)0x0) {
    psVar2 = (short *)(puVar20 + 3);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)puVar20 + 0x1c);
      do {
        iVar7 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_68 = *puVar20;
        FUN_00c44438(lVar12 + 0x8040,&local_68);
      }
    }
    else if (sVar4 == 0) {
LAB_02acd8ec:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  lVar12 = plVar16[6];
  psVar2 = (short *)(lVar12 + 0x1a);
  do {
    sVar4 = *psVar2;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar6) {
      *psVar2 = sVar4 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar4 == 1) {
    *(undefined8 *)(lVar12 + 0x10) = 0;
    (**(code **)(*plVar16 + 0x50))(plVar16);
  }
  else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
LAB_02acd4a0:
  plVar16 = (long *)plVar16[3];
  (**(code **)(*plVar16 + 0x18))(local_78,plVar16);
  *param_1 = 0;
  param_1[1] = 0;
  plVar1 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    plVar1 = plVar16 + 5;
  }
  puVar20 = local_78[0];
  if ((long *)local_78[0][2] == plVar1) {
    FUN_009442b8(param_1,local_78);
    puVar20 = local_78[0];
  }
  if (puVar20 == (undefined8 *)0x0) {
    return;
  }
  psVar2 = (short *)(puVar20 + 3);
  do {
    sVar4 = *psVar2;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar6) {
      *psVar2 = sVar4 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar4 == 1) {
    piVar3 = (int *)((long)puVar20 + 0x1c);
    do {
      iVar7 = *piVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar6) {
        *piVar3 = -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == -1) {
      return;
    }
    if (((*PTR_DAT_047d3908 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3908);
    }
    lVar12 = *(long *)PTR_DAT_047d3910;
    *(long *)PTR_DAT_047d3918 = lVar12;
    local_68 = *puVar20;
    FUN_00c44438(lVar12 + 0x8040,&local_68);
    return;
  }
  if (sVar4 != 0) {
    return;
  }
  goto LAB_02acd8ec;
}


