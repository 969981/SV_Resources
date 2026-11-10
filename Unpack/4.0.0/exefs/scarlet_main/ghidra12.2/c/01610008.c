/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01610008; name: FUN_01610008
 */


void FUN_01610008(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  ushort uVar4;
  char *pcVar5;
  int iVar6;
  uint *puVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  undefined1 *puVar11;
  long *plVar12;
  long *plVar13;
  byte *pbVar14;
  undefined4 uVar15;
  ulong uVar16;
  ulong uVar17;
  ushort *puVar18;
  uint uVar19;
  int *piVar20;
  int *piVar21;
  int param3;
  undefined *puVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  long *plVar25;
  float fVar26;
  float fVar27;
  long *local_118;
  undefined1 *local_110;
  undefined8 uStack_108;
  long *local_100;
  undefined8 local_f8;
  char *local_f0;
  undefined8 uStack_e8;
  long *local_e0;
  undefined1 auStack_d8 [24];
  byte local_c0 [16];
  char *local_b0;
  byte *local_a8;
  size_t local_a0;
  long *local_98;
  int *local_90;
  int *local_88;
  int local_68;
  
  puVar22 = PTR_DAT_047d5608;
  fVar27 = 0.0;
  piVar10 = (int *)param_2[1];
  fVar26 = 0.0;
  if (piVar10 != (int *)0x0) {
    fVar26 = 0.0;
    if (6 < *(ushort *)((long)piVar10 - (long)*piVar10)) {
      uVar16 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[3];
      fVar26 = 0.0;
      if (uVar16 != 0) {
        puVar7 = (uint *)((long)piVar10 + uVar16);
        puVar7 = (uint *)((long)puVar7 + (ulong)*puVar7);
        local_b0 = "terrainGridSize";
        puVar7 = bsearch(&local_b0,puVar7 + 1,(ulong)*puVar7,4,(__compar_fn_t)PTR_LAB_047d5600);
        if (puVar7 == (uint *)0x0) {
          fVar26 = 0.0;
        }
        else {
          piVar10 = (int *)*param_2;
          fVar26 = 0.0;
          if (piVar10 != (int *)0x0) {
            piVar21 = (int *)((long)puVar7 + (ulong)*puVar7);
            puVar18 = (ushort *)((long)piVar21 - (long)*piVar21);
            uVar4 = *puVar18;
            if (uVar4 < 7) {
              piVar20 = (int *)0x0;
            }
            else {
              piVar20 = (int *)0x0;
              if ((ulong)puVar18[3] != 0) {
                puVar7 = (uint *)((long)piVar21 + (ulong)puVar18[3]);
                piVar20 = (int *)((long)puVar7 + (ulong)*puVar7);
              }
            }
            if ((*(ushort *)((long)piVar20 - (long)*piVar20) < 5) ||
               (uVar16 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[2], uVar16 == 0)) {
              uVar16 = 0;
            }
            else {
              uVar16 = (long)*(char *)((long)piVar20 + uVar16) & 0xffffffff;
            }
            if (*(long *)(puVar22 + uVar16 * 8) == 4) {
              fVar26 = 0.0;
              if (uVar4 < 0xb) {
                uVar19 = 0;
              }
              else {
                uVar19 = 0;
                if ((ulong)puVar18[5] != 0) {
                  uVar19 = (uint)*(ushort *)((long)piVar21 + (ulong)puVar18[5]);
                }
                if ((0xe < uVar4) && ((ulong)puVar18[7] != 0)) {
                  fVar26 = (float)*(double *)((long)piVar21 + (ulong)puVar18[7]);
                }
              }
              if ((uVar19 < *(ushort *)((long)piVar10 - (long)*piVar10)) &&
                 (uVar16 = (ulong)*(ushort *)(((long)piVar10 - (long)*piVar10) + (ulong)uVar19),
                 uVar16 != 0)) {
                fVar26 = *(float *)((long)piVar10 + uVar16);
              }
            }
            else {
              fVar26 = 0.0;
              if (0xe < uVar4) {
                fVar26 = 0.0;
                if ((ulong)puVar18[7] != 0) {
                  fVar26 = (float)*(double *)((long)piVar21 + (ulong)puVar18[7]);
                }
              }
            }
          }
        }
      }
    }
  }
  *(float *)(param_1 + 0x298) = fVar26;
  piVar10 = (int *)param_2[1];
  fVar26 = 0.0;
  if (piVar10 != (int *)0x0) {
    fVar26 = 0.0;
    if (6 < *(ushort *)((long)piVar10 - (long)*piVar10)) {
      uVar16 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[3];
      fVar26 = 0.0;
      if (uVar16 != 0) {
        puVar7 = (uint *)((long)piVar10 + uVar16);
        puVar7 = (uint *)((long)puVar7 + (ulong)*puVar7);
        local_b0 = "terrainSearchRadius";
        puVar7 = bsearch(&local_b0,puVar7 + 1,(ulong)*puVar7,4,(__compar_fn_t)PTR_LAB_047d5600);
        if (puVar7 == (uint *)0x0) {
          fVar26 = 0.0;
        }
        else {
          piVar10 = (int *)*param_2;
          fVar26 = 0.0;
          if (piVar10 != (int *)0x0) {
            piVar21 = (int *)((long)puVar7 + (ulong)*puVar7);
            puVar18 = (ushort *)((long)piVar21 - (long)*piVar21);
            uVar4 = *puVar18;
            if (uVar4 < 7) {
              piVar20 = (int *)0x0;
            }
            else {
              piVar20 = (int *)0x0;
              if ((ulong)puVar18[3] != 0) {
                puVar7 = (uint *)((long)piVar21 + (ulong)puVar18[3]);
                piVar20 = (int *)((long)puVar7 + (ulong)*puVar7);
              }
            }
            if ((*(ushort *)((long)piVar20 - (long)*piVar20) < 5) ||
               (uVar16 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[2], uVar16 == 0)) {
              uVar16 = 0;
            }
            else {
              uVar16 = (long)*(char *)((long)piVar20 + uVar16) & 0xffffffff;
            }
            if (*(long *)(puVar22 + uVar16 * 8) == 4) {
              fVar26 = 0.0;
              if (uVar4 < 0xb) {
                uVar19 = 0;
              }
              else {
                uVar19 = 0;
                if ((ulong)puVar18[5] != 0) {
                  uVar19 = (uint)*(ushort *)((long)piVar21 + (ulong)puVar18[5]);
                }
                if ((0xe < uVar4) && ((ulong)puVar18[7] != 0)) {
                  fVar26 = (float)*(double *)((long)piVar21 + (ulong)puVar18[7]);
                }
              }
              if ((uVar19 < *(ushort *)((long)piVar10 - (long)*piVar10)) &&
                 (uVar16 = (ulong)*(ushort *)(((long)piVar10 - (long)*piVar10) + (ulong)uVar19),
                 uVar16 != 0)) {
                fVar26 = *(float *)((long)piVar10 + uVar16);
              }
            }
            else {
              fVar26 = 0.0;
              if (0xe < uVar4) {
                fVar26 = 0.0;
                if ((ulong)puVar18[7] != 0) {
                  fVar26 = (float)*(double *)((long)piVar21 + (ulong)puVar18[7]);
                }
              }
            }
          }
        }
      }
    }
  }
  *(float *)(param_1 + 0x29c) = fVar26;
  piVar10 = (int *)param_2[1];
  if (((piVar10 != (int *)0x0) && (6 < *(ushort *)((long)piVar10 - (long)*piVar10))) &&
     (uVar16 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[3], uVar16 != 0)) {
    puVar7 = (uint *)((long)piVar10 + uVar16);
    puVar7 = (uint *)((long)puVar7 + (ulong)*puVar7);
    local_b0 = "terrainUnloadRadius";
    puVar7 = bsearch(&local_b0,puVar7 + 1,(ulong)*puVar7,4,(__compar_fn_t)PTR_LAB_047d5600);
    if ((puVar7 != (uint *)0x0) && (piVar10 = (int *)*param_2, piVar10 != (int *)0x0)) {
      piVar21 = (int *)((long)puVar7 + (ulong)*puVar7);
      puVar18 = (ushort *)((long)piVar21 - (long)*piVar21);
      uVar4 = *puVar18;
      if (uVar4 < 7) {
        piVar20 = (int *)0x0;
      }
      else {
        piVar20 = (int *)0x0;
        if ((ulong)puVar18[3] != 0) {
          puVar7 = (uint *)((long)piVar21 + (ulong)puVar18[3]);
          piVar20 = (int *)((long)puVar7 + (ulong)*puVar7);
        }
      }
      if ((*(ushort *)((long)piVar20 - (long)*piVar20) < 5) ||
         (uVar16 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[2], uVar16 == 0)) {
        uVar16 = 0;
      }
      else {
        uVar16 = (long)*(char *)((long)piVar20 + uVar16) & 0xffffffff;
      }
      if (*(long *)(puVar22 + uVar16 * 8) == 4) {
        fVar27 = 0.0;
        if (uVar4 < 0xb) {
          uVar19 = 0;
        }
        else {
          uVar19 = 0;
          if ((ulong)puVar18[5] != 0) {
            uVar19 = (uint)*(ushort *)((long)piVar21 + (ulong)puVar18[5]);
          }
          if ((0xe < uVar4) && ((ulong)puVar18[7] != 0)) {
            fVar27 = (float)*(double *)((long)piVar21 + (ulong)puVar18[7]);
          }
        }
        if ((uVar19 < *(ushort *)((long)piVar10 - (long)*piVar10)) &&
           (uVar16 = (ulong)*(ushort *)(((long)piVar10 - (long)*piVar10) + (ulong)uVar19),
           uVar16 != 0)) {
          fVar27 = *(float *)((long)piVar10 + uVar16);
        }
      }
      else if ((0xe < uVar4) && ((ulong)puVar18[7] != 0)) {
        fVar27 = (float)*(double *)((long)piVar21 + (ulong)puVar18[7]);
      }
    }
  }
  *(float *)(param_1 + 0x2a0) = fVar27;
  piVar10 = (int *)param_2[1];
  if ((piVar10 == (int *)0x0) || (*(ushort *)((long)piVar10 - (long)*piVar10) < 7))
  goto LAB_01610ca4;
  uVar16 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[3];
  uVar15 = 0;
  if (uVar16 != 0) {
    puVar7 = (uint *)((long)piVar10 + uVar16);
    puVar7 = (uint *)((long)puVar7 + (ulong)*puVar7);
    local_b0 = "terrainMaxUpdateCount";
    puVar7 = bsearch(&local_b0,puVar7 + 1,(ulong)*puVar7,4,(__compar_fn_t)PTR_LAB_047d5600);
    if ((puVar7 != (uint *)0x0) && (piVar10 = (int *)*param_2, piVar10 != (int *)0x0)) {
      piVar21 = (int *)((long)puVar7 + (ulong)*puVar7);
      puVar18 = (ushort *)((long)piVar21 - (long)*piVar21);
      uVar4 = *puVar18;
      if (uVar4 < 7) {
        piVar20 = (int *)0x0;
      }
      else {
        piVar20 = (int *)0x0;
        if ((ulong)puVar18[3] != 0) {
          puVar7 = (uint *)((long)piVar21 + (ulong)puVar18[3]);
          piVar20 = (int *)((long)puVar7 + (ulong)*puVar7);
        }
      }
      if ((*(ushort *)((long)piVar20 - (long)*piVar20) < 5) ||
         (uVar16 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[2], uVar16 == 0)) {
        uVar16 = 0;
      }
      else {
        uVar16 = (long)*(char *)((long)piVar20 + uVar16) & 0xffffffff;
      }
      if (*(long *)(puVar22 + uVar16 * 8) == 4) {
        if (uVar4 < 0xb) {
          uVar19 = 0;
LAB_01610af0:
          uVar15 = 0;
        }
        else {
          uVar19 = 0;
          if ((ulong)puVar18[5] != 0) {
            uVar19 = (uint)*(ushort *)((long)piVar21 + (ulong)puVar18[5]);
          }
          if ((uVar4 < 0xd) || ((ulong)puVar18[6] == 0)) goto LAB_01610af0;
          uVar15 = *(undefined4 *)((long)piVar21 + (ulong)puVar18[6]);
        }
        if ((uVar19 < *(ushort *)((long)piVar10 - (long)*piVar10)) &&
           (uVar16 = (ulong)*(ushort *)(((long)piVar10 - (long)*piVar10) + (ulong)uVar19),
           uVar16 != 0)) {
          uVar15 = *(undefined4 *)((long)piVar10 + uVar16);
        }
        goto LAB_0161048c;
      }
      if ((0xc < uVar4) && ((ulong)puVar18[6] != 0)) {
        uVar15 = *(undefined4 *)((long)piVar21 + (ulong)puVar18[6]);
        goto LAB_0161048c;
      }
    }
LAB_01610ca4:
    uVar15 = 0;
  }
LAB_0161048c:
  *(undefined4 *)(param_1 + 0x2a4) = uVar15;
  local_b0 = (char *)0x1b27ede1cefae4bf;
  local_a8 = (byte *)0x3c8c03b;
  local_a0 = 0xe;
  local_98 = (long *)0x0;
  FUN_00d996a8(&local_90,param_2,&local_b0);
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (local_88 == (int *)0x0) {
    return;
  }
  if (*(ushort *)((long)local_88 - (long)*local_88) < 7) {
    return;
  }
  uVar16 = (ulong)((ushort *)((long)local_88 - (long)*local_88))[3];
  if (uVar16 == 0) {
    return;
  }
  puVar7 = (uint *)((long)local_88 + uVar16);
  puVar7 = (uint *)((long)puVar7 + (ulong)*puVar7);
  local_b0 = "count";
  puVar7 = bsearch(&local_b0,puVar7 + 1,(ulong)*puVar7,4,(__compar_fn_t)PTR_LAB_047d5600);
  if (puVar7 == (uint *)0x0) {
    return;
  }
  if (local_90 == (int *)0x0) {
    return;
  }
  piVar10 = (int *)((long)puVar7 + (ulong)*puVar7);
  puVar18 = (ushort *)((long)piVar10 - (long)*piVar10);
  uVar4 = *puVar18;
  if (uVar4 < 7) {
    piVar21 = (int *)0x0;
  }
  else {
    piVar21 = (int *)0x0;
    if ((ulong)puVar18[3] != 0) {
      puVar7 = (uint *)((long)piVar10 + (ulong)puVar18[3]);
      piVar21 = (int *)((long)puVar7 + (ulong)*puVar7);
    }
  }
  if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 5) ||
     (uVar16 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[2], uVar16 == 0)) {
    uVar16 = 0;
  }
  else {
    uVar16 = (long)*(char *)((long)piVar21 + uVar16) & 0xffffffff;
  }
  if (*(long *)(puVar22 + uVar16 * 8) != 4) {
    if (uVar4 < 0xd) {
      return;
    }
    if ((ulong)puVar18[6] == 0) {
      return;
    }
    local_68 = *(int *)((long)piVar10 + (ulong)puVar18[6]);
    goto LAB_016105dc;
  }
  if (uVar4 < 0xb) {
    uVar19 = 0;
LAB_01610afc:
    local_68 = 0;
  }
  else {
    uVar19 = 0;
    if ((ulong)puVar18[5] != 0) {
      uVar19 = (uint)*(ushort *)((long)piVar10 + (ulong)puVar18[5]);
    }
    if ((uVar4 < 0xd) || ((ulong)puVar18[6] == 0)) goto LAB_01610afc;
    local_68 = *(int *)((long)piVar10 + (ulong)puVar18[6]);
  }
  if ((uVar19 < *(ushort *)((long)local_90 - (long)*local_90)) &&
     (uVar16 = (ulong)*(ushort *)(((long)local_90 - (long)*local_90) + (ulong)uVar19), uVar16 != 0))
  {
    local_68 = *(int *)((long)local_90 + uVar16);
  }
LAB_016105dc:
  if (0 < local_68) {
    param3 = 0;
    plVar1 = (long *)(param_1 + 0x230);
    plVar2 = (long *)(param_1 + 0x260);
    do {
      snprintf((char *)local_c0,0x10,"value%d",param3);
      local_a0 = strlen((char *)local_c0);
      local_b0 = &DAT_cbf29ce484222645;
      if (local_c0[0] != 0) {
        local_b0 = &DAT_cbf29ce484222645;
        pbVar14 = (byte *)((ulong)local_c0 | 1);
        bVar3 = local_c0[0];
        do {
          local_b0 = (char *)(((ulong)local_b0 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar14;
          pbVar14 = pbVar14 + 1;
        } while (bVar3 != 0);
      }
      local_a8 = local_c0;
      local_98 = (long *)0x0;
      FUN_00d996a8(auStack_d8,&local_90,&local_b0);
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x20))();
      }
      local_e0 = (long *)0x0;
      local_f8 = 0x96a5c6b6c72212e1;
      local_f0 = "detailLayer";
      uStack_e8 = 0xb;
      FUN_00cee868(&local_b0,auStack_d8,&local_f8);
      if (local_e0 != (long *)0x0) {
        (**(code **)(*local_e0 + 0x20))();
      }
      local_100 = (long *)0x0;
      local_118 = (long *)&DAT_33adc5b6162705a6;
      local_110 = &DAT_03c1dc5b;
      uStack_108 = 4;
      FUN_00cee868(&local_f8,auStack_d8,&local_118);
      if (local_100 != (long *)0x0) {
        (**(code **)(*local_100 + 0x20))();
      }
      if (local_a8 == (byte *)0x0) {
        if (((*PTR_DAT_047d3e28 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3e28);
        }
        puVar23 = *(undefined1 **)PTR_DAT_047d3e30;
        plVar25 = *(long **)(PTR_DAT_047d3e30 + 0x18);
        if (plVar25 != (long *)0x0) {
          (**(code **)(*plVar25 + 0x18))(plVar25);
        }
      }
      else {
        bVar3 = *local_a8;
        if (bVar3 == 0) {
          plVar25 = (long *)0x0;
          puVar23 = &DAT_cbf29ce484222645;
        }
        else {
          puVar23 = &DAT_cbf29ce484222645;
          pbVar14 = local_a8;
          do {
            pbVar14 = pbVar14 + 1;
            puVar23 = (undefined1 *)(((ulong)puVar23 ^ (ulong)bVar3) * 0x100000001b3);
            bVar3 = *pbVar14;
            plVar25 = (long *)0x0;
          } while (bVar3 != 0);
        }
      }
      pcVar5 = local_f0;
      if (*local_f0 == '\0') {
        plVar13 = (long *)FUN_00d44228();
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 0x18))(plVar13);
        }
      }
      else {
        if (((*PTR_DAT_047d4240 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d4240);
        }
        uVar8 = *(undefined8 *)PTR_DAT_047d4248;
        *(undefined8 *)PTR_DAT_047d4250 = uVar8;
        FUN_00cf9884(&local_118,uVar8,pcVar5);
        plVar13 = local_118;
      }
      puVar24 = *(undefined1 **)(param_1 + 0x238);
      if (puVar24 == (undefined1 *)0x0) {
LAB_01610888:
        plVar12 = (long *)(**(code **)(**(long **)(param_1 + 0x268) + 0x10))
                                    (*(long **)(param_1 + 0x268),0x20,8);
        if (plVar12 == (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x268) + 0xe8))();
        }
        uVar8 = *(undefined8 *)(param_1 + 0x268);
        if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar9 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar9 == 0) {
          plVar12[2] = (long)puVar23;
          plVar12[3] = (long)plVar13;
        }
        else {
          if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar8;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
          plVar12[2] = (long)puVar23;
          plVar12[3] = (long)plVar13;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
        }
        *plVar12 = 0;
        plVar12[1] = (long)puVar23;
        fVar26 = (float)(*(long *)(param_1 + 0x288) + 1);
        if ((puVar24 == (undefined1 *)0x0) ||
           (*(float *)(param_1 + 0x290) * (float)puVar24 < fVar26)) {
          uVar16 = (ulong)(puVar24 < (undefined1 *)0x3 ||
                          ((ulong)puVar24 & (ulong)(puVar24 + -1)) != 0) | (long)puVar24 << 1;
          uVar17 = (ulong)(fVar26 / *(float *)(param_1 + 0x290));
          if (uVar17 <= uVar16) {
            uVar17 = uVar16;
          }
          FUN_01610d58(plVar1,uVar17);
          puVar24 = *(undefined1 **)(param_1 + 0x238);
          if (((ulong)puVar24 & (ulong)(puVar24 + -1)) == 0) {
            puVar22 = (undefined *)((ulong)(puVar24 + -1) & (ulong)puVar23);
          }
          else if (puVar23 < puVar24) {
            puVar22 = puVar23;
          }
          else {
            uVar16 = 0;
            if (puVar24 != (undefined1 *)0x0) {
              uVar16 = (ulong)puVar23 / (ulong)puVar24;
            }
            puVar22 = puVar23 + -(uVar16 * (long)puVar24);
          }
        }
        plVar13 = *(long **)(*plVar1 + (long)puVar22 * 8);
        if (plVar13 == (long *)0x0) {
          *plVar12 = *plVar2;
          *plVar2 = (long)plVar12;
          *(long **)(*plVar1 + (long)puVar22 * 8) = plVar2;
          if (*plVar12 != 0) {
            puVar23 = *(undefined1 **)(*plVar12 + 8);
            if (((ulong)puVar24 & (ulong)(puVar24 + -1)) == 0) {
              puVar23 = (undefined1 *)((ulong)puVar23 & (ulong)(puVar24 + -1));
            }
            else if (puVar24 <= puVar23) {
              uVar16 = 0;
              if (puVar24 != (undefined1 *)0x0) {
                uVar16 = (ulong)puVar23 / (ulong)puVar24;
              }
              puVar23 = puVar23 + -(uVar16 * (long)puVar24);
            }
            plVar13 = (long *)(*plVar1 + (long)puVar23 * 8);
            goto LAB_0161095c;
          }
        }
        else {
          *plVar12 = *plVar13;
LAB_0161095c:
          *plVar13 = (long)plVar12;
        }
        *(long *)(param_1 + 0x288) = *(long *)(param_1 + 0x288) + 1;
      }
      else {
        puVar11 = puVar24 + -1;
        if (((ulong)puVar24 & (ulong)puVar11) == 0) {
          puVar22 = (undefined *)((ulong)puVar11 & (ulong)puVar23);
          plVar12 = *(long **)(*plVar1 + (long)puVar22 * 8);
          if (plVar12 == (long *)0x0) goto LAB_01610888;
          do {
            plVar12 = (long *)*plVar12;
            if ((plVar12 == (long *)0x0) ||
               ((undefined1 *)plVar12[1] != puVar23 &&
                (undefined1 *)((ulong)plVar12[1] & (ulong)puVar11) != puVar22)) goto LAB_01610888;
          } while ((undefined1 *)plVar12[2] != puVar23);
        }
        else {
          puVar22 = puVar23;
          if (puVar24 <= puVar23) {
            uVar16 = 0;
            if (puVar24 != (undefined1 *)0x0) {
              uVar16 = (ulong)puVar23 / (ulong)puVar24;
            }
            puVar22 = puVar23 + -(uVar16 * (long)puVar24);
          }
          plVar12 = *(long **)(*plVar1 + (long)puVar22 * 8);
          if (plVar12 == (long *)0x0) goto LAB_01610888;
          do {
            plVar12 = (long *)*plVar12;
            if (plVar12 == (long *)0x0) goto LAB_01610888;
            puVar11 = (undefined1 *)plVar12[1];
            if (puVar11 != puVar23) {
              if (puVar24 <= puVar11) {
                uVar16 = 0;
                if (puVar24 != (undefined1 *)0x0) {
                  uVar16 = (ulong)puVar11 / (ulong)puVar24;
                }
                puVar11 = puVar11 + -(uVar16 * (long)puVar24);
              }
              if (puVar11 != puVar22) goto LAB_01610888;
            }
          } while ((undefined1 *)plVar12[2] != puVar23);
        }
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 0x20))(plVar13);
        }
      }
      if (plVar25 != (long *)0x0) {
        (**(code **)(*plVar25 + 0x20))(plVar25);
      }
      if (local_e0 != (long *)0x0) {
        (**(code **)(*local_e0 + 0x20))();
      }
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x20))();
      }
      param3 = param3 + 1;
    } while (param3 != local_68);
  }
  return;
}


