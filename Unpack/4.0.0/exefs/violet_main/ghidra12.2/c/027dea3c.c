/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027dea3c; name: FUN_027dea3c
 */


void FUN_027dea3c(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar3 = FUN_01cf7e20();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = uVar3;
  if (param_2[1] - *param_2 != 0) {
    FUN_027df148(param_1,param_2[1] - *param_2 >> 5);
    lVar2 = param_2[1];
    lVar4 = param_1[1];
    for (lVar1 = *param_2; lVar1 != lVar2; lVar1 = lVar1 + 0x20) {
      FUN_01cfa5b0(lVar4,lVar1);
      lVar4 = lVar4 + 0x20;
    }
    param_1[1] = lVar4;
  }
  return;
}


