/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00395870; name: FUN_00395870
 */


undefined1  [16] FUN_00395870(ulong param_1,uint param_2)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  if ((int)param_2 < 0xd) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    uVar3 = param_2;
    do {
      uVar7 = (param_1 & 0xffffffff) * 0x48c27395;
      uVar8 = (uVar5 & 0xffffffff) * 0x48c27395;
      param_2 = uVar3 - 0xd;
      uVar6 = (uVar5 >> 0x20) * 0x48c2739500000000;
      uVar2 = uVar6 + uVar8;
      uVar4 = uVar7 + (param_1 >> 0x20) * 0x48c2739500000000 +
              ((uVar5 >> 0x20) * 0x48c27395 >> 0x20);
      if (CARRY8(uVar6,uVar8)) {
        uVar4 = uVar4 + 1;
      }
      uVar6 = (param_1 >> 0x20) * 0x48c27395 >> 0x20;
      if (uVar4 < uVar7) {
        uVar6 = uVar6 + 1;
      }
      uVar7 = LZCOUNT(uVar6);
      uVar5 = uVar2;
      param_1 = uVar4;
      if (uVar6 != 0) {
        uVar5 = (uVar2 >> (-uVar7 & 0x3f)) + (uVar4 << (uVar7 & 0x3f));
        param_1 = (uVar4 >> (-uVar7 & 0x3f)) + (uVar6 << (uVar7 & 0x3f));
      }
      bVar1 = 0x19 < (int)uVar3;
      uVar3 = param_2;
    } while (bVar1);
  }
  uVar6 = (ulong)*(uint *)(&DAT_03cdbbe4 + (ulong)(param_2 & 0xf) * 4);
  uVar7 = (uVar5 & 0xffffffff) * uVar6;
  uVar4 = (uVar5 >> 0x20) * uVar6;
  uVar8 = (param_1 & 0xffffffff) * uVar6;
  uVar6 = (param_1 >> 0x20) * uVar6;
  uVar5 = uVar4 << 0x20;
  uVar2 = uVar7 + uVar5;
  uVar4 = uVar8 + (uVar6 << 0x20) + (uVar4 >> 0x20);
  if (CARRY8(uVar7,uVar5)) {
    uVar4 = uVar4 + 1;
  }
  uVar6 = uVar6 >> 0x20;
  if (uVar4 < uVar8) {
    uVar6 = uVar6 + 1;
  }
  uVar7 = LZCOUNT(uVar6);
  uVar5 = uVar4;
  if (uVar6 != 0) {
    uVar5 = (uVar4 >> (-uVar7 & 0x3f)) + (uVar6 << (uVar7 & 0x3f));
  }
  if (uVar6 != 0) {
    uVar2 = (uVar2 >> (-uVar7 & 0x3f)) + (uVar4 << (uVar7 & 0x3f));
  }
  uVar6 = LZCOUNT(uVar5);
  uVar4 = uVar2;
  if (uVar6 != 0) {
    uVar4 = uVar2 << (uVar6 & 0x3f);
    uVar5 = (uVar2 >> (-uVar6 & 0x3f)) + (uVar5 << (uVar6 & 0x3f));
  }
  auVar9._8_8_ = uVar4;
  auVar9._0_8_ = uVar5;
  return auVar9;
}


