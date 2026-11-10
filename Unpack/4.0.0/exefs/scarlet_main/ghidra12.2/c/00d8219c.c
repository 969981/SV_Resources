/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d8219c; name: FUN_00d8219c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00d8219c(long param_1,int param_2,long *param_3,int param_4,char *param_5)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong *puVar22;
  bool bVar23;
  int *piVar24;
  int *piVar25;
  undefined8 local_a0;
  ulong *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  if ((param_4 < 0) && (*param_3 != 0)) {
    uVar2 = *(uint *)(*param_3 + 0x78);
    uVar16 = (ulong)uVar2;
    lVar18 = *(long *)(param_1 + 0x210) - *(long *)(param_1 + 0x208);
    lVar12 = lVar18 >> 3;
    uVar13 = lVar12 * -0x5555555555555555;
    if (1 < uVar2 && uVar13 != uVar16) {
      uVar14 = 0;
      if (uVar16 != 0) {
        uVar14 = uVar13 / uVar16;
      }
      if (uVar13 != uVar14 * uVar16) {
        if (uVar16 < uVar13) {
          uVar14 = uVar13;
          uVar21 = uVar16;
LAB_00d82328:
          uVar19 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
          uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
          uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
          uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
          uVar20 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
          uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
          uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
          uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
          uVar19 = LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20);
          uVar20 = LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20);
          uVar21 = uVar21 >> (uVar20 & 0x3f);
          uVar14 = uVar14 >> (uVar19 & 0x3f);
          if ((uint)uVar20 <= (uint)uVar19) {
            uVar19 = uVar20;
          }
          while (1 < uVar21) {
            uVar20 = 0;
            if (uVar21 != 0) {
              uVar20 = uVar14 / uVar21;
            }
            uVar20 = uVar14 - uVar20 * uVar21;
            uVar14 = uVar21 - uVar20;
            if (uVar20 == 0) goto LAB_00d82358;
            if (uVar14 == 0) {
              uVar14 = uVar20;
              goto LAB_00d82358;
            }
            uVar21 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
            uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
            uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
            uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
            uVar20 = uVar20 >> (LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) & 0x3fU);
            uVar21 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
            uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
            uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
            uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
            uVar14 = uVar14 >> (LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) & 0x3fU);
            uVar21 = uVar20;
            if (uVar14 <= uVar20) {
              uVar21 = uVar14;
              uVar14 = uVar20;
            }
          }
          if (uVar21 == 1) {
            uVar14 = 1;
          }
LAB_00d82358:
          uVar14 = uVar14 << (uVar19 & 0x3f);
          if (uVar14 != 0) goto LAB_00d82360;
          uVar21 = 0;
LAB_00d82998:
          if (uVar21 < uVar13) {
            *(ulong *)(param_1 + 0x210) = *(long *)(param_1 + 0x208) + uVar21 * 0x18;
          }
        }
        else {
          uVar14 = uVar16;
          uVar21 = uVar13;
          if (lVar18 != 0) goto LAB_00d82328;
LAB_00d82360:
          uVar21 = 0;
          if (uVar14 != 0) {
            uVar21 = uVar16 / uVar14;
          }
          uVar21 = uVar21 * uVar13;
          lVar12 = uVar21 + lVar12 * 0x5555555555555555;
          if (uVar21 < uVar13 || lVar12 == 0) goto LAB_00d82998;
          FUN_00e007a8(param_1 + 0x208,lVar12);
        }
        if (uVar21 <= *(uint *)(param_1 + 0x240)) {
          *(undefined4 *)(param_1 + 0x240) = 0;
        }
      }
    }
  }
  local_a0 = *(undefined8 *)(param_1 + 8);
  puVar22 = *(ulong **)(param_1 + 0x48);
  if (puVar22 == (ulong *)0x0) {
    FUN_00d8a020(&local_98,local_a0,&local_a0);
    puVar22 = local_98;
    local_98 = (ulong *)0x0;
    lVar12 = *(long *)(param_1 + 0x48);
    *(ulong **)(param_1 + 0x48) = puVar22;
    if (lVar12 == 0) {
      *(undefined8 *)(param_1 + 0x58) = uStack_88;
      *(undefined8 *)(param_1 + 0x60) = local_80;
    }
    else {
      FUN_00c4e5a0(auStack_78,0);
      FUN_00eeabac(lVar12);
      plVar8 = *(long **)(param_1 + 0x50);
      uVar17 = *(undefined8 *)(param_1 + 0x58);
      uVar15 = *(undefined8 *)(param_1 + 0x60);
      uVar13 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar13 & 1) == 0) || (lVar18 = FUN_00c4e600(), *(int *)(lVar18 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,lVar12,uVar17,uVar15);
      }
      else {
        FUN_00c48fe8(plVar8,lVar12,uVar17,uVar15);
      }
      FUN_00c4e70c(auStack_78);
      *(undefined8 *)(param_1 + 0x58) = uStack_88;
      *(undefined8 *)(param_1 + 0x60) = local_80;
      puVar22 = *(ulong **)(param_1 + 0x48);
    }
    *(undefined8 *)(param_1 + 0x50) = local_90;
    bVar23 = false;
  }
  else {
    bVar23 = true;
  }
  piVar25 = (int *)*puVar22;
  piVar11 = (int *)puVar22[1];
  if (piVar25 != piVar11) {
    piVar24 = piVar25;
    do {
      if (*piVar24 == param_2) {
        plVar8 = *(long **)(piVar24 + 2);
        param_3 = (long *)*param_3;
        if (plVar8 == param_3) {
          bVar6 = 0;
        }
        else {
          if (param_3 != (long *)0x0) {
            plVar8 = param_3 + 5;
            do {
              lVar12 = *plVar8;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar4) {
                *(int *)plVar8 = (int)lVar12 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((int)lVar12 == -1) goto LAB_00d82960;
            plVar8 = *(long **)(piVar24 + 2);
          }
          *(long **)(piVar24 + 2) = param_3;
          if (plVar8 != (long *)0x0) {
            plVar1 = plVar8 + 5;
            do {
              iVar7 = (int)*plVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *(int *)plVar1 = iVar7 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar7 == 1) {
              (**(code **)(*plVar8 + 0x10))();
            }
            else if (iVar7 == 0) goto LAB_00d825ac;
          }
          bVar6 = 1;
        }
        bVar5 = bVar6;
        if (piVar24[4] != param_4) {
          bVar5 = 1;
          piVar24[4] = param_4;
        }
        cVar3 = (char)piVar24[6];
        if ((cVar3 == '\0') || (*param_5 == '\0')) {
          if (*param_5 == '\0' && cVar3 == '\0') goto LAB_00d82278;
        }
        else if (*(long *)(piVar24 + 8) == *(long *)(param_5 + 8)) {
LAB_00d82278:
          if ((!(bool)(bVar6 | bVar5)) && (bVar23)) {
            return;
          }
          goto LAB_00d82284;
        }
        uVar17 = *(undefined8 *)(param_5 + 8);
        *(undefined8 *)(piVar24 + 6) = *(undefined8 *)param_5;
        *(undefined8 *)(piVar24 + 8) = uVar17;
        goto LAB_00d82284;
      }
      piVar24 = piVar24 + 10;
    } while (piVar11 != piVar24);
  }
  if (piVar11 < (int *)puVar22[2]) {
    uVar13 = puVar22[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar12 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar12 != 0) {
      if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00d82988;
      *(ulong *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar13;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    }
    *piVar11 = param_2;
    lVar18 = *param_3;
    *(long *)(piVar11 + 2) = lVar18;
    if (lVar18 != 0) {
      piVar25 = (int *)(lVar18 + 0x28);
      do {
        iVar7 = *piVar25;
        cVar3 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(piVar25,0x10);
        if (bVar23) {
          *piVar25 = iVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == -1) goto LAB_00d82960;
    }
    piVar11[4] = param_4;
    uVar17 = *(undefined8 *)(param_5 + 8);
    *(undefined8 *)(piVar11 + 6) = *(undefined8 *)param_5;
    *(undefined8 *)(piVar11 + 8) = uVar17;
    if (lVar12 != 0) {
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    }
    puVar22[1] = (ulong)(piVar11 + 10);
  }
  else {
    uVar13 = puVar22[4];
    lVar12 = (long)piVar11 - (long)piVar25 >> 3;
    if (0x7ffffffffffffffe < uVar13) {
      uVar13 = 0x7fffffffffffffff;
    }
    uVar16 = lVar12 * -0x3333333333333333 + 1;
    if (uVar13 < uVar16) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar18 = (long)puVar22[2] - (long)piVar25 >> 3;
    uVar14 = lVar18 * -0x6666666666666666;
    if (uVar16 <= uVar14) {
      uVar16 = uVar14;
    }
    if (uVar13 >> 1 <= (ulong)(lVar18 * -0x3333333333333333)) {
      uVar16 = uVar13;
    }
    if (uVar16 == 0) {
      lVar18 = 0;
    }
    else {
      lVar18 = (**(code **)(*(long *)puVar22[3] + 0x10))((long *)puVar22[3],uVar16 * 0x28,8);
      if (lVar18 == 0) {
        (**(code **)(*(long *)puVar22[3] + 0xe8))();
      }
    }
    uVar13 = puVar22[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar9 != 0) {
      if (0xf < *(ulong *)(lVar9 + 0x80)) {
LAB_00d82988:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(ulong *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar13;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    }
    piVar25 = (int *)(lVar18 + lVar12 * 8);
    *piVar25 = param_2;
    lVar10 = *param_3;
    *(long *)(lVar18 + lVar12 * 8 + 8) = lVar10;
    if (lVar10 != 0) {
      piVar11 = (int *)(lVar10 + 0x28);
      do {
        iVar7 = *piVar11;
        cVar3 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar23) {
          *piVar11 = iVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == -1) {
LAB_00d82960:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    lVar12 = lVar18 + lVar12 * 8;
    *(int *)(lVar12 + 0x10) = param_4;
    uVar17 = *(undefined8 *)(param_5 + 8);
    *(undefined8 *)(lVar12 + 0x18) = *(undefined8 *)param_5;
    *(undefined8 *)(lVar12 + 0x20) = uVar17;
    if (lVar9 != 0) {
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    }
    uVar13 = *puVar22;
    uVar14 = puVar22[1];
    if (uVar14 == uVar13) {
      piVar11 = piVar25;
      uVar14 = uVar13;
    }
    else {
      lVar12 = 0;
      do {
        uVar21 = puVar22[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar9 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar9 != 0) {
          if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_00d82988;
          *(ulong *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar21;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
        }
        lVar10 = uVar14 + lVar12;
        *(undefined4 *)((long)piVar25 + lVar12 + -0x28) = *(undefined4 *)(lVar10 + -0x28);
        uVar17 = *(undefined8 *)(lVar10 + -0x20);
        *(undefined8 *)(lVar10 + -0x20) = 0;
        *(undefined8 *)((long)piVar25 + lVar12 + -0x20) = uVar17;
        uVar17 = *(undefined8 *)(lVar10 + -0x10);
        uVar15 = *(undefined8 *)(lVar10 + -8);
        *(undefined8 *)((long)piVar25 + lVar12 + -0x18) = *(undefined8 *)(lVar10 + -0x18);
        *(undefined8 *)((long)piVar25 + lVar12 + -0x10) = uVar17;
        *(undefined8 *)((long)piVar25 + lVar12 + -8) = uVar15;
        if (lVar9 != 0) {
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
        }
        lVar12 = lVar12 + -0x28;
      } while (uVar13 - uVar14 != lVar12);
      uVar13 = *puVar22;
      uVar14 = puVar22[1];
      piVar11 = (int *)((long)piVar25 + lVar12);
    }
    uVar21 = puVar22[2];
    *puVar22 = (ulong)piVar11;
    puVar22[1] = (ulong)(piVar25 + 10);
    puVar22[2] = lVar18 + uVar16 * 0x28;
    for (; uVar14 != uVar13; uVar14 = uVar14 - 0x28) {
      plVar8 = *(long **)(uVar14 - 0x20);
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 5;
        do {
          lVar12 = *plVar1;
          iVar7 = (int)lVar12 + -1;
          cVar3 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar23) {
            *(int *)plVar1 = iVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
        else if ((int)lVar12 == 0) {
LAB_00d825ac:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    }
    if (uVar13 != 0) {
      plVar8 = (long *)puVar22[3];
      uVar16 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar16 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,uVar13,uVar21 - uVar13,8);
      }
      else {
        FUN_00c48fe8(plVar8,uVar13,uVar21 - uVar13,8);
      }
    }
  }
LAB_00d82284:
  lVar12 = *(long *)(param_1 + 0x208);
  lVar18 = *(long *)(param_1 + 0x210);
  if (((lVar12 != lVar18) && (*(undefined1 *)(lVar12 + 0x10) = 1, lVar12 + 0x18 != lVar18)) &&
     (*(undefined1 *)(lVar12 + 0x28) = 1, lVar12 + 0x30 != lVar18)) {
    *(undefined1 *)(lVar12 + 0x40) = 1;
    for (lVar12 = lVar12 + 0x48; lVar12 != lVar18; lVar12 = lVar12 + 0x18) {
      *(undefined1 *)(lVar12 + 0x10) = 1;
    }
  }
  return;
}


