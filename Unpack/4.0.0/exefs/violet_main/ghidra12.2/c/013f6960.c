/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 013f6960; name: FUN_013f6960
 */


void FUN_013f6960(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_013f6994(param_1 + 0x548);
  uVar1 = param_3[1];
  uVar2 = *(undefined1 *)(param_3 + 2);
  *puVar3 = *param_3;
  puVar3[1] = uVar1;
  *(undefined1 *)(puVar3 + 2) = uVar2;
  return;
}


