/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004769b0; name: FUN_004769b0
 */


bool FUN_004769b0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_0043e390();
  uVar3 = FUN_0043e390(param_2);
  iVar1 = thunk_FUN_003df4b0(uVar2,uVar3);
  return iVar1 == 0;
}


