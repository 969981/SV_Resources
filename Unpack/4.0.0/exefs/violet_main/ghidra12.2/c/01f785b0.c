/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f785b0; name: FUN_01f785b0
 */


void FUN_01f785b0(long param_1,char *param_2)

{
  undefined8 uVar1;
  size_t sVar2;
  
  uVar1 = FUN_01cf7e20();
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  sVar2 = strlen(param_2);
  FUN_01e9f270(param_1,param_2,sVar2);
  return;
}


