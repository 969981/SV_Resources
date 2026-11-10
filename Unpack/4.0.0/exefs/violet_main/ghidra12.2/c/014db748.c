/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014db748; name: FUN_014db748
 */


void FUN_014db748(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  
  lVar14 = param_1[1];
  if (lVar14 == param_1[2]) {
    uVar11 = param_1[4];
    lVar14 = lVar14 - *param_1 >> 6;
    uVar8 = lVar14 + 1;
    if (0x7ffffffffffffffe < uVar11) {
      uVar11 = 0x7fffffffffffffff;
    }
    if (uVar11 < uVar8) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar9 = param_1[2] - *param_1;
    uVar10 = lVar9 >> 5;
    if (uVar8 <= uVar10) {
      uVar8 = uVar10;
    }
    if (uVar11 >> 1 <= (ulong)(lVar9 >> 6)) {
      uVar8 = uVar11;
    }
    if (uVar8 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar8 << 6,8);
      if (lVar9 == 0) {
        (**(code **)(*(long *)param_1[3] + 0xe8))();
      }
    }
    lVar15 = param_1[3];
    lVar14 = lVar9 + lVar14 * 0x40;
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar6 == 0) {
      FUN_014dbcf8(lVar14,param_2);
      *(undefined4 *)(lVar14 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    else {
      if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_014dbcbc:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar15;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      FUN_014dbcf8(lVar14,param_2);
      *(undefined4 *)(lVar14 + 0x38) = *(undefined4 *)(param_2 + 0x38);
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    }
    plVar13 = (long *)*param_1;
    plVar12 = (long *)param_1[1];
    if (plVar12 == plVar13) {
      lVar15 = lVar14;
      plVar12 = plVar13;
    }
    else {
      lVar15 = 0;
      do {
        lVar6 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar7 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar7 != 0) {
          if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_014dbcbc;
          *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar6;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        }
        lVar6 = lVar14 + lVar15;
        *(undefined8 *)(lVar6 + -0x40) = 0;
        *(undefined8 *)(lVar6 + -0x38) = 0;
        *(undefined8 *)(lVar6 + -0x30) = 0;
        uVar1 = *(undefined8 *)((long)plVar12 + lVar15 + -0x28);
        uVar2 = *(undefined8 *)((long)plVar12 + lVar15 + -0x20);
        uVar3 = *(undefined8 *)((long)plVar12 + lVar15 + -0x10);
        *(undefined8 *)(lVar6 + -0x18) = *(undefined8 *)((long)plVar12 + lVar15 + -0x18);
        *(undefined8 *)(lVar6 + -0x10) = uVar3;
        *(undefined8 *)(lVar6 + -0x28) = uVar1;
        *(undefined8 *)(lVar6 + -0x20) = uVar2;
        *(undefined8 *)(lVar6 + -0x40) = *(undefined8 *)((long)plVar12 + lVar15 + -0x40);
        *(undefined8 *)(lVar6 + -0x38) = *(undefined8 *)((long)plVar12 + lVar15 + -0x38);
        *(undefined8 *)(lVar6 + -0x30) = *(undefined8 *)((long)plVar12 + lVar15 + -0x30);
        *(undefined8 *)((long)plVar12 + lVar15 + -0x40) = 0;
        *(undefined8 *)((long)plVar12 + lVar15 + -0x38) = 0;
        *(undefined8 *)((long)plVar12 + lVar15 + -0x30) = 0;
        *(undefined4 *)(lVar6 + -8) = *(undefined4 *)((long)plVar12 + lVar15 + -8);
        if (lVar7 != 0) {
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        }
        lVar15 = lVar15 + -0x40;
      } while ((long)plVar13 - (long)plVar12 != lVar15);
      plVar13 = (long *)*param_1;
      lVar15 = lVar14 + lVar15;
      plVar12 = (long *)param_1[1];
    }
    lVar6 = param_1[2];
    *param_1 = lVar15;
    param_1[1] = lVar14 + 0x40;
    param_1[2] = lVar9 + uVar8 * 0x40;
    if (plVar12 != plVar13) {
      lVar14 = plVar12[-8];
      if (lVar14 != 0) {
        lVar9 = plVar12[-6];
        plVar4 = (long *)plVar12[-5];
        plVar12[-7] = lVar14;
        uVar8 = (**(code **)(*plVar4 + 0xf8))(plVar4);
        if (((uVar8 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
          (**(code **)(*plVar4 + 0x18))(plVar4,lVar14,lVar9 - lVar14,1);
        }
        else {
          FUN_00c48fe8(plVar4,lVar14,lVar9 - lVar14,1);
        }
      }
      if (plVar12 + -8 != plVar13) {
        lVar14 = plVar12[-0x10];
        if (lVar14 != 0) {
          lVar9 = plVar12[-0xe];
          plVar4 = (long *)plVar12[-0xd];
          plVar12[-0xf] = lVar14;
          uVar8 = (**(code **)(*plVar4 + 0xf8))(plVar4);
          if (((uVar8 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
            (**(code **)(*plVar4 + 0x18))(plVar4,lVar14,lVar9 - lVar14,1);
          }
          else {
            FUN_00c48fe8(plVar4,lVar14,lVar9 - lVar14,1);
          }
        }
        if (plVar12 + -0x10 != plVar13) {
          do {
            lVar14 = plVar12[-0x18];
            if (lVar14 != 0) {
              lVar9 = plVar12[-0x16];
              plVar4 = (long *)plVar12[-0x15];
              plVar12[-0x17] = lVar14;
              uVar8 = (**(code **)(*plVar4 + 0xf8))(plVar4);
              if (((uVar8 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
                (**(code **)(*plVar4 + 0x18))(plVar4,lVar14,lVar9 - lVar14,1);
              }
              else {
                FUN_00c48fe8(plVar4,lVar14,lVar9 - lVar14,1);
              }
            }
            plVar12 = plVar12 + -8;
          } while (plVar13 + 0x10 != plVar12);
        }
      }
    }
    if (plVar13 != (long *)0x0) {
      plVar12 = (long *)param_1[3];
      uVar8 = (**(code **)(*plVar12 + 0xf8))(plVar12);
      if (((uVar8 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x014db990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar12 + 0x18))(plVar12,plVar13,lVar6 - (long)plVar13,8);
        return;
      }
      FUN_00c48fe8(plVar12,plVar13,lVar6 - (long)plVar13,8);
      return;
    }
  }
  else {
    lVar9 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar15 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar15 == 0) {
      FUN_014dbcf8(lVar14,param_2);
      *(undefined4 *)(lVar14 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    else {
      if (0xf < *(ulong *)(lVar15 + 0x80)) goto LAB_014dbcbc;
      *(long *)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = lVar9;
      *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
      FUN_014dbcf8(lVar14,param_2);
      *(undefined4 *)(lVar14 + 0x38) = *(undefined4 *)(param_2 + 0x38);
      *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
    }
    param_1[1] = lVar14 + 0x40;
  }
  return;
}


