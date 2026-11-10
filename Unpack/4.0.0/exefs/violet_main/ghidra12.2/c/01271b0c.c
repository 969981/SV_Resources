/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01271b0c; name: FUN_01271b0c
 */


void FUN_01271b0c(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong unaff_x26;
  float fVar18;
  
  plVar7 = (long *)(param_1 + 0xb0);
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar7 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_01271b50;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xb8));
  do {
    if (*plVar7 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xb8));
        while (*plVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01271b50;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01271b50:
  lVar5 = *param_2;
  plVar7 = (long *)(param_1 + 0x10);
  uVar17 = *(ulong *)(param_1 + 0x18);
  uVar16 = *(ulong *)(lVar5 + 0x38);
  if (uVar17 == 0) {
LAB_01271c10:
    plVar14 = (long *)(**(code **)(**(long **)(param_1 + 0x48) + 0x10))
                                (*(long **)(param_1 + 0x48),0x38,8);
    if (plVar14 == (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x48) + 0xe8))();
    }
    uVar15 = *(undefined8 *)(param_1 + 0x48);
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar8 != 0) {
      if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_012722d8;
      *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar15;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    }
    plVar14[2] = *(long *)(lVar5 + 0x38);
    plVar14[3] = *(long *)(lVar5 + 0x40);
    plVar14[4] = *(long *)(lVar5 + 0x48);
    plVar6 = *(long **)(lVar5 + 0x50);
    plVar14[5] = (long)plVar6;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))();
    }
    plVar14[6] = 0;
    if (lVar8 != 0) {
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    }
    *plVar14 = 0;
    plVar14[1] = uVar16;
    fVar18 = (float)(*(long *)(param_1 + 0x68) + 1);
    if ((uVar17 == 0) || (*(float *)(param_1 + 0x70) * (float)uVar17 < fVar18)) {
      uVar17 = (ulong)(uVar17 < 3 || (uVar17 & uVar17 - 1) != 0) | uVar17 << 1;
      uVar11 = (ulong)(fVar18 / *(float *)(param_1 + 0x70));
      if (uVar11 <= uVar17) {
        uVar11 = uVar17;
      }
      if (uVar11 - 1 == 0) {
        uVar11 = 2;
      }
      else if ((uVar11 & uVar11 - 1) != 0) {
        uVar11 = std::__next_prime(uVar11);
      }
      uVar17 = *(ulong *)(param_1 + 0x18);
      if (uVar17 < uVar11) {
        uVar10 = uVar11;
LAB_01272020:
        FUN_012724b8(plVar7,uVar10);
      }
      else if (uVar11 < uVar17) {
        uVar10 = (ulong)((float)*(ulong *)(param_1 + 0x68) / *(float *)(param_1 + 0x70));
        if ((uVar17 < 3) ||
           (uVar13 = uVar17 - (uVar17 >> 1 & 0x5555555555555555),
           uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333),
           1 < (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
          uVar10 = std::__next_prime(uVar10);
        }
        else if (1 < uVar10) {
          uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
        }
        if (uVar10 <= uVar11) {
          uVar10 = uVar11;
        }
        if (uVar10 < uVar17) goto LAB_01272020;
      }
      uVar17 = *(ulong *)(param_1 + 0x18);
      if ((uVar17 & uVar17 - 1) == 0) {
        unaff_x26 = uVar17 - 1 & uVar16;
      }
      else if (uVar16 < uVar17) {
        unaff_x26 = uVar16;
      }
      else {
        uVar11 = 0;
        if (uVar17 != 0) {
          uVar11 = uVar16 / uVar17;
        }
        unaff_x26 = uVar16 - uVar11 * uVar17;
      }
    }
    plVar6 = *(long **)(*plVar7 + unaff_x26 * 8);
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)(param_1 + 0x40);
      *plVar14 = *plVar6;
      *plVar6 = (long)plVar14;
      *(long **)(*(long *)(param_1 + 0x10) + unaff_x26 * 8) = plVar6;
      if (*plVar14 != 0) {
        uVar16 = *(ulong *)(*plVar14 + 8);
        if ((uVar17 & uVar17 - 1) == 0) {
          uVar16 = uVar16 & uVar17 - 1;
        }
        else if (uVar17 <= uVar16) {
          uVar11 = 0;
          if (uVar17 != 0) {
            uVar11 = uVar16 / uVar17;
          }
          uVar16 = uVar16 - uVar11 * uVar17;
        }
        plVar6 = (long *)(*plVar7 + uVar16 * 8);
        goto LAB_01271cf4;
      }
    }
    else {
      *plVar14 = *plVar6;
LAB_01271cf4:
      *plVar6 = (long)plVar14;
    }
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
    lVar5 = *param_2;
  }
  else {
    uVar11 = uVar17 - 1;
    if ((uVar17 & uVar11) != 0) {
      unaff_x26 = uVar16;
      if (uVar17 <= uVar16) {
        uVar11 = 0;
        if (uVar17 != 0) {
          uVar11 = uVar16 / uVar17;
        }
        unaff_x26 = uVar16 - uVar11 * uVar17;
      }
      plVar14 = *(long **)(*plVar7 + unaff_x26 * 8);
      if (plVar14 != (long *)0x0) {
        while (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0) {
          uVar11 = plVar14[1];
          if (uVar11 != uVar16) {
            if (uVar17 <= uVar11) {
              uVar10 = 0;
              if (uVar17 != 0) {
                uVar10 = uVar11 / uVar17;
              }
              uVar11 = uVar11 - uVar10 * uVar17;
            }
            if (uVar11 != unaff_x26) break;
          }
          if (plVar14[2] == uVar16) goto LAB_01271d08;
        }
      }
      goto LAB_01271c10;
    }
    unaff_x26 = uVar11 & uVar16;
    plVar14 = *(long **)(*plVar7 + unaff_x26 * 8);
    if (plVar14 == (long *)0x0) goto LAB_01271c10;
    do {
      plVar14 = (long *)*plVar14;
      if ((plVar14 == (long *)0x0) || (plVar14[1] != uVar16 && (plVar14[1] & uVar11) != unaff_x26))
      goto LAB_01271c10;
    } while (plVar14[2] != uVar16);
  }
LAB_01271d08:
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 0x28);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar7 = (long *)plVar14[6];
  plVar14[6] = lVar5;
  if (plVar7 != (long *)0x0) {
    plVar14 = plVar7 + 5;
    do {
      lVar5 = *plVar14;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *(int *)plVar14 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  plVar7 = *(long **)(param_1 + 0x80);
  lVar5 = *param_2;
  if (plVar7 < *(long **)(param_1 + 0x88)) {
    uVar15 = *(undefined8 *)(param_1 + 0x90);
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar8 == 0) {
      *plVar7 = lVar5;
    }
    else {
      if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_012722d8;
      *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar15;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      *plVar7 = lVar5;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    }
    *(long **)(param_1 + 0x80) = plVar7 + 1;
  }
  else {
    uVar17 = *(ulong *)(param_1 + 0x98);
    lVar8 = (long)plVar7 - *(long *)(param_1 + 0x78) >> 3;
    uVar16 = lVar8 + 1;
    if (0x7ffffffffffffffe < uVar17) {
      uVar17 = 0x7fffffffffffffff;
    }
    if (uVar17 < uVar16) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar12 = (long)*(long **)(param_1 + 0x88) - *(long *)(param_1 + 0x78);
    uVar11 = lVar12 >> 2;
    if (uVar16 <= uVar11) {
      uVar16 = uVar11;
    }
    if (uVar17 >> 1 <= (ulong)(lVar12 >> 3)) {
      uVar16 = uVar17;
    }
    if (uVar16 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = (**(code **)(**(long **)(param_1 + 0x90) + 0x10))
                         (*(long **)(param_1 + 0x90),uVar16 << 3,8);
      if (lVar12 == 0) {
        (**(code **)(**(long **)(param_1 + 0x90) + 0xe8))();
      }
    }
    plVar7 = (long *)(lVar12 + lVar8 * 8);
    uVar15 = *(undefined8 *)(param_1 + 0x90);
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar8 == 0) {
      *plVar7 = lVar5;
    }
    else {
      if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_012722d8;
      *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar15;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      *plVar7 = lVar5;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    }
    lVar5 = *(long *)(param_1 + 0x78);
    lVar8 = *(long *)(param_1 + 0x80);
    plVar14 = plVar7;
    if (lVar8 != lVar5) {
      do {
        uVar15 = *(undefined8 *)(param_1 + 0x90);
        if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar9 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar9 == 0) {
          plVar14[-1] = *(long *)(lVar8 + -8);
        }
        else {
          if (0xf < *(ulong *)(lVar9 + 0x80)) {
LAB_012722d8:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar15;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
          plVar14[-1] = *(long *)(lVar8 + -8);
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
        }
        lVar8 = lVar8 + -8;
        plVar14 = plVar14 + -1;
      } while (lVar5 != lVar8);
      lVar5 = *(long *)(param_1 + 0x78);
    }
    *(long **)(param_1 + 0x78) = plVar14;
    *(long **)(param_1 + 0x80) = plVar7 + 1;
    lVar8 = *(long *)(param_1 + 0x88);
    *(ulong *)(param_1 + 0x88) = lVar12 + uVar16 * 8;
    if (lVar5 != 0) {
      plVar7 = *(long **)(param_1 + 0x90);
      lVar8 = lVar8 - lVar5;
      uVar16 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar16 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
        (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,lVar8,8);
      }
      else {
        FUN_00c48fe8(plVar7,lVar5,lVar8,8);
      }
    }
  }
  *(undefined1 *)(param_1 + 200) = 1;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xb8));
  return;
}


