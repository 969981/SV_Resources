/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0046a340; name: FUN_0046a340
 */


undefined8 FUN_0046a340(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_003eb2b0(*(undefined8 *)(param_1 + 0x18));
  if ((*(int *)(param_1 + 4) == 1) &&
     ((iVar2 = FUN_0047e430(*(undefined8 *)(param_1 + 0x58)), iVar2 < 1 ||
      (iVar3 = FUN_0046a5d0(uVar1), iVar3 < iVar2 + 2)))) {
    return 0;
  }
  uVar4 = FUN_003ec4e0(uVar1,0xffffffff);
  return uVar4;
}


