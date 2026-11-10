/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016113a0; name: FUN_016113a0
 */


void FUN_016113a0(long param_1,int *param_2,int *param_3)

{
  long *plVar1;
  long *plVar2;
  char *pcVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  ushort uVar7;
  int iVar8;
  long lVar9;
  undefined4 uVar10;
  ulong uVar11;
  long lVar12;
  byte *pbVar13;
  long *plVar14;
  long *plVar15;
  int *piVar16;
  ulong uVar17;
  undefined4 uVar18;
  ulong uVar19;
  ushort *puVar20;
  int *piVar21;
  undefined1 *puVar22;
  undefined4 uVar23;
  ulong uVar24;
  undefined1 *puVar25;
  undefined8 *puVar26;
  undefined1 *puVar27;
  undefined8 uVar28;
  byte *pbVar29;
  uint *puVar30;
  long lVar31;
  byte *pbVar32;
  byte *pbVar33;
  long *plVar34;
  float fVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined1 auVar40 [16];
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined1 local_c3;
  undefined1 local_c2;
  undefined1 local_c1;
  undefined1 local_c0;
  undefined1 local_bf;
  undefined1 local_be;
  undefined1 *local_b8;
  char *pcStack_b0;
  size_t local_a8;
  long *plStack_a0;
  undefined1 *local_98;
  char *pcStack_90;
  size_t local_88;
  long *local_80;
  
  FUN_01613b98();
  uVar11 = (ulong)*(ushort *)((long)param_2 + (4 - (long)*param_2));
  puVar4 = (uint *)((long)param_2 + uVar11);
  uVar19 = (ulong)*puVar4;
  puVar4 = (uint *)((long)puVar4 + uVar19);
  puVar30 = puVar4 + 1;
  uVar24 = (ulong)*puVar4;
  if (uVar24 != 0) {
    puVar4 = puVar30 + uVar24;
    plVar1 = (long *)(param_1 + 0x28);
    plVar2 = (long *)(param_1 + 0x58);
    lVar31 = (long)param_2 + uVar19 + uVar11 + 9;
    do {
      piVar21 = (int *)((long)puVar30 + (ulong)*puVar30);
      puVar20 = (ushort *)((long)piVar21 - (long)*piVar21);
      if ((*puVar20 < 5) || (uVar11 = (ulong)puVar20[2], uVar11 == 0)) {
        if (((*PTR_DAT_047d3e28 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3e28);
        }
        plVar34 = *(long **)(PTR_DAT_047d3e30 + 0x18);
        pbVar33 = *(byte **)PTR_DAT_047d3e30;
        pbVar29 = *(byte **)(PTR_DAT_047d3e30 + 8);
        if (plVar34 != (long *)0x0) {
          (**(code **)(*plVar34 + 0x18))(plVar34);
        }
LAB_01611494:
        lVar12 = -(long)*piVar21;
        if (*pbVar29 == 0) goto LAB_016117b0;
        if ((*(ushort *)((long)piVar21 + lVar12) < 7) ||
           (uVar11 = (ulong)((ushort *)((long)piVar21 + lVar12))[3], uVar11 == 0)) {
          lVar12 = 0;
        }
        else {
          puVar5 = (uint *)((long)piVar21 + uVar11);
          lVar12 = (long)puVar5 + (ulong)*puVar5;
        }
        pbVar32 = *(byte **)(param_1 + 0x30);
        if (pbVar32 == (byte *)0x0) {
LAB_016114fc:
          plVar14 = (long *)(**(code **)(**(long **)(param_1 + 0x60) + 0x10))
                                      (*(long **)(param_1 + 0x60),0x38,8);
          if (plVar14 == (long *)0x0) {
            (**(code **)(**(long **)(param_1 + 0x60) + 0xe8))();
          }
          uVar28 = *(undefined8 *)(param_1 + 0x60);
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar9 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar9 == 0) {
            plVar14[2] = (long)pbVar33;
            FUN_016125c4(plVar14 + 3,lVar12);
          }
          else {
            if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar28;
            *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
            plVar14[2] = (long)pbVar33;
            FUN_016125c4(plVar14 + 3,lVar12);
            *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
          }
          *plVar14 = 0;
          plVar14[1] = (long)pbVar33;
          fVar35 = (float)(*(long *)(param_1 + 0x80) + 1);
          if ((pbVar32 == (byte *)0x0) || (*(float *)(param_1 + 0x88) * (float)pbVar32 < fVar35)) {
            uVar11 = (ulong)(pbVar32 < (byte *)0x3 || ((ulong)pbVar32 & (ulong)(pbVar32 + -1)) != 0)
                     | (long)pbVar32 << 1;
            uVar19 = (ulong)(fVar35 / *(float *)(param_1 + 0x88));
            if (uVar19 <= uVar11) {
              uVar19 = uVar11;
            }
            if (uVar19 - 1 == 0) {
              uVar19 = 2;
            }
            else if ((uVar19 & uVar19 - 1) != 0) {
              uVar19 = std::__next_prime(uVar19);
            }
            uVar11 = *(ulong *)(param_1 + 0x30);
            if (uVar11 < uVar19) {
              uVar24 = uVar19;
LAB_016116dc:
              FUN_01613704(plVar1,uVar24);
            }
            else if (uVar19 < uVar11) {
              uVar24 = (ulong)((float)*(ulong *)(param_1 + 0x80) / *(float *)(param_1 + 0x88));
              if ((uVar11 < 3) ||
                 (uVar17 = uVar11 - (uVar11 >> 1 & 0x5555555555555555),
                 uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333),
                 1 < (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
                uVar24 = std::__next_prime(uVar24);
              }
              else if (1 < uVar24) {
                uVar24 = 1L << (-LZCOUNT(uVar24 - 1) & 0x3fU);
              }
              if (uVar24 <= uVar19) {
                uVar24 = uVar19;
              }
              if (uVar24 < uVar11) goto LAB_016116dc;
            }
            pbVar32 = *(byte **)(param_1 + 0x30);
            if (((ulong)pbVar32 & (ulong)(pbVar32 + -1)) == 0) {
              pbVar29 = (byte *)((ulong)(pbVar32 + -1) & (ulong)pbVar33);
            }
            else if (pbVar33 < pbVar32) {
              pbVar29 = pbVar33;
            }
            else {
              uVar11 = 0;
              if (pbVar32 != (byte *)0x0) {
                uVar11 = (ulong)pbVar33 / (ulong)pbVar32;
              }
              pbVar29 = pbVar33 + -(uVar11 * (long)pbVar32);
            }
          }
          plVar15 = *(long **)(*plVar1 + (long)pbVar29 * 8);
          if (plVar15 == (long *)0x0) {
            *plVar14 = *plVar2;
            *plVar2 = (long)plVar14;
            *(long **)(*plVar1 + (long)pbVar29 * 8) = plVar2;
            if (*plVar14 != 0) {
              pbVar33 = *(byte **)(*plVar14 + 8);
              if (((ulong)pbVar32 & (ulong)(pbVar32 + -1)) == 0) {
                pbVar33 = (byte *)((ulong)pbVar33 & (ulong)(pbVar32 + -1));
              }
              else if (pbVar32 <= pbVar33) {
                uVar11 = 0;
                if (pbVar32 != (byte *)0x0) {
                  uVar11 = (ulong)pbVar33 / (ulong)pbVar32;
                }
                pbVar33 = pbVar33 + -(uVar11 * (long)pbVar32);
              }
              plVar15 = (long *)(*plVar1 + (long)pbVar33 * 8);
              goto LAB_01611604;
            }
          }
          else {
            *plVar14 = *plVar15;
LAB_01611604:
            *plVar15 = (long)plVar14;
          }
          *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + 1;
        }
        else {
          pbVar13 = pbVar32 + -1;
          if (((ulong)pbVar32 & (ulong)pbVar13) == 0) {
            pbVar29 = (byte *)((ulong)pbVar13 & (ulong)pbVar33);
            plVar14 = *(long **)(*plVar1 + (long)pbVar29 * 8);
            if (plVar14 == (long *)0x0) goto LAB_016114fc;
            do {
              plVar14 = (long *)*plVar14;
              if ((plVar14 == (long *)0x0) ||
                 ((byte *)plVar14[1] != pbVar33 &&
                  (byte *)((ulong)plVar14[1] & (ulong)pbVar13) != pbVar29)) goto LAB_016114fc;
            } while ((byte *)plVar14[2] != pbVar33);
          }
          else {
            pbVar29 = pbVar33;
            if (pbVar32 <= pbVar33) {
              uVar11 = 0;
              if (pbVar32 != (byte *)0x0) {
                uVar11 = (ulong)pbVar33 / (ulong)pbVar32;
              }
              pbVar29 = pbVar33 + -(uVar11 * (long)pbVar32);
            }
            plVar14 = *(long **)(*plVar1 + (long)pbVar29 * 8);
            if (plVar14 == (long *)0x0) goto LAB_016114fc;
            do {
              plVar14 = (long *)*plVar14;
              if (plVar14 == (long *)0x0) goto LAB_016114fc;
              pbVar13 = (byte *)plVar14[1];
              if (pbVar13 != pbVar33) {
                if (pbVar32 <= pbVar13) {
                  uVar11 = 0;
                  if (pbVar32 != (byte *)0x0) {
                    uVar11 = (ulong)pbVar13 / (ulong)pbVar32;
                  }
                  pbVar13 = pbVar13 + -(uVar11 * (long)pbVar32);
                }
                if (pbVar13 != pbVar29) goto LAB_016114fc;
              }
            } while ((byte *)plVar14[2] != pbVar33);
          }
        }
      }
      else {
        uVar19 = (ulong)*(uint *)((long)piVar21 + uVar11);
        pbVar29 = (byte *)((long)((long)piVar21 + uVar11) + uVar19 + 4);
        bVar6 = *pbVar29;
        if (bVar6 != 0) {
          pbVar33 = &DAT_cbf29ce484222645;
          pbVar32 = (byte *)(lVar31 + uVar19 + uVar11 + (ulong)*puVar30);
          do {
            pbVar33 = (byte *)(((ulong)pbVar33 ^ (ulong)bVar6) * 0x100000001b3);
            bVar6 = *pbVar32;
            pbVar32 = pbVar32 + 1;
          } while (bVar6 != 0);
          plVar34 = (long *)0x0;
          goto LAB_01611494;
        }
        plVar34 = (long *)0x0;
        lVar12 = -(long)*piVar21;
LAB_016117b0:
        if ((*(ushort *)((long)piVar21 + lVar12) < 7) ||
           (uVar11 = (ulong)((ushort *)((long)piVar21 + lVar12))[3], uVar11 == 0)) {
          piVar21 = (int *)0x0;
        }
        else {
          puVar5 = (uint *)((long)piVar21 + uVar11);
          piVar21 = (int *)((long)puVar5 + (ulong)*puVar5);
        }
        puVar20 = (ushort *)((long)piVar21 - (long)*piVar21);
        uVar7 = *puVar20;
        if (uVar7 < 5) {
          uVar37 = 0;
          uVar36 = 0;
LAB_016118d4:
          uVar39 = 0;
          uVar38 = 0;
LAB_016118d8:
          uVar18 = 0;
          uVar10 = 4;
          uVar23 = 4;
        }
        else {
          uVar36 = 0;
          if ((ulong)puVar20[2] != 0) {
            uVar36 = *(undefined4 *)((long)piVar21 + (ulong)puVar20[2]);
          }
          if (uVar7 < 7) {
            uVar37 = 0;
            goto LAB_016118d4;
          }
          uVar37 = 0;
          if ((ulong)puVar20[3] != 0) {
            uVar37 = *(undefined4 *)((long)piVar21 + (ulong)puVar20[3]);
          }
          if (uVar7 < 9) goto LAB_016118d4;
          uVar38 = 0;
          if ((ulong)puVar20[4] != 0) {
            uVar38 = *(undefined4 *)((long)piVar21 + (ulong)puVar20[4]);
          }
          if (uVar7 < 0xb) {
            uVar39 = 0;
            goto LAB_016118d8;
          }
          uVar39 = 0;
          if ((ulong)puVar20[5] != 0) {
            uVar39 = *(undefined4 *)((long)piVar21 + (ulong)puVar20[5]);
          }
          if (uVar7 < 0xd) goto LAB_016118d8;
          if ((ulong)puVar20[6] == 0) {
            uVar23 = 4;
          }
          else {
            uVar23 = *(undefined4 *)((long)piVar21 + (ulong)puVar20[6]);
          }
          if (uVar7 < 0xf) {
            uVar18 = 0;
            uVar10 = 4;
          }
          else {
            if ((ulong)puVar20[7] == 0) {
              uVar10 = 4;
            }
            else {
              uVar10 = *(undefined4 *)((long)piVar21 + (ulong)puVar20[7]);
            }
            if ((uVar7 < 0x11) || ((ulong)puVar20[8] == 0)) {
              uVar18 = 0;
            }
            else {
              uVar18 = *(undefined4 *)((long)piVar21 + (ulong)puVar20[8]);
            }
          }
        }
        *(undefined4 *)(param_1 + 8) = uVar36;
        *(undefined4 *)(param_1 + 0xc) = uVar37;
        *(undefined4 *)(param_1 + 0x10) = uVar38;
        *(undefined4 *)(param_1 + 0x14) = uVar39;
        *(undefined4 *)(param_1 + 0x18) = uVar23;
        *(undefined4 *)(param_1 + 0x1c) = uVar10;
        *(undefined4 *)(param_1 + 0x20) = uVar18;
      }
      if (plVar34 != (long *)0x0) {
        (**(code **)(*plVar34 + 0x20))(plVar34);
      }
      puVar30 = puVar30 + 1;
      lVar31 = lVar31 + 4;
    } while (puVar30 != puVar4);
  }
  uVar11 = (ulong)*(ushort *)((long)param_3 + (4 - (long)*param_3));
  puVar4 = (uint *)((long)param_3 + uVar11);
  uVar19 = (ulong)*puVar4;
  puVar4 = (uint *)((long)puVar4 + uVar19);
  puVar30 = puVar4 + 1;
  uVar24 = (ulong)*puVar4;
  if (uVar24 == 0) {
    return;
  }
  puVar4 = puVar30 + uVar24;
  plVar1 = (long *)(param_1 + 0x1f0);
  plVar2 = (long *)(param_1 + 0x188);
  lVar31 = (long)param_3 + uVar19 + uVar11 + 9;
LAB_0161193c:
  uVar11 = (ulong)*puVar30;
  piVar21 = (int *)((long)puVar30 + uVar11);
  if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 7) ||
     (uVar19 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[3], uVar19 == 0)) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_98 = *(undefined1 **)PTR_DAT_047d3e30;
    pcStack_90 = *(char **)(PTR_DAT_047d3e30 + 8);
    local_88 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_80 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x18))();
    }
  }
  else {
    puVar5 = (uint *)((long)piVar21 + uVar19);
    uVar24 = (ulong)*puVar5;
    pcVar3 = (char *)((long)puVar5 + uVar24 + 4);
    local_88 = strlen(pcVar3);
    bVar6 = *(byte *)((long)puVar5 + uVar24 + 4);
    local_98 = &DAT_cbf29ce484222645;
    if (bVar6 != 0) {
      local_98 = &DAT_cbf29ce484222645;
      pbVar33 = (byte *)(lVar31 + uVar24 + uVar19 + uVar11);
      do {
        local_98 = (undefined1 *)(((ulong)local_98 ^ (ulong)bVar6) * 0x100000001b3);
        bVar6 = *pbVar33;
        pbVar33 = pbVar33 + 1;
      } while (bVar6 != 0);
    }
    local_80 = (long *)0x0;
    pcStack_90 = pcVar3;
  }
  if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 0xb) ||
     (uVar19 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[5], uVar19 == 0)) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_b8 = *(undefined1 **)PTR_DAT_047d3e30;
    pcStack_b0 = *(char **)(PTR_DAT_047d3e30 + 8);
    local_a8 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    plVar34 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    plStack_a0 = plVar34;
    if (plVar34 != (long *)0x0) {
      (**(code **)(*plVar34 + 0x18))(plVar34);
    }
  }
  else {
    puVar5 = (uint *)((long)piVar21 + uVar19);
    uVar24 = (ulong)*puVar5;
    pcVar3 = (char *)((long)puVar5 + uVar24 + 4);
    local_a8 = strlen(pcVar3);
    bVar6 = *(byte *)((long)puVar5 + uVar24 + 4);
    local_b8 = &DAT_cbf29ce484222645;
    if (bVar6 != 0) {
      lVar12 = uVar11 + uVar19 + uVar24;
      local_b8 = &DAT_cbf29ce484222645;
      do {
        local_b8 = (undefined1 *)(((ulong)local_b8 ^ (ulong)bVar6) * 0x100000001b3);
        bVar6 = *(byte *)(lVar31 + lVar12);
        lVar12 = lVar12 + 1;
      } while (bVar6 != 0);
    }
    plVar34 = (long *)0x0;
    plStack_a0 = (long *)0x0;
    pcStack_b0 = pcVar3;
  }
  if (*(ushort *)((long)piVar21 - (long)*piVar21) < 0xd) {
    piVar16 = (int *)0x0;
  }
  else {
    uVar11 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[6];
    piVar16 = (int *)0x0;
    if (uVar11 != 0) {
      puVar5 = (uint *)((long)piVar21 + uVar11);
      piVar16 = (int *)((long)puVar5 + (ulong)*puVar5);
    }
  }
  puVar20 = (ushort *)((long)piVar16 - (long)*piVar16);
  uVar7 = *puVar20;
  if (uVar7 < 5) {
    uStack_dc = 0;
    local_e0 = 0;
LAB_01611f6c:
    uStack_d4 = 0;
    local_d8 = 0;
LAB_01611f70:
    local_c8 = 0;
    uStack_cc = 4;
    local_d0 = 4;
  }
  else {
    local_e0 = 0;
    if ((ulong)puVar20[2] != 0) {
      local_e0 = *(undefined4 *)((long)piVar16 + (ulong)puVar20[2]);
    }
    if (uVar7 < 7) {
      uStack_dc = 0;
      goto LAB_01611f6c;
    }
    uStack_dc = 0;
    if ((ulong)puVar20[3] != 0) {
      uStack_dc = *(undefined4 *)((long)piVar16 + (ulong)puVar20[3]);
    }
    if (uVar7 < 9) goto LAB_01611f6c;
    local_d8 = 0;
    if ((ulong)puVar20[4] != 0) {
      local_d8 = *(undefined4 *)((long)piVar16 + (ulong)puVar20[4]);
    }
    if (uVar7 < 0xb) {
      uStack_d4 = 0;
      goto LAB_01611f70;
    }
    uStack_d4 = 0;
    if ((ulong)puVar20[5] != 0) {
      uStack_d4 = *(undefined4 *)((long)piVar16 + (ulong)puVar20[5]);
    }
    if (uVar7 < 0x15) goto LAB_01611f70;
    if ((ulong)puVar20[10] == 0) {
      local_d0 = 4;
    }
    else {
      local_d0 = *(undefined4 *)((long)piVar16 + (ulong)puVar20[10]);
    }
    if (uVar7 < 0x17) {
      local_c8 = 0;
      uStack_cc = 4;
    }
    else {
      if ((ulong)puVar20[0xb] == 0) {
        uStack_cc = 4;
      }
      else {
        uStack_cc = *(undefined4 *)((long)piVar16 + (ulong)puVar20[0xb]);
      }
      if (uVar7 < 0x1f) {
        local_c8 = 0;
      }
      else {
        local_c8 = 0;
        if ((ulong)puVar20[0xf] != 0) {
          local_c8 = *(undefined4 *)((long)piVar16 + (ulong)puVar20[0xf]);
        }
      }
    }
  }
  if (*(ushort *)((long)piVar16 - (long)*piVar16) < 0xd) {
    local_c4 = false;
  }
  else {
    uVar11 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[6];
    local_c4 = false;
    if (uVar11 != 0) {
      local_c4 = *(char *)((long)piVar16 + uVar11) != '\0';
    }
  }
  if (*(ushort *)((long)piVar16 - (long)*piVar16) < 0xf) {
    local_c3 = false;
  }
  else {
    uVar11 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[7];
    local_c3 = false;
    if (uVar11 != 0) {
      local_c3 = *(char *)((long)piVar16 + uVar11) != '\0';
    }
  }
  if (*(ushort *)((long)piVar16 - (long)*piVar16) < 0x11) {
    local_c2 = false;
  }
  else {
    uVar11 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[8];
    local_c2 = false;
    if (uVar11 != 0) {
      local_c2 = *(char *)((long)piVar16 + uVar11) != '\0';
    }
  }
  if (*(ushort *)((long)piVar16 - (long)*piVar16) < 0x13) {
    local_c1 = false;
  }
  else {
    uVar11 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[9];
    local_c1 = false;
    if (uVar11 != 0) {
      local_c1 = *(char *)((long)piVar16 + uVar11) != '\0';
    }
  }
  if (*(ushort *)((long)piVar16 - (long)*piVar16) < 0x19) {
    local_c0 = false;
  }
  else {
    uVar11 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[0xc];
    local_c0 = false;
    if (uVar11 != 0) {
      local_c0 = *(char *)((long)piVar16 + uVar11) != '\0';
    }
  }
  if (*(ushort *)((long)piVar16 - (long)*piVar16) < 0x1b) {
    local_bf = false;
  }
  else {
    uVar11 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[0xd];
    local_bf = false;
    if (uVar11 != 0) {
      local_bf = *(char *)((long)piVar16 + uVar11) != '\0';
    }
  }
  if ((*(ushort *)((long)piVar16 - (long)*piVar16) < 0x1d) ||
     (uVar11 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[0xe], uVar11 == 0)) {
    local_be = false;
  }
  else {
    local_be = *(char *)((long)piVar16 + uVar11) != '\0';
  }
  puVar20 = (ushort *)((long)piVar21 - (long)*piVar21);
  uVar7 = *puVar20;
  if (uVar7 < 5) {
LAB_01611ca4:
    plVar14 = (long *)(param_1 + 0x90);
    goto LAB_01611ca8;
  }
  if ((ulong)puVar20[2] == 0) {
LAB_01611c94:
    if ((uVar7 < 9) || ((ulong)puVar20[4] == 0)) goto LAB_01611ca4;
    iVar8 = *(int *)((long)piVar21 + (ulong)puVar20[4]);
    if (iVar8 == 1) {
      plVar14 = (long *)(param_1 + 0xb8);
    }
    else {
      if (iVar8 != 2) {
        if (iVar8 != 0) goto LAB_01611cb4;
        goto LAB_01611ca4;
      }
      plVar14 = (long *)(param_1 + 0x120);
    }
    goto LAB_01611d14;
  }
  iVar8 = *(int *)((long)piVar21 + (ulong)puVar20[2]);
  if (iVar8 == 1) {
    if ((uVar7 < 9) || ((ulong)puVar20[4] == 0)) {
LAB_01611cf0:
      FUN_016126f8(param_1,&local_98,&local_e0);
    }
    else {
      iVar8 = *(int *)((long)piVar21 + (ulong)puVar20[4]);
      if (iVar8 == 1) {
        puVar22 = *(undefined1 **)(param_1 + 400);
        if (puVar22 != (undefined1 *)0x0) {
          uVar11 = (long)puVar22 - ((ulong)puVar22 >> 1 & 0x5555555555555555);
          uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
          uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar11 < 2) {
            puVar25 = (undefined1 *)((ulong)(puVar22 + -1) & (ulong)local_98);
          }
          else if (local_98 < puVar22) {
            puVar25 = local_98;
          }
          else {
            uVar19 = 0;
            if (puVar22 != (undefined1 *)0x0) {
              uVar19 = (ulong)local_98 / (ulong)puVar22;
            }
            puVar25 = local_98 + -(uVar19 * (long)puVar22);
          }
          plVar14 = *(long **)(*plVar2 + (long)puVar25 * 8);
          if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
            if (uVar11 < 2) {
              do {
                if ((undefined1 *)plVar14[1] == local_98) {
                  if ((undefined1 *)plVar14[2] == local_98) goto LAB_01611de0;
                }
                else if ((undefined1 *)((ulong)plVar14[1] & (ulong)(puVar22 + -1)) != puVar25)
                break;
                plVar14 = (long *)*plVar14;
              } while (plVar14 != (long *)0x0);
            }
            else {
              do {
                puVar27 = (undefined1 *)plVar14[1];
                if (puVar27 == local_98) {
                  if ((undefined1 *)plVar14[2] == local_98) goto LAB_01611de0;
                }
                else {
                  if (puVar22 <= puVar27) {
                    uVar11 = 0;
                    if (puVar22 != (undefined1 *)0x0) {
                      uVar11 = (ulong)puVar27 / (ulong)puVar22;
                    }
                    puVar27 = puVar27 + -(uVar11 * (long)puVar22);
                  }
                  if (puVar27 != puVar25) break;
                }
                plVar14 = (long *)*plVar14;
              } while (plVar14 != (long *)0x0);
            }
          }
        }
        auVar40 = FUN_01612f88(plVar2,&local_98,param_1);
        if ((auVar40._8_8_ & 0xff) != 0) {
          plVar14 = (long *)(auVar40._0_8_ + 0x40);
          goto LAB_01611d14;
        }
      }
      else {
        if (iVar8 == 2) {
          puVar22 = *(undefined1 **)(param_1 + 400);
          if (puVar22 != (undefined1 *)0x0) {
            uVar11 = (long)puVar22 - ((ulong)puVar22 >> 1 & 0x5555555555555555);
            uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
            uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar11 < 2) {
              puVar25 = (undefined1 *)((ulong)(puVar22 + -1) & (ulong)local_98);
            }
            else if (local_98 < puVar22) {
              puVar25 = local_98;
            }
            else {
              uVar19 = 0;
              if (puVar22 != (undefined1 *)0x0) {
                uVar19 = (ulong)local_98 / (ulong)puVar22;
              }
              puVar25 = local_98 + -(uVar19 * (long)puVar22);
            }
            puVar26 = *(undefined8 **)(*plVar2 + (long)puVar25 * 8);
            if ((puVar26 != (undefined8 *)0x0) &&
               (plVar14 = (long *)*puVar26, plVar14 != (long *)0x0)) {
              if (uVar11 < 2) {
                do {
                  if ((undefined1 *)plVar14[1] == local_98) {
                    if ((undefined1 *)plVar14[2] == local_98) goto LAB_01612088;
                  }
                  else if ((undefined1 *)((ulong)plVar14[1] & (ulong)(puVar22 + -1)) != puVar25)
                  break;
                  plVar14 = (long *)*plVar14;
                } while (plVar14 != (long *)0x0);
              }
              else {
                do {
                  puVar27 = (undefined1 *)plVar14[1];
                  if (puVar27 == local_98) {
                    if ((undefined1 *)plVar14[2] == local_98) goto LAB_01612088;
                  }
                  else {
                    if (puVar22 <= puVar27) {
                      uVar11 = 0;
                      if (puVar22 != (undefined1 *)0x0) {
                        uVar11 = (ulong)puVar27 / (ulong)puVar22;
                      }
                      puVar27 = puVar27 + -(uVar11 * (long)puVar22);
                    }
                    if (puVar27 != puVar25) break;
                  }
                  plVar14 = (long *)*plVar14;
                } while (plVar14 != (long *)0x0);
              }
            }
          }
          plVar14 = plVar2;
          goto LAB_01612284;
        }
        if (iVar8 == 0) goto LAB_01611cf0;
      }
    }
  }
  else if (iVar8 == 2) {
    if ((uVar7 < 9) || ((ulong)puVar20[4] == 0)) {
LAB_01611e00:
      puVar22 = *(undefined1 **)(param_1 + 0x1f8);
      if (puVar22 != (undefined1 *)0x0) {
        uVar11 = (long)puVar22 - ((ulong)puVar22 >> 1 & 0x5555555555555555);
        uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
        uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar11 < 2) {
          puVar25 = (undefined1 *)((ulong)(puVar22 + -1) & (ulong)local_98);
        }
        else if (local_98 < puVar22) {
          puVar25 = local_98;
        }
        else {
          uVar19 = 0;
          if (puVar22 != (undefined1 *)0x0) {
            uVar19 = (ulong)local_98 / (ulong)puVar22;
          }
          puVar25 = local_98 + -(uVar19 * (long)puVar22);
        }
        plVar14 = *(long **)(*plVar1 + (long)puVar25 * 8);
        if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
          if (uVar11 < 2) {
            do {
              if ((undefined1 *)plVar14[1] == local_98) {
                if ((undefined1 *)plVar14[2] == local_98) goto LAB_01611eb0;
              }
              else if ((undefined1 *)((ulong)plVar14[1] & (ulong)(puVar22 + -1)) != puVar25) break;
              plVar14 = (long *)*plVar14;
            } while (plVar14 != (long *)0x0);
          }
          else {
            do {
              puVar27 = (undefined1 *)plVar14[1];
              if (puVar27 == local_98) {
                if ((undefined1 *)plVar14[2] == local_98) goto LAB_01611eb0;
              }
              else {
                if (puVar22 <= puVar27) {
                  uVar11 = 0;
                  if (puVar22 != (undefined1 *)0x0) {
                    uVar11 = (ulong)puVar27 / (ulong)puVar22;
                  }
                  puVar27 = puVar27 + -(uVar11 * (long)puVar22);
                }
                if (puVar27 != puVar25) break;
              }
              plVar14 = (long *)*plVar14;
            } while (plVar14 != (long *)0x0);
          }
        }
      }
      auVar40 = FUN_01612f88(plVar1,&local_98,param_1);
      if ((auVar40._8_8_ & 0xff) != 0) {
        plVar14 = (long *)(auVar40._0_8_ + 0x18);
        goto LAB_01611ca8;
      }
    }
    else {
      iVar8 = *(int *)((long)piVar21 + (ulong)puVar20[4]);
      if (iVar8 == 2) {
        puVar22 = *(undefined1 **)(param_1 + 0x1f8);
        if (puVar22 != (undefined1 *)0x0) {
          uVar11 = (long)puVar22 - ((ulong)puVar22 >> 1 & 0x5555555555555555);
          uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
          uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar11 < 2) {
            puVar25 = (undefined1 *)((ulong)(puVar22 + -1) & (ulong)local_98);
          }
          else if (local_98 < puVar22) {
            puVar25 = local_98;
          }
          else {
            uVar19 = 0;
            if (puVar22 != (undefined1 *)0x0) {
              uVar19 = (ulong)local_98 / (ulong)puVar22;
            }
            puVar25 = local_98 + -(uVar19 * (long)puVar22);
          }
          plVar14 = *(long **)(*plVar1 + (long)puVar25 * 8);
          if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
            if (uVar11 < 2) {
              do {
                if ((undefined1 *)plVar14[1] == local_98) {
                  if ((undefined1 *)plVar14[2] == local_98) goto LAB_01612088;
                }
                else if ((undefined1 *)((ulong)plVar14[1] & (ulong)(puVar22 + -1)) != puVar25)
                break;
                plVar14 = (long *)*plVar14;
              } while (plVar14 != (long *)0x0);
            }
            else {
              do {
                puVar27 = (undefined1 *)plVar14[1];
                if (puVar27 == local_98) {
                  if ((undefined1 *)plVar14[2] == local_98) goto LAB_01612088;
                }
                else {
                  if (puVar22 <= puVar27) {
                    uVar11 = 0;
                    if (puVar22 != (undefined1 *)0x0) {
                      uVar11 = (ulong)puVar27 / (ulong)puVar22;
                    }
                    puVar27 = puVar27 + -(uVar11 * (long)puVar22);
                  }
                  if (puVar27 != puVar25) break;
                }
                plVar14 = (long *)*plVar14;
              } while (plVar14 != (long *)0x0);
            }
          }
        }
        plVar14 = plVar1;
LAB_01612284:
        auVar40 = FUN_01612f88(plVar14,&local_98,param_1);
        if ((auVar40._8_8_ & 0xff) != 0) {
          plVar14 = (long *)(auVar40._0_8_ + 0xa8);
          goto LAB_01611d14;
        }
      }
      else if (iVar8 == 1) {
        FUN_01613a4c(param_1,&local_98,&local_b8,&local_e0);
      }
      else if (iVar8 == 0) goto LAB_01611e00;
    }
  }
  else if (iVar8 == 0) goto LAB_01611c94;
  goto LAB_01611cb4;
LAB_01611de0:
  plVar14 = plVar14 + 8;
  goto LAB_01611d14;
LAB_01612088:
  plVar14 = plVar14 + 0x15;
LAB_01611d14:
  FUN_01612840(plVar14,&local_b8,&local_e0);
LAB_01611cb4:
  if (plVar34 != (long *)0x0) {
    (**(code **)(*plVar34 + 0x20))(plVar34);
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  puVar30 = puVar30 + 1;
  lVar31 = lVar31 + 4;
  if (puVar30 == puVar4) {
    return;
  }
  goto LAB_0161193c;
LAB_01611eb0:
  plVar14 = plVar14 + 3;
LAB_01611ca8:
  memcpy(plVar14,&local_e0,0x23);
  goto LAB_01611cb4;
}


