/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c5db00; name: FUN_00c5db00
 */


void FUN_00c5db00(long param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if ((int)param_2 < 0) {
    lVar3 = (long)(int)(param_2 + 1);
    uVar1 = *(long *)(param_1 + 0x10) + lVar3 * 0x10;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x10);
    lVar5 = ((**(long **)(param_1 + 0x20) + (ulong)param_2 * 0x10) - lVar4) + 0x10;
    lVar3 = lVar5 >> 4;
    if (0 < lVar5) {
      lVar2 = lVar3;
      if (0 < lVar3) {
        lVar2 = 1;
      }
      *(long *)(param_1 + 0x10) = lVar4 + 0x10;
      *(undefined1 *)(lVar4 + 8) = 0;
      if (0x10 < lVar5) {
        lVar3 = lVar3 + 1;
        do {
          lVar5 = *(long *)(param_1 + 0x10);
          lVar3 = lVar3 + -1;
          *(long *)(param_1 + 0x10) = lVar5 + 0x10;
          *(undefined1 *)(lVar5 + 8) = 0;
        } while (2 < lVar3);
      }
      lVar3 = lVar2 + -1;
    }
    uVar1 = *(long *)(param_1 + 0x10) + lVar3 * 0x10;
  }
  if ((lVar3 < 0) && (uVar1 <= *(ulong *)(param_1 + 0x40))) {
    FUN_001299c0(param_1,uVar1,0xffffffff,0);
    *(ulong *)(param_1 + 0x10) = uVar1;
    return;
  }
  *(ulong *)(param_1 + 0x10) = uVar1;
  return;
}


