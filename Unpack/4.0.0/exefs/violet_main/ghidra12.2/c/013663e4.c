/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 013663e4; name: FUN_013663e4
 */


void FUN_013663e4(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)PTR_DAT_047d8b70;
  if (*(long *)(param_2 + 0x10) != 0) {
    puVar1 = (undefined8 *)(*(long *)(param_2 + 0x10) + 0x30);
  }
  *(undefined8 *)(param_2 + 8) = *puVar1;
  uVar2 = FUN_013666d8();
  FUN_013664d4(param_1,param_2,uVar2);
  return;
}


