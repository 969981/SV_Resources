/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02940ebc; name: FUN_02940ebc
 */


void FUN_02940ebc(undefined8 param_1,undefined1 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  *param_2 = 0;
  uVar1 = FUN_014813f4(param_1,*param_3);
  uVar2 = FUN_0294393c();
  if ((uVar2 & 1) == 0) {
    if (*(char *)((long)param_3 + 5) != '\0') {
      uVar3 = FUN_01243584(param_1);
      FUN_0197495c(uVar3,uVar1);
    }
    uVar2 = FUN_02983c78(param_1,uVar1,*(undefined1 *)(param_3 + 1));
    if ((uVar2 & 1) != 0) {
      FUN_0123de68(param_1);
      uVar3 = FUN_0123de70();
      FUN_0123fa5c(uVar3,8);
      *param_2 = 1;
    }
    if (*(char *)((long)param_3 + 5) != '\0') {
      uVar3 = FUN_01243584(param_1);
      FUN_018521d8(uVar3,uVar1);
      return;
    }
  }
  return;
}


