/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029b78fc; name: FUN_029b78fc
 */


void FUN_029b78fc(long *param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = *param_1;
  uVar6 = (param_3 - param_2 >> 3) * 0x4ec4ec4ec4ec4ec5;
  if ((ulong)((param_1[2] - lVar5 >> 3) * 0x4ec4ec4ec4ec4ec5) < uVar6) {
    FUN_029b7bcc(param_1);
    uVar2 = param_1[4];
    if (0x7ffffffffffffffe < uVar2) {
      uVar2 = 0x7fffffffffffffff;
    }
    if (uVar2 < uVar6) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar5 = param_1[2] - *param_1 >> 3;
    uVar3 = lVar5 * -0x6276276276276276;
    if (uVar6 <= uVar3) {
      uVar6 = uVar3;
    }
    if (uVar2 >> 1 <= (ulong)(lVar5 * 0x4ec4ec4ec4ec4ec5)) {
      uVar6 = uVar2;
    }
    FUN_029b7c90(param_1,uVar6);
    lVar5 = param_1[1];
    if (param_2 != param_3) {
      do {
        FUN_029b7adc(param_1 + 3,lVar5,param_2);
        param_2 = param_2 + 0x68;
        lVar5 = lVar5 + 0x68;
      } while (param_3 != param_2);
    }
  }
  else {
    uVar2 = (param_1[1] - lVar5 >> 3) * 0x4ec4ec4ec4ec4ec5;
    lVar4 = param_2 + (param_1[1] - lVar5);
    lVar1 = lVar4;
    if (uVar6 <= uVar2) {
      lVar1 = param_3;
    }
    for (; lVar1 != param_2; param_2 = param_2 + 0x68) {
      FUN_029b7a9c(lVar5,param_2);
      lVar5 = lVar5 + 0x68;
    }
    if (uVar2 < uVar6) {
      lVar5 = param_1[1];
      if (lVar1 != param_3) {
        do {
          FUN_029b7adc(param_1 + 3,lVar5,lVar4);
          lVar4 = lVar4 + 0x68;
          lVar5 = lVar5 + 0x68;
        } while (param_3 != lVar4);
      }
      param_1[1] = lVar5;
      return;
    }
    lVar4 = param_1[1];
    while (lVar4 != lVar5) {
      lVar4 = lVar4 + -0x68;
      FUN_00f720b4(lVar4);
    }
  }
  param_1[1] = lVar5;
  return;
}


