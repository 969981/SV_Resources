/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00df6b40; name: FUN_00df6b40
 */


void FUN_00df6b40(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    lVar10 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar7 == 0) {
      uVar2 = param_2[1];
      *puVar1 = *param_2;
      puVar1[1] = uVar2;
    }
    else {
      if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_00df6ed8;
      *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar10;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      uVar2 = param_2[1];
      *puVar1 = *param_2;
      puVar1[1] = uVar2;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar1 + 2);
  }
  else {
    lVar10 = (long)puVar1 - *param_1 >> 4;
    uVar5 = lVar10 + 1;
    if (uVar5 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar7 = param_1[2] - *param_1;
    uVar8 = lVar7 >> 3;
    if (uVar5 <= uVar8) {
      uVar5 = uVar8;
    }
    if (0x7fffffffffffffe < (ulong)(lVar7 >> 4)) {
      uVar5 = 0xfffffffffffffff;
    }
    if (uVar5 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar5 << 4,8);
      if (lVar7 == 0) {
        (**(code **)(*(long *)param_1[3] + 0xe8))();
      }
    }
    puVar1 = (undefined8 *)(lVar7 + lVar10 * 0x10);
    lVar10 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar4 == 0) {
      uVar2 = param_2[1];
      *puVar1 = *param_2;
      puVar1[1] = uVar2;
    }
    else {
      if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_00df6ed8:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar10;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      uVar2 = param_2[1];
      *puVar1 = *param_2;
      puVar1[1] = uVar2;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    }
    lVar10 = *param_1;
    lVar4 = param_1[1];
    puVar11 = puVar1;
    if (lVar4 != lVar10) {
      do {
        lVar12 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar6 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar6 == 0) {
          uVar2 = *(undefined8 *)(lVar4 + -8);
          puVar11[-2] = *(undefined8 *)(lVar4 + -0x10);
          puVar11[-1] = uVar2;
        }
        else {
          if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_00df6ed8;
          *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar12;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
          uVar2 = *(undefined8 *)(lVar4 + -8);
          puVar11[-2] = *(undefined8 *)(lVar4 + -0x10);
          puVar11[-1] = uVar2;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        }
        lVar4 = lVar4 + -0x10;
        puVar11 = puVar11 + -2;
      } while (lVar10 != lVar4);
      lVar10 = *param_1;
    }
    *param_1 = (long)puVar11;
    param_1[1] = (long)(puVar1 + 2);
    lVar4 = param_1[2];
    param_1[2] = lVar7 + uVar5 * 0x10;
    if (lVar10 != 0) {
      plVar9 = (long *)param_1[3];
      uVar5 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if ((uVar5 & 1) != 0) {
        lVar7 = FUN_00c4e600();
        if (0 < *(int *)(lVar7 + 0x12c8)) {
          FUN_00c48fe8(plVar9,lVar10,lVar4 - lVar10,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00df6d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar10,lVar4 - lVar10,8);
      return;
    }
  }
  return;
}


