/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 013457e4; name: FUN_013457e4
 */


uint * FUN_013457e4(undefined8 *param_1,uint *param_2,int param_3,long param_4,ulong *param_5,
                   undefined4 *param_6,int *param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  byte bVar3;
  ushort uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined *__compar;
  undefined *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  uint uVar11;
  void *pvVar12;
  uint *puVar13;
  long lVar14;
  int *piVar15;
  byte *pbVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  undefined4 uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ushort *puVar24;
  undefined8 uVar25;
  int *piVar26;
  int *piVar27;
  byte *pbVar28;
  long lVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  int *local_100;
  int *local_f8;
  byte local_e8 [16];
  undefined1 auStack_d8 [8];
  int *local_d0;
  byte *local_c0;
  byte *pbStack_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  long local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  plStack_88 = *(long **)(param_2 + 2);
  local_70 = 0;
  local_a0 = (undefined8 *)0x0;
  local_98 = (undefined8 *)0x0;
  local_90 = 0;
  local_80 = 0xaaaaaaaaaaaaaaa;
  uStack_78 = 0;
  if (((param_4 != 0) && (param_5 != (ulong *)0x0)) &&
     (piVar15 = *(int **)(param_4 + 8), piVar15 != (int *)0x0)) {
    if ((*(ushort *)((long)piVar15 - (long)*piVar15) < 7) ||
       (uVar21 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[3], uVar21 == 0)) {
      puVar13 = (uint *)0x0;
    }
    else {
      puVar13 = (uint *)((long)piVar15 + uVar21);
      puVar13 = (uint *)((long)puVar13 + (ulong)*puVar13);
    }
    local_c0 = (byte *)0x3c848d5;
    pvVar12 = bsearch(&local_c0,puVar13 + 1,(ulong)*puVar13,4,(__compar_fn_t)PTR_LAB_047d5600);
    param_2 = (uint *)0x0;
    if (pvVar12 != (void *)0x0) {
      local_c0 = &DAT_fbec41851566601b;
      pbStack_b8 = (byte *)0x3c848d5;
      local_b0 = 6;
      local_a8 = (long *)0x0;
      piVar15 = (int *)FUN_00efa07c(param_4,&local_c0);
      if (piVar15 == (int *)0x0) {
        iVar31 = 0;
      }
      else {
        iVar31 = *piVar15;
      }
      param_2 = (uint *)0x0;
      if (local_a8 != (long *)0x0) {
        param_2 = (uint *)(**(code **)(*local_a8 + 0x20))();
      }
      if (param_3 < iVar31) {
        local_b0 = 6;
        local_a8 = (long *)0x0;
        local_c0 = &DAT_fbec41851566601b;
        pbStack_b8 = (byte *)0x3c848d5;
        FUN_00e90ee0(auStack_d8,param_4,&local_c0,param_3);
        if (local_a8 != (long *)0x0) {
          (**(code **)(*local_a8 + 0x20))();
        }
        puVar8 = PTR_DAT_047d5608;
        puVar6 = PTR_LAB_047d5600;
        uVar32 = 0;
        pbVar28 = (byte *)((ulong)local_e8 | 1);
        iVar31 = 0;
        do {
          iVar30 = iVar31 + 1;
          uVar11 = snprintf((char *)local_e8,0x10,"target_0%d",iVar30);
          param_2 = (uint *)(ulong)uVar11;
          if (local_e8[0] != 0) {
            pbVar16 = pbVar28;
            do {
              bVar3 = *pbVar16;
              pbVar16 = pbVar16 + 1;
            } while (bVar3 != 0);
          }
          if (local_d0 != (int *)0x0) {
            if ((*(ushort *)((long)local_d0 - (long)*local_d0) < 7) ||
               (uVar21 = (ulong)((ushort *)((long)local_d0 - (long)*local_d0))[3], uVar21 == 0)) {
              puVar13 = (uint *)0x0;
            }
            else {
              puVar13 = (uint *)((long)local_d0 + uVar21);
              puVar13 = (uint *)((long)puVar13 + (ulong)*puVar13);
            }
            local_c0 = local_e8;
            pvVar12 = bsearch(&local_c0,puVar13 + 1,(ulong)*puVar13,4,(__compar_fn_t)puVar6);
            param_2 = (uint *)0x0;
            if (pvVar12 != (void *)0x0) {
              local_c0 = &DAT_cbf29ce484222645;
              if (local_e8[0] != 0) {
                local_c0 = &DAT_cbf29ce484222645;
                pbVar16 = pbVar28;
                bVar3 = local_e8[0];
                do {
                  local_c0 = (byte *)(((ulong)local_c0 ^ (ulong)bVar3) * 0x100000001b3);
                  bVar3 = *pbVar16;
                  pbVar16 = pbVar16 + 1;
                } while (bVar3 != 0);
              }
              local_b0 = 0xf;
              local_a8 = (long *)0x0;
              pbStack_b8 = local_e8;
              FUN_00d996a8(&local_100,auStack_d8,&local_c0);
              param_2 = (uint *)0x0;
              if (local_a8 != (long *)0x0) {
                param_2 = (uint *)(**(code **)(*local_a8 + 0x20))();
              }
              if (param_6 != (undefined4 *)0x0 && param_7 != (int *)0x0) {
                if (iVar31 == 0) {
                  if ((local_f8 == (int *)0x0) ||
                     (*(ushort *)((long)local_f8 - (long)*local_f8) < 7)) goto LAB_0134638c;
                  uVar21 = (ulong)((ushort *)((long)local_f8 - (long)*local_f8))[3];
                  uVar20 = 0;
                  if (uVar21 != 0) {
                    puVar13 = (uint *)((long)local_f8 + uVar21);
                    puVar13 = (uint *)((long)puVar13 + (ulong)*puVar13);
                    local_c0 = (byte *)0x3c63f10;
                    param_2 = bsearch(&local_c0,puVar13 + 1,(ulong)*puVar13,4,(__compar_fn_t)puVar6)
                    ;
                    if ((param_2 != (uint *)0x0) && (local_100 != (int *)0x0)) {
                      piVar15 = (int *)((long)param_2 + (ulong)*param_2);
                      puVar24 = (ushort *)((long)piVar15 - (long)*piVar15);
                      uVar4 = *puVar24;
                      if (uVar4 < 7) {
                        piVar26 = (int *)0x0;
                      }
                      else {
                        piVar26 = (int *)0x0;
                        if ((ulong)puVar24[3] != 0) {
                          puVar13 = (uint *)((long)piVar15 + (ulong)puVar24[3]);
                          piVar26 = (int *)((long)puVar13 + (ulong)*puVar13);
                        }
                      }
                      if ((*(ushort *)((long)piVar26 - (long)*piVar26) < 5) ||
                         (uVar21 = (ulong)((ushort *)((long)piVar26 - (long)*piVar26))[2],
                         uVar21 == 0)) {
                        uVar21 = 0;
                      }
                      else {
                        uVar21 = (long)*(char *)((long)piVar26 + uVar21) & 0xffffffff;
                      }
                      if (*(long *)(puVar8 + uVar21 * 8) == 4) {
                        if (uVar4 < 0xb) {
                          uVar11 = 0;
LAB_013462e4:
                          uVar20 = 0;
                        }
                        else {
                          uVar11 = 0;
                          if ((ulong)puVar24[5] != 0) {
                            uVar11 = (uint)*(ushort *)((long)piVar15 + (ulong)puVar24[5]);
                          }
                          if ((uVar4 < 0xd) || ((ulong)puVar24[6] == 0)) goto LAB_013462e4;
                          uVar20 = *(undefined4 *)((long)piVar15 + (ulong)puVar24[6]);
                        }
                        if ((uVar11 < *(ushort *)((long)local_100 - (long)*local_100)) &&
                           (uVar21 = (ulong)*(ushort *)
                                             (((long)local_100 - (long)*local_100) + (ulong)uVar11),
                           uVar21 != 0)) {
                          uVar20 = *(undefined4 *)((long)local_100 + uVar21);
                        }
                        goto LAB_01346284;
                      }
                      if ((0xc < uVar4) && ((ulong)puVar24[6] != 0)) {
                        uVar20 = *(undefined4 *)((long)piVar15 + (ulong)puVar24[6]);
                        goto LAB_01346284;
                      }
                    }
LAB_0134638c:
                    uVar20 = 0;
                  }
LAB_01346284:
                  *param_6 = uVar20;
                }
                iVar31 = *param_7;
                if ((local_f8 == (int *)0x0) || (*(ushort *)((long)local_f8 - (long)*local_f8) < 7))
                goto LAB_0134634c;
                uVar21 = (ulong)((ushort *)((long)local_f8 - (long)*local_f8))[3];
                iVar19 = 0;
                if (uVar21 != 0) {
                  puVar13 = (uint *)((long)local_f8 + uVar21);
                  puVar13 = (uint *)((long)puVar13 + (ulong)*puVar13);
                  local_c0 = (byte *)0x3c63f10;
                  param_2 = bsearch(&local_c0,puVar13 + 1,(ulong)*puVar13,4,(__compar_fn_t)puVar6);
                  if ((param_2 != (uint *)0x0) && (local_100 != (int *)0x0)) {
                    piVar15 = (int *)((long)param_2 + (ulong)*param_2);
                    puVar24 = (ushort *)((long)piVar15 - (long)*piVar15);
                    uVar4 = *puVar24;
                    if (uVar4 < 7) {
                      piVar26 = (int *)0x0;
                    }
                    else {
                      piVar26 = (int *)0x0;
                      if ((ulong)puVar24[3] != 0) {
                        puVar13 = (uint *)((long)piVar15 + (ulong)puVar24[3]);
                        piVar26 = (int *)((long)puVar13 + (ulong)*puVar13);
                      }
                    }
                    if ((*(ushort *)((long)piVar26 - (long)*piVar26) < 5) ||
                       (uVar21 = (ulong)((ushort *)((long)piVar26 - (long)*piVar26))[2], uVar21 == 0
                       )) {
                      uVar21 = 0;
                    }
                    else {
                      uVar21 = (long)*(char *)((long)piVar26 + uVar21) & 0xffffffff;
                    }
                    if (*(long *)(puVar8 + uVar21 * 8) == 4) {
                      if (uVar4 < 0xb) {
                        uVar11 = 0;
LAB_013462ac:
                        iVar19 = 0;
                      }
                      else {
                        uVar11 = 0;
                        if ((ulong)puVar24[5] != 0) {
                          uVar11 = (uint)*(ushort *)((long)piVar15 + (ulong)puVar24[5]);
                        }
                        if ((uVar4 < 0xd) || ((ulong)puVar24[6] == 0)) goto LAB_013462ac;
                        iVar19 = *(int *)((long)piVar15 + (ulong)puVar24[6]);
                      }
                      if ((uVar11 < *(ushort *)((long)local_100 - (long)*local_100)) &&
                         (uVar21 = (ulong)*(ushort *)
                                           (((long)local_100 - (long)*local_100) + (ulong)uVar11),
                         uVar21 != 0)) {
                        iVar19 = *(int *)((long)local_100 + uVar21);
                      }
                      goto LAB_01346068;
                    }
                    if ((0xc < uVar4) && ((ulong)puVar24[6] != 0)) {
                      iVar19 = *(int *)((long)piVar15 + (ulong)puVar24[6]);
                      goto LAB_01346068;
                    }
                  }
LAB_0134634c:
                  iVar19 = 0;
                }
LAB_01346068:
                if (iVar31 < iVar19) {
                  if ((local_f8 == (int *)0x0) ||
                     (*(ushort *)((long)local_f8 - (long)*local_f8) < 7)) goto LAB_0134636c;
                  uVar21 = (ulong)((ushort *)((long)local_f8 - (long)*local_f8))[3];
                  iVar31 = 0;
                  if (uVar21 != 0) {
                    puVar13 = (uint *)((long)local_f8 + uVar21);
                    puVar13 = (uint *)((long)puVar13 + (ulong)*puVar13);
                    local_c0 = (byte *)0x3c63f10;
                    param_2 = bsearch(&local_c0,puVar13 + 1,(ulong)*puVar13,4,(__compar_fn_t)puVar6)
                    ;
                    if ((param_2 != (uint *)0x0) && (local_100 != (int *)0x0)) {
                      piVar15 = (int *)((long)param_2 + (ulong)*param_2);
                      puVar24 = (ushort *)((long)piVar15 - (long)*piVar15);
                      uVar4 = *puVar24;
                      if (uVar4 < 7) {
                        piVar26 = (int *)0x0;
                      }
                      else {
                        piVar26 = (int *)0x0;
                        if ((ulong)puVar24[3] != 0) {
                          puVar13 = (uint *)((long)piVar15 + (ulong)puVar24[3]);
                          piVar26 = (int *)((long)puVar13 + (ulong)*puVar13);
                        }
                      }
                      if ((*(ushort *)((long)piVar26 - (long)*piVar26) < 5) ||
                         (uVar21 = (ulong)((ushort *)((long)piVar26 - (long)*piVar26))[2],
                         uVar21 == 0)) {
                        uVar21 = 0;
                      }
                      else {
                        uVar21 = (long)*(char *)((long)piVar26 + uVar21) & 0xffffffff;
                      }
                      if (*(long *)(puVar8 + uVar21 * 8) == 4) {
                        if (uVar4 < 0xb) {
                          uVar11 = 0;
LAB_013462c8:
                          iVar31 = 0;
                        }
                        else {
                          uVar11 = 0;
                          if ((ulong)puVar24[5] != 0) {
                            uVar11 = (uint)*(ushort *)((long)piVar15 + (ulong)puVar24[5]);
                          }
                          if ((uVar4 < 0xd) || ((ulong)puVar24[6] == 0)) goto LAB_013462c8;
                          iVar31 = *(int *)((long)piVar15 + (ulong)puVar24[6]);
                        }
                        if ((uVar11 < *(ushort *)((long)local_100 - (long)*local_100)) &&
                           (uVar21 = (ulong)*(ushort *)
                                             (((long)local_100 - (long)*local_100) + (ulong)uVar11),
                           uVar21 != 0)) {
                          iVar31 = *(int *)((long)local_100 + uVar21);
                        }
                        goto LAB_01346174;
                      }
                      if ((0xc < uVar4) && ((ulong)puVar24[6] != 0)) {
                        iVar31 = *(int *)((long)piVar15 + (ulong)puVar24[6]);
                        goto LAB_01346174;
                      }
                    }
LAB_0134636c:
                    iVar31 = 0;
                  }
LAB_01346174:
                  *param_7 = iVar31;
                }
              }
              if (((local_f8 != (int *)0x0) && (6 < *(ushort *)((long)local_f8 - (long)*local_f8)))
                 && (uVar21 = (ulong)((ushort *)((long)local_f8 - (long)*local_f8))[3], uVar21 != 0)
                 ) {
                puVar13 = (uint *)((long)local_f8 + uVar21);
                local_c0 = &DAT_03c63f0b;
                puVar13 = (uint *)((long)puVar13 + (ulong)*puVar13);
                param_2 = bsearch(&local_c0,puVar13 + 1,(ulong)*puVar13,4,(__compar_fn_t)puVar6);
                if ((param_2 != (uint *)0x0) && (local_100 != (int *)0x0)) {
                  piVar15 = (int *)((long)param_2 + (ulong)*param_2);
                  puVar24 = (ushort *)((long)piVar15 - (long)*piVar15);
                  uVar4 = *puVar24;
                  if (uVar4 < 7) {
                    piVar26 = (int *)0x0;
                  }
                  else {
                    piVar26 = (int *)0x0;
                    if ((ulong)puVar24[3] != 0) {
                      puVar13 = (uint *)((long)piVar15 + (ulong)puVar24[3]);
                      piVar26 = (int *)((long)puVar13 + (ulong)*puVar13);
                    }
                  }
                  if ((*(ushort *)((long)piVar26 - (long)*piVar26) < 5) ||
                     (uVar21 = (ulong)((ushort *)((long)piVar26 - (long)*piVar26))[2], uVar21 == 0))
                  {
                    uVar21 = 0;
                  }
                  else {
                    uVar21 = (long)*(char *)((long)piVar26 + uVar21) & 0xffffffff;
                  }
                  if (*(long *)(puVar8 + uVar21 * 8) == 4) {
                    if (uVar4 < 0xb) {
                      uVar11 = 0;
LAB_01345c80:
                      iVar31 = 0;
                    }
                    else {
                      uVar11 = 0;
                      if ((ulong)puVar24[5] != 0) {
                        uVar11 = (uint)*(ushort *)((long)piVar15 + (ulong)puVar24[5]);
                      }
                      if ((uVar4 < 0xd) || ((ulong)puVar24[6] == 0)) goto LAB_01345c80;
                      iVar31 = *(int *)((long)piVar15 + (ulong)puVar24[6]);
                    }
                    if ((uVar11 < *(ushort *)((long)local_100 - (long)*local_100)) &&
                       (uVar21 = (ulong)*(ushort *)
                                         (((long)local_100 - (long)*local_100) + (ulong)uVar11),
                       uVar21 != 0)) {
                      iVar31 = *(int *)((long)local_100 + uVar21);
                    }
                  }
                  else {
                    if ((uVar4 < 0xd) || ((ulong)puVar24[6] == 0)) goto LAB_01345c44;
                    iVar31 = *(int *)((long)piVar15 + (ulong)puVar24[6]);
                  }
                  if (iVar31 != 0) {
                    if ((local_f8 == (int *)0x0) ||
                       (*(ushort *)((long)local_f8 - (long)*local_f8) < 7)) goto LAB_01345c88;
                    uVar21 = (ulong)((ushort *)((long)local_f8 - (long)*local_f8))[3];
                    iVar31 = 0;
                    if (uVar21 != 0) {
                      puVar13 = (uint *)((long)local_f8 + uVar21);
                      local_c0 = &DAT_03c63f0b;
                      puVar13 = (uint *)((long)puVar13 + (ulong)*puVar13);
                      puVar13 = bsearch(&local_c0,puVar13 + 1,(ulong)*puVar13,4,
                                        (__compar_fn_t)puVar6);
                      if ((puVar13 != (uint *)0x0) && (local_100 != (int *)0x0)) {
                        piVar15 = (int *)((long)puVar13 + (ulong)*puVar13);
                        puVar24 = (ushort *)((long)piVar15 - (long)*piVar15);
                        uVar4 = *puVar24;
                        if (uVar4 < 7) {
                          piVar26 = (int *)0x0;
                        }
                        else {
                          piVar26 = (int *)0x0;
                          if ((ulong)puVar24[3] != 0) {
                            puVar13 = (uint *)((long)piVar15 + (ulong)puVar24[3]);
                            piVar26 = (int *)((long)puVar13 + (ulong)*puVar13);
                          }
                        }
                        if ((*(ushort *)((long)piVar26 - (long)*piVar26) < 5) ||
                           (uVar21 = (ulong)((ushort *)((long)piVar26 - (long)*piVar26))[2],
                           uVar21 == 0)) {
                          uVar21 = 0;
                        }
                        else {
                          uVar21 = (long)*(char *)((long)piVar26 + uVar21) & 0xffffffff;
                        }
                        if (*(long *)(puVar8 + uVar21 * 8) == 4) {
                          if (uVar4 < 0xb) {
                            uVar11 = 0;
LAB_01345ca4:
                            iVar31 = 0;
                          }
                          else {
                            uVar11 = 0;
                            if ((ulong)puVar24[5] != 0) {
                              uVar11 = (uint)*(ushort *)((long)piVar15 + (ulong)puVar24[5]);
                            }
                            if ((uVar4 < 0xd) || ((ulong)puVar24[6] == 0)) goto LAB_01345ca4;
                            iVar31 = *(int *)((long)piVar15 + (ulong)puVar24[6]);
                          }
                          if ((uVar11 < *(ushort *)((long)local_100 - (long)*local_100)) &&
                             (uVar21 = (ulong)*(ushort *)
                                               (((long)local_100 - (long)*local_100) + (ulong)uVar11
                                               ), uVar21 != 0)) {
                            iVar31 = *(int *)((long)local_100 + uVar21);
                          }
                          goto LAB_01345c34;
                        }
                        if ((0xc < uVar4) && ((ulong)puVar24[6] != 0)) {
                          iVar31 = *(int *)((long)piVar15 + (ulong)puVar24[6]);
                          goto LAB_01345c34;
                        }
                      }
LAB_01345c88:
                      iVar31 = 0;
                    }
LAB_01345c34:
                    uVar32 = iVar31 + uVar32;
                    param_2 = (uint *)FUN_01346394(&local_a0,&local_100);
                  }
                }
              }
            }
          }
LAB_01345c44:
          puVar9 = local_98;
          iVar31 = iVar30;
        } while (iVar30 != 6);
        if (0 < (int)uVar32) {
          puVar7 = local_a0;
          if (uVar32 == 1) {
            uVar21 = 0;
            puVar6 = PTR_LAB_047d5600;
          }
          else {
            lVar29 = 0x1f;
            if ((uVar32 << (ulong)((uint)LZCOUNT(uVar32) & 0x1f) & 0x7fffffff) != 0) {
              lVar29 = 0x20;
            }
            uVar17 = lVar29 - LZCOUNT(uVar32);
            uVar22 = uVar17 >> 6;
            if ((uVar17 & 0x3f) != 0) {
              uVar22 = uVar22 + 1;
            }
            uVar5 = 0;
            if (uVar22 != 0) {
              uVar5 = uVar17 / uVar22;
            }
            uVar1 = *param_5;
            uVar21 = uVar1 + param_5[1];
            uVar23 = uVar1 ^ param_5[1];
            uVar18 = uVar23 ^ (uVar1 >> 0x28 | uVar1 << 0x18) ^ uVar23 << 0x10;
            uVar23 = uVar23 >> 0x1b | uVar23 << 0x25;
            uVar1 = 0;
            if (uVar22 <= uVar17) {
              uVar1 = 0xffffffffffffffff >> (-uVar5 & 0x3f);
            }
            while (uVar21 = uVar21 & uVar1, uVar32 <= (uint)uVar21) {
              uVar22 = uVar18 ^ uVar23;
              uVar21 = uVar18 + uVar23;
              uVar18 = uVar22 ^ (uVar18 >> 0x28 | uVar18 << 0x18) ^ uVar22 << 0x10;
              uVar23 = uVar22 >> 0x1b | uVar22 << 0x25;
            }
            *param_5 = uVar18;
            param_5[1] = uVar23;
            puVar6 = PTR_LAB_047d5600;
          }
          for (; __compar = PTR_LAB_047d5600, PTR_LAB_047d5600 = puVar6, puVar7 != puVar9;
              puVar7 = puVar7 + 3) {
            uVar2 = *puVar7;
            piVar15 = (int *)puVar7[1];
            uVar25 = puVar7[2];
            param_1[1] = piVar15;
            param_1[2] = uVar25;
            *param_1 = uVar2;
            if ((piVar15 == (int *)0x0) || (*(ushort *)((long)piVar15 - (long)*piVar15) < 7))
            goto LAB_01345e70;
            uVar22 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[3];
            iVar31 = 0;
            if (uVar22 != 0) {
              puVar13 = (uint *)((long)piVar15 + uVar22);
              local_c0 = &DAT_03c63f0b;
              puVar13 = (uint *)((long)puVar13 + (ulong)*puVar13);
              param_2 = bsearch(&local_c0,puVar13 + 1,(ulong)*puVar13,4,(__compar_fn_t)__compar);
              if ((param_2 != (uint *)0x0) && (piVar15 = (int *)*param_1, piVar15 != (int *)0x0)) {
                piVar26 = (int *)((long)param_2 + (ulong)*param_2);
                puVar24 = (ushort *)((long)piVar26 - (long)*piVar26);
                uVar4 = *puVar24;
                if (uVar4 < 7) {
                  piVar27 = (int *)0x0;
                }
                else {
                  piVar27 = (int *)0x0;
                  if ((ulong)puVar24[3] != 0) {
                    puVar13 = (uint *)((long)piVar26 + (ulong)puVar24[3]);
                    piVar27 = (int *)((long)puVar13 + (ulong)*puVar13);
                  }
                }
                if ((*(ushort *)((long)piVar27 - (long)*piVar27) < 5) ||
                   (uVar22 = (ulong)((ushort *)((long)piVar27 - (long)*piVar27))[2], uVar22 == 0)) {
                  uVar22 = 0;
                }
                else {
                  uVar22 = (long)*(char *)((long)piVar27 + uVar22) & 0xffffffff;
                }
                if (*(long *)(puVar8 + uVar22 * 8) == 4) {
                  if (uVar4 < 0xb) {
                    uVar32 = 0;
LAB_01345e8c:
                    iVar31 = 0;
                  }
                  else {
                    uVar32 = 0;
                    if ((ulong)puVar24[5] != 0) {
                      uVar32 = (uint)*(ushort *)((long)piVar26 + (ulong)puVar24[5]);
                    }
                    if ((uVar4 < 0xd) || ((ulong)puVar24[6] == 0)) goto LAB_01345e8c;
                    iVar31 = *(int *)((long)piVar26 + (ulong)puVar24[6]);
                  }
                  if ((uVar32 < *(ushort *)((long)piVar15 - (long)*piVar15)) &&
                     (uVar22 = (ulong)*(ushort *)(((long)piVar15 - (long)*piVar15) + (ulong)uVar32),
                     uVar22 != 0)) {
                    iVar31 = *(int *)((long)piVar15 + uVar22);
                  }
                  goto LAB_01345e58;
                }
                if ((0xc < uVar4) && ((ulong)puVar24[6] != 0)) {
                  iVar31 = *(int *)((long)piVar26 + (ulong)puVar24[6]);
                  goto LAB_01345e58;
                }
              }
LAB_01345e70:
              iVar31 = 0;
            }
LAB_01345e58:
            iVar30 = (int)uVar21;
            uVar32 = iVar30 - iVar31;
            uVar21 = (ulong)uVar32;
            if (uVar32 == 0 || iVar30 < iVar31) goto LAB_01345ecc;
            puVar6 = PTR_LAB_047d5600;
            PTR_LAB_047d5600 = __compar;
          }
        }
      }
    }
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
LAB_01345ecc:
  plVar10 = plStack_88;
  puVar9 = local_a0;
  if (local_a0 != (undefined8 *)0x0) {
    local_98 = local_a0;
    lVar29 = local_90 - (long)local_a0;
    uVar21 = (**(code **)(*plStack_88 + 0xf8))(plStack_88);
    if (((uVar21 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      param_2 = (uint *)(**(code **)(*plVar10 + 0x18))(plVar10,puVar9,lVar29,8);
    }
    else {
      param_2 = (uint *)FUN_00c48fe8(plVar10,puVar9,lVar29,8);
    }
  }
  return param_2;
}


