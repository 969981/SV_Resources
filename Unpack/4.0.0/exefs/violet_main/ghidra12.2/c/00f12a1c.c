/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f12a1c; name: FUN_00f12a1c
 */


void FUN_00f12a1c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00f12a48(param_1 + 0x100);
  uVar1 = param_3[1];
  *puVar2 = *param_3;
  puVar2[1] = uVar1;
  return;
}


