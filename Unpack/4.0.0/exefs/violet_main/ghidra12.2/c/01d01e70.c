/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d01e70; name: FUN_01d01e70
 */


void FUN_01d01e70(undefined8 *param_1,long *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  
  uVar3 = FUN_01cf7e20();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = uVar3;
  if (param_2[1] - *param_2 != 0) {
    FUN_01d01fd8(param_1,param_2[1] - *param_2 >> 2);
    puVar1 = (undefined4 *)param_2[1];
    puVar2 = (undefined4 *)param_1[1];
    for (puVar4 = (undefined4 *)*param_2; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      *puVar2 = *puVar4;
      puVar2 = puVar2 + 1;
    }
    param_1[1] = puVar2;
  }
  return;
}


