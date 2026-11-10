/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b55ee0; name: FUN_00b55ee0
 */


ulong FUN_00b55ee0(long param_1,uint param_2)

{
  long *plVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  uint *puVar14;
  undefined4 uVar15;
  ulong uVar16;
  uint uVar17;
  void *__src;
  long lVar18;
  void *pvVar19;
  void *pvVar20;
  uint local_aa8;
  uint local_aa4;
  uint local_aa0 [4];
  int local_a90;
  int local_a8c;
  uint local_a88;
  undefined4 local_a84;
  undefined4 local_a80;
  char local_a78;
  char local_a64;
  undefined8 local_e8;
  void *local_e0;
  long *local_d8;
  long local_d0;
  long *plStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  uint *local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  long local_88;
  ulong local_80;
  ulong local_78;
  undefined8 local_70;
  
  uVar16 = 0;
  uVar13 = 0;
  switch(*(undefined4 *)(*(long *)(param_1 + 0xc0) + 0x48)) {
  case 0:
    goto switchD_00b55f34_caseD_0;
  case 1:
    if (((*PTR_DAT_047d6c98 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6c98);
    }
    lVar18 = *(long *)PTR_DAT_047d6ca0;
    *(long *)PTR_DAT_047d6ca8 = lVar18;
    if (lVar18 != 0) {
      plStack_c8 = *(long **)(param_1 + 8);
      local_e0 = (void *)0x0;
      local_d8 = (void *)0x0;
      local_b0 = 0;
      local_d0 = 0;
      local_c0 = 0x5d1745d1745d174;
      uStack_b8 = 0;
      if (*(long **)(lVar18 + 0x48) != (long *)0x0) {
        uVar2 = (**(code **)(**(long **)(lVar18 + 0x48) + 0xb8))();
        if (uVar2 != 0) {
          uVar17 = 0;
          do {
            plVar11 = *(long **)(lVar18 + 0x48);
            if (plVar11 == (long *)0x0) {
              FUN_027c912c(&local_a8);
            }
            else {
              (**(code **)(*plVar11 + 0xb0))(&local_a8,plVar11,uVar17);
            }
            if (local_a0 != 0) {
              lVar12 = local_a0 + 0x20;
              local_aa8 = 0;
              iVar10 = FUN_01f65db0(lVar12,"mons_no");
              local_aa4 = iVar10;
              uVar3 = FUN_01f65db0(lVar12,"form_no");
              local_aa0[0] = uVar3;
              iVar4 = FUN_01f65db0(lVar12,&DAT_03c27041);
              local_aa0[1] = iVar4;
              iVar5 = FUN_01f65db0(lVar12,"difficulty");
              local_aa0[2] = iVar5;
              iVar6 = FUN_01f65db0(lVar12,"gem_type");
              local_aa0[3] = iVar6;
              iVar7 = FUN_01f65db0(lVar12,"is_distributed");
              local_a90 = iVar7;
              iVar8 = FUN_01f65db0(lVar12,"raid_table_id");
              local_a8c = iVar8;
              uVar9 = FUN_01f65db0(lVar12,"is_kiwami");
              local_a88 = uVar9;
              local_a84 = FUN_01f65db0(lVar12,"rom_version");
              local_a80 = FUN_01f65db0(lVar12,"fieldId");
              if (iVar5 <= *(int *)(param_1 + 0x100)) {
                plVar11 = local_e0;
                if (local_e0 != local_d8) {
                  do {
                    if (((((*(int *)((long)plVar11 + 4) == iVar10) &&
                          (*(uint *)((long)plVar11 + 8) == uVar3)) &&
                         (*(int *)((long)plVar11 + 0xc) == iVar4)) &&
                        ((*(int *)((long)plVar11 + 0x10) == iVar5 &&
                         (*(int *)((long)plVar11 + 0x14) == iVar6)))) &&
                       ((*(int *)((long)plVar11 + 0x18) == iVar7 &&
                        ((*(int *)((long)plVar11 + 0x1c) == iVar8 &&
                         (*(uint *)((long)plVar11 + 0x20) == uVar9)))))) goto LAB_00b56164;
                    plVar11 = (long *)((long)plVar11 + 0x2c);
                  } while (local_d8 != plVar11);
                  plVar11 = local_d8;
                }
LAB_00b56164:
                if (local_d8 == plVar11) {
                  FUN_00b56720(&local_e0,&local_aa8);
                }
              }
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 != uVar2);
        }
      }
      nn::crypto::GenerateCryptographicallyRandomBytes(&local_aa8,8);
      lVar18 = -0x26e;
      local_aa8 = local_aa8 + 0x229d6a5b & 0x7fffffff;
      iVar10 = 1;
      puVar14 = local_aa0;
      uVar17 = local_aa8;
      while( true ) {
        iVar4 = (int)lVar18;
        uVar17 = iVar4 + (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 0x26f;
        puVar14[-1] = uVar17;
        if (lVar18 == 0) break;
        iVar5 = iVar10 + 1;
        iVar10 = iVar10 + 2;
        iVar6 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965;
        uVar17 = iVar6 + iVar5;
        lVar18 = lVar18 + 2;
        *puVar14 = iVar4 + iVar6 + 0x270;
        puVar14 = puVar14 + 2;
      }
      local_e8 = 0;
      if ((0x2c < (long)local_d8 - (long)local_e0) &&
         (pvVar20 = (void *)((long)local_d8 + -0x2c), local_e0 < pvVar20)) {
        uVar13 = (ulong)((long)local_d8 - (long)local_e0) / 0x2c;
        pvVar19 = local_e0;
        do {
          if (uVar13 - 1 != 0) {
            if (uVar13 == 0) {
              local_a8 = &local_aa8;
              local_70 = 0xffffffffffffffff;
              local_90 = 2;
              local_88 = 2;
              local_a0 = 0x40;
              local_98 = 0x20;
              local_80 = 0x100000000;
              local_78 = 0;
              uVar16 = FUN_00b56e5c(&local_a8);
            }
            else {
              lVar18 = 0x3f;
              if ((uVar13 << (LZCOUNT(uVar13) & 0x3fU) & 0x7fffffffffffffff) != 0) {
                lVar18 = 0x40;
              }
              local_a0 = lVar18 - LZCOUNT(uVar13);
              local_a8 = &local_aa8;
              local_90 = local_a0 >> 5;
              if ((local_a0 & 0x1f) != 0) {
                local_90 = local_90 + 1;
              }
              local_98 = 0;
              if (local_90 != 0) {
                local_98 = local_a0 / local_90;
              }
              local_80 = -1L << (local_98 & 0x3f) & 0x100000000;
              if (0x3f < local_98) {
                local_80 = 0;
              }
              uVar16 = 0;
              if (local_90 != 0) {
                uVar16 = local_80 / local_90;
              }
              if (uVar16 < 0x100000000 - local_80) {
                local_90 = local_90 + 1;
                local_98 = 0;
                if (local_90 != 0) {
                  local_98 = local_a0 / local_90;
                }
                if (local_98 < 0x40) {
                  local_80 = -1L << (local_98 & 0x3f) & 0x100000000;
                  goto LAB_00b563ec;
                }
                local_88 = local_90 + (local_98 * local_90 - local_a0);
                local_78 = 0;
                local_80 = 0;
              }
              else {
LAB_00b563ec:
                uVar16 = 0;
                if (local_90 != 0) {
                  uVar16 = local_a0 / local_90;
                }
                local_88 = local_90 + (uVar16 * local_90 - local_a0);
                if (local_98 < 0x3f) {
                  local_78 = -1L << (local_98 + 1 & 0x3f) & 0x100000000;
                }
                else {
                  local_78 = 0;
                }
              }
              uVar17 = 0;
              if (local_98 != 0) {
                uVar17 = 0xffffffff >> (ulong)(-(int)local_98 & 0x1f);
              }
              uVar3 = 0xffffffff >> (ulong)(0x1fU - (int)local_98 & 0x1f);
              if (0x1e < local_98) {
                uVar3 = 0xffffffff;
              }
              local_70 = CONCAT44(uVar3,uVar17);
              do {
                uVar16 = FUN_00b56e5c(&local_a8);
              } while (uVar13 <= uVar16);
            }
            if (uVar16 != 0) {
              __src = (void *)((long)pvVar19 + uVar16 * 0x2c);
              memcpy(&local_a8,pvVar19,0x2c);
              memcpy(pvVar19,__src,0x2c);
              memcpy(__src,&local_a8,0x2c);
            }
          }
          pvVar19 = (void *)((long)pvVar19 + 0x2c);
          uVar13 = uVar13 - 1;
        } while (pvVar19 < pvVar20);
      }
      plVar11 = local_d8;
      if (local_e0 != local_d8) {
        pvVar19 = (void *)((long)local_d8 + -0x2c);
        uVar13 = 4;
        pvVar20 = local_e0;
        if ((param_2 & 1) == 0) {
          uVar13 = 8;
        }
        do {
          FUN_00b56720(param_1 + 200,pvVar20);
          if (pvVar19 == pvVar20) break;
          pvVar20 = (void *)((long)pvVar20 + 0x2c);
        } while ((ulong)((*(long *)(param_1 + 0xd0) - *(long *)(param_1 + 200) >> 2) *
                        0x2e8ba2e8ba2e8ba3) < uVar13);
        plVar11 = local_e0;
      }
      plVar1 = plStack_c8;
      if (plVar11 != (void *)0x0) {
        lVar18 = local_d0 - (long)plVar11;
        local_d8 = plVar11;
        uVar13 = (**(code **)(*plStack_c8 + 0xf8))(plStack_c8);
        if (((uVar13 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
          (**(code **)(*plVar1 + 0x18))(plVar1,plVar11,lVar18,4);
        }
        else {
          FUN_00c48fe8(plVar1,plVar11,lVar18,4);
        }
      }
    }
    uVar13 = 0x100;
    goto LAB_00b565c8;
  case 2:
    FUN_019db778(&local_e0,*(long *)(param_1 + 0xc0) + 0xe0);
    FUN_019dba7c(&local_aa8,&local_e0);
    FUN_019db8bc(param_1 + 0x48,&local_aa8);
    if (local_a64 != '\0') {
      local_a64 = '\0';
    }
    if (local_a78 != '\0') {
      local_a78 = '\0';
    }
    if ((char)local_a88 != '\0') {
      local_a88 = local_a88 & 0xffffff00;
    }
    if ((char)local_aa0[0] != '\0') {
      local_aa0[0] = local_aa0[0] & 0xffffff00;
    }
    if ((char)local_aa8 != '\0') {
      local_aa8 = local_aa8 & 0xffffff00;
    }
    lVar18 = tpidr_el0;
    if (*(long *)(lVar18 + 0x30) == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      *(undefined8 *)(lVar18 + 0x30) = DAT_04859430;
    }
    plVar11 = local_d8;
    local_a8 = *(uint **)(lVar18 + 0x30);
    local_a0 = *(undefined8 *)(lVar18 + 0x38);
    *(void **)(lVar18 + 0x30) = local_e0;
    *(undefined2 *)(lVar18 + 0x38) = 1;
    local_d8 = (long *)0x0;
    if (plVar11 == (long *)0x0) {
      *(uint **)(lVar18 + 0x30) = local_a8;
      *(undefined2 *)(lVar18 + 0x38) = (undefined2)local_a0;
    }
    else {
      (**(code **)(*plVar11 + 8))();
      *(uint **)(lVar18 + 0x30) = local_a8;
      *(undefined2 *)(lVar18 + 0x38) = (undefined2)local_a0;
      if (local_d8 != (long *)0x0) {
        (**(code **)(*local_d8 + 8))(local_d8);
      }
    }
  default:
    uVar15 = 8;
    break;
  case 3:
    uVar15 = 2;
  }
  uVar13 = 0;
  *(undefined4 *)(param_1 + 0x40) = uVar15;
LAB_00b565c8:
  uVar16 = 1;
switchD_00b55f34_caseD_0:
  return uVar13 | uVar16;
}


