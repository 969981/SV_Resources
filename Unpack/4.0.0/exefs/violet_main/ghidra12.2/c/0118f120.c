/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0118f120; name: FUN_0118f120
 */


void FUN_0118f120(long *param_1,undefined1 *param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_78 [24];
  
  if ((ulong)param_1[1] < (ulong)param_1[2]) {
    FUN_01190f80(param_1,param_2);
    return;
  }
  uVar11 = param_1[4];
  lVar9 = param_1[1] - *param_1 >> 3;
  if (0x7ffffffffffffffe < uVar11) {
    uVar11 = 0x7fffffffffffffff;
  }
  uVar1 = lVar9 * -0x3333333333333333 + 1;
  if (uVar11 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = param_1[2] - *param_1 >> 3;
  uVar7 = lVar5 * -0x6666666666666666;
  if (uVar1 <= uVar7) {
    uVar1 = uVar7;
  }
  if (uVar11 >> 1 <= (ulong)(lVar5 * -0x3333333333333333)) {
    uVar1 = uVar11;
  }
  if (uVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar1 * 0x28,8);
    if (lVar5 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xe8))();
    }
  }
  lVar15 = param_1[3];
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar3 != 0) {
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_0118f5d0:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar15;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  }
  puVar14 = (undefined1 *)(lVar5 + lVar9 * 8);
  *puVar14 = *param_2;
  lVar9 = lVar5 + lVar9 * 8;
  uVar8 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(lVar9 + 8) = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  uVar10 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(lVar9 + 0x20) = uVar10;
  *(undefined8 *)(lVar9 + 0x10) = uVar8;
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  lVar9 = *param_1;
  lVar15 = param_1[1];
  if (lVar15 == lVar9) {
    puVar6 = puVar14;
    lVar15 = lVar9;
  }
  else {
    lVar3 = 0;
    do {
      lVar16 = param_1[3];
      if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar4 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar4 != 0) {
        if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_0118f5d0;
        *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar16;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      }
      lVar16 = lVar15 + lVar3;
      puVar14[lVar3 + -0x28] = *(undefined1 *)(lVar16 + -0x28);
      uVar8 = *(undefined8 *)(lVar16 + -0x20);
      *(undefined8 *)(lVar16 + -0x20) = 0;
      *(undefined8 *)(puVar14 + lVar3 + -0x20) = uVar8;
      uVar8 = *(undefined8 *)(lVar16 + -0x18);
      uVar10 = *(undefined8 *)(lVar16 + -8);
      *(undefined8 *)(puVar14 + lVar3 + -0x10) = *(undefined8 *)(lVar16 + -0x10);
      *(undefined8 *)(puVar14 + lVar3 + -8) = uVar10;
      *(undefined8 *)(puVar14 + lVar3 + -0x18) = uVar8;
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      }
      lVar3 = lVar3 + -0x28;
    } while (lVar9 - lVar15 != lVar3);
    lVar9 = *param_1;
    lVar15 = param_1[1];
    puVar6 = puVar14 + lVar3;
  }
  lVar3 = param_1[2];
  *param_1 = (long)puVar6;
  param_1[1] = (long)(puVar14 + 0x28);
  param_1[2] = lVar5 + uVar1 * 0x28;
  if (lVar15 != lVar9) {
    puVar13 = *(undefined8 **)(lVar15 + -0x20);
    *(undefined8 *)(lVar15 + -0x20) = 0;
    if (puVar13 != (undefined8 *)0x0) {
      FUN_00c4e5a0(auStack_78,0);
      (**(code **)*puVar13)(puVar13);
      plVar12 = *(long **)(lVar15 + -0x18);
      uVar8 = *(undefined8 *)(lVar15 + -0x10);
      uVar10 = *(undefined8 *)(lVar15 + -8);
      uVar11 = (**(code **)(*plVar12 + 0xf8))(plVar12);
      if (((uVar11 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar12 + 0x18))(plVar12,puVar13,uVar8,uVar10);
      }
      else {
        FUN_00c48fe8(plVar12,puVar13,uVar8,uVar10);
      }
      FUN_00c4e70c(auStack_78);
    }
    if (lVar15 + -0x28 != lVar9) {
      do {
        puVar13 = *(undefined8 **)(lVar15 + -0x48);
        *(undefined8 *)(lVar15 + -0x48) = 0;
        if (puVar13 != (undefined8 *)0x0) {
          FUN_00c4e5a0(auStack_78,0);
          (**(code **)*puVar13)(puVar13);
          plVar12 = *(long **)(lVar15 + -0x40);
          uVar8 = *(undefined8 *)(lVar15 + -0x38);
          uVar10 = *(undefined8 *)(lVar15 + -0x30);
          uVar11 = (**(code **)(*plVar12 + 0xf8))(plVar12);
          if (((uVar11 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
            (**(code **)(*plVar12 + 0x18))(plVar12,puVar13,uVar8,uVar10);
          }
          else {
            FUN_00c48fe8(plVar12,puVar13,uVar8,uVar10);
          }
          FUN_00c4e70c(auStack_78);
        }
        lVar15 = lVar15 + -0x28;
      } while (lVar9 + 0x28 != lVar15);
    }
  }
  if (lVar9 != 0) {
    plVar12 = (long *)param_1[3];
    uVar11 = (**(code **)(*plVar12 + 0xf8))(plVar12);
    if (((uVar11 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar12 + 0x18))(plVar12,lVar9,lVar3 - lVar9,8);
    }
    else {
      FUN_00c48fe8(plVar12,lVar9,lVar3 - lVar9,8);
    }
  }
  return;
}


