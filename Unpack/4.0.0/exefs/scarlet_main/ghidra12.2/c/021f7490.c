/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


