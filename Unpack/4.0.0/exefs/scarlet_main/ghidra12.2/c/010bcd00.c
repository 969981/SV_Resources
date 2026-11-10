/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010bcd00; name: FUN_010bcd00
 */


void FUN_010bcd00(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 uVar16;
  long local_78;
  undefined8 *puStack_70;
  undefined8 *local_68;
  long local_60;
  undefined8 *puStack_58;
  
  if (*(long *)(param_1 + 0x110) == 0) {
    *(long *)*param_2 = *(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28) >> 6;
    puVar8 = (undefined8 *)(param_1 + 0x40);
    puVar1 = *(undefined8 **)(param_1 + 0x30);
    if (puVar1 < *(undefined8 **)(param_1 + 0x38)) {
      uVar16 = *puVar8;
      if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar10 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar10 != 0) {
        if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_010bd2b4:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar16;
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      }
      *puVar1 = *param_2;
      puVar1[2] = 0;
      puVar1[1] = 0;
      FUN_00c43ef0(puVar1 + 1,param_2 + 1);
      memcpy(puVar1 + 3,param_2 + 3,0x28);
      if (lVar10 != 0) {
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      }
      *(undefined8 **)(param_1 + 0x30) = puVar1 + 8;
    }
    else {
      uVar7 = *(ulong *)(param_1 + 0x48);
      lVar10 = (long)puVar1 - *(long *)(param_1 + 0x28) >> 6;
      uVar6 = lVar10 + 1;
      if (0x7ffffffffffffffe < uVar7) {
        uVar7 = 0x7fffffffffffffff;
      }
      if (uVar7 < uVar6) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar5 = (long)*(undefined8 **)(param_1 + 0x38) - *(long *)(param_1 + 0x28);
      uVar4 = lVar5 >> 5;
      local_60 = 0;
      if (uVar6 <= uVar4) {
        uVar6 = uVar4;
      }
      if (uVar7 >> 1 <= (ulong)(lVar5 >> 6)) {
        uVar6 = uVar7;
      }
      puStack_58 = puVar8;
      if (uVar6 == 0) {
        local_78 = 0;
      }
      else {
        local_78 = (**(code **)(*(long *)*puVar8 + 0x10))((long *)*puVar8,uVar6 << 6,8);
        if (local_78 == 0) {
          (**(code **)(*(long *)*puVar8 + 0xe8))();
        }
      }
      puVar1 = (undefined8 *)(local_78 + lVar10 * 0x40);
      local_60 = local_78 + uVar6 * 0x40;
      uVar16 = *puVar8;
      puStack_70 = puVar1;
      local_68 = puVar1;
      if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar10 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar10 != 0) {
        if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_010bd2b4;
        *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar16;
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      }
      *puVar1 = *param_2;
      puVar1[1] = 0;
      puVar1[2] = 0;
      FUN_00c43ef0(puVar1 + 1,param_2 + 1);
      memcpy(puVar1 + 3,param_2 + 3,0x28);
      if (lVar10 != 0) {
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      }
      local_68 = local_68 + 8;
      FUN_010bd3a0((long *)(param_1 + 0x28),&local_78);
      FUN_010bd518(&local_78);
    }
  }
  else {
    *(undefined8 *)*param_2 =
         *(undefined8 *)
          (*(long *)(*(long *)(param_1 + 0xd0) +
                    (*(ulong *)(param_1 + 0x108) >> 6 & 0x3fffffffffffff8)) +
          (*(ulong *)(param_1 + 0x108) & 0x1ff) * 8);
    puVar8 = (undefined8 *)(*(long *)(param_1 + 0x28) + *(long *)*param_2 * 0x40);
    *puVar8 = (long *)*param_2;
    FUN_00c43ef0(puVar8 + 1,param_2 + 1);
    memcpy(puVar8 + 3,param_2 + 3,0x28);
    *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + 1;
    *(long *)(param_1 + 0x110) = *(long *)(param_1 + 0x110) + -1;
    FUN_010bd2f4(param_1 + 200);
    uVar6 = *(ulong *)(param_1 + 0x68);
    if (uVar6 != 0) {
      uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
      uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
      uVar4 = *(ulong *)*param_2;
      uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar7 < 2) {
        uVar14 = uVar6 - 1 & uVar4;
      }
      else {
        uVar14 = uVar4;
        if (uVar6 <= uVar4) {
          uVar14 = 0;
          if (uVar6 != 0) {
            uVar14 = uVar4 / uVar6;
          }
          uVar14 = uVar4 - uVar14 * uVar6;
        }
      }
      lVar10 = *(long *)(param_1 + 0x60);
      puVar8 = *(undefined8 **)(lVar10 + uVar14 * 8);
      if ((puVar8 != (undefined8 *)0x0) && (plVar15 = (long *)*puVar8, plVar15 != (long *)0x0)) {
        uVar9 = uVar6 - 1;
        if (uVar7 < 2) {
          do {
            if (plVar15[1] == uVar4) {
              if (plVar15[2] == uVar4) goto LAB_010bce28;
            }
            else if ((plVar15[1] & uVar9) != uVar14) {
              return;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar15[1];
            if (uVar12 == uVar4) {
              if (plVar15[2] == uVar4) goto LAB_010bce28;
            }
            else {
              if (uVar6 <= uVar12) {
                uVar2 = 0;
                if (uVar6 != 0) {
                  uVar2 = uVar12 / uVar6;
                }
                uVar12 = uVar12 - uVar2 * uVar6;
              }
              if (uVar12 != uVar14) {
                return;
              }
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
      }
    }
  }
  return;
LAB_010bce28:
  if (uVar7 < 2) {
    uVar4 = uVar9 & uVar4;
  }
  else if (uVar6 <= uVar4) {
    uVar14 = 0;
    if (uVar6 != 0) {
      uVar14 = uVar4 / uVar6;
    }
    uVar4 = uVar4 - uVar14 * uVar6;
  }
  plVar11 = *(long **)(lVar10 + uVar4 * 8);
  for (plVar13 = (long *)*plVar11; plVar13 != plVar15; plVar13 = (long *)*plVar13) {
    plVar11 = plVar13;
  }
  if (plVar11 != (long *)(param_1 + 0x90)) {
    uVar14 = plVar11[1];
    if (uVar7 < 2) {
      uVar14 = uVar14 & uVar9;
    }
    else if (uVar6 <= uVar14) {
      uVar12 = 0;
      if (uVar6 != 0) {
        uVar12 = uVar14 / uVar6;
      }
      uVar14 = uVar14 - uVar12 * uVar6;
    }
    if (uVar14 == uVar4) goto LAB_010bce7c;
  }
  if (*plVar15 != 0) {
    uVar14 = *(ulong *)(*plVar15 + 8);
    if (uVar7 < 2) {
      uVar14 = uVar14 & uVar9;
    }
    else if (uVar6 <= uVar14) {
      uVar12 = 0;
      if (uVar6 != 0) {
        uVar12 = uVar14 / uVar6;
      }
      uVar14 = uVar14 - uVar12 * uVar6;
    }
    if (uVar14 == uVar4) goto LAB_010bce7c;
  }
  *(undefined8 *)(lVar10 + uVar4 * 8) = 0;
LAB_010bce7c:
  lVar10 = *plVar15;
  if (lVar10 != 0) {
    uVar14 = *(ulong *)(lVar10 + 8);
    if (uVar7 < 2) {
      uVar14 = uVar14 & uVar9;
    }
    else if (uVar6 <= uVar14) {
      uVar7 = 0;
      if (uVar6 != 0) {
        uVar7 = uVar14 / uVar6;
      }
      uVar14 = uVar14 - uVar7 * uVar6;
    }
    if (uVar14 != uVar4) {
      *(long **)(*(long *)(param_1 + 0x60) + uVar14 * 8) = plVar11;
      lVar10 = *plVar15;
    }
  }
  *plVar11 = lVar10;
  *plVar15 = 0;
  *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + -1;
  plVar11 = *(long **)(param_1 + 0x98);
  uVar6 = (**(code **)(*plVar11 + 0xf8))(plVar11);
  if (((uVar6 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x010bcee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar11 + 0x18))(plVar11,plVar15,0x18,8);
    return;
  }
  FUN_00c48fe8(plVar11,plVar15,0x18,8);
  return;
}


