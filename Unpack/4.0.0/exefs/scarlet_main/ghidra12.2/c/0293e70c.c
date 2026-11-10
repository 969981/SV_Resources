/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0293e70c; name: FUN_0293e70c
 */


void FUN_0293e70c(undefined8 param_1,undefined1 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  *param_2 = 0;
  FUN_01582534();
  uVar1 = FUN_014813e4();
  uVar2 = FUN_01481400(uVar1,*param_3);
  if ((uVar2 & 1) != 0) {
    if (*(char *)((long)param_3 + 0xe) != '\0') {
      uVar1 = FUN_01243584(param_1);
      FUN_029845a8(uVar1,*param_3,8,*(undefined2 *)(param_3 + 1));
    }
    if (*(char *)((long)param_3 + 0xf) != '\0') {
      uVar1 = FUN_01243584(param_1);
      FUN_029845a8(uVar1,*param_3,9,*(undefined2 *)((long)param_3 + 6));
    }
    if (*(char *)(param_3 + 4) != '\0') {
      uVar1 = FUN_01243584(param_1);
      FUN_029845a8(uVar1,*param_3,10,*(undefined2 *)(param_3 + 2));
    }
    if (*(char *)((long)param_3 + 0x11) != '\0') {
      uVar1 = FUN_01243584(param_1);
      FUN_029845a8(uVar1,*param_3,0xb,*(undefined2 *)((long)param_3 + 10));
    }
    if (*(char *)((long)param_3 + 0x12) != '\0') {
      uVar1 = FUN_01243584(param_1);
      FUN_029845a8(uVar1,*param_3,0xc,*(undefined2 *)(param_3 + 3));
    }
    uVar1 = FUN_01243584(param_1);
    FUN_0124b0ac(uVar1,*param_3,param_3 + 5);
    *param_2 = 1;
  }
  return;
}


