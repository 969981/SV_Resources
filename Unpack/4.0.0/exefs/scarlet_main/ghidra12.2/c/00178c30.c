/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00178c30; name: FUN_00178c30
 */


void FUN_00178c30(long *param_1,byte *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  
  uVar2 = param_1[2];
  lVar6 = param_1[3];
  puVar4 = (ulong *)*param_1;
  lVar1 = param_1[1];
  uVar3 = uVar2 << (lVar6 + 1U & 0x3f);
  uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
  uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
  *puVar4 = uVar3 >> 0x20 | uVar3 << 0x20;
  puVar4 = (ulong *)((long)puVar4 + ((long)(0x3fU - lVar6) >> 3));
  lVar6 = (0x3fU - lVar6 & 0xfffffffffffffff8) + lVar6;
  if (0 < param_3) {
    lVar5 = 0;
    uVar7 = (uint)*param_2;
    if (0x17 < *param_2) goto LAB_00178cc4;
    while( true ) {
      lVar6 = lVar6 - (ulong)(uVar7 + 1);
      uVar2 = uVar2 << ((ulong)(uVar7 + 1) & 0x3f) | 1;
      uVar3 = uVar2 << (lVar6 + 1U & 0x3f);
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      *puVar4 = uVar3 >> 0x20 | uVar3 << 0x20;
      puVar4 = (ulong *)((long)puVar4 + ((long)(0x3fU - lVar6) >> 3));
      lVar5 = lVar5 + 1;
      lVar6 = (0x3fU - lVar6 & 0xfffffffffffffff8) + lVar6;
      if (lVar5 == param_3) break;
      for (uVar7 = (uint)param_2[lVar5]; 0x17 < uVar7; uVar7 = uVar7 - 0x18) {
LAB_00178cc4:
        uVar2 = uVar2 << 0x18;
        uVar3 = uVar2 << (lVar6 - 0x17U & 0x3f);
        uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        *puVar4 = uVar3 >> 0x20 | uVar3 << 0x20;
        puVar4 = (ulong *)((long)puVar4 + ((long)(0x57U - lVar6) >> 3));
        lVar6 = lVar6 + (0x57U - lVar6 & 0xfffffffffffffff8) + -0x18;
      }
    }
  }
  param_1[2] = uVar2;
  param_1[3] = lVar6;
  *param_1 = (long)puVar4;
  param_1[1] = lVar1;
  return;
}


