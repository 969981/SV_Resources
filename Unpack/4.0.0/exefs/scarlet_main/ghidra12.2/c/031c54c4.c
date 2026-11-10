/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031c54c4; name: FUN_031c54c4
 */


undefined8 FUN_031c54c4(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  uVar1 = *(uint *)((long)param_1 + 0xc);
  if (0 < (int)uVar1) {
    lVar6 = *param_2;
    uVar4 = (int)lVar6 * -0x61c8864f;
    uVar2 = (int)((ulong)lVar6 >> 0x20) * -0x61c8864f;
    uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar4 = (uVar4 + (uVar4 >> 2) + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2) & uVar1;
    uVar5 = (ulong)uVar4;
    lVar7 = *(long *)(*param_1 + uVar5 * 0x10);
    while (lVar7 != -1) {
      if (lVar7 == lVar6) goto LAB_031c555c;
      uVar4 = (int)uVar5 + 1U & uVar1;
      uVar5 = (ulong)uVar4;
      lVar7 = *(long *)(*param_1 + uVar5 * 0x10);
    }
  }
  uVar4 = uVar1 + 1;
LAB_031c555c:
  if ((int)uVar1 < (int)uVar4) {
    uVar3 = 0x80040200;
  }
  else {
    FUN_02ef6198();
    uVar3 = 0;
  }
  return uVar3;
}


