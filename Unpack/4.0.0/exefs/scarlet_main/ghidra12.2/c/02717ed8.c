/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02717ed8; name: FUN_02717ed8
 */


void FUN_02717ed8(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  
  lVar5 = param_2[3];
  lVar2 = param_2[4];
  lVar1 = param_2[5];
  lVar3 = param_2[6];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = lVar1;
  param_1[6] = lVar3;
  param_1[3] = lVar5;
  param_1[4] = lVar2;
  uVar4 = param_2[1] - *param_2;
  if (uVar4 != 0) {
    uVar6 = param_1[4];
    if (0x7ffffffffffffffe < uVar6) {
      uVar6 = 0x7fffffffffffffff;
    }
    if (uVar6 < uVar4) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    plVar7 = param_1 + 3;
    lVar5 = (**(code **)(*(long *)*plVar7 + 0x10))((long *)*plVar7,uVar4,1);
    if (lVar5 == 0) {
      (**(code **)(*(long *)*plVar7 + 0xe8))();
    }
    *param_1 = lVar5;
    param_1[1] = lVar5;
    param_1[2] = lVar5 + uVar4;
    lVar2 = param_2[1];
    for (lVar1 = *param_2; lVar1 != lVar2; lVar1 = lVar1 + 1) {
      FUN_027182d8(plVar7,lVar5,lVar1);
      lVar5 = lVar5 + 1;
    }
    param_1[1] = lVar5;
  }
  return;
}


