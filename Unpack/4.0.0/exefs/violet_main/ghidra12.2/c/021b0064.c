/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021b0064; name: FUN_021b0064
 */


void FUN_021b0064(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = param_2[3];
  lVar1 = param_2[4];
  lVar3 = param_2[5];
  lVar2 = param_2[6];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = lVar3;
  param_1[6] = lVar2;
  param_1[3] = lVar4;
  param_1[4] = lVar1;
  if (param_2[1] - *param_2 != 0) {
    FUN_021b03e4(param_1,param_2[1] - *param_2 >> 10);
    lVar4 = *param_2;
    lVar1 = param_2[1];
    lVar3 = param_1[1];
    if (lVar4 != lVar1) {
      do {
        FUN_021b0468(param_1 + 3,lVar3,lVar4);
        lVar4 = lVar4 + 0x400;
        lVar3 = lVar3 + 0x400;
      } while (lVar1 != lVar4);
    }
    param_1[1] = lVar3;
  }
  return;
}


