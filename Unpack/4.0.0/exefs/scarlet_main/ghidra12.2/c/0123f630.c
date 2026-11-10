/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0123f630; name: FUN_0123f630
 */


undefined8 FUN_0123f630(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (*(char *)(param_1 + 0x2ea) != '\0') {
    uVar4 = 0;
    do {
      uVar3 = FUN_00f7e27c(*(undefined8 *)(param_1 + 0x358));
      uVar2 = FUN_011e2da8(uVar3,*(undefined4 *)(param_1 + 0x268 + uVar4 * 4));
      uVar3 = FUN_014813e4(*(undefined8 *)(param_1 + 0x358));
      cVar1 = FUN_012531e0(uVar3,uVar2);
      if (cVar1 != '\0') {
        return 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(byte *)(param_1 + 0x2ea));
  }
  return 0;
}


