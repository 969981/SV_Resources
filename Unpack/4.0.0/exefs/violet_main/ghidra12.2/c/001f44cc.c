/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f44cc; name: FUN_001f44cc
 */


void FUN_001f44cc(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  lVar2 = param_1[6];
  puVar1 = param_1;
  do {
    puVar1 = (undefined8 *)*puVar1;
    if (puVar1 == (undefined8 *)0x0) goto LAB_001f4558;
    lVar3 = puVar1[1];
    puVar1[4] = lVar3;
    puVar1[5] = lVar3;
    puVar1[3] = lVar3;
    puVar1[3] = lVar3 + param_1[7];
    lVar2 = lVar2 + -1;
    puVar1[4] = lVar3 + param_1[7];
  } while (lVar2 != 0);
  puVar4 = (undefined8 *)*puVar1;
  *puVar1 = 0;
  while (puVar4 != (undefined8 *)0x0) {
    uVar5 = param_1[2];
    puVar1 = (undefined8 *)*puVar4;
    FUN_001f45b0(uVar5,puVar4[1]);
    puVar4[1] = 0;
    FUN_001f45b0(uVar5,puVar4);
    puVar4 = puVar1;
  }
  param_1[5] = param_1[6];
LAB_001f4558:
  param_1[1] = *param_1;
  return;
}


