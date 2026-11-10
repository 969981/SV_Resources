/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014f5f74; name: FUN_014f5f74
 */


uint FUN_014f5f74(long param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  if (*(char *)(param_1 + 0x1b) == '\0') {
    uVar2 = 0;
  }
  else {
    uVar4 = FUN_00f7e27c(*(undefined8 *)(param_1 + 8));
    uVar2 = FUN_00f1eea8(uVar4,*(undefined1 *)(param_1 + 0x10));
    bVar1 = param_2 == (uVar2 & 0xff);
    uVar2 = (uint)bVar1;
    if (1 < *(byte *)(param_1 + 0x1b)) {
      uVar4 = FUN_00f7e27c(*(undefined8 *)(param_1 + 8));
      uVar3 = FUN_00f1eea8(uVar4,*(undefined1 *)(param_1 + 0x11));
      uVar2 = (uint)bVar1;
      if (param_2 == (uVar3 & 0xff)) {
        uVar2 = uVar2 + 1;
      }
      if (2 < *(byte *)(param_1 + 0x1b)) {
        lVar6 = 0x12;
        do {
          uVar4 = FUN_00f7e27c(*(undefined8 *)(param_1 + 8));
          uVar3 = FUN_00f1eea8(uVar4,*(undefined1 *)(param_1 + lVar6));
          uVar5 = lVar6 - 0xf;
          if (param_2 == (uVar3 & 0xff)) {
            uVar2 = uVar2 + 1;
          }
          lVar6 = lVar6 + 1;
        } while (uVar5 < *(byte *)(param_1 + 0x1b));
      }
    }
  }
  return uVar2;
}


