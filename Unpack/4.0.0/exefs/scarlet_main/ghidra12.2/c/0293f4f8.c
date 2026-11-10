/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0293f4f8; name: FUN_0293f4f8
 */


void FUN_0293f4f8(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  byte local_38 [4];
  undefined1 local_34 [4];
  
  *param_2 = 0;
  local_38[0] = 0;
  FUN_01582534();
  uVar1 = FUN_014813ec();
  FUN_02923478(uVar1,local_34,local_38,*param_3);
  if (local_38[0] != 0) {
    uVar3 = 0;
    do {
      uVar2 = FUN_029884b8(param_1,local_34[uVar3],param_3 + 1,param_3[5]);
      if ((uVar2 & 1) != 0) {
        *param_2 = 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_38[0]);
  }
  return;
}


