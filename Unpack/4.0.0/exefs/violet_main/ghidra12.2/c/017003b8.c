/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017003b8; name: FUN_017003b8
 */


void FUN_017003b8(undefined8 param_1)

{
  int iVar1;
  
  FUN_00cf6cd0(param_1,0,1);
  iVar1 = FUN_00d34380(param_1,0xfff0b9d8);
  *(int *)PTR_DAT_047d5368 = iVar1;
  FUN_00c5fc50(param_1,0xfff0b9d8,(long)iVar1);
  return;
}


