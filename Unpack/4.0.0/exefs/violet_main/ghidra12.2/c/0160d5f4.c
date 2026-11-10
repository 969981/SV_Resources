/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0160d5f4; name: FUN_0160d5f4
 */


void FUN_0160d5f4(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  short *psVar5;
  int *piVar6;
  uint *puVar7;
  short sVar8;
  byte bVar9;
  ushort uVar10;
  char cVar11;
  bool bVar12;
  int iVar13;
  ulong uVar14;
  uint *puVar15;
  uint *puVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  undefined1 *puVar20;
  byte *pbVar21;
  long *plVar22;
  long *plVar23;
  ushort *puVar24;
  ulong uVar25;
  undefined1 *puVar26;
  ulong uVar27;
  uint uVar28;
  int *piVar29;
  undefined8 uVar30;
  undefined1 *puVar31;
  undefined8 *puVar32;
  undefined1 *puVar33;
  undefined1 *puVar34;
  long lVar35;
  float fVar36;
  undefined4 uVar37;
  long *local_1d8;
  long *local_1d0;
  long *local_1c0;
  undefined8 *puStack_1b8;
  undefined1 local_1b0;
  undefined1 auStack_1a8 [8];
  long *local_1a0;
  undefined1 auStack_168 [64];
  long *local_128;
  int *local_120;
  long *local_108;
  undefined *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_f8 = PTR_DAT_047d8e88 + 0x10;
  uStack_b0 = 0;
  uStack_f0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_b8 = local_f8;
  FUN_0160eb04(&local_1c0,param_2);
  uVar14 = FUN_00dc5c18(&local_b8,0,&local_1c0,0,*(undefined8 *)(param_1 + 0x40));
  if ((uVar14 & 1) == 0) {
    uVar14 = 0;
  }
  else {
    FUN_0160ece0(&local_128,param_2);
    uVar14 = FUN_00dc5c18(&local_f8,0,&local_128,0,*(undefined8 *)(param_1 + 0x40));
    uVar14 = uVar14 & 0xffffffff;
    if (local_108 != (long *)0x0) {
      (**(code **)(*local_108 + 0x20))();
    }
    if (local_128 != (long *)0x0) {
      (**(code **)(*local_128 + 0x20))();
    }
  }
  if (local_1a0 != (long *)0x0) {
    (**(code **)(*local_1a0 + 0x20))();
  }
  if (local_1c0 != (long *)0x0) {
    (**(code **)(*local_1c0 + 0x20))();
  }
  if ((uVar14 & 1) == 0) goto LAB_0160e034;
  FUN_00fb9e50(&local_1c0,&local_b8,&local_f8);
  FUN_00fb4dd0(&local_128,&local_1c0);
  FUN_00db239c(auStack_168);
  FUN_00db239c(auStack_1a8);
  FUN_0160f348(param_1,&local_128);
  FUN_0160e65c();
  FUN_01610008(param_1,&local_128);
  if ((local_120 == (int *)0x0) || (*(ushort *)((long)local_120 - (long)*local_120) < 7))
  goto LAB_0160e524;
  uVar14 = (ulong)((ushort *)((long)local_120 - (long)*local_120))[3];
  uVar37 = 0;
  if (uVar14 != 0) {
    puVar15 = (uint *)((long)local_120 + uVar14);
    puVar15 = (uint *)((long)puVar15 + (ulong)*puVar15);
    local_1c0 = (long *)0x3c4a0e6;
    puVar15 = bsearch(&local_1c0,puVar15 + 1,(ulong)*puVar15,4,(__compar_fn_t)PTR_LAB_047d5600);
    if ((puVar15 != (uint *)0x0) && (local_128 != (long *)0x0)) {
      piVar6 = (int *)((long)puVar15 + (ulong)*puVar15);
      puVar24 = (ushort *)((long)piVar6 - (long)*piVar6);
      uVar10 = *puVar24;
      if (uVar10 < 7) {
        piVar29 = (int *)0x0;
      }
      else {
        piVar29 = (int *)0x0;
        if ((ulong)puVar24[3] != 0) {
          puVar15 = (uint *)((long)piVar6 + (ulong)puVar24[3]);
          piVar29 = (int *)((long)puVar15 + (ulong)*puVar15);
        }
      }
      if ((*(ushort *)((long)piVar29 - (long)*piVar29) < 5) ||
         (uVar14 = (ulong)((ushort *)((long)piVar29 - (long)*piVar29))[2], uVar14 == 0)) {
        uVar14 = 0;
      }
      else {
        uVar14 = (long)*(char *)((long)piVar29 + uVar14) & 0xffffffff;
      }
      if (*(long *)(PTR_DAT_047d5608 + uVar14 * 8) == 4) {
        if (uVar10 < 0xb) {
          uVar28 = 0;
LAB_0160e1c0:
          uVar37 = 0;
        }
        else {
          uVar28 = 0;
          if ((ulong)puVar24[5] != 0) {
            uVar28 = (uint)*(ushort *)((long)piVar6 + (ulong)puVar24[5]);
          }
          if ((uVar10 < 0xd) || ((ulong)puVar24[6] == 0)) goto LAB_0160e1c0;
          uVar37 = *(undefined4 *)((long)piVar6 + (ulong)puVar24[6]);
        }
        puVar24 = (ushort *)((long)local_128 - (long)(int)*local_128);
        if ((uVar28 < *puVar24) &&
           (uVar14 = (ulong)*(ushort *)((long)puVar24 + (ulong)uVar28), uVar14 != 0)) {
          uVar37 = *(undefined4 *)((long)local_128 + uVar14);
        }
        goto LAB_0160d81c;
      }
      if ((0xc < uVar10) && ((ulong)puVar24[6] != 0)) {
        uVar37 = *(undefined4 *)((long)piVar6 + (ulong)puVar24[6]);
        goto LAB_0160d81c;
      }
    }
LAB_0160e524:
    uVar37 = 0;
  }
LAB_0160d81c:
  *(undefined4 *)PTR_DAT_047dcb48 = uVar37;
  FUN_0160eebc(&local_1c0,param_2);
  uVar14 = FUN_00dc5c18(param_1 + 0x118,0,&local_1c0,0,*(undefined8 *)(param_1 + 0x40));
  if (local_1a0 != (long *)0x0) {
    (**(code **)(*local_1a0 + 0x20))();
  }
  if (local_1c0 != (long *)0x0) {
    (**(code **)(*local_1c0 + 0x20))();
  }
  if ((uVar14 & 1) != 0) {
    puVar16 = (uint *)(**(code **)(**(long **)(param_1 + 0x120) + 0x70))();
    piVar6 = (int *)((long)puVar16 + (ulong)*puVar16);
    uVar14 = (ulong)*(ushort *)((long)piVar6 + (4 - (long)*piVar6));
    puVar7 = (uint *)((long)piVar6 + uVar14);
    uVar25 = (ulong)*puVar7;
    puVar7 = (uint *)((long)puVar7 + uVar25);
    puVar15 = puVar7 + 1;
    uVar27 = (ulong)*puVar7;
    if (uVar27 != 0) {
      puVar7 = puVar15 + uVar27;
      plVar1 = (long *)(param_1 + 0xb0);
      plVar2 = (long *)(param_1 + 0xe0);
      lVar35 = (long)puVar16 + uVar25 + uVar14 + (ulong)*puVar16 + 9;
      puVar3 = (undefined8 *)(param_1 + 0xe8);
      plVar4 = (long *)(param_1 + 0x48);
      do {
        uVar14 = (ulong)*puVar15;
        piVar6 = (int *)((long)puVar15 + uVar14);
        if ((*(ushort *)((long)piVar6 - (long)*piVar6) < 5) ||
           (uVar25 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[2], uVar25 == 0)) {
          if (((*PTR_DAT_047d3e28 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar13 != 0)) {
            FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3e28);
          }
          puVar33 = *(undefined1 **)PTR_DAT_047d3e30;
          local_1d0 = *(long **)(PTR_DAT_047d3e30 + 0x18);
          if (local_1d0 == (long *)0x0) goto LAB_0160d960;
          (**(code **)(*local_1d0 + 0x18))();
        }
        else {
          uVar27 = (ulong)*(uint *)((long)piVar6 + uVar25);
          bVar9 = *(byte *)((long)((long)piVar6 + uVar25) + uVar27 + 4);
          if (bVar9 == 0) {
            local_1d0 = (long *)0x0;
            puVar33 = &DAT_cbf29ce484222645;
          }
          else {
            puVar33 = &DAT_cbf29ce484222645;
            pbVar21 = (byte *)(lVar35 + uVar27 + uVar25 + uVar14);
            do {
              puVar33 = (undefined1 *)(((ulong)puVar33 ^ (ulong)bVar9) * 0x100000001b3);
              bVar9 = *pbVar21;
              pbVar21 = pbVar21 + 1;
            } while (bVar9 != 0);
LAB_0160d960:
            local_1d0 = (long *)0x0;
          }
        }
        if ((*(ushort *)((long)piVar6 - (long)*piVar6) < 7) ||
           (uVar25 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[3], uVar25 == 0)) {
          if (((*PTR_DAT_047d3e28 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar13 != 0)) {
            FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3e28);
          }
          puVar34 = *(undefined1 **)PTR_DAT_047d3e30;
          local_1d8 = *(long **)(PTR_DAT_047d3e30 + 0x18);
          if (local_1d8 == (long *)0x0) goto LAB_0160d9c4;
          (**(code **)(*local_1d8 + 0x18))();
        }
        else {
          uVar27 = (ulong)*(uint *)((long)piVar6 + uVar25);
          bVar9 = *(byte *)((long)((long)piVar6 + uVar25) + uVar27 + 4);
          if (bVar9 == 0) {
            local_1d8 = (long *)0x0;
            puVar34 = &DAT_cbf29ce484222645;
          }
          else {
            puVar34 = &DAT_cbf29ce484222645;
            pbVar21 = (byte *)(lVar35 + uVar27 + uVar25 + uVar14);
            do {
              puVar34 = (undefined1 *)(((ulong)puVar34 ^ (ulong)bVar9) * 0x100000001b3);
              bVar9 = *pbVar21;
              pbVar21 = pbVar21 + 1;
            } while (bVar9 != 0);
LAB_0160d9c4:
            local_1d8 = (long *)0x0;
          }
        }
        uVar37 = 0;
        if (0xe < *(ushort *)((long)piVar6 - (long)*piVar6)) {
          uVar14 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[7];
          uVar37 = 0;
          if (uVar14 != 0) {
            uVar37 = *(undefined4 *)((long)piVar6 + uVar14);
          }
        }
        plVar17 = (long *)(**(code **)(*(long *)*puVar3 + 0x10))((long *)*puVar3,0x28,8);
        if (plVar17 == (long *)0x0) {
          (**(code **)(*(long *)*puVar3 + 0xe8))();
        }
        local_1b0 = 0;
        uVar30 = *puVar3;
        local_1c0 = plVar17;
        puStack_1b8 = puVar3;
        if (((DAT_04865a38 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar18 = nn::os::GetTlsValue(DAT_04865a30);
        plVar23 = local_1c0;
        if (lVar18 == 0) {
          plVar17[2] = (long)puVar33;
          plVar17[3] = (long)puVar34;
          *(undefined4 *)(plVar17 + 4) = uVar37;
        }
        else {
          if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_0160e5d8;
          *(undefined8 *)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = uVar30;
          *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
          *(undefined4 *)(plVar17 + 4) = uVar37;
          plVar17[2] = (long)puVar33;
          plVar17[3] = (long)puVar34;
          *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
          puVar33 = (undefined1 *)plVar17[2];
        }
        local_1b0 = 1;
        *plVar17 = 0;
        plVar17[1] = (long)puVar33;
        puVar31 = *(undefined1 **)(param_1 + 0xb8);
        if (puVar31 == (undefined1 *)0x0) {
LAB_0160daec:
          fVar36 = (float)(*(long *)(param_1 + 0x108) + 1);
          if ((puVar31 == (undefined1 *)0x0) ||
             (*(float *)(param_1 + 0x110) * (float)puVar31 < fVar36)) {
            puVar33 = (undefined1 *)
                      ((ulong)(puVar31 < (undefined1 *)0x3 ||
                              ((ulong)puVar31 & (ulong)(puVar31 + -1)) != 0) | (long)puVar31 << 1);
            puVar20 = (undefined1 *)(long)(fVar36 / *(float *)(param_1 + 0x110));
            if (puVar20 <= puVar33) {
              puVar20 = puVar33;
            }
            if (puVar20 + -1 == (undefined1 *)0x0) {
              puVar20 = (undefined1 *)0x2;
            }
            else if (((ulong)puVar20 & (ulong)(puVar20 + -1)) != 0) {
              puVar20 = (undefined1 *)std::__next_prime((ulong)puVar20);
              puVar31 = *(undefined1 **)(param_1 + 0xb8);
            }
            if (puVar31 < puVar20) {
              puVar33 = puVar20;
LAB_0160dce8:
              FUN_0160e7b8(plVar1,puVar33);
            }
            else if (puVar20 < puVar31) {
              puVar33 = (undefined1 *)
                        (long)((float)*(ulong *)(param_1 + 0x108) / *(float *)(param_1 + 0x110));
              if ((puVar31 < (undefined1 *)0x3) ||
                 (uVar14 = (long)puVar31 - ((ulong)puVar31 >> 1 & 0x5555555555555555),
                 uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333),
                 1 < (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
                puVar33 = (undefined1 *)std::__next_prime((ulong)puVar33);
              }
              else if ((undefined1 *)0x1 < puVar33) {
                puVar33 = (undefined1 *)(1L << (-LZCOUNT(puVar33 + -1) & 0x3fU));
              }
              if (puVar33 <= puVar20) {
                puVar33 = puVar20;
              }
              if (puVar33 < puVar31) goto LAB_0160dce8;
            }
            puVar31 = *(undefined1 **)(param_1 + 0xb8);
            puVar33 = (undefined1 *)plVar17[1];
          }
          uVar14 = (long)puVar31 - ((ulong)puVar31 >> 1 & 0x5555555555555555);
          uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
          uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar14 < 2) {
            puVar33 = (undefined1 *)((ulong)(puVar31 + -1) & (ulong)puVar33);
          }
          else if (puVar31 <= puVar33) {
            uVar25 = 0;
            if (puVar31 != (undefined1 *)0x0) {
              uVar25 = (ulong)puVar33 / (ulong)puVar31;
            }
            puVar33 = puVar33 + -(uVar25 * (long)puVar31);
          }
          plVar23 = *(long **)(*plVar1 + (long)puVar33 * 8);
          if (plVar23 == (long *)0x0) {
            *plVar17 = *plVar2;
            *plVar2 = (long)plVar17;
            *(long **)(*plVar1 + (long)puVar33 * 8) = plVar2;
            if (*plVar17 != 0) {
              puVar33 = *(undefined1 **)(*plVar17 + 8);
              if (uVar14 < 2) {
                puVar33 = (undefined1 *)((ulong)puVar33 & (ulong)(puVar31 + -1));
              }
              else if (puVar31 <= puVar33) {
                uVar14 = 0;
                if (puVar31 != (undefined1 *)0x0) {
                  uVar14 = (ulong)puVar33 / (ulong)puVar31;
                }
                puVar33 = puVar33 + -(uVar14 * (long)puVar31);
              }
              plVar23 = (long *)(*plVar1 + (long)puVar33 * 8);
              goto LAB_0160dbc0;
            }
          }
          else {
            *plVar17 = *plVar23;
LAB_0160dbc0:
            *plVar23 = (long)plVar17;
          }
          *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + 1;
          local_1c0 = (long *)0x0;
        }
        else {
          puVar20 = puVar31 + -1;
          if (((ulong)puVar31 & (ulong)puVar20) == 0) {
            plVar22 = *(long **)(*plVar1 + ((ulong)puVar20 & (ulong)puVar33) * 8);
            if (plVar22 == (long *)0x0) goto LAB_0160daec;
            do {
              plVar22 = (long *)*plVar22;
              if ((plVar22 == (long *)0x0) ||
                 ((plVar22[1] & (ulong)puVar20) != ((ulong)puVar20 & (ulong)puVar33)))
              goto LAB_0160daec;
            } while ((undefined1 *)plVar22[2] != puVar33);
          }
          else {
            puVar20 = puVar33;
            if (puVar31 <= puVar33) {
              uVar14 = 0;
              if (puVar31 != (undefined1 *)0x0) {
                uVar14 = (ulong)puVar33 / (ulong)puVar31;
              }
              puVar20 = puVar33 + -(uVar14 * (long)puVar31);
            }
            plVar22 = *(long **)(*plVar1 + (long)puVar20 * 8);
            if (plVar22 == (long *)0x0) goto LAB_0160daec;
            do {
              plVar22 = (long *)*plVar22;
              if (plVar22 == (long *)0x0) goto LAB_0160daec;
              puVar26 = (undefined1 *)plVar22[1];
              if (puVar31 <= puVar26) {
                uVar14 = 0;
                if (puVar31 != (undefined1 *)0x0) {
                  uVar14 = (ulong)puVar26 / (ulong)puVar31;
                }
                puVar26 = puVar26 + -(uVar14 * (long)puVar31);
              }
              if (puVar26 != puVar20) goto LAB_0160daec;
            } while ((undefined1 *)plVar22[2] != puVar33);
          }
          local_1c0 = (long *)0x0;
          if (plVar23 != (long *)0x0) {
            FUN_0160f2bc(&puStack_1b8);
          }
        }
        puVar33 = *(undefined1 **)(param_1 + 0x50);
        if (puVar33 != (undefined1 *)0x0) {
          uVar14 = (long)puVar33 - ((ulong)puVar33 >> 1 & 0x5555555555555555);
          uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
          uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar14 < 2) {
            puVar31 = (undefined1 *)((ulong)(puVar33 + -1) & (ulong)puVar34);
          }
          else {
            puVar31 = puVar34;
            if (puVar33 <= puVar34) {
              uVar25 = 0;
              if (puVar33 != (undefined1 *)0x0) {
                uVar25 = (ulong)puVar34 / (ulong)puVar33;
              }
              puVar31 = puVar34 + -(uVar25 * (long)puVar33);
            }
          }
          plVar17 = *(long **)(*plVar4 + (long)puVar31 * 8);
          if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
            if (uVar14 < 2) {
              do {
                if ((undefined1 *)plVar17[1] == puVar34) {
                  if ((undefined1 *)plVar17[2] == puVar34) goto LAB_0160dc64;
                }
                else if ((undefined1 *)((ulong)plVar17[1] & (ulong)(puVar33 + -1)) != puVar31)
                break;
                plVar17 = (long *)*plVar17;
              } while (plVar17 != (long *)0x0);
            }
            else {
              do {
                puVar20 = (undefined1 *)plVar17[1];
                if (puVar20 == puVar34) {
                  if ((undefined1 *)plVar17[2] == puVar34) goto LAB_0160dc64;
                }
                else {
                  if (puVar33 <= puVar20) {
                    uVar14 = 0;
                    if (puVar33 != (undefined1 *)0x0) {
                      uVar14 = (ulong)puVar20 / (ulong)puVar33;
                    }
                    puVar20 = puVar20 + -(uVar14 * (long)puVar33);
                  }
                  if (puVar20 != puVar31) break;
                }
                plVar17 = (long *)*plVar17;
              } while (plVar17 != (long *)0x0);
            }
          }
        }
        plVar17 = *(long **)(param_1 + 0x40);
        if (((DAT_04865a38 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar18 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar18 + 0x80)) {
LAB_0160e5d8:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = plVar17;
        *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
        lVar19 = (**(code **)(*plVar17 + 0x10))(plVar17,0x1330,8);
        if (lVar19 == 0) {
          (**(code **)(*plVar17 + 0xe8))(plVar17);
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("ptr","Create",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
                     ,0x40);
        }
        FUN_01617194(lVar19,*(undefined8 *)(param_1 + 0x40),piVar6);
        *(undefined4 *)(lVar19 + 0x18) = 0x81330;
        *(long **)(lVar19 + 8) = plVar17;
        *(long *)(lVar19 + 0x10) = lVar19;
        *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
        lVar18 = *(long *)(lVar19 + 0x30);
        if (*(long *)(lVar18 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar5 = (short *)(lVar18 + 0x1a);
        do {
          sVar8 = *psVar5;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar12) {
            *psVar5 = sVar8 + 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (sVar8 == 0) {
          uVar30 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
          *(undefined8 *)(lVar18 + 8) = uVar30;
          *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
        }
        else if (sVar8 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
        puVar32 = (undefined8 *)(param_1 + 0x80);
        plVar17 = (long *)(**(code **)(*(long *)*puVar32 + 0x10))((long *)*puVar32,0x20,8);
        if (plVar17 == (long *)0x0) {
          (**(code **)(*(long *)*puVar32 + 0xe8))();
        }
        local_1b0 = 0;
        uVar30 = *puVar32;
        local_1c0 = plVar17;
        puStack_1b8 = puVar32;
        if (((DAT_04865a38 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar18 = nn::os::GetTlsValue(DAT_04865a30);
        plVar23 = local_1c0;
        if (lVar18 == 0) {
          plVar17[2] = (long)puVar34;
          plVar17[3] = lVar19;
        }
        else {
          if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_0160e5d8;
          *(undefined8 *)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = uVar30;
          *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
          plVar17[2] = (long)puVar34;
          plVar17[3] = lVar19;
          *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
          puVar34 = (undefined1 *)plVar17[2];
        }
        local_1b0 = 1;
        *plVar17 = 0;
        plVar17[1] = (long)puVar34;
        puVar33 = *(undefined1 **)(param_1 + 0x50);
        if (puVar33 == (undefined1 *)0x0) {
LAB_0160df94:
          fVar36 = (float)(*(long *)(param_1 + 0xa0) + 1);
          if ((puVar33 == (undefined1 *)0x0) ||
             (*(float *)(param_1 + 0xa8) * (float)puVar33 < fVar36)) {
            puVar34 = (undefined1 *)
                      ((ulong)(puVar33 < (undefined1 *)0x3 ||
                              ((ulong)puVar33 & (ulong)(puVar33 + -1)) != 0) | (long)puVar33 << 1);
            puVar31 = (undefined1 *)(long)(fVar36 / *(float *)(param_1 + 0xa8));
            if (puVar31 <= puVar34) {
              puVar31 = puVar34;
            }
            if (puVar31 + -1 == (undefined1 *)0x0) {
              puVar31 = (undefined1 *)0x2;
            }
            else if (((ulong)puVar31 & (ulong)(puVar31 + -1)) != 0) {
              puVar31 = (undefined1 *)std::__next_prime((ulong)puVar31);
              puVar33 = *(undefined1 **)(param_1 + 0x50);
            }
            if (puVar33 < puVar31) {
              puVar34 = puVar31;
LAB_0160e230:
              FUN_01617e70(plVar4,puVar34);
            }
            else if (puVar31 < puVar33) {
              puVar34 = (undefined1 *)
                        (long)((float)*(ulong *)(param_1 + 0xa0) / *(float *)(param_1 + 0xa8));
              if ((puVar33 < (undefined1 *)0x3) ||
                 (uVar14 = (long)puVar33 - ((ulong)puVar33 >> 1 & 0x5555555555555555),
                 uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333),
                 1 < (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
                puVar34 = (undefined1 *)std::__next_prime((ulong)puVar34);
              }
              else if ((undefined1 *)0x1 < puVar34) {
                puVar34 = (undefined1 *)(1L << (-LZCOUNT(puVar34 + -1) & 0x3fU));
              }
              if (puVar34 <= puVar31) {
                puVar34 = puVar31;
              }
              if (puVar34 < puVar33) goto LAB_0160e230;
            }
            puVar33 = *(undefined1 **)(param_1 + 0x50);
            puVar34 = (undefined1 *)plVar17[1];
          }
          uVar14 = (long)puVar33 - ((ulong)puVar33 >> 1 & 0x5555555555555555);
          uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
          uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar14 < 2) {
            puVar34 = (undefined1 *)((ulong)(puVar33 + -1) & (ulong)puVar34);
          }
          else if (puVar33 <= puVar34) {
            uVar25 = 0;
            if (puVar33 != (undefined1 *)0x0) {
              uVar25 = (ulong)puVar34 / (ulong)puVar33;
            }
            puVar34 = puVar34 + -(uVar25 * (long)puVar33);
          }
          plVar23 = *(long **)(*plVar4 + (long)puVar34 * 8);
          if (plVar23 == (long *)0x0) {
            plVar23 = (long *)(param_1 + 0x78);
            *plVar17 = *plVar23;
            *plVar23 = (long)plVar17;
            *(long **)(*(long *)(param_1 + 0x48) + (long)puVar34 * 8) = plVar23;
            if (*plVar17 != 0) {
              puVar34 = *(undefined1 **)(*plVar17 + 8);
              if (uVar14 < 2) {
                puVar34 = (undefined1 *)((ulong)puVar34 & (ulong)(puVar33 + -1));
              }
              else if (puVar33 <= puVar34) {
                uVar14 = 0;
                if (puVar33 != (undefined1 *)0x0) {
                  uVar14 = (ulong)puVar34 / (ulong)puVar33;
                }
                puVar34 = puVar34 + -(uVar14 * (long)puVar33);
              }
              plVar23 = (long *)(*plVar4 + (long)puVar34 * 8);
              goto LAB_0160e014;
            }
          }
          else {
            *plVar17 = *plVar23;
LAB_0160e014:
            *plVar23 = (long)plVar17;
          }
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
          local_1c0 = (long *)0x0;
        }
        else {
          puVar31 = puVar33 + -1;
          if (((ulong)puVar33 & (ulong)puVar31) == 0) {
            plVar22 = *(long **)(*plVar4 + ((ulong)puVar31 & (ulong)puVar34) * 8);
            if (plVar22 == (long *)0x0) goto LAB_0160df94;
            do {
              plVar22 = (long *)*plVar22;
              if ((plVar22 == (long *)0x0) ||
                 ((plVar22[1] & (ulong)puVar31) != ((ulong)puVar31 & (ulong)puVar34)))
              goto LAB_0160df94;
            } while ((undefined1 *)plVar22[2] != puVar34);
          }
          else {
            puVar31 = puVar34;
            if (puVar33 <= puVar34) {
              uVar14 = 0;
              if (puVar33 != (undefined1 *)0x0) {
                uVar14 = (ulong)puVar34 / (ulong)puVar33;
              }
              puVar31 = puVar34 + -(uVar14 * (long)puVar33);
            }
            plVar22 = *(long **)(*plVar4 + (long)puVar31 * 8);
            if (plVar22 == (long *)0x0) goto LAB_0160df94;
            do {
              plVar22 = (long *)*plVar22;
              if (plVar22 == (long *)0x0) goto LAB_0160df94;
              puVar20 = (undefined1 *)plVar22[1];
              if (puVar33 <= puVar20) {
                uVar14 = 0;
                if (puVar33 != (undefined1 *)0x0) {
                  uVar14 = (ulong)puVar20 / (ulong)puVar33;
                }
                puVar20 = puVar20 + -(uVar14 * (long)puVar33);
              }
              if (puVar20 != puVar31) goto LAB_0160df94;
            } while ((undefined1 *)plVar22[2] != puVar34);
          }
          local_1c0 = (long *)0x0;
          if (plVar23 != (long *)0x0) {
            FUN_020dd708(&puStack_1b8);
          }
        }
LAB_0160dc64:
        if (local_1d8 != (long *)0x0) {
          (**(code **)(*local_1d8 + 0x20))();
        }
        if (local_1d0 != (long *)0x0) {
          (**(code **)(*local_1d0 + 0x20))();
        }
        puVar15 = puVar15 + 1;
        lVar35 = lVar35 + 4;
      } while (puVar15 != puVar7);
    }
  }
  *(undefined1 *)(param_1 + 0x38) = 1;
LAB_0160e034:
  FUN_00db239c(&local_f8);
  FUN_00db239c(&local_b8);
  return;
}


