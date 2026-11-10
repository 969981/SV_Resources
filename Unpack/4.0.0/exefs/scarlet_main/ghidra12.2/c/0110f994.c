/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0110f994; name: FUN_0110f994
 */


void FUN_0110f994(long *param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  uVar2 = param_1[1];
  plVar8 = param_1 + 3;
  if (uVar2 < (ulong)param_1[2]) {
    FUN_0110fcd4(plVar8,uVar2,param_2);
    param_1[1] = uVar2 + 0xb0;
  }
  else {
    uVar7 = param_1[4];
    lVar6 = (long)(uVar2 - *param_1) >> 4;
    if (0x7ffffffffffffffe < uVar7) {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar2 = lVar6 * 0x2e8ba2e8ba2e8ba3 + 1;
    if (uVar7 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = param_1[2] - *param_1 >> 4;
    uVar5 = lVar4 * 0x5d1745d1745d1746;
    if (uVar2 <= uVar5) {
      uVar2 = uVar5;
    }
    if (uVar7 >> 1 <= (ulong)(lVar4 * 0x2e8ba2e8ba2e8ba3)) {
      uVar2 = uVar7;
    }
    if (uVar2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (**(code **)(*(long *)*plVar8 + 0x10))((long *)*plVar8,uVar2 * 0xb0,8);
      if (lVar4 == 0) {
        (**(code **)(*(long *)*plVar8 + 0xe8))();
      }
    }
    lVar10 = lVar4 + lVar6 * 0x10;
    FUN_0110fcd4(plVar8,lVar10,param_2);
    lVar6 = *param_1;
    lVar12 = param_1[1];
    lVar11 = lVar10;
    if (lVar12 == lVar6) {
      lVar12 = lVar6;
    }
    else {
      do {
        lVar9 = *plVar8;
        lVar11 = lVar11 + -0xb0;
        lVar12 = lVar12 + -0xb0;
        if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar3 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar3 == 0) {
          FUN_0110fe04(lVar11,lVar12);
        }
        else {
          if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar9;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
          FUN_0110fe04(lVar11,lVar12);
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        }
      } while (lVar6 != lVar12);
      lVar6 = *param_1;
      lVar12 = param_1[1];
    }
    lVar9 = param_1[2];
    *param_1 = lVar11;
    param_1[1] = lVar10 + 0xb0;
    param_1[2] = lVar4 + uVar2 * 0xb0;
    if (lVar12 != lVar6) {
      if (*(long **)(lVar12 + -0x10) != (long *)0x0) {
        (**(code **)(**(long **)(lVar12 + -0x10) + 0x20))();
      }
      if (*(long **)(lVar12 + -0x18) != (long *)0x0) {
        (**(code **)(**(long **)(lVar12 + -0x18) + 0x20))();
      }
      FUN_00db239c(lVar12 + -0x58);
      FUN_00db239c(lVar12 + -0x98);
      if (lVar12 + -0xb0 != lVar6) {
        do {
          if (*(long **)(lVar12 + -0xc0) != (long *)0x0) {
            (**(code **)(**(long **)(lVar12 + -0xc0) + 0x20))();
          }
          if (*(long **)(lVar12 + -200) != (long *)0x0) {
            (**(code **)(**(long **)(lVar12 + -200) + 0x20))();
          }
          FUN_00db239c(lVar12 + -0x108);
          FUN_00db239c(lVar12 + -0x148);
          lVar12 = lVar12 + -0xb0;
        } while (lVar6 + 0xb0 != lVar12);
      }
    }
    if (lVar6 != 0) {
      plVar8 = (long *)*plVar8;
      uVar2 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,lVar6,lVar9 - lVar6,8);
      }
      else {
        FUN_00c48fe8(plVar8,lVar6,lVar9 - lVar6,8);
      }
    }
  }
  return;
}


