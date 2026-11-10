/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00eb5618; name: FUN_00eb5618
 */


void FUN_00eb5618(long param_1,long *param_2,ulong *param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  char *pcVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  ulong unaff_x27;
  undefined8 uVar17;
  float fVar18;
  long local_130;
  char *pcStack_128;
  long local_120;
  long *plStack_118;
  long local_110;
  long local_108;
  long lStack_100;
  long *local_f8;
  long local_f0;
  long lStack_e8;
  long local_e0;
  long *local_d8;
  long local_d0;
  char *pcStack_c8;
  long local_c0;
  long *plStack_b8;
  long local_b0;
  long local_a8;
  long lStack_a0;
  long *local_98;
  long local_90;
  long lStack_88;
  long local_80;
  long *local_78;
  undefined1 auStack_70 [16];
  
  plVar6 = (long *)FUN_00eb5f00(auStack_70,*(undefined8 *)(param_1 + 8),param_2);
  if (plVar6 != (long *)0x0) {
    plVar14 = plVar6 + 5;
    do {
      lVar9 = *plVar14;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *(int *)plVar14 = (int)lVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar9 == -1) goto LAB_00eb5d04;
  }
  plVar13 = (long *)param_4[1];
  for (plVar14 = (long *)*param_4; plVar14 != plVar13; plVar14 = plVar14 + 9) {
    lVar9 = *param_2;
    plVar7 = *(long **)(lVar9 + 0xd8);
    plVar1 = *(long **)(lVar9 + 0xe0);
    if (plVar7 != plVar1) {
      if (*plVar7 != *plVar14) {
        do {
          plVar7 = plVar7 + 0xc;
          if (plVar1 == plVar7) {
            plVar7 = plVar1;
            goto LAB_00eb56c4;
          }
        } while (*plVar7 != *plVar14);
      }
    }
LAB_00eb56c4:
    if (plVar1 == plVar7) {
      plVar7 = *(long **)(lVar9 + 0x110);
      plVar1 = *(long **)(lVar9 + 0x118);
      if (plVar7 != plVar1) {
        if (*plVar7 != *plVar14) {
          do {
            plVar7 = plVar7 + 0xc;
            if (plVar1 == plVar7) {
              plVar7 = plVar1;
              goto LAB_00eb577c;
            }
          } while (*plVar7 != *plVar14);
        }
      }
LAB_00eb577c:
      if (plVar1 != plVar7) {
        pcVar10 = (char *)plVar14[5];
        lVar9 = *plVar14;
        if (*pcVar10 == '\0') {
          lStack_e8 = plVar14[1];
          local_e0 = plVar14[2];
          local_d8 = (long *)plVar14[3];
          local_f0 = lVar9;
          if (local_d8 != (long *)0x0) {
            (**(code **)(*local_d8 + 0x18))();
          }
          FUN_00ee3fc0(plVar6,&local_f0,(int)plVar14[8]);
          plVar7 = local_d8;
        }
        else {
          local_108 = plVar14[1];
          lStack_100 = plVar14[2];
          local_f8 = (long *)plVar14[3];
          local_110 = lVar9;
          if (local_f8 != (long *)0x0) {
            (**(code **)(*local_f8 + 0x18))();
            pcVar10 = (char *)plVar14[5];
          }
          local_130 = plVar14[4];
          local_120 = plVar14[6];
          plVar7 = (long *)plVar14[7];
          pcStack_128 = pcVar10;
          plStack_118 = plVar7;
          if (plVar7 == (long *)0x0) {
            FUN_00d0fefc(plVar6,&local_110,&local_130);
            plVar7 = local_f8;
          }
          else {
            (**(code **)(*plVar7 + 0x18))(plVar7);
            FUN_00d0fefc(plVar6,&local_110,&local_130);
            (**(code **)(*plVar7 + 0x20))(plVar7);
            plVar7 = local_f8;
          }
        }
        goto joined_r0x00eb5818;
      }
    }
    else {
      pcVar10 = (char *)plVar14[5];
      lVar9 = *plVar14;
      if (*pcVar10 == '\0') {
        lStack_88 = plVar14[1];
        local_80 = plVar14[2];
        local_78 = (long *)plVar14[3];
        local_90 = lVar9;
        if (local_78 != (long *)0x0) {
          (**(code **)(*local_78 + 0x18))();
        }
        FUN_01773ea0(plVar6,&local_90,(int)plVar14[8]);
        plVar7 = local_78;
      }
      else {
        local_a8 = plVar14[1];
        lStack_a0 = plVar14[2];
        local_98 = (long *)plVar14[3];
        local_b0 = lVar9;
        if (local_98 != (long *)0x0) {
          (**(code **)(*local_98 + 0x18))();
          pcVar10 = (char *)plVar14[5];
        }
        local_d0 = plVar14[4];
        local_c0 = plVar14[6];
        plVar7 = (long *)plVar14[7];
        pcStack_c8 = pcVar10;
        plStack_b8 = plVar7;
        if (plVar7 == (long *)0x0) {
          FUN_00eb5d58(plVar6,&local_b0,&local_d0);
          plVar7 = local_98;
        }
        else {
          (**(code **)(*plVar7 + 0x18))(plVar7);
          FUN_00eb5d58(plVar6,&local_b0,&local_d0);
          (**(code **)(*plVar7 + 0x20))(plVar7);
          plVar7 = local_98;
        }
      }
joined_r0x00eb5818:
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x20))();
      }
    }
  }
  FUN_00eb6400(plVar6);
  uVar15 = *param_3;
  plVar14 = (long *)(param_1 + 0x40);
  uVar16 = *(ulong *)(param_1 + 0x48);
  if (uVar16 != 0) {
    uVar11 = uVar16 - 1;
    if ((uVar16 & uVar11) == 0) {
      unaff_x27 = uVar11 & uVar15;
      plVar13 = *(long **)(*plVar14 + unaff_x27 * 8);
      if (plVar13 != (long *)0x0) {
        do {
          plVar13 = (long *)*plVar13;
          if ((plVar13 == (long *)0x0) ||
             (plVar13[1] != uVar15 && (plVar13[1] & uVar11) != unaff_x27)) goto LAB_00eb5880;
        } while (plVar13[2] != uVar15);
        goto LAB_00eb5a0c;
      }
    }
    else {
      unaff_x27 = uVar15;
      if (uVar16 <= uVar15) {
        uVar11 = 0;
        if (uVar16 != 0) {
          uVar11 = uVar15 / uVar16;
        }
        unaff_x27 = uVar15 - uVar11 * uVar16;
      }
      plVar13 = *(long **)(*plVar14 + unaff_x27 * 8);
      if (plVar13 != (long *)0x0) {
        do {
          plVar13 = (long *)*plVar13;
          if (plVar13 == (long *)0x0) goto LAB_00eb5880;
          uVar11 = plVar13[1];
          if (uVar11 != uVar15) {
            if (uVar16 <= uVar11) {
              uVar8 = 0;
              if (uVar16 != 0) {
                uVar8 = uVar11 / uVar16;
              }
              uVar11 = uVar11 - uVar8 * uVar16;
            }
            if (uVar11 != unaff_x27) goto LAB_00eb5880;
          }
        } while (plVar13[2] != uVar15);
        goto LAB_00eb5a0c;
      }
    }
  }
LAB_00eb5880:
  plVar13 = (long *)(**(code **)(**(long **)(param_1 + 0x78) + 0x10))
                              (*(long **)(param_1 + 0x78),0x38,8);
  if (plVar13 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x78) + 0xe8))();
  }
  uVar17 = *(undefined8 *)(param_1 + 0x78);
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar9 != 0) {
    if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar17;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  }
  plVar13[2] = *param_3;
  plVar13[3] = param_3[1];
  plVar13[4] = param_3[2];
  plVar7 = (long *)param_3[3];
  plVar13[5] = (long)plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))();
  }
  plVar13[6] = (long)plVar6;
  if (plVar6 != (long *)0x0) {
    plVar7 = plVar6 + 5;
    do {
      lVar4 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *(int *)plVar7 = (int)lVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar4 == -1) {
LAB_00eb5d04:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  if (lVar9 != 0) {
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  }
  *plVar13 = 0;
  plVar13[1] = uVar15;
  fVar18 = (float)(*(long *)(param_1 + 0x98) + 1);
  if ((uVar16 == 0) || (*(float *)(param_1 + 0xa0) * (float)uVar16 < fVar18)) {
    uVar16 = (ulong)(uVar16 < 3 || (uVar16 & uVar16 - 1) != 0) | uVar16 << 1;
    uVar11 = (ulong)(fVar18 / *(float *)(param_1 + 0xa0));
    if (uVar11 <= uVar16) {
      uVar11 = uVar16;
    }
    if (uVar11 - 1 == 0) {
      uVar11 = 2;
    }
    else if ((uVar11 & uVar11 - 1) != 0) {
      uVar11 = std::__next_prime(uVar11);
    }
    uVar16 = *(ulong *)(param_1 + 0x48);
    if (uVar16 < uVar11) {
      uVar8 = uVar11;
LAB_00eb59bc:
      FUN_00eb6760(plVar14,uVar8);
    }
    else if (uVar11 < uVar16) {
      uVar8 = (ulong)((float)*(ulong *)(param_1 + 0x98) / *(float *)(param_1 + 0xa0));
      if ((uVar16 < 3) ||
         (uVar12 = uVar16 - (uVar16 >> 1 & 0x5555555555555555),
         uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333),
         1 < (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar8 = std::__next_prime(uVar8);
      }
      else if (1 < uVar8) {
        uVar8 = 1L << (-LZCOUNT(uVar8 - 1) & 0x3fU);
      }
      if (uVar8 <= uVar11) {
        uVar8 = uVar11;
      }
      if (uVar8 < uVar16) goto LAB_00eb59bc;
    }
    uVar16 = *(ulong *)(param_1 + 0x48);
    if ((uVar16 & uVar16 - 1) == 0) {
      unaff_x27 = uVar16 - 1 & uVar15;
    }
    else if (uVar15 < uVar16) {
      unaff_x27 = uVar15;
    }
    else {
      uVar11 = 0;
      if (uVar16 != 0) {
        uVar11 = uVar15 / uVar16;
      }
      unaff_x27 = uVar15 - uVar11 * uVar16;
    }
  }
  plVar7 = *(long **)(*plVar14 + unaff_x27 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = (long *)(param_1 + 0x70);
    *plVar13 = *plVar7;
    *plVar7 = (long)plVar13;
    *(long **)(*(long *)(param_1 + 0x40) + unaff_x27 * 8) = plVar7;
    if (*plVar13 != 0) {
      uVar15 = *(ulong *)(*plVar13 + 8);
      if ((uVar16 & uVar16 - 1) == 0) {
        uVar15 = uVar15 & uVar16 - 1;
      }
      else if (uVar16 <= uVar15) {
        uVar11 = 0;
        if (uVar16 != 0) {
          uVar11 = uVar15 / uVar16;
        }
        uVar15 = uVar15 - uVar11 * uVar16;
      }
      plVar7 = (long *)(*plVar14 + uVar15 * 8);
      goto LAB_00eb5a68;
    }
  }
  else {
    *plVar13 = *plVar7;
LAB_00eb5a68:
    *plVar7 = (long)plVar13;
  }
  *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + 1;
LAB_00eb5a0c:
  if (plVar6 != (long *)0x0) {
    plVar14 = plVar6 + 5;
    do {
      lVar9 = *plVar14;
      iVar5 = (int)lVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *(int *)plVar14 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
    else if ((int)lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


