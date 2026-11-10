/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0293e07c; name: FUN_0293e07c
 */


void FUN_0293e07c(undefined8 param_1,undefined1 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  
  *param_2 = 0;
  uVar1 = FUN_01582534();
  uVar2 = FUN_02959670(uVar1,*param_3);
  if ((uVar2 & 1) == 0) {
    uVar1 = FUN_01582534(param_1);
    uVar2 = FUN_012493a0(uVar1,*param_3);
    if ((uVar2 & 1) == 0) {
      plVar3 = (long *)FUN_014813f4(param_1,*param_3);
      uVar2 = (**(code **)(*plVar3 + 0x200))();
      if ((((uVar2 & 1) == 0) || (*(char *)((long)param_3 + 0xb) != '\0')) &&
         (uVar2 = FUN_02983548(param_1,plVar3,*(undefined1 *)(param_3 + 2),
                               *(undefined1 *)((long)param_3 + 9)), (uVar2 & 1) != 0)) {
        uVar1 = FUN_01243584(param_1);
        FUN_0124b0ac(uVar1,param_3[1],param_3 + 3);
        uVar1 = FUN_01246e90(param_1);
        uVar2 = FUN_029391e0(uVar1,plVar3,*(undefined1 *)(param_3 + 2));
        if ((uVar2 & 1) != 0) {
          FUN_02983588(param_1,plVar3);
        }
        *param_2 = 1;
      }
    }
  }
  return;
}


