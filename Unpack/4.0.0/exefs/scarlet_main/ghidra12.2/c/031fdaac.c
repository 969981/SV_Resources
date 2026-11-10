/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031fdaac; name: FUN_031fdaac
 */


uint * FUN_031fdaac(long *param_1,long *param_2)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  
  lVar2 = *param_2;
  lVar3 = param_2[1];
  uVar4 = (int)lVar2 * -0x61c8864f;
  uVar5 = (int)((ulong)lVar2 >> 0x20) * -0x61c8864f;
  uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
  uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
  uVar5 = uVar4 + 0x9e3779b9 + (uVar4 >> 2) + uVar5 * 0x40 ^ uVar5;
  uVar4 = (int)((ulong)lVar3 >> 0x20) * -0x61c8864f;
  uVar6 = (int)lVar3 * -0x61c8864f;
  uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
  uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
  uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar4 = uVar6 + 0x9e3779b9 + (uVar6 >> 2) + uVar4 * 0x40 ^ uVar4;
  lVar7 = param_1[2];
  uVar5 = uVar4 + 0x9e3779b9 + uVar5 * 0x40 + (uVar4 >> 2) ^ uVar5;
  uVar8 = (ulong)(uVar5 & *(uint *)(param_1 + 3));
  uVar4 = *(uint *)(lVar7 + uVar8 * 8 + 4);
  while( true ) {
    if ((int)uVar4 < 0) {
      return (uint *)0x0;
    }
    puVar1 = (uint *)(lVar7 + uVar8 * 8);
    if ((*puVar1 == uVar5) &&
       (plVar9 = (long *)(*param_1 + (ulong)uVar4 * 0x18), *plVar9 == lVar2 && plVar9[1] == lVar3))
    break;
    uVar8 = uVar8 + 1 & (long)(int)*(uint *)(param_1 + 3);
    uVar4 = *(uint *)(lVar7 + uVar8 * 8 + 4);
  }
  return puVar1;
}


