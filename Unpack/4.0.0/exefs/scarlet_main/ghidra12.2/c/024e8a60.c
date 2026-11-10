/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024e8a60; name: FUN_024e8a60
 */


undefined8 FUN_024e8a60(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_024c6ea0(param_1,1);
  uVar3 = FUN_024c6ea0(param_1,2);
  uVar1 = FUN_024e8a20(uVar2,uVar3);
  FUN_00c419e0(param_1,~uVar1 & 1);
  return 1;
}


