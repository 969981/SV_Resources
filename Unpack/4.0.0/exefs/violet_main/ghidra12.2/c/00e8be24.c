/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e8be24; name: FUN_00e8be24
 */


bool FUN_00e8be24(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)PTR_DAT_047d8b70;
  if (*(long *)(param_2 + 0x10) != 0) {
    puVar1 = (undefined8 *)(*(long *)(param_2 + 0x10) + 0x30);
  }
  *(undefined8 *)(param_2 + 8) = *puVar1;
  lVar2 = FUN_00e8d150();
  if (lVar2 == 0) {
    FUN_00e8c43c(param_1,param_2);
  }
  return lVar2 == 0;
}


