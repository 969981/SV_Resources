/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003a2d50; name: FUN_003a2d50
 */


ulong * FUN_003a2d50(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong *puVar5;
  
  puVar1 = (ulong *)*param_1;
  if (puVar1 != (ulong *)0x0) {
    uVar4 = (*puVar1 & 0xff00ff00ff00ff00) >> 8 | (*puVar1 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    uVar2 = uVar4 >> 0x20 | uVar4 << 0x20;
    uVar4 = (*param_2 & 0xff00ff00ff00ff00) >> 8 | (*param_2 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
    iVar3 = (uint)(uVar4 < uVar2) - (uint)(uVar2 < uVar4);
    if (iVar3 < 1) {
      do {
        puVar5 = puVar1;
        if (iVar3 == 0) {
          return (ulong *)0x0;
        }
        puVar1 = (ulong *)puVar5[2];
        if (puVar1 == (ulong *)0x0) {
          param_2[2] = 0;
          puVar5[2] = (ulong)param_2;
          return param_2;
        }
        uVar4 = (*puVar1 & 0xff00ff00ff00ff00) >> 8 | (*puVar1 & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        uVar2 = uVar4 >> 0x20 | uVar4 << 0x20;
        uVar4 = (*param_2 & 0xff00ff00ff00ff00) >> 8 | (*param_2 & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
        iVar3 = (uint)(uVar4 < uVar2) - (uint)(uVar2 < uVar4);
      } while (iVar3 < 1);
    }
    else {
      puVar5 = (ulong *)0x0;
    }
    param_2[2] = (ulong)puVar1;
    if (puVar5 != (ulong *)0x0) {
      param_1 = puVar5 + 2;
    }
  }
  *param_1 = (ulong)param_2;
  return param_2;
}


