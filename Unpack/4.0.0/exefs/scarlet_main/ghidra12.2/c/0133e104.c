/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0133e104; name: FUN_0133e104
 */


void FUN_0133e104(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ushort uVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  undefined4 uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ushort *puVar13;
  int *piVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 uVar18;
  long lVar19;
  long *plVar20;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  int *local_98;
  undefined8 uStack_90;
  int *local_88;
  int *local_80;
  int *local_78;
  long *local_70;
  undefined8 *local_68;
  
  puVar1 = (undefined8 *)(param_1 + 0x690);
  if (((*(long *)(param_1 + 0x6f0) == 0) ||
      ((*(byte *)(*(long *)(param_1 + 0x6f0) + 0x1e8) & 1) != 0)) &&
     ((*(long *)(param_1 + 0x6b0) == 0 || ((*(byte *)(*(long *)(param_1 + 0x6b0) + 0x1e8) & 1) != 0)
      ))) {
    local_a0 = *puVar1;
    local_98 = *(int **)(param_1 + 0x698);
    uStack_90 = *(undefined8 *)(param_1 + 0x6a0);
  }
  else {
    local_98 = (int *)0x0;
    uStack_90 = 0;
    local_a0 = 0;
  }
  local_88 = (int *)0x494b456e3fefe928;
  local_80 = (int *)0x3be2811;
  local_78 = (int *)0xb;
  local_70 = (long *)0x0;
  piVar7 = (int *)FUN_00d27b5c(&local_a0,&local_88);
  if ((piVar7 == (int *)0x0) || (*(ushort *)((long)piVar7 - (long)*piVar7) < 7)) {
    uVar9 = 0;
  }
  else {
    uVar10 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3];
    uVar9 = 0;
    if (uVar10 != 0) {
      uVar9 = *(undefined4 *)((long)piVar7 + uVar10);
    }
  }
  *(undefined4 *)(param_1 + 0x1480) = uVar9;
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (((*(long *)(param_1 + 0x6f0) == 0) ||
      ((*(byte *)(*(long *)(param_1 + 0x6f0) + 0x1e8) & 1) != 0)) &&
     ((*(long *)(param_1 + 0x6b0) == 0 || ((*(byte *)(*(long *)(param_1 + 0x6b0) + 0x1e8) & 1) != 0)
      ))) {
    local_a0 = *puVar1;
    local_98 = *(int **)(param_1 + 0x698);
    uStack_90 = *(undefined8 *)(param_1 + 0x6a0);
  }
  else {
    local_98 = (int *)0x0;
    uStack_90 = 0;
    local_a0 = 0;
  }
  local_88 = (int *)0xe610b3487c15d31c;
  local_80 = (int *)0x3c42c59;
  local_78 = (int *)0x8;
  local_70 = (long *)0x0;
  piVar7 = (int *)FUN_00d27b5c(&local_a0,&local_88);
  if ((piVar7 == (int *)0x0) || (*(ushort *)((long)piVar7 - (long)*piVar7) < 7)) {
    uVar9 = 0;
  }
  else {
    uVar10 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3];
    uVar9 = 0;
    if (uVar10 != 0) {
      uVar9 = *(undefined4 *)((long)piVar7 + uVar10);
    }
  }
  *(undefined4 *)(param_1 + 0x1484) = uVar9;
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (((*(long *)(param_1 + 0x6f0) == 0) ||
      ((*(byte *)(*(long *)(param_1 + 0x6f0) + 0x1e8) & 1) != 0)) &&
     ((*(long *)(param_1 + 0x6b0) == 0 || ((*(byte *)(*(long *)(param_1 + 0x6b0) + 0x1e8) & 1) != 0)
      ))) {
    local_a0 = *puVar1;
    local_98 = *(int **)(param_1 + 0x698);
    uStack_90 = *(undefined8 *)(param_1 + 0x6a0);
  }
  else {
    local_98 = (int *)0x0;
    uStack_90 = 0;
    local_a0 = 0;
  }
  local_88 = (int *)0xf727b038aadbca48;
  local_80 = (int *)0x3c350d1;
  local_78 = (int *)0xb;
  local_70 = (long *)0x0;
  piVar7 = (int *)FUN_00d27b5c(&local_a0,&local_88);
  if ((piVar7 == (int *)0x0) || (*(ushort *)((long)piVar7 - (long)*piVar7) < 7)) {
    uVar9 = 0;
  }
  else {
    uVar10 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3];
    uVar9 = 0;
    if (uVar10 != 0) {
      uVar9 = *(undefined4 *)((long)piVar7 + uVar10);
    }
  }
  *(undefined4 *)(param_1 + 0x1488) = uVar9;
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (((*(long *)(param_1 + 0x6f0) == 0) ||
      ((*(byte *)(*(long *)(param_1 + 0x6f0) + 0x1e8) & 1) != 0)) &&
     ((*(long *)(param_1 + 0x6b0) == 0 || ((*(byte *)(*(long *)(param_1 + 0x6b0) + 0x1e8) & 1) != 0)
      ))) {
    local_a0 = *puVar1;
    local_98 = *(int **)(param_1 + 0x698);
    uStack_90 = *(undefined8 *)(param_1 + 0x6a0);
  }
  else {
    local_98 = (int *)0x0;
    uStack_90 = 0;
    local_a0 = 0;
  }
  local_88 = (int *)0xfd4d3af2e7eb0c7e;
  local_80 = (int *)0x3c77827;
  local_78 = (int *)0x9;
  local_70 = (long *)0x0;
  piVar7 = (int *)FUN_00d27b5c(&local_a0,&local_88);
  if ((piVar7 == (int *)0x0) || (*(ushort *)((long)piVar7 - (long)*piVar7) < 7)) {
    uVar9 = 0;
  }
  else {
    uVar10 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3];
    uVar9 = 0;
    if (uVar10 != 0) {
      uVar9 = *(undefined4 *)((long)piVar7 + uVar10);
    }
  }
  *(undefined4 *)(param_1 + 0x148c) = uVar9;
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (((*(long *)(param_1 + 0x6f0) == 0) ||
      ((*(byte *)(*(long *)(param_1 + 0x6f0) + 0x1e8) & 1) != 0)) &&
     ((*(long *)(param_1 + 0x6b0) == 0 || ((*(byte *)(*(long *)(param_1 + 0x6b0) + 0x1e8) & 1) != 0)
      ))) {
    local_a0 = *puVar1;
    local_98 = *(int **)(param_1 + 0x698);
    uStack_90 = *(undefined8 *)(param_1 + 0x6a0);
  }
  else {
    local_98 = (int *)0x0;
    uStack_90 = 0;
    local_a0 = 0;
  }
  local_88 = (int *)0x3b49eff78af594de;
  local_80 = (int *)0x3c6a466;
  local_78 = (int *)0xc;
  local_70 = (long *)0x0;
  piVar7 = (int *)FUN_00d27b5c(&local_a0,&local_88);
  if ((piVar7 == (int *)0x0) || (*(ushort *)((long)piVar7 - (long)*piVar7) < 7)) {
    uVar9 = 0;
  }
  else {
    uVar10 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3];
    uVar9 = 0;
    if (uVar10 != 0) {
      uVar9 = *(undefined4 *)((long)piVar7 + uVar10);
    }
  }
  *(undefined4 *)(param_1 + 0x1490) = uVar9;
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (((*(long *)(param_1 + 0x6f0) == 0) ||
      ((*(byte *)(*(long *)(param_1 + 0x6f0) + 0x1e8) & 1) != 0)) &&
     ((*(long *)(param_1 + 0x6b0) == 0 || ((*(byte *)(*(long *)(param_1 + 0x6b0) + 0x1e8) & 1) != 0)
      ))) {
    local_b8 = *puVar1;
    local_b0 = *(undefined8 *)(param_1 + 0x698);
    uStack_a8 = *(undefined8 *)(param_1 + 0x6a0);
  }
  else {
    local_b0 = 0;
    uStack_a8 = 0;
    local_b8 = 0;
  }
  local_88 = (int *)0x89fd6d5c99f1fda6;
  local_80 = (int *)0x3c77831;
  local_78 = (int *)0xf;
  local_70 = (long *)0x0;
  FUN_00fb4c10(&local_a0,&local_b8,&local_88);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_98 != (int *)0x0) {
    if ((*(ushort *)((long)local_98 - (long)*local_98) < 7) ||
       (uVar10 = (ulong)((ushort *)((long)local_98 - (long)*local_98))[3], uVar10 == 0)) {
      puVar8 = (uint *)0x0;
    }
    else {
      puVar8 = (uint *)((long)local_98 + uVar10);
      puVar8 = (uint *)((long)puVar8 + (ulong)*puVar8);
    }
    local_88 = (int *)0x3bd4552;
    puVar8 = bsearch(&local_88,puVar8 + 1,(ulong)*puVar8,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar8 != (uint *)0x0) {
      piVar7 = (int *)((long)puVar8 + (ulong)*puVar8);
      puVar13 = (ushort *)((long)piVar7 - (long)*piVar7);
      if (*puVar13 < 7) {
        piVar14 = (int *)0x0;
      }
      else {
        piVar14 = (int *)0x0;
        if ((ulong)puVar13[3] != 0) {
          puVar8 = (uint *)((long)piVar7 + (ulong)puVar13[3]);
          piVar14 = (int *)((long)puVar8 + (ulong)*puVar8);
        }
      }
      if (((4 < *(ushort *)((long)piVar14 - (long)*piVar14)) &&
          (uVar10 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[2], uVar10 != 0)) &&
         (*(char *)((long)piVar14 + uVar10) == '\x11')) {
        piVar7 = (int *)((long)((long)piVar7 + (ulong)puVar13[3]) +
                        (ulong)*(uint *)((long)piVar7 + (ulong)puVar13[3]));
        if ((10 < *(ushort *)((long)piVar7 - (long)*piVar7)) &&
           (uVar10 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[5], uVar10 != 0)) {
          uVar3 = *(ushort *)((long)piVar7 + uVar10);
          *(undefined8 *)(param_1 + 0x14a0) = *(undefined8 *)(param_1 + 0x1498);
          uVar17 = (uint)uVar3;
          if (uVar17 != 0) {
            puVar2 = (undefined8 *)(param_1 + 0x14b0);
            uVar16 = 0;
            do {
              local_70 = (long *)0x0;
              local_88 = (int *)0x404ffcf94b1bf5b7;
              local_80 = (int *)0x3bd4552;
              local_78 = (int *)&DAT_00000008;
              sVar5 = FUN_010247b8(&local_a0,&local_88,uVar16);
              if (local_70 != (long *)0x0) {
                (**(code **)(*local_70 + 0x20))();
              }
              iVar4 = (int)sVar5;
              piVar7 = *(int **)(param_1 + 0x14a0);
              if (piVar7 < *(int **)(param_1 + 0x14a8)) {
                uVar18 = *puVar2;
                if (((DAT_04865a38 & 1) == 0) &&
                   (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
                  FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                  FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                  __cxa_guard_release(&DAT_04865a38);
                }
                lVar19 = nn::os::GetTlsValue(DAT_04865a30);
                if (lVar19 == 0) {
                  *piVar7 = iVar4;
                }
                else {
                  if (0xf < *(ulong *)(lVar19 + 0x80)) goto LAB_0133ec18;
                  *(undefined8 *)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = uVar18;
                  *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
                  *piVar7 = iVar4;
                  *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
                }
                *(int **)(param_1 + 0x14a0) = piVar7 + 1;
              }
              else {
                uVar15 = *(ulong *)(param_1 + 0x14b8);
                lVar19 = (long)piVar7 - *(long *)(param_1 + 0x1498) >> 2;
                uVar10 = lVar19 + 1;
                if (0x7ffffffffffffffe < uVar15) {
                  uVar15 = 0x7fffffffffffffff;
                }
                if (uVar15 < uVar10) {
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_length_error();
                }
                lVar11 = (long)*(int **)(param_1 + 0x14a8) - *(long *)(param_1 + 0x1498);
                uVar12 = lVar11 >> 1;
                local_70 = (long *)0x0;
                if (uVar10 <= uVar12) {
                  uVar10 = uVar12;
                }
                if (uVar15 >> 1 <= (ulong)(lVar11 >> 2)) {
                  uVar10 = uVar15;
                }
                local_68 = puVar2;
                if (uVar10 == 0) {
                  piVar7 = (int *)0x0;
                }
                else {
                  piVar7 = (int *)(**(code **)(*(long *)*puVar2 + 0x10))
                                            ((long *)*puVar2,uVar10 << 2,4);
                  if (piVar7 == (int *)0x0) {
                    (**(code **)(*(long *)*puVar2 + 0xe8))();
                  }
                }
                piVar14 = piVar7 + lVar19;
                local_70 = (long *)(piVar7 + uVar10);
                uVar18 = *puVar2;
                local_88 = piVar7;
                local_80 = piVar14;
                local_78 = piVar14;
                if (((DAT_04865a38 & 1) == 0) &&
                   (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
                  FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                  FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                  __cxa_guard_release(&DAT_04865a38);
                }
                lVar19 = nn::os::GetTlsValue(DAT_04865a30);
                if (lVar19 == 0) {
                  *piVar14 = iVar4;
                }
                else {
                  if (0xf < *(ulong *)(lVar19 + 0x80)) {
LAB_0133ec18:
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                  *(undefined8 *)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = uVar18;
                  *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
                  *piVar14 = iVar4;
                  *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
                  piVar14 = local_78;
                }
                local_78 = piVar14 + 1;
                FUN_0133ec2c(puVar2,*(undefined8 *)(param_1 + 0x1498),
                             *(undefined8 *)(param_1 + 0x14a0),&local_80);
                piVar7 = *(int **)(param_1 + 0x1498);
                *(int **)(param_1 + 0x1498) = local_80;
                lVar11 = *(long *)(param_1 + 0x14a0);
                *(int **)(param_1 + 0x14a0) = local_78;
                lVar19 = *(long *)(param_1 + 0x14a8);
                *(long **)(param_1 + 0x14a8) = local_70;
                local_78 = (int *)lVar11;
                if (lVar11 - (long)piVar7 != 0) {
                  local_78 = (int *)(lVar11 + ((lVar11 - (long)piVar7) - 4U >> 2 ^
                                              0xffffffffffffffff) * 4);
                }
                if (piVar7 != (int *)0x0) {
                  lVar11 = lVar19 - (long)piVar7;
                  plVar20 = (long *)*local_68;
                  local_88 = piVar7;
                  local_80 = piVar7;
                  local_70 = (long *)lVar19;
                  uVar10 = (**(code **)(*plVar20 + 0xf8))(plVar20);
                  if (((uVar10 & 1) == 0) ||
                     (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
                    (**(code **)(*plVar20 + 0x18))(plVar20,piVar7,lVar11,4);
                  }
                  else {
                    FUN_00c48fe8(plVar20,piVar7,lVar11,4);
                  }
                }
              }
              uVar16 = uVar16 + 1;
            } while (uVar17 != uVar16);
          }
          goto LAB_0133e7f8;
        }
      }
    }
  }
  *(undefined8 *)(param_1 + 0x14a0) = *(undefined8 *)(param_1 + 0x1498);
LAB_0133e7f8:
  if (((*(long *)(param_1 + 0x6f0) == 0) ||
      ((*(byte *)(*(long *)(param_1 + 0x6f0) + 0x1e8) & 1) != 0)) &&
     ((*(long *)(param_1 + 0x6b0) == 0 || ((*(byte *)(*(long *)(param_1 + 0x6b0) + 0x1e8) & 1) != 0)
      ))) {
    local_a0 = *puVar1;
    local_98 = *(int **)(param_1 + 0x698);
    uStack_90 = *(undefined8 *)(param_1 + 0x6a0);
  }
  else {
    local_98 = (int *)0x0;
    uStack_90 = 0;
    local_a0 = 0;
  }
  local_88 = (int *)0x1f1e5752f82834b2;
  local_80 = (int *)0x3bfcf19;
  local_78 = (int *)0x12;
  local_70 = (long *)0x0;
  piVar7 = (int *)FUN_00d27b5c(&local_a0,&local_88);
  if ((piVar7 == (int *)0x0) || (*(ushort *)((long)piVar7 - (long)*piVar7) < 7)) {
    uVar9 = 0;
  }
  else {
    uVar10 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3];
    uVar9 = 0;
    if (uVar10 != 0) {
      uVar9 = *(undefined4 *)((long)piVar7 + uVar10);
    }
  }
  *(undefined4 *)(param_1 + 0x14d0) = uVar9;
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (((*(long *)(param_1 + 0x6f0) == 0) ||
      ((*(byte *)(*(long *)(param_1 + 0x6f0) + 0x1e8) & 1) != 0)) &&
     ((*(long *)(param_1 + 0x6b0) == 0 || ((*(byte *)(*(long *)(param_1 + 0x6b0) + 0x1e8) & 1) != 0)
      ))) {
    local_a0 = *puVar1;
    local_98 = *(int **)(param_1 + 0x698);
    uStack_90 = *(undefined8 *)(param_1 + 0x6a0);
  }
  else {
    local_98 = (int *)0x0;
    uStack_90 = 0;
    local_a0 = 0;
  }
  local_88 = (int *)0xe1d3073dc843f1c4;
  local_80 = (int *)0x3c8b5b7;
  local_78 = (int *)0xd;
  local_70 = (long *)0x0;
  piVar7 = (int *)FUN_00d27b5c(&local_a0,&local_88);
  if ((piVar7 == (int *)0x0) || (*(ushort *)((long)piVar7 - (long)*piVar7) < 7)) {
    uVar9 = 0;
  }
  else {
    uVar10 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3];
    uVar9 = 0;
    if (uVar10 != 0) {
      uVar9 = *(undefined4 *)((long)piVar7 + uVar10);
    }
  }
  *(undefined4 *)(param_1 + 0x14d4) = uVar9;
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (((*(long *)(param_1 + 0x6f0) == 0) ||
      ((*(byte *)(*(long *)(param_1 + 0x6f0) + 0x1e8) & 1) != 0)) &&
     ((*(long *)(param_1 + 0x6b0) == 0 || ((*(byte *)(*(long *)(param_1 + 0x6b0) + 0x1e8) & 1) != 0)
      ))) {
    local_a0 = *puVar1;
    local_98 = *(int **)(param_1 + 0x698);
    uStack_90 = *(undefined8 *)(param_1 + 0x6a0);
  }
  else {
    local_98 = (int *)0x0;
    uStack_90 = 0;
    local_a0 = 0;
  }
  local_88 = (int *)0xf1611d16a5477bbc;
  local_80 = (int *)0x3c190ee;
  local_78 = (int *)0x9;
  local_70 = (long *)0x0;
  piVar7 = (int *)FUN_00d27b5c(&local_a0,&local_88);
  if ((piVar7 == (int *)0x0) || (*(ushort *)((long)piVar7 - (long)*piVar7) < 7)) {
    uVar9 = 0;
  }
  else {
    uVar10 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3];
    uVar9 = 0;
    if (uVar10 != 0) {
      uVar9 = *(undefined4 *)((long)piVar7 + uVar10);
    }
  }
  *(undefined4 *)(param_1 + 0x14d8) = uVar9;
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  return;
}


