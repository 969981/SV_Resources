/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029bd8bc; name: FUN_029bd8bc
 */


void FUN_029bd8bc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_2 + 0x18);
  uVar1 = FUN_029bd8f8(param_1,*(undefined8 *)(param_2 + 0x18),param_2 + 0x10);
  FUN_029bdaf0(param_1,param_2,uVar1);
  return;
}


