/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029834a8; name: FUN_029834a8
 */


void FUN_029834a8(undefined8 param_1,undefined1 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  *param_2 = 0;
  FUN_01582534();
  uVar1 = FUN_014813e4();
  uVar2 = FUN_01481400(uVar1,*param_3);
  if ((uVar2 & 1) != 0) {
    uVar1 = FUN_014813f4(param_1,*param_3);
    FUN_0298350c(param_1,uVar1);
    *param_2 = 1;
  }
  return;
}


