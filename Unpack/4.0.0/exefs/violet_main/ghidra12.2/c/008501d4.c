/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008501d4; name: FUN_008501d4
 */


void FUN_008501d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  uVar2 = *param_4;
  *(undefined8 *)((long)puVar1 + 7) = *(undefined8 *)((long)param_4 + 7);
  *puVar1 = uVar2;
  uVar2 = param_4[2];
  puVar1[3] = param_4[3];
  puVar1[2] = uVar2;
  uVar2 = param_4[4];
  puVar1[5] = param_4[5];
  puVar1[4] = uVar2;
  FUN_0085f114(*(undefined8 *)(param_1 + 0x18),param_2,param_3,0,0);
  return;
}


