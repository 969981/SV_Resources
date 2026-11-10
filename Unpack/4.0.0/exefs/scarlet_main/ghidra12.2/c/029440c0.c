/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029440c0; name: FUN_029440c0
 */


bool FUN_029440c0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_02944108(*(undefined8 *)(param_1 + 0x20),param_2,*param_3);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    uVar3 = FUN_0123de70(*(undefined8 *)(param_1 + 0x30));
    FUN_0123fa5c(uVar3,3);
  }
  return bVar1;
}


