/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dffe84; name: FUN_01dffe84
 */


void FUN_01dffe84(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lStack_60;
  long local_58;
  
  uVar4 = (long)param_3 - (long)param_2 >> 5;
  puVar5 = (undefined8 *)*param_1;
  if ((ulong)(param_1[2] - (long)puVar5 >> 5) < uVar4) {
    FUN_01dfffd8(param_1);
    uVar3 = FUN_01e00074(param_1,uVar4);
    FUN_019506f8(param_1,uVar3);
    lStack_60 = param_1[1];
    local_58 = lStack_60 + uVar4 * 0x20;
  }
  else {
    uVar1 = param_1[1] - (long)puVar5 >> 5;
    puVar2 = param_2;
    param_2 = (undefined8 *)((long)param_2 + (param_1[1] - (long)puVar5));
    if (uVar4 <= uVar1) {
      param_2 = param_3;
    }
    for (; param_2 != puVar2; puVar2 = puVar2 + 4) {
      puVar5[1] = puVar2[1];
      *puVar5 = *puVar2;
      FUN_00fa4838(puVar5 + 2,puVar2 + 2);
      puVar5 = puVar5 + 4;
    }
    if (uVar4 <= uVar1) {
      FUN_01937824(param_1,puVar5);
      return;
    }
    lStack_60 = param_1[1];
    local_58 = lStack_60 + (uVar4 - ((ulong)(lStack_60 - *param_1) >> 5)) * 0x20;
  }
  FUN_01950780(param_1 + 3,param_2,param_3,&lStack_60);
  param_1[1] = lStack_60;
  return;
}


