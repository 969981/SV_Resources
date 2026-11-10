/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00164bb0; name: FUN_00164bb0
 */


byte * FUN_00164bb0(byte *param_1,byte *param_2,long *param_3,uint param_4,uint param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  
  if (param_2 + -1 <= param_1) {
    *param_3 = (long)(param_2 + -1);
    return (byte *)0x0;
  }
  uVar5 = 1L << ((ulong)param_4 & 0x3f);
  pbVar4 = param_1 + 2;
  uVar1 = (ulong)CONCAT11(*param_1,param_1[1]);
  lVar6 = uVar1 - uVar5;
  if (uVar1 < uVar5) {
    if (pbVar4 < param_2) {
      lVar6 = 0;
      uVar7 = 0;
      do {
        pbVar8 = pbVar4 + 1;
        lVar3 = (ulong)*pbVar4 - (1L << ((ulong)param_5 & 0x3f));
        if (-1 < lVar3) {
          lVar6 = (lVar3 << (uVar7 & 0x3f)) + lVar6;
          pbVar4 = pbVar4 + 1;
          goto LAB_00164c50;
        }
        uVar2 = uVar7 & 0x3f;
        uVar7 = (ulong)((int)uVar7 + param_5);
        lVar6 = (lVar3 + 0x100 << uVar2) + lVar6;
        pbVar4 = pbVar8;
      } while (param_2 != pbVar8);
    }
    lVar6 = 0;
    pbVar4 = (byte *)0x0;
LAB_00164c50:
    lVar6 = (0x10000 - uVar5) + uVar1 + (lVar6 << ((ulong)param_4 & 0x3f));
  }
  *param_3 = lVar6;
  return pbVar4;
}


