/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01fa86d4; name: FUN_01fa86d4
 */


void FUN_01fa86d4(undefined8 *param_1,long param_2,long param_3,ulong *param_4,char param_5,
                 int param_6,int param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  char cVar7;
  void *pvVar8;
  uint *puVar9;
  long lVar10;
  int *piVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  ushort *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  uint uVar18;
  int *piVar19;
  ulong uVar20;
  long lVar21;
  int iVar22;
  int iVar23;
  short sVar24;
  uint local_ec;
  int *local_e8;
  int *local_e0;
  undefined1 auStack_d0 [8];
  int *local_c8;
  char *local_b8;
  char *local_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  long local_88;
  long *plStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  plStack_80 = *(long **)(param_2 + 8);
  local_98 = (undefined8 *)0x0;
  local_90 = (undefined8 *)0x0;
  local_68 = 0;
  local_88 = 0;
  local_78 = 0xaaaaaaaaaaaaaaa;
  uStack_70 = 0;
  piVar11 = *(int **)(param_3 + 8);
  if (piVar11 != (int *)0x0) {
    if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 7) ||
       (uVar14 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[3], uVar14 == 0)) {
      puVar9 = (uint *)0x0;
    }
    else {
      puVar9 = (uint *)((long)piVar11 + uVar14);
      puVar9 = (uint *)((long)puVar9 + (ulong)*puVar9);
    }
    local_b8 = "values";
    pvVar8 = bsearch(&local_b8,puVar9 + 1,(ulong)*puVar9,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (pvVar8 != (void *)0x0) {
      local_a0 = (long *)0x0;
      local_b8 = &DAT_fbec41851566601b;
      local_b0 = "values";
      local_a8 = 6;
      piVar11 = (int *)FUN_00efa07c(param_3,&local_b8);
      if (piVar11 == (int *)0x0) {
        iVar22 = 0;
      }
      else {
        iVar22 = *piVar11;
      }
      if (local_a0 != (long *)0x0) {
        (**(code **)(*local_a0 + 0x20))();
      }
      if (0 < iVar22) {
        iVar23 = 0;
        local_ec = 0;
        do {
          local_a0 = (long *)0x0;
          local_b8 = &DAT_fbec41851566601b;
          local_b0 = "values";
          local_a8 = 6;
          FUN_00e90ee0(auStack_d0,param_3,&local_b8,iVar23);
          if (local_a0 != (long *)0x0) {
            (**(code **)(*local_a0 + 0x20))();
          }
          if (local_c8 != (int *)0x0) {
            if ((*(ushort *)((long)local_c8 - (long)*local_c8) < 7) ||
               (uVar14 = (ulong)((ushort *)((long)local_c8 - (long)*local_c8))[3], uVar14 == 0)) {
              puVar9 = (uint *)0x0;
            }
            else {
              puVar9 = (uint *)((long)local_c8 + uVar14);
              puVar9 = (uint *)((long)puVar9 + (ulong)*puVar9);
            }
            local_b8 = "raidEnemyInfo";
            pvVar8 = bsearch(&local_b8,puVar9 + 1,(ulong)*puVar9,4,(__compar_fn_t)PTR_LAB_047d5600);
            if (pvVar8 != (void *)0x0) {
              local_b8 = (char *)0x327f0cb5e5b3025b;
              local_b0 = "raidEnemyInfo";
              local_a8 = 0xd;
              local_a0 = (long *)0x0;
              FUN_00d996a8(&local_e8,auStack_d0,&local_b8);
              if (local_a0 != (long *)0x0) {
                (**(code **)(*local_a0 + 0x20))();
              }
              local_b8 = (char *)0x38b523ebd4ea5e8e;
              local_b0 = "romVer";
              local_a8 = 6;
              local_a0 = (long *)0x0;
              piVar11 = (int *)FUN_00d5a5a8(&local_e8,&local_b8);
              if (((piVar11 == (int *)0x0) || (*(ushort *)((long)piVar11 - (long)*piVar11) < 7)) ||
                 (uVar14 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[3], uVar14 == 0)) {
                sVar24 = 0;
              }
              else {
                sVar24 = *(short *)((long)piVar11 + uVar14);
              }
              if (local_a0 != (long *)0x0) {
                (**(code **)(*local_a0 + 0x20))();
              }
              if (sVar24 != 0) {
                local_b8 = (char *)0x38b523ebd4ea5e8e;
                local_b0 = "romVer";
                local_a8 = 6;
                local_a0 = (long *)0x0;
                piVar11 = (int *)FUN_00d5a5a8(&local_e8,&local_b8);
                iVar13 = DAT_048420a8;
                if (((piVar11 == (int *)0x0) || (*(ushort *)((long)piVar11 - (long)*piVar11) < 7))
                   || ((uVar14 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[3], uVar14 == 0
                       || (*(short *)((long)piVar11 + uVar14) != 1)))) {
                  if (local_a0 != (long *)0x0) {
                    (**(code **)(*local_a0 + 0x20))();
                  }
                }
                else {
                  if (local_a0 != (long *)0x0) {
                    (**(code **)(*local_a0 + 0x20))();
                  }
                  if (iVar13 != 0x32) goto LAB_01fa8c2c;
                }
                local_b8 = (char *)0x38b523ebd4ea5e8e;
                local_b0 = "romVer";
                local_a8 = 6;
                local_a0 = (long *)0x0;
                piVar11 = (int *)FUN_00d5a5a8(&local_e8,&local_b8);
                iVar13 = DAT_048420a8;
                if (((piVar11 == (int *)0x0) || (*(ushort *)((long)piVar11 - (long)*piVar11) < 7))
                   || ((uVar14 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[3], uVar14 == 0
                       || (*(short *)((long)piVar11 + uVar14) != 2)))) {
                  if (local_a0 != (long *)0x0) {
                    (**(code **)(*local_a0 + 0x20))();
                  }
                }
                else {
                  if (local_a0 != (long *)0x0) {
                    (**(code **)(*local_a0 + 0x20))();
                  }
                  if (iVar13 != 0x33) goto LAB_01fa8c2c;
                }
              }
              if (param_5 != -1) {
                local_a0 = (long *)0x0;
                local_b8 = (char *)0x24c2d457bbfe1711;
                local_b0 = "deliveryGroupID";
                local_a8 = 0xf;
                cVar7 = FUN_00d5a2b4(&local_e8,&local_b8);
                if (local_a0 != (long *)0x0) {
                  (**(code **)(*local_a0 + 0x20))();
                }
                if (cVar7 != param_5) goto LAB_01fa8c2c;
                if ((local_e0 == (int *)0x0) || (*(ushort *)((long)local_e0 - (long)*local_e0) < 7))
                goto LAB_01fa8c84;
                uVar14 = (ulong)((ushort *)((long)local_e0 - (long)*local_e0))[3];
                iVar13 = 0;
                if (uVar14 != 0) {
                  puVar9 = (uint *)((long)local_e0 + uVar14);
                  puVar9 = (uint *)((long)puVar9 + (ulong)*puVar9);
                  local_b8 = "difficulty";
                  puVar9 = bsearch(&local_b8,puVar9 + 1,(ulong)*puVar9,4,
                                   (__compar_fn_t)PTR_LAB_047d5600);
                  if ((puVar9 != (uint *)0x0) && (local_e8 != (int *)0x0)) {
                    piVar11 = (int *)((long)puVar9 + (ulong)*puVar9);
                    puVar15 = (ushort *)((long)piVar11 - (long)*piVar11);
                    uVar3 = *puVar15;
                    if (uVar3 < 7) {
                      piVar19 = (int *)0x0;
                    }
                    else {
                      piVar19 = (int *)0x0;
                      if ((ulong)puVar15[3] != 0) {
                        puVar9 = (uint *)((long)piVar11 + (ulong)puVar15[3]);
                        piVar19 = (int *)((long)puVar9 + (ulong)*puVar9);
                      }
                    }
                    if ((*(ushort *)((long)piVar19 - (long)*piVar19) < 5) ||
                       (uVar14 = (ulong)((ushort *)((long)piVar19 - (long)*piVar19))[2], uVar14 == 0
                       )) {
                      uVar14 = 0;
                    }
                    else {
                      uVar14 = (long)*(char *)((long)piVar19 + uVar14) & 0xffffffff;
                    }
                    if (*(long *)(PTR_DAT_047d5608 + uVar14 * 8) == 4) {
                      if (uVar3 < 0xb) {
                        uVar18 = 0;
LAB_01fa8b9c:
                        iVar13 = 0;
                      }
                      else {
                        uVar18 = 0;
                        if ((ulong)puVar15[5] != 0) {
                          uVar18 = (uint)*(ushort *)((long)piVar11 + (ulong)puVar15[5]);
                        }
                        if ((uVar3 < 0xd) || ((ulong)puVar15[6] == 0)) goto LAB_01fa8b9c;
                        iVar13 = *(int *)((long)piVar11 + (ulong)puVar15[6]);
                      }
                      if ((uVar18 < *(ushort *)((long)local_e8 - (long)*local_e8)) &&
                         (uVar14 = (ulong)*(ushort *)
                                           (((long)local_e8 - (long)*local_e8) + (ulong)uVar18),
                         uVar14 != 0)) {
                        iVar13 = *(int *)((long)local_e8 + uVar14);
                      }
                      goto LAB_01fa8bc0;
                    }
                    if ((0xc < uVar3) && ((ulong)puVar15[6] != 0)) {
                      iVar13 = *(int *)((long)piVar11 + (ulong)puVar15[6]);
                      goto LAB_01fa8bc0;
                    }
                  }
LAB_01fa8c84:
                  iVar13 = 0;
                }
LAB_01fa8bc0:
                if ((iVar13 < param_6) || (param_7 < iVar13)) goto LAB_01fa8c2c;
              }
              local_a0 = (long *)0x0;
              local_b8 = (char *)0x33083a1671954767;
              local_b0 = "rate";
              local_a8 = 4;
              cVar7 = FUN_00d5a2b4(&local_e8,&local_b8);
              local_ec = local_ec + (int)cVar7;
              if (local_a0 != (long *)0x0) {
                (**(code **)(*local_a0 + 0x20))();
              }
              FUN_01346394(&local_98,&local_e8);
            }
          }
LAB_01fa8c2c:
          puVar5 = local_90;
          iVar23 = iVar23 + 1;
        } while (iVar22 != iVar23);
        if (0 < (int)local_ec) {
          puVar4 = local_98;
          if (local_ec == 1) {
            uVar14 = 0;
          }
          else {
            lVar21 = 0x1f;
            if ((local_ec << (ulong)((uint)LZCOUNT(local_ec) & 0x1f) & 0x7fffffff) != 0) {
              lVar21 = 0x20;
            }
            uVar12 = lVar21 - LZCOUNT(local_ec);
            uVar14 = uVar12 >> 6;
            if ((uVar12 & 0x3f) != 0) {
              uVar14 = uVar14 + 1;
            }
            uVar16 = 0;
            if (uVar14 != 0) {
              uVar16 = uVar12 / uVar14;
            }
            uVar1 = 0;
            if (uVar14 <= uVar12) {
              uVar1 = 0xffffffffffffffff >> (-uVar16 & 0x3f);
            }
            uVar12 = *param_4;
            uVar16 = param_4[1];
            do {
              uVar20 = uVar12 ^ uVar16;
              uVar14 = uVar12 + uVar16;
              uVar16 = uVar20 >> 0x1b | uVar20 << 0x25;
              uVar14 = uVar14 & uVar1;
              uVar12 = uVar20 ^ (uVar12 >> 0x28 | uVar12 << 0x18) ^ uVar20 << 0x10;
            } while (local_ec <= (uint)uVar14);
            *param_4 = uVar12;
            param_4[1] = uVar16;
          }
          for (; puVar4 != puVar5; puVar4 = puVar4 + 3) {
            uVar2 = puVar4[1];
            uVar17 = puVar4[2];
            *param_1 = *puVar4;
            param_1[1] = uVar2;
            param_1[2] = uVar17;
            local_b8 = (char *)0x33083a1671954767;
            local_b0 = "rate";
            local_a8 = 4;
            local_a0 = (long *)0x0;
            cVar7 = FUN_00d5a2b4(param_1,&local_b8);
            if (local_a0 != (long *)0x0) {
              (**(code **)(*local_a0 + 0x20))();
            }
            if ((int)uVar14 < (int)cVar7) goto LAB_01fa8dac;
            uVar14 = (ulong)(uint)((int)uVar14 - (int)cVar7);
          }
        }
      }
    }
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
LAB_01fa8dac:
  plVar6 = plStack_80;
  puVar5 = local_98;
  if (local_98 != (undefined8 *)0x0) {
    local_90 = local_98;
    lVar21 = local_88 - (long)local_98;
    uVar14 = (**(code **)(*plStack_80 + 0xf8))(plStack_80);
    if (((uVar14 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,puVar5,lVar21,8);
    }
    else {
      FUN_00c48fe8(plVar6,puVar5,lVar21,8);
    }
  }
  return;
}


