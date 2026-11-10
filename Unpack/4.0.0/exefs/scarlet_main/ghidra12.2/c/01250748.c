/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01250748; name: FUN_01250748
 */


void FUN_01250748(undefined8 param_1,undefined8 param_2,undefined2 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_3 + 7) != '\0') {
    FUN_01243584(param_1);
    FUN_0297ead4();
  }
  FUN_02982c68(param_1,*param_3,*(undefined1 *)(param_3 + 1),*(undefined1 *)((long)param_3 + 3),
               *(undefined1 *)(param_3 + 3),param_3[2]);
  iVar1 = FUN_0124b1e4(param_3 + 6);
  if (iVar1 == 0) {
    return;
  }
  uVar2 = FUN_01243584(param_1);
  FUN_0124b0ac(uVar2,*(undefined4 *)(param_3 + 4),param_3 + 6);
  return;
}


