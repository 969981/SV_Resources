/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007de5a8; name: FUN_007de5a8
 */


void FUN_007de5a8(long param_1,long param_2,uint param_3)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  uint uVar7;
  
  if (1 < param_3) {
    lVar3 = FUN_007ec50c();
    if (lVar3 != 0) {
      lVar3 = FUN_007ec50c(param_1);
      lVar4 = FUN_007ec4a8(param_1);
      if (lVar3 == lVar4) {
        return;
      }
    }
    bVar1 = *(byte *)(param_2 + 1);
    if ((((uint)bVar1 << 3 | 2) == param_3) && (bVar1 != 0)) {
      uVar7 = 0;
      puVar6 = (ulong *)(param_2 + 2);
      do {
        if (*(long *)(param_1 + 0x68) != param_1 + 0x60) {
          uVar2 = (*puVar6 & 0xff00ff00ff00ff00) >> 8 | (*puVar6 & 0xff00ff00ff00ff) << 8;
          uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
          lVar3 = *(long *)(param_1 + 0x68);
          do {
            lVar4 = *(long *)(lVar3 + 8);
            if ((*(char *)(lVar3 + 0x31) == '\0') &&
               (uVar5 = FUN_007de240(lVar3 + 0x10), uVar5 == (uVar2 >> 0x20 | uVar2 << 0x20))) {
              *(undefined1 *)(lVar3 + 0x31) = 1;
            }
            lVar3 = lVar4;
          } while (lVar4 != param_1 + 0x60);
        }
        uVar7 = uVar7 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar7 != bVar1);
    }
  }
  return;
}


