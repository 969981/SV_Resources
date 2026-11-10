/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027bc9e4; name: FUN_027bc9e4
 */


void FUN_027bc9e4(undefined8 *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auStack_b0 [80];
  long alStack_60 [4];
  long *local_40;
  
  *param_1 = 1;
  param_1[1] = 6;
  *(undefined4 *)(param_1 + 2) = 0x10;
  uVar1 = FUN_01cf7e20();
  param_1[3] = uVar1;
  uVar1 = FUN_027bdd10();
  param_1[4] = uVar1;
  FUN_027bde00(auStack_b0);
  FUN_027bde7c(param_1 + 6,param_1,auStack_b0);
  if (local_40 != (long *)0x0) {
    if (local_40 == alStack_60) {
      pcVar2 = *(code **)(*local_40 + 0x10);
    }
    else {
      pcVar2 = *(code **)(*local_40 + 0x18);
    }
    (*pcVar2)();
  }
  FUN_027bdf6c(auStack_b0);
  FUN_027bde7c(param_1 + 0x16,param_1,auStack_b0);
  if (local_40 != (long *)0x0) {
    if (local_40 == alStack_60) {
      pcVar2 = *(code **)(*local_40 + 0x10);
    }
    else {
      pcVar2 = *(code **)(*local_40 + 0x18);
    }
    (*pcVar2)();
  }
  FUN_027bdfe8(auStack_b0);
  FUN_027bde7c(param_1 + 0x26,param_1,auStack_b0);
  if (local_40 != (long *)0x0) {
    if (local_40 == alStack_60) {
      pcVar2 = *(code **)(*local_40 + 0x10);
    }
    else {
      pcVar2 = *(code **)(*local_40 + 0x18);
    }
    (*pcVar2)();
  }
  FUN_027be064(auStack_b0);
  FUN_027be0a8(param_1 + 0x36,param_1,auStack_b0);
  return;
}


