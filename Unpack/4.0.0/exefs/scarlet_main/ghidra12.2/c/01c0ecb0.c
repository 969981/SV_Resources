/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c0ecb0; name: FUN_01c0ecb0
 */


undefined8 FUN_01c0ecb0(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_01c0e740(param_1,1);
  uVar3 = FUN_01c0e740(param_1,2);
  uVar1 = FUN_01c0ec70(uVar2,uVar3);
  FUN_00c419e0(param_1,~uVar1 & 1);
  return 1;
}


