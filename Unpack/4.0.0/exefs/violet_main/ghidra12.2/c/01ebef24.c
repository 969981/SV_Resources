/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ebef24; name: FUN_01ebef24
 */


void FUN_01ebef24(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  lVar10 = param_1[1];
  if (lVar10 == param_1[2]) {
    uVar11 = param_1[4];
    lVar10 = lVar10 - *param_1 >> 6;
    if (0x7ffffffffffffffe < uVar11) {
      uVar11 = 0x7fffffffffffffff;
    }
    uVar1 = lVar10 * -0x5555555555555555 + 1;
    if (uVar11 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar7 = param_1[2] - *param_1 >> 6;
    uVar9 = lVar7 * 0x5555555555555556;
    if (uVar1 <= uVar9) {
      uVar1 = uVar9;
    }
    if (uVar11 >> 1 <= (ulong)(lVar7 * -0x5555555555555555)) {
      uVar1 = uVar11;
    }
    if (uVar1 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar1 * 0xc0,0x10);
      if (lVar7 == 0) {
        (**(code **)(*(long *)param_1[3] + 0xe8))();
      }
    }
    lVar13 = lVar7 + lVar10 * 0x40;
    FUN_00b1ed98(param_1[3],lVar13,param_2);
    lVar10 = *param_1;
    lVar14 = param_1[1];
    if (lVar14 == lVar10) {
      lVar16 = lVar13;
      lVar14 = lVar10;
    }
    else {
      lVar16 = 0;
      do {
        lVar15 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar6 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar6 != 0) {
          if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar15;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        }
        lVar15 = lVar13 + lVar16;
        lVar2 = lVar14 + lVar16;
        memcpy((void *)(lVar15 + -0xc0),(void *)(lVar2 + -0xc0),0x28);
        *(undefined2 *)(lVar15 + -0x98) = *(undefined2 *)(lVar2 + -0x98);
        *(undefined2 *)(lVar15 + -0x96) = *(undefined2 *)(lVar2 + -0x96);
        *(undefined1 *)(lVar15 + -0x94) = *(undefined1 *)(lVar2 + -0x94);
        *(undefined1 *)(lVar15 + -0x93) = *(undefined1 *)(lVar2 + -0x93);
        *(undefined1 *)(lVar15 + -0x92) = *(undefined1 *)(lVar2 + -0x92);
        *(undefined4 *)(lVar15 + -0x90) = *(undefined4 *)(lVar2 + -0x90);
        *(undefined4 *)(lVar15 + -0x8c) = *(undefined4 *)(lVar2 + -0x8c);
        *(undefined4 *)(lVar15 + -0x88) = *(undefined4 *)(lVar2 + -0x88);
        memcpy((void *)(lVar15 + -0x80),(void *)(lVar2 + -0x80),0x32);
        *(undefined8 *)(lVar15 + -0x40) = 0;
        *(undefined8 *)(lVar15 + -0x48) = 0;
        FUN_00ca1ea4((undefined8 *)(lVar15 + -0x48),lVar2 + -0x48);
        uVar4 = *(undefined4 *)(lVar2 + -0x20);
        uVar8 = *(undefined8 *)(lVar2 + -0x30);
        uVar3 = *(undefined8 *)(lVar2 + -0x28);
        *(undefined8 *)(lVar15 + -0x18) = 0;
        *(undefined8 *)(lVar15 + -0x30) = uVar8;
        *(undefined8 *)(lVar15 + -0x28) = uVar3;
        *(undefined4 *)(lVar15 + -0x20) = uVar4;
        *(undefined8 *)(lVar15 + -0x10) = 0;
        FUN_00c93a38((undefined8 *)(lVar15 + -0x18),lVar2 + -0x18);
        uVar8 = *(undefined8 *)(lVar2 + -8);
        *(undefined8 *)(lVar2 + -8) = 0;
        *(undefined8 *)(lVar15 + -8) = uVar8;
        if (lVar6 != 0) {
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        }
        lVar16 = lVar16 + -0xc0;
      } while (lVar10 - lVar14 != lVar16);
      lVar10 = *param_1;
      lVar16 = lVar13 + lVar16;
      lVar14 = param_1[1];
    }
    lVar15 = param_1[2];
    *param_1 = lVar16;
    param_1[1] = lVar13 + 0xc0;
    param_1[2] = lVar7 + uVar1 * 0xc0;
    while (lVar14 != lVar10) {
      lVar14 = lVar14 + -0xc0;
      FUN_01a0b710(lVar14);
    }
    if (lVar10 != 0) {
      plVar12 = (long *)param_1[3];
      uVar11 = (**(code **)(*plVar12 + 0xf8))(plVar12);
      if (((uVar11 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x01ebf25c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar12 + 0x18))(plVar12,lVar10,lVar15 - lVar10,0x10);
        return;
      }
      FUN_00c48fe8(plVar12,lVar10,lVar15 - lVar10,0x10);
      return;
    }
  }
  else {
    FUN_00b1ed98(param_1[3],lVar10,param_2);
    param_1[1] = lVar10 + 0xc0;
  }
  return;
}


