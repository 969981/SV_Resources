/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001d67a4; name: FUN_001d67a4
 */


undefined8 FUN_001d67a4(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[4];
  uVar3 = param_2[1];
  uVar1 = uVar2;
  if (uVar3 <= uVar2) {
    uVar1 = uVar3;
  }
  param_2[1] = uVar3 - uVar1;
  param_2[4] = uVar2 - uVar1;
  *(ulong *)(param_2 + 2) = *(long *)(param_2 + 2) + (ulong)uVar1;
  if (uVar3 - uVar1 == 0 || uVar2 - uVar1 != 0) {
    uVar4 = FUN_001d6a20();
    return uVar4;
  }
  *param_2 = 3;
  return 0;
}


