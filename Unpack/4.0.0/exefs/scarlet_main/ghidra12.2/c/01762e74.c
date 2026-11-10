/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01762e74; name: FUN_01762e74
 */


void FUN_01762e74(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  lVar3 = *param_2;
  uVar1 = param_2[1];
  lVar2 = param_2[3];
  param_1[5] = param_2[2];
  param_1[6] = lVar2;
  param_1[3] = lVar3;
  param_1[4] = uVar1;
  if (uVar1 < 5) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar3 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],0xa0,8);
  if (lVar3 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xe8))((long *)param_1[3]);
  }
  *param_1 = lVar3;
  param_1[1] = lVar3;
  param_1[2] = lVar3 + 0xa0;
  FUN_01763088(param_1,5);
  return;
}


