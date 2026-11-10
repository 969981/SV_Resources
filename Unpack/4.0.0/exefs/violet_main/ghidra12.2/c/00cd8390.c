/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cd8390; name: FUN_00cd8390
 */


void FUN_00cd8390(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar4 = param_3[3];
  param_1[5] = param_3[2];
  param_1[6] = uVar4;
  param_1[3] = uVar2;
  param_1[4] = uVar3;
  if (param_2 != 0) {
    FUN_00cd84dc();
    lVar5 = param_1[1];
    lVar1 = lVar5 + param_2 * 8;
    param_2 = param_2 << 3;
    do {
      FUN_00cd840c(param_1 + 3,lVar5);
      lVar5 = lVar5 + 8;
      param_2 = param_2 + -8;
    } while (param_2 != 0);
    param_1[1] = lVar1;
  }
  return;
}


