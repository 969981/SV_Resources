/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0199e6f0; name: FUN_0199e6f0
 */


uint FUN_0199e6f0(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  if ((int)param_2 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    uVar3 = (ulong)param_2;
    do {
      uVar1 = FUN_0011ff30(*param_1);
      uVar2 = uVar1 | uVar2;
      uVar3 = uVar3 - 1;
      param_1 = param_1 + 1;
    } while (uVar3 != 0);
  }
  return uVar2;
}


