/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02986460; name: FUN_02986460
 */


void FUN_02986460(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  FUN_01582534();
  FUN_012409b4();
  uVar1 = FUN_0298651c();
  if ((uVar1 & 1) == 0) {
    uVar2 = FUN_01243584(param_1);
    FUN_0166616c(uVar2,3,0);
    uVar2 = FUN_01243584(param_1);
    FUN_0124dc24(uVar2,3,0);
    return;
  }
  return;
}


