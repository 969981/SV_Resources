/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01542018; name: FUN_01542018
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01542018(long param_1,int *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  byte *__s;
  uint *puVar6;
  int *piVar7;
  undefined8 *puVar8;
  byte bVar9;
  byte bVar10;
  char cVar11;
  bool bVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  size_t sVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined1 *puVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  long *plVar23;
  ulong uVar24;
  byte *pbVar25;
  long *plVar26;
  undefined1 *puVar27;
  ulong uVar28;
  uint *puVar29;
  ulong uVar30;
  ushort *puVar31;
  ulong uVar32;
  ulong uVar33;
  undefined8 *puVar34;
  undefined8 uVar35;
  undefined8 *puVar36;
  ulong uVar37;
  uint *puVar38;
  undefined1 *puVar39;
  long lVar40;
  long *plVar41;
  undefined1 *puVar42;
  uint *puVar43;
  float fVar44;
  uint *local_f0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  long *local_88;
  ulong local_80;
  long local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  
  if ((10 < *(ushort *)((long)param_2 - (long)*param_2)) &&
     (uVar28 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[5], uVar28 != 0)) {
    uVar30 = (ulong)*(uint *)((long)param_2 + uVar28);
    puVar6 = (uint *)((long)((long)param_2 + uVar28) + uVar30);
    uVar21 = *puVar6;
    if (uVar21 != 0) {
      plVar1 = (long *)(param_1 + 0x128);
      plVar2 = (long *)(param_1 + 0x1f8);
      plVar3 = (long *)(param_1 + 0x158);
      plVar4 = (long *)(param_1 + 0x228);
      lVar40 = (long)param_2 + uVar30 + uVar28 + 9;
      uVar28 = 0;
      puVar5 = PTR_DAT_047d66f8 + 0x10;
      do {
        uVar30 = (ulong)puVar6[uVar28 + 1];
        piVar7 = (int *)((long)(puVar6 + uVar28 + 1) + uVar30);
        puVar31 = (ushort *)((long)piVar7 - (long)*piVar7);
        if ((4 < *puVar31) && (uVar33 = (ulong)puVar31[2], uVar33 != 0)) {
          local_f0 = (uint *)((long)piVar7 + uVar33);
          uVar22 = (ulong)*local_f0;
          if ((*puVar31 < 7) || ((ulong)puVar31[3] == 0)) {
            puVar43 = (uint *)0x0;
          }
          else {
            puVar43 = (uint *)((long)piVar7 + (ulong)puVar31[3]);
            puVar43 = (uint *)((long)puVar43 + (ulong)*puVar43);
          }
          local_98 = (undefined8 *)0x0;
          local_90 = (undefined8 *)0x0;
          local_a0 = (undefined8 *)0x0;
          if (((DAT_04865a38 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar14 = nn::os::GetTlsValue(DAT_04865a30);
          if (((lVar14 == 0) || (*(long *)(lVar14 + 0x80) == 0)) ||
             (plVar23 = *(long **)(lVar14 + *(long *)(lVar14 + 0x80) * 8 + -8),
             plVar23 == (long *)0x0)) {
            lVar14 = tpidr_el0;
            plVar23 = *(long **)(lVar14 + 0x30);
            if (plVar23 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(&DAT_04859438), iVar13 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar23 = DAT_04859430;
              *(long **)(lVar14 + 0x30) = DAT_04859430;
            }
          }
          local_70 = 0;
          local_80 = 0x1fffffffffffffff;
          local_78 = 0;
          local_88 = plVar23;
          if (*puVar43 != 0) {
            uVar37 = 0;
            do {
              plVar23 = local_88;
              puVar38 = puVar43 + uVar37 + 1;
              piVar7 = (int *)((long)puVar38 + (ulong)*puVar38);
              if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 5) ||
                 (uVar32 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[2], uVar32 == 0)) {
                local_a8 = 0;
              }
              else {
                local_a8 = *(undefined4 *)((long)piVar7 + uVar32);
              }
              piVar7 = (int *)((long)puVar38 + (ulong)*puVar38);
              if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 7) ||
                 (uVar32 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3], uVar32 == 0)) {
                uStack_a4 = 0;
              }
              else {
                uStack_a4 = *(undefined4 *)((long)piVar7 + uVar32);
              }
              if (local_98 < local_90) {
                FUN_015457c4(&local_a0,&local_a8);
                puVar34 = local_a0;
                puVar8 = local_90;
              }
              else {
                lVar14 = (long)local_98 - (long)local_a0 >> 3;
                uVar32 = lVar14 + 1;
                uVar20 = local_80;
                if (0x7ffffffffffffffe < local_80) {
                  uVar20 = 0x7fffffffffffffff;
                }
                if (uVar20 < uVar32) goto LAB_0154321c;
                uVar24 = (long)local_90 - (long)local_a0 >> 2;
                if (uVar32 <= uVar24) {
                  uVar32 = uVar24;
                }
                if (uVar20 >> 1 <= (ulong)((long)local_90 - (long)local_a0 >> 3)) {
                  uVar32 = uVar20;
                }
                if (uVar32 == 0) {
                  lVar15 = 0;
                }
                else {
                  lVar15 = (**(code **)(*local_88 + 0x10))(local_88,uVar32 << 3,4);
                  if (lVar15 == 0) {
                    (**(code **)(*plVar23 + 0xe8))(plVar23);
                  }
                }
                puVar8 = (undefined8 *)(lVar15 + lVar14 * 8);
                if (((DAT_04865a38 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
                  FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                  FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                  __cxa_guard_release(&DAT_04865a38);
                }
                lVar14 = nn::os::GetTlsValue(DAT_04865a30);
                puVar17 = local_a0;
                if (lVar14 == 0) {
                  *puVar8 = CONCAT44(uStack_a4,local_a8);
                }
                else {
                  if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_015431f0;
                  *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar23;
                  *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
                  *puVar8 = CONCAT44(uStack_a4,local_a8);
                  *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
                }
                puVar34 = puVar8;
                puVar36 = local_98;
                if (local_98 != local_a0) {
                  do {
                    plVar23 = local_88;
                    if (((DAT_04865a38 & 1) == 0) &&
                       (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
                      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                      __cxa_guard_release(&DAT_04865a38);
                    }
                    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
                    if (lVar14 == 0) {
                      puVar34[-1] = puVar36[-1];
                    }
                    else {
                      if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_015431f0;
                      *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar23;
                      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
                      puVar34[-1] = puVar36[-1];
                      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
                    }
                    puVar36 = puVar36 + -1;
                    puVar34 = puVar34 + -1;
                  } while (puVar17 != puVar36);
                }
                plVar23 = local_88;
                puVar17 = local_a0;
                local_98 = puVar8 + 1;
                puVar8 = (undefined8 *)(lVar15 + uVar32 * 8);
                if (local_a0 != (undefined8 *)0x0) {
                  lVar14 = (long)local_90 - (long)local_a0;
                  local_a0 = puVar34;
                  local_90 = puVar8;
                  uVar32 = (**(code **)(*local_88 + 0xf8))(local_88);
                  if (((uVar32 & 1) == 0) ||
                     (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
                    (**(code **)(*plVar23 + 0x18))(plVar23,puVar17,lVar14,4);
                    puVar34 = local_a0;
                    puVar8 = local_90;
                  }
                  else {
                    FUN_00c48fe8(plVar23,puVar17,lVar14,4);
                    puVar34 = local_a0;
                    puVar8 = local_90;
                  }
                }
              }
              local_90 = puVar8;
              local_a0 = puVar34;
              uVar37 = uVar37 + 1;
            } while (uVar37 < *puVar43);
          }
          if (local_98 != local_a0) {
            __s = (byte *)((long)local_f0 + uVar22 + 4);
            sVar16 = strlen((char *)__s);
            bVar10 = *__s;
            puVar43 = (uint *)&DAT_cbf29ce484222645;
            if (bVar10 != 0) {
              uVar37 = (ulong)(uint)bVar10;
              puVar43 = (uint *)&DAT_cbf29ce484222645;
              pbVar25 = (byte *)(lVar40 + uVar22 + uVar33 + uVar30);
              do {
                puVar43 = (uint *)(((ulong)puVar43 ^ uVar37) * 0x100000001b3);
                bVar9 = *pbVar25;
                uVar37 = (ulong)bVar9;
                pbVar25 = pbVar25 + 1;
              } while (bVar9 != 0);
            }
            puVar38 = *(uint **)(param_1 + 0x130);
            if (puVar38 == (uint *)0x0) {
LAB_01542440:
              plVar23 = (long *)(**(code **)(**(long **)(param_1 + 0x160) + 0x10))
                                          (*(long **)(param_1 + 0x160),0x68,8);
              if (plVar23 == (long *)0x0) {
                (**(code **)(**(long **)(param_1 + 0x160) + 0xe8))();
              }
              uVar35 = *(undefined8 *)(param_1 + 0x160);
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar14 = nn::os::GetTlsValue(DAT_04865a30);
              puVar34 = local_98;
              puVar8 = local_a0;
              if (lVar14 != 0) {
                if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_015431f0;
                *(undefined8 *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = uVar35;
                *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
              }
              plVar23[2] = (long)puVar43;
              plVar23[3] = (long)__s;
              plVar23[4] = sVar16;
              plVar23[5] = 0;
              plVar23[6] = 0;
              plVar23[7] = 0;
              plVar23[8] = 0;
              plVar26 = plVar23 + 9;
              *plVar26 = (long)local_88;
              plVar23[0xb] = local_78;
              plVar23[0xc] = CONCAT44(uStack_6c,local_70);
              plVar23[10] = local_80;
              lVar15 = (long)local_98 - (long)local_a0;
              if (lVar15 != 0) {
                uVar37 = plVar23[10];
                if (0x7ffffffffffffffe < uVar37) {
                  uVar37 = 0x7fffffffffffffff;
                }
                if (uVar37 < (ulong)(lVar15 >> 3)) {
LAB_0154321c:
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_length_error();
                }
                puVar17 = (undefined8 *)
                          (**(code **)(*(long *)*plVar26 + 0x10))((long *)*plVar26,lVar15,4);
                if (puVar17 == (undefined8 *)0x0) {
                  (**(code **)(*(long *)*plVar26 + 0xe8))();
                }
                plVar23[8] = (long)(puVar17 + (lVar15 >> 3));
                plVar23[6] = (long)puVar17;
                plVar23[7] = (long)puVar17;
                for (; puVar8 != puVar34; puVar8 = puVar8 + 1) {
                  lVar15 = *plVar26;
                  if (((DAT_04865a38 & 1) == 0) &&
                     (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
                    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                    __cxa_guard_release(&DAT_04865a38);
                  }
                  lVar18 = nn::os::GetTlsValue(DAT_04865a30);
                  if (lVar18 == 0) {
                    *puVar17 = *puVar8;
                  }
                  else {
                    if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_015431f0;
                    *(long *)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = lVar15;
                    *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
                    *puVar17 = *puVar8;
                    *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
                  }
                  puVar17 = puVar17 + 1;
                }
                plVar23[7] = (long)puVar17;
              }
              if (lVar14 != 0) {
                *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
              }
              *plVar23 = 0;
              plVar23[1] = (long)puVar43;
              fVar44 = (float)(*(long *)(param_1 + 0x180) + 1);
              if ((puVar38 == (uint *)0x0) ||
                 (*(float *)(param_1 + 0x188) * (float)puVar38 < fVar44)) {
                uVar37 = (ulong)(puVar38 < (uint *)0x3 ||
                                ((ulong)puVar38 & (ulong)((long)puVar38 + -1)) != 0) |
                         (long)puVar38 << 1;
                uVar32 = (ulong)(fVar44 / *(float *)(param_1 + 0x188));
                if (uVar32 <= uVar37) {
                  uVar32 = uVar37;
                }
                if (uVar32 - 1 == 0) {
                  uVar32 = 2;
                }
                else if ((uVar32 & uVar32 - 1) != 0) {
                  uVar32 = std::__next_prime(uVar32);
                }
                uVar37 = *(ulong *)(param_1 + 0x130);
                if (uVar37 < uVar32) {
                  uVar20 = uVar32;
LAB_01542634:
                  FUN_015432d4(plVar1,uVar20);
                }
                else if (uVar32 < uVar37) {
                  uVar20 = (ulong)((float)*(ulong *)(param_1 + 0x180) / *(float *)(param_1 + 0x188))
                  ;
                  if ((uVar37 < 3) ||
                     (uVar24 = uVar37 - (uVar37 >> 1 & 0x5555555555555555),
                     uVar24 = (uVar24 & 0x3333333333333333) + (uVar24 >> 2 & 0x3333333333333333),
                     1 < (uVar24 + (uVar24 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
                  {
                    uVar20 = std::__next_prime(uVar20);
                  }
                  else if (1 < uVar20) {
                    uVar20 = 1L << (-LZCOUNT(uVar20 - 1) & 0x3fU);
                  }
                  if (uVar20 <= uVar32) {
                    uVar20 = uVar32;
                  }
                  if (uVar20 < uVar37) goto LAB_01542634;
                }
                puVar38 = *(uint **)(param_1 + 0x130);
                if (((ulong)puVar38 & (ulong)((long)puVar38 + -1)) == 0) {
                  local_f0 = (uint *)((ulong)((long)puVar38 + -1) & (ulong)puVar43);
                }
                else if (puVar43 < puVar38) {
                  local_f0 = puVar43;
                }
                else {
                  uVar37 = 0;
                  if (puVar38 != (uint *)0x0) {
                    uVar37 = (ulong)puVar43 / (ulong)puVar38;
                  }
                  local_f0 = (uint *)((long)puVar43 - uVar37 * (long)puVar38);
                }
              }
              plVar26 = *(long **)(*plVar1 + (long)local_f0 * 8);
              if (plVar26 == (long *)0x0) {
                *plVar23 = *plVar3;
                *plVar3 = (long)plVar23;
                *(long **)(*plVar1 + (long)local_f0 * 8) = plVar3;
                if (*plVar23 != 0) {
                  puVar43 = *(uint **)(*plVar23 + 8);
                  if (((ulong)puVar38 & (ulong)((long)puVar38 + -1)) == 0) {
                    puVar43 = (uint *)((ulong)puVar43 & (ulong)((long)puVar38 + -1));
                  }
                  else if (puVar38 <= puVar43) {
                    uVar37 = 0;
                    if (puVar38 != (uint *)0x0) {
                      uVar37 = (ulong)puVar43 / (ulong)puVar38;
                    }
                    puVar43 = (uint *)((long)puVar43 - uVar37 * (long)puVar38);
                  }
                  plVar26 = (long *)(*plVar1 + (long)puVar43 * 8);
                  goto LAB_01542734;
                }
              }
              else {
                *plVar23 = *plVar26;
LAB_01542734:
                *plVar26 = (long)plVar23;
              }
              *(long *)(param_1 + 0x180) = *(long *)(param_1 + 0x180) + 1;
              bVar10 = *__s;
            }
            else {
              puVar42 = (undefined1 *)((long)puVar38 + -1);
              if (((ulong)puVar38 & (ulong)puVar42) == 0) {
                local_f0 = (uint *)((ulong)puVar42 & (ulong)puVar43);
                plVar23 = *(long **)(*plVar1 + (long)local_f0 * 8);
                if (plVar23 == (long *)0x0) goto LAB_01542440;
                do {
                  plVar23 = (long *)*plVar23;
                  if ((plVar23 == (long *)0x0) ||
                     ((uint *)plVar23[1] != puVar43 &&
                      (uint *)((ulong)plVar23[1] & (ulong)puVar42) != local_f0)) goto LAB_01542440;
                } while ((uint *)plVar23[2] != puVar43);
              }
              else {
                local_f0 = puVar43;
                if (puVar38 <= puVar43) {
                  uVar37 = 0;
                  if (puVar38 != (uint *)0x0) {
                    uVar37 = (ulong)puVar43 / (ulong)puVar38;
                  }
                  local_f0 = (uint *)((long)puVar43 - uVar37 * (long)puVar38);
                }
                plVar23 = *(long **)(*plVar1 + (long)local_f0 * 8);
                if (plVar23 == (long *)0x0) goto LAB_01542440;
                do {
                  plVar23 = (long *)*plVar23;
                  if (plVar23 == (long *)0x0) goto LAB_01542440;
                  puVar29 = (uint *)plVar23[1];
                  if (puVar29 != puVar43) {
                    if (puVar38 <= puVar29) {
                      uVar37 = 0;
                      if (puVar38 != (uint *)0x0) {
                        uVar37 = (ulong)puVar29 / (ulong)puVar38;
                      }
                      puVar29 = (uint *)((long)puVar29 - uVar37 * (long)puVar38);
                    }
                    if (puVar29 != local_f0) goto LAB_01542440;
                  }
                } while ((uint *)plVar23[2] != puVar43);
              }
            }
            sVar16 = strlen((char *)__s);
            puVar42 = &DAT_cbf29ce484222645;
            if (bVar10 != 0) {
              puVar42 = &DAT_cbf29ce484222645;
              lVar14 = uVar30 + uVar33 + uVar22;
              do {
                uVar30 = (ulong)bVar10;
                bVar10 = *(byte *)(lVar40 + lVar14);
                puVar42 = (undefined1 *)(((ulong)puVar42 ^ uVar30) * 0x100000001b3);
                lVar14 = lVar14 + 1;
              } while (bVar10 != 0);
            }
            plVar23 = *(long **)(param_1 + 8);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            puVar19 = (undefined1 *)nn::os::GetTlsValue(DAT_04865a30);
            if (0xf < *(ulong *)(puVar19 + 0x80)) goto LAB_015431f0;
            *(long **)(puVar19 + *(ulong *)(puVar19 + 0x80) * 8) = plVar23;
            *(long *)(puVar19 + 0x80) = *(long *)(puVar19 + 0x80) + 1;
            plVar26 = (long *)(**(code **)(*plVar23 + 0x10))(plVar23,0x218,8);
            if (plVar26 == (long *)0x0) {
              (**(code **)(*plVar23 + 0xe8))(plVar23);
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("ptr","Create",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
                         ,0x40);
            }
            *plVar26 = (long)puVar5;
            plVar26[2] = 0;
            *(undefined4 *)(plVar26 + 3) = 0;
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar14 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar14 == 0) {
              lVar15 = 0;
            }
            else {
              lVar15 = 0;
              if (*(long *)(lVar14 + 0x80) != 0) {
                lVar15 = *(long *)(lVar14 + *(long *)(lVar14 + 0x80) * 8 + -8);
              }
            }
            plVar26[1] = lVar15;
            plVar41 = plVar26 + 5;
            *(int *)plVar41 = 0;
            *plVar26 = (long)&PTR_LAB_045ad898;
            plVar26[4] = (long)&PTR_LAB_045ad8d0;
            plVar26[6] = 0;
            *(undefined4 *)((long)plVar26 + 0x44) = 1;
            nn::os::InitializeLightEvent(plVar26 + 7,0,1);
            plVar26[9] = 0;
            *(undefined4 *)((long)plVar26 + 0x5c) = 1;
            nn::os::InitializeLightEvent(plVar26 + 10,0,1);
            plVar26[0x11] = 0;
            plVar26[0x12] = 0;
            plVar26[0xf] = 0;
            plVar26[0x10] = 0;
            plVar26[0xc] = 0;
            plVar26[0xd] = 0;
            plVar26[0xe] = 0;
            FUN_01544d88();
            plVar26[0x13] = 0;
            *(undefined4 *)((long)plVar26 + 0xac) = 1;
            nn::os::InitializeLightEvent(plVar26 + 0x14,0,1);
            plVar26[0x1b] = 0;
            plVar26[0x1c] = 0;
            plVar26[0x19] = 0;
            plVar26[0x1a] = 0;
            plVar26[0x16] = 0;
            plVar26[0x17] = 0;
            plVar26[0x18] = 0;
            FUN_01544c50();
            plVar26[0x22] = 0;
            plVar26[0x23] = 0;
            plVar26[0x20] = 0;
            plVar26[0x21] = 0;
            plVar26[0x1d] = 0;
            plVar26[0x1e] = 0;
            plVar26[0x1f] = 0;
            FUN_01544ec0();
            plVar26[0x29] = 0;
            plVar26[0x2a] = 0;
            plVar26[0x24] = 0;
            plVar26[0x27] = 0;
            plVar26[0x28] = 0;
            plVar26[0x25] = 0;
            plVar26[0x26] = 0;
            FUN_01544ff8(plVar26 + 0x24);
            plVar26[0x30] = 0;
            plVar26[0x31] = 0;
            plVar26[0x2b] = 0;
            plVar26[0x2e] = 0;
            plVar26[0x2f] = 0;
            plVar26[0x2c] = 0;
            plVar26[0x2d] = 0;
            FUN_01544c50(plVar26 + 0x2d);
            memset(plVar26 + 0x32,0,0x88);
            *(undefined4 *)(plVar26 + 3) = 0x80218;
            plVar26[1] = (long)plVar23;
            plVar26[2] = (long)plVar26;
            *(long *)(puVar19 + 0x80) = *(long *)(puVar19 + 0x80) + -1;
            do {
              lVar14 = *plVar41;
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar41,0x10);
              if (bVar12) {
                *(int *)plVar41 = (int)lVar14 + 1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if ((int)lVar14 == -1) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != 0","IncrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                         ,0x53,"Reference counter overflows.");
            }
            puVar39 = *(undefined1 **)(param_1 + 0x200);
            if (puVar39 != (undefined1 *)0x0) {
              puVar27 = puVar39 + -1;
              if (((ulong)puVar39 & (ulong)puVar27) == 0) {
                puVar19 = (undefined1 *)((ulong)puVar27 & (ulong)puVar42);
                plVar23 = *(long **)(*plVar2 + (long)puVar19 * 8);
                if (plVar23 != (long *)0x0) {
                  do {
                    plVar23 = (long *)*plVar23;
                    if ((plVar23 == (long *)0x0) ||
                       ((undefined1 *)plVar23[1] != puVar42 &&
                        (undefined1 *)((ulong)plVar23[1] & (ulong)puVar27) != puVar19))
                    goto LAB_0154296c;
                  } while ((undefined1 *)plVar23[2] != puVar42);
                  goto LAB_01542b4c;
                }
              }
              else {
                puVar19 = puVar42;
                if (puVar39 <= puVar42) {
                  uVar30 = 0;
                  if (puVar39 != (undefined1 *)0x0) {
                    uVar30 = (ulong)puVar42 / (ulong)puVar39;
                  }
                  puVar19 = puVar42 + -(uVar30 * (long)puVar39);
                }
                plVar23 = *(long **)(*plVar2 + (long)puVar19 * 8);
                if (plVar23 != (long *)0x0) {
                  do {
                    plVar23 = (long *)*plVar23;
                    if (plVar23 == (long *)0x0) goto LAB_0154296c;
                    puVar27 = (undefined1 *)plVar23[1];
                    if (puVar27 != puVar42) {
                      if (puVar39 <= puVar27) {
                        uVar30 = 0;
                        if (puVar39 != (undefined1 *)0x0) {
                          uVar30 = (ulong)puVar27 / (ulong)puVar39;
                        }
                        puVar27 = puVar27 + -(uVar30 * (long)puVar39);
                      }
                      if (puVar27 != puVar19) goto LAB_0154296c;
                    }
                  } while ((undefined1 *)plVar23[2] != puVar42);
LAB_01542b4c:
                  do {
                    lVar14 = *plVar41;
                    iVar13 = (int)lVar14 + -1;
                    cVar11 = '\x01';
                    bVar12 = (bool)ExclusiveMonitorPass(plVar41,0x10);
                    if (bVar12) {
                      *(int *)plVar41 = iVar13;
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar11 != '\0');
                  if (iVar13 == 0) {
                    (**(code **)(*plVar26 + 0x10))(plVar26);
                  }
                  else if ((int)lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    nn::diag::detail::AbortImpl
                              ("count != std::numeric_limits<uint32_t>::max()",
                               "DecrementReferenceInternal",
                               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                               ,0x58,"Reference counter underflows.");
                  }
                  goto LAB_01542b80;
                }
              }
            }
LAB_0154296c:
            plVar23 = (long *)(**(code **)(**(long **)(param_1 + 0x230) + 0x10))
                                        (*(long **)(param_1 + 0x230),0x38,8);
            if (plVar23 == (long *)0x0) {
              (**(code **)(**(long **)(param_1 + 0x230) + 0xe8))();
            }
            uVar35 = *(undefined8 *)(param_1 + 0x230);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar14 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar14 != 0) {
              if (0xf < *(ulong *)(lVar14 + 0x80)) {
LAB_015431f0:
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(undefined8 *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = uVar35;
              *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
            }
            plVar23[2] = (long)puVar42;
            plVar23[3] = (long)__s;
            plVar23[6] = (long)plVar26;
            plVar23[4] = sVar16;
            plVar23[5] = 0;
            if (lVar14 != 0) {
              *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
            }
            *plVar23 = 0;
            plVar23[1] = (long)puVar42;
            fVar44 = (float)(*(long *)(param_1 + 0x250) + 1);
            if ((puVar39 == (undefined1 *)0x0) ||
               (*(float *)(param_1 + 600) * (float)puVar39 < fVar44)) {
              uVar30 = (ulong)(puVar39 < (undefined1 *)0x3 ||
                              ((ulong)puVar39 & (ulong)(puVar39 + -1)) != 0) | (long)puVar39 << 1;
              uVar33 = (ulong)(fVar44 / *(float *)(param_1 + 600));
              if (uVar33 <= uVar30) {
                uVar33 = uVar30;
              }
              if (uVar33 - 1 == 0) {
                uVar33 = 2;
              }
              else if ((uVar33 & uVar33 - 1) != 0) {
                uVar33 = std::__next_prime(uVar33);
              }
              uVar30 = *(ulong *)(param_1 + 0x200);
              if (uVar30 < uVar33) {
                uVar22 = uVar33;
LAB_01542a60:
                FUN_015435dc(plVar2,uVar22);
              }
              else if (uVar33 < uVar30) {
                uVar22 = (ulong)((float)*(ulong *)(param_1 + 0x250) / *(float *)(param_1 + 600));
                if ((uVar30 < 3) ||
                   (uVar37 = uVar30 - (uVar30 >> 1 & 0x5555555555555555),
                   uVar37 = (uVar37 & 0x3333333333333333) + (uVar37 >> 2 & 0x3333333333333333),
                   1 < (uVar37 + (uVar37 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
                  uVar22 = std::__next_prime(uVar22);
                }
                else if (1 < uVar22) {
                  uVar22 = 1L << (-LZCOUNT(uVar22 - 1) & 0x3fU);
                }
                if (uVar22 <= uVar33) {
                  uVar22 = uVar33;
                }
                if (uVar22 < uVar30) goto LAB_01542a60;
              }
              puVar39 = *(undefined1 **)(param_1 + 0x200);
              if (((ulong)puVar39 & (ulong)(puVar39 + -1)) == 0) {
                puVar19 = (undefined1 *)((ulong)(puVar39 + -1) & (ulong)puVar42);
              }
              else if (puVar42 < puVar39) {
                puVar19 = puVar42;
              }
              else {
                uVar30 = 0;
                if (puVar39 != (undefined1 *)0x0) {
                  uVar30 = (ulong)puVar42 / (ulong)puVar39;
                }
                puVar19 = puVar42 + -(uVar30 * (long)puVar39);
              }
            }
            plVar26 = *(long **)(*plVar2 + (long)puVar19 * 8);
            if (plVar26 == (long *)0x0) {
              *plVar23 = *plVar4;
              *plVar4 = (long)plVar23;
              *(long **)(*plVar2 + (long)puVar19 * 8) = plVar4;
              if (*plVar23 != 0) {
                puVar42 = *(undefined1 **)(*plVar23 + 8);
                if (((ulong)puVar39 & (ulong)(puVar39 + -1)) == 0) {
                  puVar42 = (undefined1 *)((ulong)puVar42 & (ulong)(puVar39 + -1));
                }
                else if (puVar39 <= puVar42) {
                  uVar30 = 0;
                  if (puVar39 != (undefined1 *)0x0) {
                    uVar30 = (ulong)puVar42 / (ulong)puVar39;
                  }
                  puVar42 = puVar42 + -(uVar30 * (long)puVar39);
                }
                plVar26 = (long *)(*plVar2 + (long)puVar42 * 8);
                goto LAB_01542b68;
              }
            }
            else {
              *plVar23 = *plVar26;
LAB_01542b68:
              *plVar26 = (long)plVar23;
            }
            *(long *)(param_1 + 0x250) = *(long *)(param_1 + 0x250) + 1;
          }
LAB_01542b80:
          plVar23 = local_88;
          puVar8 = local_a0;
          if (local_a0 != (undefined8 *)0x0) {
            lVar14 = (long)local_90 - (long)local_a0;
            local_98 = local_a0;
            uVar30 = (**(code **)(*local_88 + 0xf8))(local_88);
            if (((uVar30 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
              (**(code **)(*plVar23 + 0x18))(plVar23,puVar8,lVar14,4);
            }
            else {
              FUN_00c48fe8(plVar23,puVar8,lVar14,4);
            }
          }
          uVar21 = *puVar6;
        }
        uVar28 = uVar28 + 1;
        lVar40 = lVar40 + 4;
      } while (uVar28 < uVar21);
    }
  }
  return;
}


