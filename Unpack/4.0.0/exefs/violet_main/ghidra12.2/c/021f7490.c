/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021f7490; name: FUN_021f7490
 */


bool FUN_021f7490(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_00cf40ac();
  uVar2 = FUN_00cf44ec(param_1);
  uVar3 = FUN_00cf41a0(param_1);
  cVar1 = FUN_00cf4838(uVar2,uVar3);
  return cVar1 != '\0';
}


