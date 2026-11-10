/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019d6960; name: FUN_019d6960
 */


void FUN_019d6960(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (*(char *)((long)param_3 + 10) != '\0') {
    uVar1 = FUN_0124e480(param_1);
    uVar2 = FUN_019d69c4(uVar1,*(undefined2 *)(param_3 + 1));
    if ((uVar2 & 1) != 0) {
      uVar1 = FUN_01243584(param_1);
      FUN_019fb330(uVar1,*param_3,0);
    }
  }
  uVar1 = FUN_01246e90(param_1);
  FUN_019d6a9c(uVar1,*param_3,*(undefined2 *)(param_3 + 1),*(undefined1 *)((long)param_3 + 10));
  return;
}


