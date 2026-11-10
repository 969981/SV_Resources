/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020ae0c8; name: FUN_020ae0c8
 */


ulong FUN_020ae0c8(long param_1,ulong *param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = *(long *)(param_1 + 0x180);
  if (lVar4 == 0) {
    uVar3 = 0;
    uVar5 = 0;
  }
  else {
    uVar5 = *param_2;
    lVar2 = param_1 + 0x180;
    do {
      bVar1 = *(ulong *)(lVar4 + 0x20) < uVar5;
      if (!bVar1) {
        lVar2 = lVar4;
      }
      lVar4 = *(long *)(lVar4 + (ulong)bVar1 * 8);
    } while (lVar4 != 0);
    if ((lVar2 == param_1 + 0x180) || (uVar5 < *(ulong *)(lVar2 + 0x20))) {
      uVar3 = 0;
      uVar5 = 0;
    }
    else {
      uVar5 = (ulong)*(uint *)(lVar2 + 0x40) << 0x20;
      uVar3 = 1;
    }
  }
  return uVar5 | uVar3;
}


