/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005ecd18; name: FUN_005ecd18
 */


void FUN_005ecd18(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)FUN_01cf7e20();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = (long)plVar3;
  lVar2 = param_2[1] - *param_2;
  if (lVar2 != 0) {
    if (0x38e38e38e38e38e < (ulong)((lVar2 >> 3) * -0x71c71c71c71c71c7)) {
                    /* try { // try from 005ecdd4 to 005ecddb has its CatchHandler @ 005ecddc */
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,lVar2,8);
    param_1[2] = lVar4 + (lVar2 >> 3) * 8;
    *param_1 = lVar4;
    param_1[1] = lVar4;
    lVar1 = param_2[1];
    for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0x48) {
                    /* try { // try from 005ecda4 to 005ecdaf has its CatchHandler @ 005ecde4 */
      FUN_005ee2e0(lVar4,lVar2);
      lVar4 = lVar4 + 0x48;
    }
    param_1[1] = lVar4;
  }
  return;
}


