/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f50044; name: FUN_00f50044
 */


undefined8 * FUN_00f50044(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(param_1 + 8);
  puVar3 = param_2;
  if (param_2 + 1 != puVar5) {
    puVar4 = param_2;
    do {
      FUN_01ec41c8(puVar4);
      puVar3 = puVar4 + 1;
      uVar2 = *puVar3;
      *puVar3 = 0;
      *puVar4 = uVar2;
      puVar1 = puVar4 + 2;
      puVar4 = puVar3;
    } while (puVar1 != puVar5);
  }
  FUN_01a091d8(param_1,puVar3);
  return param_2;
}


