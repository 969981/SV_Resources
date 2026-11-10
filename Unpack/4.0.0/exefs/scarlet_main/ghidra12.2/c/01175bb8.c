/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01175bb8; name: FUN_01175bb8
 */


void FUN_01175bb8(long param_1,long *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  
  if (((((*param_2 != 0) && (*(short *)(*param_2 + 0x1a) != 0)) && (param_2[2] != 0)) &&
      ((*(short *)(param_2[2] + 0x1a) != 0 && (param_2[4] != 0)))) &&
     (*(short *)(param_2[4] + 0x1a) != 0)) {
    lVar10 = *(long *)(param_1 + 0x48);
    puVar1 = (undefined8 *)(param_1 + 0x58);
    if (lVar10 == *(long *)(param_1 + 0x50)) {
      uVar11 = *(ulong *)(param_1 + 0x60);
      lVar10 = lVar10 - *(long *)(param_1 + 0x40) >> 3;
      if (0x7ffffffffffffffe < uVar11) {
        uVar11 = 0x7fffffffffffffff;
      }
      uVar2 = lVar10 * 0x6db6db6db6db6db7 + 1;
      if (uVar11 < uVar2) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar7 = *(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x40) >> 3;
      uVar9 = lVar7 * -0x2492492492492492;
      if (uVar2 <= uVar9) {
        uVar2 = uVar9;
      }
      if (uVar11 >> 1 <= (ulong)(lVar7 * 0x6db6db6db6db6db7)) {
        uVar2 = uVar11;
      }
      if (uVar2 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar2 * 0x38,8);
        if (lVar7 == 0) {
          (**(code **)(*(long *)*puVar1 + 0xe8))();
        }
      }
      lVar13 = lVar7 + lVar10 * 8;
      FUN_01175f98(puVar1,lVar13,param_2);
      lVar10 = *(long *)(param_1 + 0x40);
      lVar8 = *(long *)(param_1 + 0x48);
      if (lVar8 == lVar10) {
        lVar8 = lVar13;
        lVar15 = lVar10;
      }
      else {
        lVar15 = 0;
        do {
          uVar14 = *puVar1;
          if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0))
          {
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
            *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar14;
            *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
          }
          lVar3 = lVar13 + lVar15;
          lVar4 = lVar8 + lVar15;
          *(undefined8 *)(lVar3 + -0x30) = 0;
          *(undefined8 *)(lVar3 + -0x38) = 0;
          FUN_00d0a34c((undefined8 *)(lVar3 + -0x38),lVar4 + -0x38);
          *(undefined8 *)(lVar3 + -0x20) = 0;
          *(undefined8 *)(lVar3 + -0x28) = 0;
          FUN_00c93a38((undefined8 *)(lVar3 + -0x28),lVar4 + -0x28);
          *(undefined8 *)(lVar3 + -0x18) = 0;
          *(undefined8 *)(lVar3 + -0x10) = 0;
          FUN_00f5a410((undefined8 *)(lVar3 + -0x18),lVar4 + -0x18);
          *(undefined8 *)(lVar3 + -8) = *(undefined8 *)(lVar4 + -8);
          if (lVar6 != 0) {
            *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
          }
          lVar15 = lVar15 + -0x38;
        } while (lVar10 - lVar8 != lVar15);
        lVar10 = *(long *)(param_1 + 0x40);
        lVar8 = lVar13 + lVar15;
        lVar15 = *(long *)(param_1 + 0x48);
      }
      lVar6 = *(long *)(param_1 + 0x50);
      *(long *)(param_1 + 0x40) = lVar8;
      *(long *)(param_1 + 0x48) = lVar13 + 0x38;
      *(ulong *)(param_1 + 0x50) = lVar7 + uVar2 * 0x38;
      if ((((lVar15 != lVar10) && (FUN_011753e0(lVar15 + -0x38), lVar15 + -0x38 != lVar10)) &&
          (FUN_011753e0(lVar15 + -0x70), lVar15 + -0x70 != lVar10)) &&
         (((FUN_011753e0(lVar15 + -0xa8), lVar15 + -0xa8 != lVar10 &&
           (FUN_011753e0(lVar15 + -0xe0), lVar15 + -0xe0 != lVar10)) &&
          (FUN_011753e0(lVar15 + -0x118), lVar15 + -0x118 != lVar10)))) {
        do {
          FUN_011753e0(lVar15 + -0x150);
          lVar15 = lVar15 + -0x38;
        } while (lVar10 + 0x118 != lVar15);
      }
      if (lVar10 != 0) {
        plVar12 = (long *)*puVar1;
        lVar6 = lVar6 - lVar10;
        uVar11 = (**(code **)(*plVar12 + 0xf8))(plVar12);
        if (((uVar11 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x01175eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar12 + 0x18))(plVar12,lVar10,lVar6,8);
          return;
        }
        FUN_00c48fe8(plVar12,lVar10,lVar6,8);
        return;
      }
    }
    else {
      FUN_01175f98(puVar1,lVar10,param_2);
      *(long *)(param_1 + 0x48) = lVar10 + 0x38;
    }
  }
  return;
}


