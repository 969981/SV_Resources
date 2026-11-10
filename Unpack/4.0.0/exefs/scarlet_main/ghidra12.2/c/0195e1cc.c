/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0195e1cc; name: FUN_0195e1cc
 */


undefined4 FUN_0195e1cc(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0x6c8) != '\0') {
    iVar2 = FUN_0195e2c8();
    uVar3 = FUN_0195e2c8(param_1,param_3);
    lVar4 = *(long *)(param_1 + 0x6d0);
    lVar1 = *(long *)(param_1 + 0x6d8) - lVar4;
    if (lVar1 != 0) {
      uVar5 = 0;
      do {
        if (iVar2 == *(int *)(lVar4 + uVar5 * 0x20)) {
          if ((int)uVar5 < 0) {
            return 0;
          }
          switch(uVar3) {
          case 1:
            return *(undefined4 *)(lVar4 + uVar5 * 0x20 + 4);
          case 2:
            return *(undefined4 *)(lVar4 + uVar5 * 0x20 + 8);
          case 3:
            return *(undefined4 *)(lVar4 + uVar5 * 0x20 + 0xc);
          case 4:
            return *(undefined4 *)(lVar4 + uVar5 * 0x20 + 0x10);
          case 5:
            return *(undefined4 *)(lVar4 + uVar5 * 0x20 + 0x14);
          case 6:
            return *(undefined4 *)(lVar4 + uVar5 * 0x20 + 0x18);
          case 7:
            return *(undefined4 *)(lVar4 + uVar5 * 0x20 + 0x1c);
          default:
            return 0;
          }
        }
        uVar5 = (ulong)((int)uVar5 + 1);
      } while (uVar5 < (ulong)(lVar1 >> 5));
    }
  }
  return 0;
}


