/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028b5464; name: FUN_028b5464
 */


void FUN_028b5464(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 == puVar1) {
    lVar2 = param_2[1];
  }
  else {
    lVar2 = param_2[1];
    do {
      puVar3 = puVar3 + -1;
      uVar4 = *puVar3;
      *puVar3 = 0;
      *(undefined8 *)(lVar2 + -8) = uVar4;
      lVar2 = param_2[1] + -8;
      param_2[1] = lVar2;
    } while (puVar1 != puVar3);
    puVar1 = (undefined8 *)*param_1;
  }
  *param_1 = lVar2;
  param_2[1] = puVar1;
  lVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}


