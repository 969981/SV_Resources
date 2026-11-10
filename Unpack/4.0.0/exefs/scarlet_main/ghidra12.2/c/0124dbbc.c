/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0124dbbc; name: FUN_0124dbbc
 */


void FUN_0124dbbc(undefined8 param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  FUN_01582534();
  FUN_012409b4();
  uVar1 = FUN_0124dc38();
  if ((uVar1 & 1) == 0) {
    return;
  }
  uVar2 = FUN_01243584(param_1);
  FUN_0166616c(uVar2,1,param_2);
  uVar2 = FUN_01243584(param_1);
  FUN_0124dc24(uVar2,1,param_2);
  FUN_01250ce8(param_1);
  return;
}


