/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00da17d4; name: FUN_00da17d4
 */


void FUN_00da17d4(undefined8 *param_1,long *param_2)

{
  short *psVar1;
  undefined8 *puVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  size_t __n;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  long *plVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  long *plVar23;
  long *__dest;
  long *local_80;
  long *local_78;
  long local_70;
  undefined8 *local_68;
  
  plVar18 = (long *)*param_2;
  if (plVar18[0x81] != plVar18[0x80]) {
    lVar22 = param_1[1];
    uVar19 = 0;
    do {
      if (plVar18 != (long *)0x0) {
        lVar15 = plVar18[6];
        if (*(long *)(lVar15 + 0x10) == 0) {
LAB_00da1ee4:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar15 + 0x1a);
        do {
          sVar3 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar3 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 0) {
          uVar17 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
          *(undefined8 *)(lVar15 + 8) = uVar17;
          *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
        }
        else if (sVar3 == -1) {
LAB_00da1f04:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
      }
      if (-1 < *(int *)*param_1) {
        lVar15 = *(long *)(plVar18[0x80] + uVar19 * 8);
        __dest = *(long **)(lVar15 + 0x3b0);
        plVar9 = *(long **)(lVar15 + 0x3b8);
        if (plVar9 != __dest) {
          uVar16 = 0;
          do {
            if (uVar19 != uVar16) {
              if ((long)plVar9 - (long)__dest != 0) {
                uVar14 = (long)plVar9 - (long)__dest >> 3;
                uVar8 = *(long *)(lVar22 + 0x280) + (long)*(int *)(__dest[uVar14 >> 1] + 0x468);
                plVar20 = __dest + (uVar14 >> 1) + 1;
                uVar12 = (uVar14 >> 1 ^ 0xffffffffffffffff) + uVar14;
                if ((long)uVar16 <=
                    (long)*(int *)(*(long *)(*(long *)(lVar22 + 0x248) +
                                            (uVar8 >> 2 & 0x3ffffffffffffff8)) +
                                   (uVar8 & 0x1f) * 0x80 + 0x78)) {
                  plVar20 = __dest;
                  uVar12 = uVar14 >> 1;
                }
                while (__dest = plVar20, uVar12 != 0) {
                  uVar14 = uVar12 >> 1;
                  uVar8 = *(long *)(lVar22 + 0x280) + (long)*(int *)(__dest[uVar14] + 0x468);
                  plVar20 = __dest + uVar14 + 1;
                  uVar12 = uVar12 + (uVar12 >> 1 ^ 0xffffffffffffffff);
                  if ((long)uVar16 <=
                      (long)*(int *)(*(long *)(*(long *)(lVar22 + 0x248) +
                                              (uVar8 >> 2 & 0x3ffffffffffffff8)) +
                                     (uVar8 & 0x1f) * 0x80 + 0x78)) {
                    plVar20 = __dest;
                    uVar12 = uVar14;
                  }
                }
              }
              if (__dest == plVar9) break;
              plVar20 = __dest;
              if ((long)plVar9 - (long)__dest != 0) {
                uVar14 = (long)plVar9 - (long)__dest >> 3;
                uVar8 = *(long *)(lVar22 + 0x280) + (long)*(int *)(__dest[uVar14 >> 1] + 0x468);
                uVar12 = uVar14 >> 1;
                if ((long)*(int *)(*(long *)(*(long *)(lVar22 + 0x248) +
                                            (uVar8 >> 2 & 0x3ffffffffffffff8)) +
                                   (uVar8 & 0x1f) * 0x80 + 0x78) <= (long)uVar16) {
                  plVar20 = __dest + (uVar14 >> 1) + 1;
                  uVar12 = (uVar14 >> 1 ^ 0xffffffffffffffff) + uVar14;
                }
                while (uVar12 != 0) {
                  uVar11 = uVar12 >> 1;
                  uVar8 = *(long *)(lVar22 + 0x280) + (long)*(int *)(plVar20[uVar11] + 0x468);
                  uVar14 = uVar12 + (uVar12 >> 1 ^ 0xffffffffffffffff);
                  uVar12 = uVar11;
                  if ((long)*(int *)(*(long *)(*(long *)(lVar22 + 0x248) +
                                              (uVar8 >> 2 & 0x3ffffffffffffff8)) +
                                     (uVar8 & 0x1f) * 0x80 + 0x78) <= (long)uVar16) {
                    plVar20 = plVar20 + uVar11 + 1;
                    uVar12 = uVar14;
                  }
                }
              }
              if (__dest != plVar20) {
                plVar9 = (long *)*param_2;
                if (plVar9 != (long *)0x0) {
                  lVar15 = plVar9[6];
                  if (*(long *)(lVar15 + 0x10) == 0) goto LAB_00da1ee4;
                  psVar1 = (short *)(lVar15 + 0x1a);
                  do {
                    sVar3 = *psVar1;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                    if (bVar5) {
                      *psVar1 = sVar3 + 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (sVar3 == 0) {
                    uVar17 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
                    *(undefined8 *)(lVar15 + 8) = uVar17;
                    *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
                  }
                  else if (sVar3 == -1) goto LAB_00da1f04;
                }
                lVar15 = *(long *)(plVar9[0x80] + uVar16 * 8);
                puVar2 = (undefined8 *)(lVar15 + 0x3c8);
                plVar23 = __dest;
                do {
                  plVar21 = *(long **)(lVar15 + 0x3b8);
                  if (plVar21 < *(long **)(lVar15 + 0x3c0)) {
                    uVar17 = *puVar2;
                    if (((DAT_04865a38 & 1) == 0) &&
                       (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
                      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                      __cxa_guard_release(&DAT_04865a38);
                    }
                    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
                    if (lVar7 == 0) {
                      *plVar21 = *plVar23;
                    }
                    else {
                      if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_00da1f5c;
                      *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar17;
                      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
                      *plVar21 = *plVar23;
                      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
                    }
                    *(long **)(lVar15 + 0x3b8) = plVar21 + 1;
                  }
                  else {
                    uVar12 = *(ulong *)(lVar15 + 0x3d0);
                    lVar7 = (long)plVar21 - *(long *)(lVar15 + 0x3b0) >> 3;
                    uVar8 = lVar7 + 1;
                    if (0x7ffffffffffffffe < uVar12) {
                      uVar12 = 0x7fffffffffffffff;
                    }
                    if (uVar12 < uVar8) {
                    /* WARNING: Subroutine does not return */
                      std::__vector_base_common<true>::__throw_length_error();
                    }
                    lVar10 = (long)*(long **)(lVar15 + 0x3c0) - *(long *)(lVar15 + 0x3b0);
                    uVar14 = lVar10 >> 2;
                    local_70 = 0;
                    if (uVar8 <= uVar14) {
                      uVar8 = uVar14;
                    }
                    if (uVar12 >> 1 <= (ulong)(lVar10 >> 3)) {
                      uVar8 = uVar12;
                    }
                    local_68 = puVar2;
                    if (uVar8 == 0) {
                      lVar10 = 0;
                    }
                    else {
                      lVar10 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar8 << 3,8);
                      if (lVar10 == 0) {
                        (**(code **)(*(long *)*puVar2 + 0xe8))();
                      }
                    }
                    plVar21 = (long *)(lVar10 + lVar7 * 8);
                    local_70 = lVar10 + uVar8 * 8;
                    uVar17 = *puVar2;
                    local_80 = plVar21;
                    local_78 = plVar21;
                    if (((DAT_04865a38 & 1) == 0) &&
                       (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
                      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                      __cxa_guard_release(&DAT_04865a38);
                    }
                    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
                    if (lVar7 == 0) {
                      *plVar21 = *plVar23;
                    }
                    else {
                      if (0xf < *(ulong *)(lVar7 + 0x80)) {
LAB_00da1f5c:
                    /* WARNING: Subroutine does not return */
                        abort();
                      }
                      *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar17;
                      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
                      *plVar21 = *plVar23;
                      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
                      plVar21 = local_78;
                    }
                    local_78 = plVar21 + 1;
                    FUN_00da0910(puVar2,*(undefined8 *)(lVar15 + 0x3b0),
                                 *(undefined8 *)(lVar15 + 0x3b8),&local_80);
                    plVar13 = *(long **)(lVar15 + 0x3b0);
                    *(long **)(lVar15 + 0x3b0) = local_80;
                    plVar21 = *(long **)(lVar15 + 0x3b8);
                    *(long **)(lVar15 + 0x3b8) = local_78;
                    lVar7 = *(long *)(lVar15 + 0x3c0);
                    *(long *)(lVar15 + 0x3c0) = local_70;
                    local_78 = plVar21;
                    if ((long)plVar21 - (long)plVar13 != 0) {
                      local_78 = plVar21 + (((long)plVar21 - (long)plVar13) - 8U >> 3 ^
                                           0xffffffffffffffff);
                    }
                    local_80 = plVar13;
                    local_70 = lVar7;
                    if (plVar13 != (long *)0x0) {
                      plVar21 = (long *)*local_68;
                      uVar8 = (**(code **)(*plVar21 + 0xf8))(plVar21);
                      if (((uVar8 & 1) == 0) ||
                         (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
                        (**(code **)(*plVar21 + 0x18))(plVar21,plVar13,lVar7 - (long)plVar13,8);
                      }
                      else {
                        FUN_00c48fe8(plVar21,plVar13,lVar7 - (long)plVar13,8);
                      }
                    }
                  }
                  plVar23 = plVar23 + 1;
                } while (plVar20 != plVar23);
                lVar15 = *(long *)(plVar18[0x80] + uVar19 * 8);
                __n = *(long *)(lVar15 + 0x3b8) - (long)plVar20;
                if (__n != 0) {
                  memmove(__dest,plVar20,__n);
                }
                *(size_t *)(lVar15 + 0x3b8) = (long)__dest + __n;
                if (plVar9 != (long *)0x0) {
                  lVar15 = plVar9[6];
                  psVar1 = (short *)(lVar15 + 0x1a);
                  do {
                    sVar3 = *psVar1;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                    if (bVar5) {
                      *psVar1 = sVar3 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (sVar3 == 1) {
                    *(undefined8 *)(lVar15 + 0x10) = 0;
                    (**(code **)(*plVar9 + 0x50))();
                  }
                  else if (sVar3 == 0) goto LAB_00da1f2c;
                }
              }
            }
            if ((long)*(int *)*param_1 <= (long)uVar16) break;
            uVar16 = uVar16 + 1;
            plVar9 = *(long **)(*(long *)(plVar18[0x80] + uVar19 * 8) + 0x3b8);
          } while (plVar9 != __dest);
        }
      }
      if (plVar18 != (long *)0x0) {
        lVar15 = plVar18[6];
        psVar1 = (short *)(lVar15 + 0x1a);
        do {
          sVar3 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar15 + 0x10) = 0;
          (**(code **)(*plVar18 + 0x50))(plVar18);
        }
        else if (sVar3 == 0) {
LAB_00da1f2c:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      plVar18 = (long *)*param_2;
      uVar19 = uVar19 + 1;
    } while (uVar19 < (ulong)(plVar18[0x81] - plVar18[0x80] >> 3));
  }
  return;
}


