/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0055f880; name: FUN_0055f880
 */


undefined1  [16]
FUN_0055f880(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined8 local_28;
  
  puVar1 = (undefined8 *)FUN_0055f964(param_1,&local_28,param_2);
  puVar3 = (undefined8 *)*puVar1;
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)(**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],0x48,8);
    param_4 = (undefined8 *)*param_4;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[4] = 0;
    puVar3[7] = param_4[3];
    puVar3[4] = *param_4;
    puVar3[5] = param_4[1];
    puVar3[6] = param_4[2];
    param_4[2] = 0;
    *param_4 = 0;
    param_4[1] = 0;
    FUN_0026349c(puVar3 + 8);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = local_28;
    *puVar1 = puVar3;
    if (*(long *)*param_1 == 0) {
      puVar1 = puVar3;
    }
    else {
      *param_1 = *(long *)*param_1;
      puVar1 = (undefined8 *)*puVar1;
    }
    FUN_010108e0(param_1[1],puVar1);
    uVar2 = 1;
    param_1[3] = param_1[3] + 1;
  }
  else {
    uVar2 = 0;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = puVar3;
  return auVar4;
}


