/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0273b264; name: FUN_0273b264
 */


void FUN_0273b264(long param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ccbb30();
  uVar2 = *(undefined8 *)(param_1 + 0x84);
  *puVar1 = *(undefined8 *)(param_1 + 0x7c);
  puVar1[1] = uVar2;
  FUN_00ccbb18(param_1,param_2);
  return;
}


