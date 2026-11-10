/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029c1524; name: FUN_029c1524
 */


void FUN_029c1524(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_50 [16];
  undefined4 local_28 [2];
  
  FUN_0135d328(auStack_50,param_4,0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar3 = *(undefined8 **)(param_2 + 0x80);
  for (puVar1 = *(undefined8 **)(param_2 + 0x78); puVar1 != puVar3; puVar1 = puVar1 + 4) {
    local_28[0] = (**(code **)(*(long *)*puVar1 + 0xb8))((long *)*puVar1,param_3,param_4);
    puVar2 = (undefined4 *)param_1[1];
    if (puVar2 < (undefined4 *)param_1[2]) {
      *puVar2 = local_28[0];
      param_1[1] = puVar2 + 1;
    }
    else {
      FUN_029c15dc(param_1,local_28);
    }
  }
  FUN_0135d2ec(auStack_50);
  return;
}


