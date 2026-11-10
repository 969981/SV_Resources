/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005c7e84; name: FUN_005c7e84
 */


void FUN_005c7e84(long *param_1,long *param_2)

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
    if (0x124924924924924 < (ulong)((lVar2 >> 5) * 0x6db6db6db6db6db7)) {
                    /* try { // try from 005c7f40 to 005c7f47 has its CatchHandler @ 005c7f48 */
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,lVar2,8);
    param_1[2] = lVar4 + (lVar2 >> 5) * 0x20;
    *param_1 = lVar4;
    param_1[1] = lVar4;
    lVar1 = param_2[1];
    for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0xe0) {
                    /* try { // try from 005c7f10 to 005c7f1b has its CatchHandler @ 005c7f50 */
      FUN_005c7fb0(lVar4,lVar2);
      lVar4 = lVar4 + 0xe0;
    }
    param_1[1] = lVar4;
  }
  return;
}


