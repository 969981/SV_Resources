/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0127173c; name: FUN_0127173c
 */


void FUN_0127173c(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  puVar2 = PTR_LAB_047d3900;
  puVar13 = (undefined8 *)param_1[1];
  if ((ulong)(param_1[2] - (long)puVar13 >> 3) < param_2) {
    uVar9 = param_1[4];
    lVar11 = (long)puVar13 - *param_1 >> 3;
    uVar6 = param_2 + lVar11;
    if (0x7ffffffffffffffe < uVar9) {
      uVar9 = 0x7fffffffffffffff;
    }
    if (uVar9 < uVar6) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar7 = param_1[2] - *param_1;
    uVar8 = lVar7 >> 2;
    if (uVar6 <= uVar8) {
      uVar6 = uVar8;
    }
    if (uVar9 >> 1 <= (ulong)(lVar7 >> 3)) {
      uVar6 = uVar9;
    }
    if (uVar6 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar6 << 3,8);
      if (lVar7 == 0) {
        (**(code **)(*(long *)param_1[3] + 0xe8))();
      }
    }
    puVar14 = (undefined8 *)(lVar7 + lVar11 * 8);
    lVar11 = param_2 << 3;
    puVar1 = puVar14 + param_2;
    puVar13 = puVar14;
    do {
      lVar12 = param_1[3];
      if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar4 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar4 == 0) {
        *puVar13 = 0;
      }
      else {
        if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_01271aec;
        *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar12;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
        *puVar13 = 0;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      }
      puVar13 = puVar13 + 1;
      lVar11 = lVar11 + -8;
    } while (lVar11 != 0);
    lVar11 = *param_1;
    lVar12 = param_1[1];
    if (lVar12 != lVar11) {
      do {
        lVar4 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar5 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar5 == 0) {
          puVar14[-1] = *(undefined8 *)(lVar12 + -8);
        }
        else {
          if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_01271aec;
          *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar4;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
          puVar14[-1] = *(undefined8 *)(lVar12 + -8);
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        }
        lVar12 = lVar12 + -8;
        puVar14 = puVar14 + -1;
      } while (lVar11 != lVar12);
      lVar11 = *param_1;
    }
    lVar12 = param_1[2];
    *param_1 = (long)puVar14;
    param_1[1] = (long)puVar1;
    param_1[2] = lVar7 + uVar6 * 8;
    if (lVar11 != 0) {
      plVar10 = (long *)param_1[3];
      uVar6 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x01271938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar10 + 0x18))(plVar10,lVar11,lVar12 - lVar11,8);
        return;
      }
      FUN_00c48fe8(plVar10,lVar11,lVar12 - lVar11,8);
      return;
    }
  }
  else {
    puVar14 = puVar13;
    if (param_2 != 0) {
      puVar14 = puVar13 + param_2;
      lVar11 = param_2 << 3;
      do {
        lVar7 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(puVar2,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar12 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar12 == 0) {
          *puVar13 = 0;
        }
        else {
          if (0xf < *(ulong *)(lVar12 + 0x80)) {
LAB_01271aec:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = lVar7;
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
          *puVar13 = 0;
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
        }
        puVar13 = puVar13 + 1;
        lVar11 = lVar11 + -8;
      } while (lVar11 != 0);
    }
    param_1[1] = (long)puVar14;
  }
  return;
}


