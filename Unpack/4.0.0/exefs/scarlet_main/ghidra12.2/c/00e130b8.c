/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e130b8; name: FUN_00e130b8
 */


void FUN_00e130b8(long *param_1,long param_2,uint param_3)

{
  long *plVar1;
  uint *puVar2;
  uint *puVar3;
  long *plVar4;
  int iVar5;
  byte bVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  uint *puVar14;
  ulong uVar15;
  int *piVar16;
  ulong uVar17;
  byte *pbVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  long *local_a0;
  ulong local_98;
  long *local_88;
  char *pcStack_80;
  size_t local_78;
  undefined8 uStack_70;
  long *local_68;
  
  plVar9 = (long *)(**(code **)(*param_1 + 0x128))();
  piVar16 = (int *)0x0;
  if (*(long *)(param_2 + 8) != 0) {
    if (((*(byte *)(*(long *)(param_2 + 8) + 0x1e8) & 1) == 0) ||
       ((*(byte *)(*(long *)(param_2 + 8) + 0x1e8) & 1) == 0)) {
      piVar16 = (int *)0x0;
    }
    else {
      puVar14 = *(uint **)(*(long *)(param_2 + 8) + 0x1f0);
      piVar16 = (int *)((long)puVar14 + (ulong)*puVar14);
    }
  }
  if (*(ushort *)((long)piVar16 - (long)*piVar16) < 5) {
    return;
  }
  uVar17 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[2];
  if (uVar17 == 0) {
    return;
  }
  puVar14 = (uint *)((long)piVar16 + uVar17);
  piVar16 = (int *)((long)puVar14 + (ulong)*puVar14);
  lVar10 = (**(code **)(*plVar9 + 0x10))(plVar9,0x380,8);
  if (lVar10 == 0) {
    lVar23 = 0;
    lVar24 = 0;
    plVar9 = (long *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar9;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    FUN_00e17194(lVar10,plVar9,param_1[0x48],piVar16,param_3 & 1);
    lVar24 = 0x380;
    lVar23 = 8;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
  }
  lVar11 = param_1[0x49];
  param_1[0x49] = lVar10;
  if (lVar11 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar5 = *(int *)(lVar10 + 0x12c8);
    iVar8 = iVar5 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar8;
    if (*(int *)(lVar10 + 0x12cc) <= iVar5) {
      *(int *)(lVar10 + 0x12cc) = iVar8;
    }
    FUN_00e165a4(lVar11);
    plVar22 = (long *)param_1[0x4a];
    lVar10 = param_1[0x4b];
    lVar20 = param_1[0x4c];
    uVar17 = (**(code **)(*plVar22 + 0xf8))(plVar22);
    if (((uVar17 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
      (**(code **)(*plVar22 + 0x18))(plVar22,lVar11,lVar10,lVar20);
    }
    else {
      FUN_00c48fe8(plVar22,lVar11,lVar10,lVar20);
    }
    lVar10 = FUN_00c4e600();
    iVar8 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar8;
    if (iVar8 == 0) {
      plVar22 = (long *)FUN_00c4e600();
      if (plVar22[600] != 0) {
        local_68 = plVar22 + plVar22[600] * 3;
        local_88 = plVar22;
        FUN_00c4ea30(&local_88,&local_68);
        plVar21 = (long *)*plVar22;
        plVar4 = plVar22;
        if (plVar22[600] != 0) {
          plVar4 = plVar22 + plVar22[600] * 3;
        }
        if (plVar4 == plVar22) {
          local_98 = 0;
          uVar17 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar22 + 0xd0))();
          if ((long *)*plVar22 != plVar21) {
            (**(code **)(*plVar21 + 0x100))(plVar21,plVar22,plVar22);
            plVar21 = (long *)*plVar22;
          }
          plVar1 = plVar22 + 3;
          if (plVar4 == plVar1) {
            local_98 = 0;
            uVar17 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar1 + 0xd0))();
            bVar7 = (long *)*plVar1 != plVar21;
            if (bVar7) {
              (**(code **)(*plVar21 + 0x100))(plVar21,plVar22,plVar22 + 3);
              plVar21 = (long *)plVar22[3];
            }
            local_98 = (ulong)bVar7;
            plVar1 = plVar22 + 6;
            if (plVar4 == plVar1) {
              uVar17 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              if ((long *)*plVar1 != plVar21) {
                (**(code **)(*plVar21 + 0x100))(plVar21,plVar22 + local_98 * 3,plVar22 + 6);
                plVar21 = (long *)plVar22[6];
                local_98 = 2;
              }
              plVar1 = plVar22 + 9;
              if (plVar4 == plVar1) {
                uVar17 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar21) {
                  (**(code **)(*plVar21 + 0x100))(plVar21,plVar22 + local_98 * 3,plVar22 + 9);
                  plVar21 = (long *)plVar22[9];
                  local_98 = 3;
                }
                plVar1 = plVar22 + 0xc;
                if (plVar4 == plVar1) {
                  uVar17 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar21) {
                    (**(code **)(*plVar21 + 0x100))(plVar21,plVar22 + local_98 * 3,plVar22 + 0xc);
                    plVar21 = (long *)plVar22[0xc];
                    local_98 = 4;
                  }
                  plVar1 = plVar22 + 0xf;
                  if (plVar4 == plVar1) {
                    uVar17 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar21) {
                      (**(code **)(*plVar21 + 0x100))(plVar21,plVar22 + local_98 * 3,plVar22 + 0xf);
                      plVar21 = (long *)plVar22[0xf];
                      local_98 = 5;
                    }
                    local_a0 = plVar22 + 0x12;
                    uVar17 = 6;
                    if (plVar4 != local_a0) {
                      do {
                        (**(code **)(*(long *)*local_a0 + 0xd0))();
                        if ((long *)*local_a0 != plVar21) {
                          (**(code **)(*plVar21 + 0x100))(plVar21,plVar22 + local_98 * 3,local_a0);
                          plVar21 = (long *)*local_a0;
                          local_98 = uVar17;
                        }
                        local_a0 = local_a0 + 3;
                        uVar17 = uVar17 + 1;
                      } while (plVar4 != local_a0);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar21 + 0x100))(plVar21,plVar22 + local_98 * 3,plVar22 + uVar17 * 3);
        plVar22[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
    lVar10 = param_1[0x49];
  }
  param_1[0x4a] = (long)plVar9;
  param_1[0x4b] = lVar24;
  param_1[0x4c] = lVar23;
  (**(code **)(*(long *)param_1[0x48] + 0x20))((long *)param_1[0x48],lVar10);
  puVar2 = (uint *)((long)piVar16 + (ulong)*(ushort *)((long)piVar16 + (4 - (long)*piVar16)));
  puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
  puVar14 = puVar2 + 1;
  uVar17 = (ulong)*puVar2;
  if (uVar17 != 0) {
    puVar2 = puVar14 + uVar17;
    do {
      piVar16 = (int *)((long)puVar14 + (ulong)*puVar14);
      if ((*(ushort *)((long)piVar16 - (long)*piVar16) < 5) ||
         (uVar17 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[2], uVar17 == 0)) {
        lVar10 = 0;
      }
      else {
        puVar3 = (uint *)((long)piVar16 + uVar17);
        lVar10 = (long)puVar3 + (ulong)*puVar3;
      }
      local_78 = strlen((char *)(lVar10 + 4));
      bVar6 = *(byte *)(lVar10 + 4);
      local_88 = (long *)&DAT_cbf29ce484222645;
      if (bVar6 != 0) {
        local_88 = (long *)&DAT_cbf29ce484222645;
        pbVar18 = (byte *)(lVar10 + 5);
        do {
          local_88 = (long *)(((ulong)local_88 ^ (ulong)bVar6) * 0x100000001b3);
          bVar6 = *pbVar18;
          pbVar18 = pbVar18 + 1;
        } while (bVar6 != 0);
      }
      uStack_70 = 0;
      pcStack_80 = (char *)(lVar10 + 4);
      uVar17 = FUN_00e13858(param_1,&local_88);
      if ((uVar17 & 0xff) != 0) {
        lVar10 = param_1[0xf];
        if ((ulong)(param_1[0x10] - lVar10 >> 5) <= uVar17 >> 0x20) {
LAB_00e13790:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        lVar23 = param_1[0x49];
        uVar19 = *(ulong *)(lVar23 + 0x78);
        *(ulong *)(lVar23 + 0x78) = uVar19 + 1;
        if ((ulong)((*(long *)(lVar23 + 0x48) - *(long *)(lVar23 + 0x40) >> 4) * 0x6db6db6db6db6db7)
            <= uVar19) goto LAB_00e13790;
        if ((*(ushort *)((long)piVar16 - (long)*piVar16) < 7) ||
           (uVar15 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[3], uVar15 == 0)) {
          lVar24 = 0;
        }
        else {
          puVar3 = (uint *)((long)piVar16 + uVar15);
          lVar24 = (long)puVar3 + (ulong)*puVar3;
        }
        uVar12 = FUN_00d4b87c(*(long *)(lVar23 + 0x40) + uVar19 * 0x70,param_1 + 0xd,lVar24);
        plVar9 = (long *)param_1[0x49];
        uVar19 = plVar9[7];
        plVar9[7] = uVar19 + 1;
        if ((ulong)((plVar9[1] - *plVar9 >> 4) * 0x2e8ba2e8ba2e8ba3) <= uVar19) goto LAB_00e13790;
        lVar23 = (uVar17 >> 0x20) * 0x20;
        uVar12 = FUN_00d4b674(*plVar9 + uVar19 * 0xb0,param_1 + 0xd,uVar12,
                              *(undefined8 *)(lVar10 + lVar23),0);
        plVar9 = *(long **)(lVar10 + lVar23);
        (**(code **)(*plVar9 + 0x60))(plVar9,uVar12);
        if ((param_3 & 1) != 0) {
          return;
        }
      }
      puVar14 = puVar14 + 1;
    } while (puVar14 != puVar2);
  }
  return;
}


