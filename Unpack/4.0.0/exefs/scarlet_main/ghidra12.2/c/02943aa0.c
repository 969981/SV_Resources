/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02943aa0; name: FUN_02943aa0
 */


undefined4 FUN_02943aa0(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = FUN_014813e4(*(undefined8 *)(param_1 + 8));
  uVar1 = FUN_01481420(uVar2,param_2);
  uVar3 = FUN_0292329c(*(undefined8 *)(*(long *)(param_1 + 8) + 0x290),uVar1);
  if ((uVar3 & 1) == 0) {
    uVar1 = 10;
  }
  return uVar1;
}


