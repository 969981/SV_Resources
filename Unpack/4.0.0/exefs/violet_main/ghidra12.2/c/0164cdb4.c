/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0164cdb4; name: FUN_0164cdb4
 */


void FUN_0164cdb4(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  if (lVar3 == lVar2) {
    lVar1 = param_2[1];
  }
  else {
    lVar1 = param_2[1];
    lVar2 = lVar2 - lVar3;
    do {
      lVar3 = lVar3 + -0x2850;
      FUN_0164f0a8(param_1 + 3,lVar1 + -0x2850,lVar3);
      lVar1 = param_2[1] + -0x2850;
      lVar2 = lVar2 + 0x2850;
      param_2[1] = lVar1;
    } while (lVar2 != 0);
    lVar2 = *param_1;
  }
  *param_1 = lVar1;
  param_2[1] = lVar2;
  lVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}


