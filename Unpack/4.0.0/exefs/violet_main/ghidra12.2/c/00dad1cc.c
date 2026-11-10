/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dad1cc; name: FUN_00dad1cc
 */


void FUN_00dad1cc(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = param_2[3];
  lVar4 = param_2[5];
  lVar3 = param_2[6];
  param_1[4] = param_2[4];
  param_1[2] = 0;
  param_1[3] = lVar2;
  param_1[5] = lVar4;
  param_1[6] = lVar3;
  uVar5 = param_2[1];
  if (uVar5 == 0) {
    return;
  }
  uVar1 = 0x7fffffffffffffff;
  if ((ulong)param_1[4] < 0x1ffffffffffffff) {
    uVar1 = param_1[4] << 6;
  }
  if (uVar1 < uVar5) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar2 = (uVar5 - 1 >> 6) + 1;
  lVar4 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],lVar2 * 8,1);
  if (lVar4 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xe8))();
  }
  param_1[2] = lVar2;
  *param_1 = lVar4;
  param_1[1] = 0;
  FUN_00db6650(param_1,*param_2,0,*param_2 + ((ulong)param_2[1] >> 3 & 0x1ffffffffffffff8),
               param_2[1] & 0x3f);
  return;
}


