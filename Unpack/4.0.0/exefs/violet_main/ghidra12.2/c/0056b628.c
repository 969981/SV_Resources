/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0056b628; name: FUN_0056b628
 */


void FUN_0056b628(undefined8 *param_1,long param_2,ulong param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  plVar1 = (long *)FUN_01cf7e20();
  param_1[3] = plVar1;
  if (param_3 != 0) {
    if (param_3 >> 0x3d != 0) {
                    /* try { // try from 0056b6bc to 0056b6c3 has its CatchHandler @ 0056b6c4 */
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = param_3 * 8;
    puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x10))(plVar1,lVar3,8);
    param_1[2] = puVar2 + param_3;
    *param_1 = puVar2;
    param_1[1] = puVar2;
    do {
      puVar4 = puVar2 + 1;
      *puVar2 = 0;
      FUN_0056b434(puVar2,param_2);
      param_2 = param_2 + 8;
      lVar3 = lVar3 + -8;
      puVar2 = puVar4;
    } while (lVar3 != 0);
    param_1[1] = puVar4;
  }
  return;
}


