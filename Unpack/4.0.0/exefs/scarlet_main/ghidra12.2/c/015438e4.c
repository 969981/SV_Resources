/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015438e4; name: FUN_015438e4
 */


/* WARNING: Removing unreachable block (ram,0x01543acc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_015438e4(long param_1,int *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  byte *__s;
  uint *puVar6;
  int *piVar7;
  int *piVar8;
  ulong *puVar9;
  byte bVar10;
  byte bVar11;
  char cVar12;
  bool bVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  size_t sVar17;
  ulong *puVar18;
  undefined1 *puVar19;
  uint uVar20;
  ulong uVar21;
  long *plVar22;
  ulong uVar23;
  byte *pbVar24;
  long *plVar25;
  long lVar26;
  undefined1 *puVar27;
  ulong uVar28;
  ulong uVar29;
  long *plVar30;
  ulong uVar31;
  ulong uVar32;
  ushort *puVar33;
  ulong uVar34;
  undefined8 uVar35;
  ulong uVar36;
  ulong *puVar37;
  long *plVar38;
  undefined1 *puVar39;
  undefined1 *puVar40;
  long *plVar41;
  undefined1 *puVar42;
  long lVar43;
  uint *puVar44;
  long *unaff_x28;
  float fVar45;
  ulong *local_a0;
  ulong *local_98;
  ulong *local_90;
  uint uStack_6c;
  
  if ((8 < *(ushort *)((long)param_2 - (long)*param_2)) &&
     (uVar29 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4], uVar29 != 0)) {
    uVar32 = (ulong)*(uint *)((long)param_2 + uVar29);
    puVar6 = (uint *)((long)((long)param_2 + uVar29) + uVar32);
    uVar20 = *puVar6;
    if (uVar20 != 0) {
      plVar1 = (long *)(param_1 + 0xc0);
      plVar2 = (long *)(param_1 + 400);
      plVar3 = (long *)(param_1 + 0xf0);
      plVar4 = (long *)(param_1 + 0x1c0);
      lVar43 = (long)param_2 + uVar32 + uVar29 + 9;
      uVar29 = 0;
      puVar5 = PTR_DAT_047d66f8 + 0x10;
      do {
        uVar32 = (ulong)puVar6[uVar29 + 1];
        piVar7 = (int *)((long)(puVar6 + uVar29 + 1) + uVar32);
        puVar33 = (ushort *)((long)piVar7 - (long)*piVar7);
        if ((4 < *puVar33) && (uVar34 = (ulong)puVar33[2], uVar34 != 0)) {
          uVar21 = (ulong)*(uint *)((long)piVar7 + uVar34);
          if ((*puVar33 < 7) || ((ulong)puVar33[3] == 0)) {
            puVar44 = (uint *)0x0;
          }
          else {
            puVar44 = (uint *)((long)piVar7 + (ulong)puVar33[3]);
            puVar44 = (uint *)((long)puVar44 + (ulong)*puVar44);
          }
          local_98 = (ulong *)0x0;
          local_90 = (ulong *)0x0;
          local_a0 = (ulong *)0x0;
          if (((DAT_04865a38 & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0)) {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar15 = nn::os::GetTlsValue(DAT_04865a30);
          if (((lVar15 == 0) || (*(long *)(lVar15 + 0x80) == 0)) ||
             (plVar22 = *(long **)(lVar15 + *(long *)(lVar15 + 0x80) * 8 + -8),
             plVar22 == (long *)0x0)) {
            lVar15 = tpidr_el0;
            plVar22 = *(long **)(lVar15 + 0x30);
            if (plVar22 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar14 = __cxa_guard_acquire(&DAT_04859438), iVar14 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar22 = DAT_04859430;
              *(long **)(lVar15 + 0x30) = DAT_04859430;
            }
          }
          if (*puVar44 != 0) {
            unaff_x28 = (long *)0x0;
            do {
              piVar8 = (int *)((long)(puVar44 + (long)unaff_x28 + 1) +
                              (ulong)puVar44[(long)unaff_x28 + 1]);
              puVar33 = (ushort *)((long)piVar8 - (long)*piVar8);
              if (*puVar33 < 5) {
                uVar20 = 0;
LAB_01543aa0:
                uVar36 = 0;
              }
              else {
                if ((ulong)puVar33[2] == 0) {
                  uVar20 = 0;
                }
                else {
                  uVar20 = *(uint *)((long)piVar8 + (ulong)puVar33[2]);
                }
                if ((*puVar33 < 7) || ((ulong)puVar33[3] == 0)) goto LAB_01543aa0;
                uVar36 = (ulong)*(uint *)((long)piVar8 + (ulong)puVar33[3]);
              }
              if (local_98 < local_90) {
                if (((DAT_04865a38 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0)) {
                  FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                  FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                  __cxa_guard_release(&DAT_04865a38);
                }
                lVar15 = nn::os::GetTlsValue(DAT_04865a30);
                if (lVar15 == 0) {
                  *local_98 = (ulong)uVar20 | uVar36 << 0x20;
                }
                else {
                  if (0xf < *(ulong *)(lVar15 + 0x80)) goto LAB_01544b54;
                  *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = plVar22;
                  *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
                  *local_98 = (ulong)uVar20 | uVar36 << 0x20;
                  *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
                }
                local_98 = local_98 + 1;
                puVar37 = local_a0;
                puVar18 = local_90;
              }
              else {
                lVar15 = (long)local_98 - (long)local_a0 >> 3;
                uVar31 = lVar15 + 1;
                if (0x1fffffffffffffff < uVar31) goto LAB_01544b84;
                uVar23 = (long)local_90 - (long)local_a0 >> 2;
                if (uVar31 <= uVar23) {
                  uVar31 = uVar23;
                }
                if (0xffffffffffffffe < (ulong)((long)local_90 - (long)local_a0 >> 3)) {
                  uVar31 = 0x1fffffffffffffff;
                }
                if (uVar31 == 0) {
                  lVar16 = 0;
                }
                else {
                  lVar16 = (**(code **)(*plVar22 + 0x10))(plVar22,uVar31 << 3,4);
                  if (lVar16 == 0) {
                    (**(code **)(*plVar22 + 0xe8))(plVar22);
                  }
                }
                puVar9 = (ulong *)(lVar16 + lVar15 * 8);
                if (((DAT_04865a38 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0)) {
                  FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                  FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                  __cxa_guard_release(&DAT_04865a38);
                }
                lVar15 = nn::os::GetTlsValue(DAT_04865a30);
                if (lVar15 == 0) {
                  *puVar9 = (ulong)uVar20 | uVar36 << 0x20;
                }
                else {
                  if (0xf < *(ulong *)(lVar15 + 0x80)) goto LAB_01544b54;
                  *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = plVar22;
                  *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
                  *puVar9 = (ulong)uVar20 | uVar36 << 0x20;
                  *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
                }
                puVar37 = puVar9;
                if (local_98 != local_a0) {
                  do {
                    if (((DAT_04865a38 & 1) == 0) &&
                       (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0)) {
                      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                      __cxa_guard_release(&DAT_04865a38);
                    }
                    lVar15 = nn::os::GetTlsValue(DAT_04865a30);
                    if (lVar15 == 0) {
                      puVar37[-1] = local_98[-1];
                    }
                    else {
                      if (0xf < *(ulong *)(lVar15 + 0x80)) goto LAB_01544b54;
                      *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = plVar22;
                      *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
                      puVar37[-1] = local_98[-1];
                      *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
                    }
                    local_98 = local_98 + -1;
                    puVar37 = puVar37 + -1;
                  } while (local_a0 != local_98);
                }
                puVar18 = (ulong *)(lVar16 + uVar31 * 8);
                local_98 = puVar9 + 1;
                if (local_a0 != (ulong *)0x0) {
                  uVar36 = (**(code **)(*plVar22 + 0xf8))(plVar22);
                  if (((uVar36 & 1) == 0) ||
                     (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
                    (**(code **)(*plVar22 + 0x18))
                              (plVar22,local_a0,(long)local_90 - (long)local_a0,4);
                  }
                  else {
                    FUN_00c48fe8(plVar22,local_a0,(long)local_90 - (long)local_a0,4);
                  }
                }
              }
              local_90 = puVar18;
              local_a0 = puVar37;
              unaff_x28 = (long *)((long)unaff_x28 + 1);
            } while (unaff_x28 < (long *)(ulong)*puVar44);
          }
          if (local_98 != local_a0) {
            __s = (byte *)((long)((long)piVar7 + uVar34) + uVar21 + 4);
            sVar17 = strlen((char *)__s);
            bVar11 = *__s;
            plVar38 = (long *)&DAT_cbf29ce484222645;
            if (bVar11 != 0) {
              uVar36 = (ulong)(uint)bVar11;
              plVar38 = (long *)&DAT_cbf29ce484222645;
              pbVar24 = (byte *)(lVar43 + uVar21 + uVar34 + uVar32);
              do {
                plVar38 = (long *)(((ulong)plVar38 ^ uVar36) * 0x100000001b3);
                bVar10 = *pbVar24;
                uVar36 = (ulong)bVar10;
                pbVar24 = pbVar24 + 1;
              } while (bVar10 != 0);
            }
            plVar41 = *(long **)(param_1 + 200);
            if (plVar41 == (long *)0x0) {
LAB_01543e0c:
              plVar25 = (long *)(**(code **)(**(long **)(param_1 + 0xf8) + 0x10))
                                          (*(long **)(param_1 + 0xf8),0x68,8);
              if (plVar25 == (long *)0x0) {
                (**(code **)(**(long **)(param_1 + 0xf8) + 0xe8))();
              }
              uVar35 = *(undefined8 *)(param_1 + 0xf8);
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar15 = nn::os::GetTlsValue(DAT_04865a30);
              if (lVar15 != 0) {
                if (0xf < *(ulong *)(lVar15 + 0x80)) goto LAB_01544b54;
                *(undefined8 *)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = uVar35;
                *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
              }
              plVar25[2] = (long)plVar38;
              plVar25[3] = (long)__s;
              plVar25[4] = sVar17;
              plVar25[5] = 0;
              plVar25[6] = 0;
              plVar25[7] = 0;
              plVar25[8] = 0;
              plVar30 = plVar25 + 9;
              *plVar30 = (long)plVar22;
              plVar25[0xb] = 0;
              plVar25[0xc] = (ulong)uStack_6c << 0x20;
              plVar25[10] = 0x1fffffffffffffff;
              lVar16 = (long)local_98 - (long)local_a0;
              if (lVar16 != 0) {
                uVar36 = plVar25[10];
                if (0x7ffffffffffffffe < uVar36) {
                  uVar36 = 0x7fffffffffffffff;
                }
                if (uVar36 < (ulong)(lVar16 >> 3)) {
LAB_01544b84:
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_length_error();
                }
                puVar18 = (ulong *)(**(code **)(*(long *)*plVar30 + 0x10))
                                             ((long *)*plVar30,lVar16,4);
                if (puVar18 == (ulong *)0x0) {
                  (**(code **)(*(long *)*plVar30 + 0xe8))();
                }
                plVar25[8] = (long)(puVar18 + (lVar16 >> 3));
                plVar25[6] = (long)puVar18;
                plVar25[7] = (long)puVar18;
                for (puVar37 = local_a0; puVar37 != local_98; puVar37 = puVar37 + 1) {
                  lVar16 = *plVar30;
                  if (((DAT_04865a38 & 1) == 0) &&
                     (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0)) {
                    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                    __cxa_guard_release(&DAT_04865a38);
                  }
                  lVar26 = nn::os::GetTlsValue(DAT_04865a30);
                  if (lVar26 == 0) {
                    *puVar18 = *puVar37;
                  }
                  else {
                    if (0xf < *(ulong *)(lVar26 + 0x80)) goto LAB_01544b54;
                    *(long *)(lVar26 + *(ulong *)(lVar26 + 0x80) * 8) = lVar16;
                    *(long *)(lVar26 + 0x80) = *(long *)(lVar26 + 0x80) + 1;
                    *puVar18 = *puVar37;
                    *(long *)(lVar26 + 0x80) = *(long *)(lVar26 + 0x80) + -1;
                  }
                  puVar18 = puVar18 + 1;
                }
                plVar25[7] = (long)puVar18;
              }
              if (lVar15 != 0) {
                *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
              }
              *plVar25 = 0;
              plVar25[1] = (long)plVar38;
              fVar45 = (float)(*(long *)(param_1 + 0x118) + 1);
              if ((plVar41 == (long *)0x0) ||
                 (*(float *)(param_1 + 0x120) * (float)plVar41 < fVar45)) {
                uVar36 = (ulong)(plVar41 < (long *)0x3 || ((ulong)plVar41 & (long)plVar41 - 1U) != 0
                                ) | (long)plVar41 << 1;
                uVar31 = (ulong)(fVar45 / *(float *)(param_1 + 0x120));
                if (uVar31 <= uVar36) {
                  uVar31 = uVar36;
                }
                if (uVar31 - 1 == 0) {
                  uVar31 = 2;
                }
                else if ((uVar31 & uVar31 - 1) != 0) {
                  uVar31 = std::__next_prime(uVar31);
                }
                uVar36 = *(ulong *)(param_1 + 200);
                if (uVar36 < uVar31) {
                  uVar23 = uVar31;
LAB_01544324:
                  FUN_01545134(plVar1,uVar23);
                }
                else if (uVar31 < uVar36) {
                  uVar23 = (ulong)((float)*(ulong *)(param_1 + 0x118) / *(float *)(param_1 + 0x120))
                  ;
                  if ((uVar36 < 3) ||
                     (uVar28 = uVar36 - (uVar36 >> 1 & 0x5555555555555555),
                     uVar28 = (uVar28 & 0x3333333333333333) + (uVar28 >> 2 & 0x3333333333333333),
                     1 < (uVar28 + (uVar28 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
                  {
                    uVar23 = std::__next_prime(uVar23);
                  }
                  else if (1 < uVar23) {
                    uVar23 = 1L << (-LZCOUNT(uVar23 - 1) & 0x3fU);
                  }
                  if (uVar23 <= uVar31) {
                    uVar23 = uVar31;
                  }
                  if (uVar23 < uVar36) goto LAB_01544324;
                }
                plVar41 = *(long **)(param_1 + 200);
                if (((ulong)plVar41 & (long)plVar41 - 1U) == 0) {
                  unaff_x28 = (long *)((long)plVar41 - 1U & (ulong)plVar38);
                }
                else if (plVar38 < plVar41) {
                  unaff_x28 = plVar38;
                }
                else {
                  uVar36 = 0;
                  if (plVar41 != (long *)0x0) {
                    uVar36 = (ulong)plVar38 / (ulong)plVar41;
                  }
                  unaff_x28 = (long *)((long)plVar38 - uVar36 * (long)plVar41);
                }
              }
              plVar38 = *(long **)(*plVar1 + (long)unaff_x28 * 8);
              if (plVar38 == (long *)0x0) {
                *plVar25 = *plVar3;
                *plVar3 = (long)plVar25;
                *(long **)(*plVar1 + (long)unaff_x28 * 8) = plVar3;
                if (*plVar25 != 0) {
                  plVar38 = *(long **)(*plVar25 + 8);
                  if (((ulong)plVar41 & (long)plVar41 - 1U) == 0) {
                    plVar38 = (long *)((ulong)plVar38 & (long)plVar41 - 1U);
                  }
                  else if (plVar41 <= plVar38) {
                    uVar36 = 0;
                    if (plVar41 != (long *)0x0) {
                      uVar36 = (ulong)plVar38 / (ulong)plVar41;
                    }
                    plVar38 = (long *)((long)plVar38 - uVar36 * (long)plVar41);
                  }
                  plVar38 = (long *)(*plVar1 + (long)plVar38 * 8);
                  goto LAB_01543fc0;
                }
              }
              else {
                *plVar25 = *plVar38;
LAB_01543fc0:
                *plVar38 = (long)plVar25;
              }
              *(long *)(param_1 + 0x118) = *(long *)(param_1 + 0x118) + 1;
              bVar11 = *__s;
            }
            else {
              uVar36 = (long)plVar41 - 1;
              if (((ulong)plVar41 & uVar36) == 0) {
                unaff_x28 = (long *)(uVar36 & (ulong)plVar38);
                plVar25 = *(long **)(*plVar1 + (long)unaff_x28 * 8);
                if (plVar25 == (long *)0x0) goto LAB_01543e0c;
                do {
                  plVar25 = (long *)*plVar25;
                  if ((plVar25 == (long *)0x0) ||
                     ((long *)plVar25[1] != plVar38 &&
                      (long *)((ulong)plVar25[1] & uVar36) != unaff_x28)) goto LAB_01543e0c;
                } while ((long *)plVar25[2] != plVar38);
              }
              else {
                unaff_x28 = plVar38;
                if (plVar41 <= plVar38) {
                  uVar36 = 0;
                  if (plVar41 != (long *)0x0) {
                    uVar36 = (ulong)plVar38 / (ulong)plVar41;
                  }
                  unaff_x28 = (long *)((long)plVar38 - uVar36 * (long)plVar41);
                }
                plVar25 = *(long **)(*plVar1 + (long)unaff_x28 * 8);
                if (plVar25 == (long *)0x0) goto LAB_01543e0c;
                do {
                  plVar25 = (long *)*plVar25;
                  if (plVar25 == (long *)0x0) goto LAB_01543e0c;
                  plVar30 = (long *)plVar25[1];
                  if (plVar30 != plVar38) {
                    if (plVar41 <= plVar30) {
                      uVar36 = 0;
                      if (plVar41 != (long *)0x0) {
                        uVar36 = (ulong)plVar30 / (ulong)plVar41;
                      }
                      plVar30 = (long *)((long)plVar30 - uVar36 * (long)plVar41);
                    }
                    if (plVar30 != unaff_x28) goto LAB_01543e0c;
                  }
                } while ((long *)plVar25[2] != plVar38);
              }
            }
            puVar19 = (undefined1 *)strlen((char *)__s);
            puVar39 = &DAT_cbf29ce484222645;
            if (bVar11 != 0) {
              puVar39 = &DAT_cbf29ce484222645;
              lVar15 = uVar32 + uVar34 + uVar21;
              do {
                uVar32 = (ulong)bVar11;
                bVar11 = *(byte *)(lVar43 + lVar15);
                puVar39 = (undefined1 *)(((ulong)puVar39 ^ uVar32) * 0x100000001b3);
                lVar15 = lVar15 + 1;
              } while (bVar11 != 0);
            }
            unaff_x28 = *(long **)(param_1 + 8);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar15 = nn::os::GetTlsValue(DAT_04865a30);
            if (0xf < *(ulong *)(lVar15 + 0x80)) goto LAB_01544b54;
            *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = unaff_x28;
            *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
            plVar38 = (long *)(**(code **)(*unaff_x28 + 0x10))(unaff_x28,0x218,8);
            if (plVar38 == (long *)0x0) {
              (**(code **)(*unaff_x28 + 0xe8))(unaff_x28);
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("ptr","Create",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
                         ,0x40);
            }
            *plVar38 = (long)puVar5;
            plVar38[2] = 0;
            *(undefined4 *)(plVar38 + 3) = 0;
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar16 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar16 == 0) {
              lVar26 = 0;
            }
            else {
              lVar26 = 0;
              if (*(long *)(lVar16 + 0x80) != 0) {
                lVar26 = *(long *)(lVar16 + *(long *)(lVar16 + 0x80) * 8 + -8);
              }
            }
            plVar38[1] = lVar26;
            plVar41 = plVar38 + 5;
            *(int *)plVar41 = 0;
            *plVar38 = (long)&PTR_LAB_045ad830;
            plVar38[4] = (long)&PTR_LAB_045ad868;
            plVar38[6] = 0;
            *(undefined4 *)((long)plVar38 + 0x44) = 1;
            nn::os::InitializeLightEvent(plVar38 + 7,0,1);
            plVar38[9] = 0;
            *(undefined4 *)((long)plVar38 + 0x5c) = 1;
            nn::os::InitializeLightEvent(plVar38 + 10,0,1);
            plVar38[0x11] = 0;
            plVar38[0x12] = 0;
            plVar38[0xf] = 0;
            plVar38[0x10] = 0;
            plVar38[0xc] = 0;
            plVar38[0xd] = 0;
            plVar38[0xe] = 0;
            FUN_01544d88();
            plVar38[0x13] = 0;
            *(undefined4 *)((long)plVar38 + 0xac) = 1;
            nn::os::InitializeLightEvent(plVar38 + 0x14,0,1);
            plVar38[0x1b] = 0;
            plVar38[0x1c] = 0;
            plVar38[0x19] = 0;
            plVar38[0x1a] = 0;
            plVar38[0x16] = 0;
            plVar38[0x17] = 0;
            plVar38[0x18] = 0;
            FUN_01544c50();
            plVar38[0x22] = 0;
            plVar38[0x23] = 0;
            plVar38[0x20] = 0;
            plVar38[0x21] = 0;
            plVar38[0x1d] = 0;
            plVar38[0x1e] = 0;
            plVar38[0x1f] = 0;
            FUN_01544ec0();
            plVar38[0x29] = 0;
            plVar38[0x2a] = 0;
            plVar38[0x24] = 0;
            plVar38[0x27] = 0;
            plVar38[0x28] = 0;
            plVar38[0x25] = 0;
            plVar38[0x26] = 0;
            FUN_01544ff8(plVar38 + 0x24);
            plVar38[0x30] = 0;
            plVar38[0x31] = 0;
            plVar38[0x2b] = 0;
            plVar38[0x2e] = 0;
            plVar38[0x2f] = 0;
            plVar38[0x2c] = 0;
            plVar38[0x2d] = 0;
            FUN_01544c50(plVar38 + 0x2d);
            memset(plVar38 + 0x32,0,0x88);
            *(undefined4 *)(plVar38 + 3) = 0x80218;
            plVar38[1] = (long)unaff_x28;
            plVar38[2] = (long)plVar38;
            *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
            do {
              lVar15 = *plVar41;
              cVar12 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar41,0x10);
              if (bVar13) {
                *(int *)plVar41 = (int)lVar15 + 1;
                cVar12 = ExclusiveMonitorsStatus();
              }
            } while (cVar12 != '\0');
            if ((int)lVar15 == -1) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != 0","IncrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                         ,0x53,"Reference counter overflows.");
            }
            puVar40 = *(undefined1 **)(param_1 + 0x198);
            puVar42 = puVar19;
            if (puVar40 != (undefined1 *)0x0) {
              puVar27 = puVar40 + -1;
              if (((ulong)puVar40 & (ulong)puVar27) == 0) {
                puVar42 = (undefined1 *)((ulong)puVar27 & (ulong)puVar39);
                plVar25 = *(long **)(*plVar2 + (long)puVar42 * 8);
                if (plVar25 != (long *)0x0) {
                  do {
                    plVar25 = (long *)*plVar25;
                    if ((plVar25 == (long *)0x0) ||
                       ((undefined1 *)plVar25[1] != puVar39 &&
                        (undefined1 *)((ulong)plVar25[1] & (ulong)puVar27) != puVar42))
                    goto LAB_01544390;
                  } while ((undefined1 *)plVar25[2] != puVar39);
                  goto LAB_01544264;
                }
              }
              else {
                puVar42 = puVar39;
                if (puVar40 <= puVar39) {
                  uVar32 = 0;
                  if (puVar40 != (undefined1 *)0x0) {
                    uVar32 = (ulong)puVar39 / (ulong)puVar40;
                  }
                  puVar42 = puVar39 + -(uVar32 * (long)puVar40);
                }
                plVar25 = *(long **)(*plVar2 + (long)puVar42 * 8);
                if (plVar25 != (long *)0x0) {
                  do {
                    plVar25 = (long *)*plVar25;
                    if (plVar25 == (long *)0x0) goto LAB_01544390;
                    puVar27 = (undefined1 *)plVar25[1];
                    if (puVar27 != puVar39) {
                      if (puVar40 <= puVar27) {
                        uVar32 = 0;
                        if (puVar40 != (undefined1 *)0x0) {
                          uVar32 = (ulong)puVar27 / (ulong)puVar40;
                        }
                        puVar27 = puVar27 + -(uVar32 * (long)puVar40);
                      }
                      if (puVar27 != puVar42) goto LAB_01544390;
                    }
                  } while ((undefined1 *)plVar25[2] != puVar39);
LAB_01544264:
                  do {
                    lVar15 = *plVar41;
                    iVar14 = (int)lVar15 + -1;
                    cVar12 = '\x01';
                    bVar13 = (bool)ExclusiveMonitorPass(plVar41,0x10);
                    if (bVar13) {
                      *(int *)plVar41 = iVar14;
                      cVar12 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar12 != '\0');
                  if (iVar14 == 0) {
                    (**(code **)(*plVar38 + 0x10))(plVar38);
                  }
                  else if ((int)lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                    nn::diag::detail::AbortImpl
                              ("count != std::numeric_limits<uint32_t>::max()",
                               "DecrementReferenceInternal",
                               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                               ,0x58,"Reference counter underflows.");
                  }
                  goto LAB_01544474;
                }
              }
            }
LAB_01544390:
            unaff_x28 = (long *)(**(code **)(**(long **)(param_1 + 0x1c8) + 0x10))
                                          (*(long **)(param_1 + 0x1c8),0x38,8);
            if (unaff_x28 == (long *)0x0) {
              (**(code **)(**(long **)(param_1 + 0x1c8) + 0xe8))();
            }
            uVar35 = *(undefined8 *)(param_1 + 0x1c8);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar15 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar15 != 0) {
              if (0xf < *(ulong *)(lVar15 + 0x80)) {
LAB_01544b54:
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(undefined8 *)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = uVar35;
              *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
            }
            unaff_x28[2] = (long)puVar39;
            unaff_x28[3] = (long)__s;
            unaff_x28[6] = (long)plVar38;
            unaff_x28[4] = (long)puVar19;
            unaff_x28[5] = 0;
            if (lVar15 != 0) {
              *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
            }
            *unaff_x28 = 0;
            unaff_x28[1] = (long)puVar39;
            fVar45 = (float)(*(long *)(param_1 + 0x1e8) + 1);
            if ((puVar40 == (undefined1 *)0x0) ||
               (*(float *)(param_1 + 0x1f0) * (float)puVar40 < fVar45)) {
              uVar32 = (ulong)(puVar40 < (undefined1 *)0x3 ||
                              ((ulong)puVar40 & (ulong)(puVar40 + -1)) != 0) | (long)puVar40 << 1;
              uVar34 = (ulong)(fVar45 / *(float *)(param_1 + 0x1f0));
              if (uVar34 <= uVar32) {
                uVar34 = uVar32;
              }
              if (uVar34 - 1 == 0) {
                uVar34 = 2;
              }
              else if ((uVar34 & uVar34 - 1) != 0) {
                uVar34 = std::__next_prime(uVar34);
              }
              uVar32 = *(ulong *)(param_1 + 0x198);
              if (uVar32 < uVar34) {
                uVar21 = uVar34;
LAB_01544580:
                FUN_0154547c(plVar2,uVar21);
              }
              else if (uVar34 < uVar32) {
                uVar21 = (ulong)((float)*(ulong *)(param_1 + 0x1e8) / *(float *)(param_1 + 0x1f0));
                if ((uVar32 < 3) ||
                   (uVar36 = uVar32 - (uVar32 >> 1 & 0x5555555555555555),
                   uVar36 = (uVar36 & 0x3333333333333333) + (uVar36 >> 2 & 0x3333333333333333),
                   1 < (uVar36 + (uVar36 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
                  uVar21 = std::__next_prime(uVar21);
                }
                else if (1 < uVar21) {
                  uVar21 = 1L << (-LZCOUNT(uVar21 - 1) & 0x3fU);
                }
                if (uVar21 <= uVar34) {
                  uVar21 = uVar34;
                }
                if (uVar21 < uVar32) goto LAB_01544580;
              }
              puVar40 = *(undefined1 **)(param_1 + 0x198);
              if (((ulong)puVar40 & (ulong)(puVar40 + -1)) == 0) {
                puVar42 = (undefined1 *)((ulong)(puVar40 + -1) & (ulong)puVar39);
              }
              else if (puVar39 < puVar40) {
                puVar42 = puVar39;
              }
              else {
                uVar32 = 0;
                if (puVar40 != (undefined1 *)0x0) {
                  uVar32 = (ulong)puVar39 / (ulong)puVar40;
                }
                puVar42 = puVar39 + -(uVar32 * (long)puVar40);
              }
            }
            plVar38 = *(long **)(*plVar2 + (long)puVar42 * 8);
            if (plVar38 == (long *)0x0) {
              *unaff_x28 = *plVar4;
              *plVar4 = (long)unaff_x28;
              *(long **)(*plVar2 + (long)puVar42 * 8) = plVar4;
              if (*unaff_x28 != 0) {
                puVar19 = *(undefined1 **)(*unaff_x28 + 8);
                if (((ulong)puVar40 & (ulong)(puVar40 + -1)) == 0) {
                  puVar19 = (undefined1 *)((ulong)puVar19 & (ulong)(puVar40 + -1));
                }
                else if (puVar40 <= puVar19) {
                  uVar32 = 0;
                  if (puVar40 != (undefined1 *)0x0) {
                    uVar32 = (ulong)puVar19 / (ulong)puVar40;
                  }
                  puVar19 = puVar19 + -(uVar32 * (long)puVar40);
                }
                plVar38 = (long *)(*plVar2 + (long)puVar19 * 8);
                goto LAB_0154445c;
              }
            }
            else {
              *unaff_x28 = *plVar38;
LAB_0154445c:
              *plVar38 = (long)unaff_x28;
            }
            *(long *)(param_1 + 0x1e8) = *(long *)(param_1 + 0x1e8) + 1;
          }
LAB_01544474:
          if (local_a0 != (ulong *)0x0) {
            uVar32 = (**(code **)(*plVar22 + 0xf8))(plVar22);
            if (((uVar32 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
              (**(code **)(*plVar22 + 0x18))(plVar22,local_a0,(long)local_90 - (long)local_a0,4);
            }
            else {
              FUN_00c48fe8(plVar22,local_a0,(long)local_90 - (long)local_a0,4);
            }
          }
          uVar20 = *puVar6;
        }
        uVar29 = uVar29 + 1;
        lVar43 = lVar43 + 4;
      } while (uVar29 < uVar20);
    }
  }
  return;
}


