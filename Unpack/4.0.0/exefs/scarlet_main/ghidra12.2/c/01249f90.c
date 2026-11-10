/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01249f90; name: FUN_01249f90
 */


void FUN_01249f90(undefined8 param_1,undefined1 *param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  *param_2 = 1;
  if (*param_3 < 8) {
    FUN_01582534();
    uVar3 = FUN_0158253c();
    uVar4 = FUN_0124a038();
    if (((uVar4 & 1) == 0) || (uVar4 = FUN_0124a040(param_1,*param_3), (uVar4 & 1) == 0)) {
      *param_2 = 2;
    }
    else {
      bVar1 = FUN_0124a08c(uVar3);
      if ((*param_3 != bVar1) ||
         ((param_3[1] == 0xff && (iVar2 = FUN_0144ed6c(uVar3), iVar2 != 0xff)))) {
        *param_2 = 0;
      }
    }
  }
  return;
}


