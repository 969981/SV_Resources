/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fa1ddc; name: FUN_00fa1ddc
 */


void FUN_00fa1ddc(long param_1,ulong *param_2,long *param_3)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x27;
  undefined8 uVar15;
  float fVar16;
  
  uVar13 = *param_2;
  uVar14 = *(ulong *)(param_1 + 0xa8);
  plVar1 = (long *)(param_1 + 0xa0);
  if (uVar14 != 0) {
    uVar9 = uVar14 - 1;
    if ((uVar14 & uVar9) == 0) {
      unaff_x27 = uVar9 & uVar13;
      plVar10 = *(long **)(*plVar1 + unaff_x27 * 8);
      if (plVar10 != (long *)0x0) {
        while ((plVar10 = (long *)*plVar10, plVar10 != (long *)0x0 &&
               (plVar10[1] == uVar13 || (plVar10[1] & uVar9) == unaff_x27))) {
          if (plVar10[2] == uVar13) {
            return;
          }
        }
      }
    }
    else {
      unaff_x27 = uVar13;
      if (uVar14 <= uVar13) {
        uVar9 = 0;
        if (uVar14 != 0) {
          uVar9 = uVar13 / uVar14;
        }
        unaff_x27 = uVar13 - uVar9 * uVar14;
      }
      plVar10 = *(long **)(*plVar1 + unaff_x27 * 8);
      if (plVar10 != (long *)0x0) {
        while (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0) {
          uVar9 = plVar10[1];
          if (uVar9 != uVar13) {
            if (uVar14 <= uVar9) {
              uVar8 = 0;
              if (uVar14 != 0) {
                uVar8 = uVar9 / uVar14;
              }
              uVar9 = uVar9 - uVar8 * uVar14;
            }
            if (uVar9 != unaff_x27) break;
          }
          if (plVar10[2] == uVar13) {
            return;
          }
        }
      }
    }
  }
  plVar10 = (long *)(**(code **)(**(long **)(param_1 + 0xd8) + 0x10))
                              (*(long **)(param_1 + 0xd8),0x38,8);
  if (plVar10 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xd8) + 0xe8))();
  }
  uVar15 = *(undefined8 *)(param_1 + 0xd8);
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar6 != 0) {
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar15;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  }
  plVar10[2] = *param_2;
  plVar10[3] = param_2[1];
  plVar10[4] = param_2[2];
  plVar7 = (long *)param_2[3];
  plVar10[5] = (long)plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))();
  }
  lVar11 = *param_3;
  plVar10[6] = lVar11;
  if (lVar11 != 0) {
    piVar2 = (int *)(lVar11 + 0x28);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  *plVar10 = 0;
  plVar10[1] = uVar13;
  fVar16 = (float)(*(long *)(param_1 + 0xf8) + 1);
  if ((uVar14 == 0) || (*(float *)(param_1 + 0x100) * (float)uVar14 < fVar16)) {
    uVar14 = (ulong)(uVar14 < 3 || (uVar14 & uVar14 - 1) != 0) | uVar14 << 1;
    uVar9 = (ulong)(fVar16 / *(float *)(param_1 + 0x100));
    if (uVar9 <= uVar14) {
      uVar9 = uVar14;
    }
    if (uVar9 - 1 == 0) {
      uVar9 = 2;
    }
    else if ((uVar9 & uVar9 - 1) != 0) {
      uVar9 = std::__next_prime(uVar9);
    }
    uVar14 = *(ulong *)(param_1 + 0xa8);
    if (uVar14 < uVar9) {
      uVar8 = uVar9;
LAB_00fa20a0:
      FUN_00fa2208(plVar1,uVar8);
    }
    else if (uVar9 < uVar14) {
      uVar8 = (ulong)((float)*(ulong *)(param_1 + 0xf8) / *(float *)(param_1 + 0x100));
      if ((uVar14 < 3) ||
         (uVar12 = uVar14 - (uVar14 >> 1 & 0x5555555555555555),
         uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333),
         1 < (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar8 = std::__next_prime(uVar8);
      }
      else if (1 < uVar8) {
        uVar8 = 1L << (-LZCOUNT(uVar8 - 1) & 0x3fU);
      }
      if (uVar8 <= uVar9) {
        uVar8 = uVar9;
      }
      if (uVar8 < uVar14) goto LAB_00fa20a0;
    }
    uVar14 = *(ulong *)(param_1 + 0xa8);
    if ((uVar14 & uVar14 - 1) == 0) {
      unaff_x27 = uVar14 - 1 & uVar13;
    }
    else if (uVar13 < uVar14) {
      unaff_x27 = uVar13;
    }
    else {
      uVar9 = 0;
      if (uVar14 != 0) {
        uVar9 = uVar13 / uVar14;
      }
      unaff_x27 = uVar13 - uVar9 * uVar14;
    }
  }
  plVar7 = *(long **)(*plVar1 + unaff_x27 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = (long *)(param_1 + 0xd0);
    *plVar10 = *plVar7;
    *plVar7 = (long)plVar10;
    *(long **)(*(long *)(param_1 + 0xa0) + unaff_x27 * 8) = plVar7;
    if (*plVar10 == 0) goto LAB_00fa1fc8;
    uVar13 = *(ulong *)(*plVar10 + 8);
    if ((uVar14 & uVar14 - 1) == 0) {
      uVar13 = uVar13 & uVar14 - 1;
    }
    else if (uVar14 <= uVar13) {
      uVar9 = 0;
      if (uVar14 != 0) {
        uVar9 = uVar13 / uVar14;
      }
      uVar13 = uVar13 - uVar9 * uVar14;
    }
    plVar7 = (long *)(*plVar1 + uVar13 * 8);
  }
  else {
    *plVar10 = *plVar7;
  }
  *plVar7 = (long)plVar10;
LAB_00fa1fc8:
  *(long *)(param_1 + 0xf8) = *(long *)(param_1 + 0xf8) + 1;
  return;
}


