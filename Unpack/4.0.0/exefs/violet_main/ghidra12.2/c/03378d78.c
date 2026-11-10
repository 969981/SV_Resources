/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03378d78; name: FUN_03378d78
 */


uint * FUN_03378d78(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  
  lVar7 = *param_2;
  uVar2 = (int)lVar7 * -0x61c8864f;
  uVar8 = (int)((ulong)lVar7 >> 0x20) * -0x61c8864f;
  uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar3 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
  uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar1 = *(uint *)(param_1 + 3);
  lVar5 = param_1[2];
  uVar2 = uVar3 + (uVar3 >> 2) + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2;
  uVar6 = (ulong)(uVar2 & uVar1);
  puVar4 = (uint *)(lVar5 + uVar6 * 8);
  uVar8 = puVar4[1];
  if (-1 < (int)uVar8) {
    if (lVar7 == 0) {
      do {
        if ((*puVar4 == uVar2) && (*(long *)(*param_1 + (ulong)uVar8 * 0x28) == 0)) {
          return puVar4;
        }
        uVar6 = uVar6 + 1 & (long)(int)uVar1;
        puVar4 = (uint *)(lVar5 + uVar6 * 8);
        uVar8 = puVar4[1];
      } while (-1 < (int)uVar8);
    }
    else {
      do {
        if (((*puVar4 == uVar2) && (*(long *)(*param_1 + (ulong)uVar8 * 0x28) == lVar7)) &&
           (*(long *)(*param_1 + (ulong)uVar8 * 0x28 + 8) == param_2[1])) {
          return puVar4;
        }
        uVar6 = uVar6 + 1 & (long)(int)uVar1;
        puVar4 = (uint *)(lVar5 + uVar6 * 8);
        uVar8 = puVar4[1];
      } while (-1 < (int)uVar8);
    }
  }
  return (uint *)0x0;
}


