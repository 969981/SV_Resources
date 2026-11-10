/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03513320; name: FUN_03513320
 */


undefined8 FUN_03513320(short *param_1,short *param_2,uint param_3,ulong param_4,uint param_5)

{
  long lVar1;
  short *psVar2;
  short sVar3;
  uint uVar4;
  short *psVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  byte *pbVar12;
  
  if (param_3 != 0) {
    uVar8 = (ulong)param_5;
    do {
      iVar6 = (int)*param_2;
      uVar9 = param_3;
      if (0x3f < param_3) {
        uVar9 = 0x40;
      }
      sVar3 = param_2[1];
      iVar10 = (int)sVar3;
      uVar7 = (uint)*(byte *)(param_2 + 2);
      *param_1 = *param_2;
      if (uVar9 == 1) {
        return 1;
      }
      psVar2 = param_1 + uVar8;
      *psVar2 = sVar3;
      uVar4 = uVar9 - 2;
      if (uVar4 >> 1 == 0) {
        pbVar12 = (byte *)((long)param_2 + 5);
        psVar5 = psVar2 + uVar8;
      }
      else {
        lVar11 = 5;
        do {
          lVar1 = (long)(int)(*(byte *)((long)param_2 + lVar11) & 0xf | uVar7 << 4) * 8;
          iVar6 = *(int *)(&DAT_03d9a938 + lVar1) + (iVar10 * 2 - iVar6);
          lVar1 = (long)(int)((uint)(*(byte *)((long)param_2 + lVar11) >> 4) |
                             *(int *)(&DAT_03d9a93c + lVar1) << 4) * 8;
          if (iVar6 < -0x7fff) {
            iVar6 = -0x8000;
          }
          uVar7 = *(uint *)(&DAT_03d9a93c + lVar1);
          if (0x7ffe < iVar6) {
            iVar6 = 0x7fff;
          }
          iVar10 = (iVar6 * 2 - iVar10) + *(int *)(&DAT_03d9a938 + lVar1);
          if (iVar10 < -0x7fff) {
            iVar10 = -0x8000;
          }
          psVar5 = param_1 + uVar8 * 2;
          lVar11 = lVar11 + 1;
          *psVar5 = (short)iVar6;
          if (0x7ffe < iVar10) {
            iVar10 = 0x7fff;
          }
          param_1[uVar8 * 2 + (ulong)param_5] = (short)iVar10;
          param_1 = psVar5;
        } while ((int)lVar11 - (uVar4 >> 1) != 5);
        pbVar12 = (byte *)((long)param_2 + lVar11);
        psVar5 = psVar5 + uVar8 * 2;
      }
      param_3 = param_3 - uVar9;
      if ((uVar4 & 1) != 0) {
        iVar6 = *(int *)(&DAT_03d9a938 +
                        (-(ulong)((uVar7 & 0xfffffff) >> 0x1b) & 0xfffffff800000000 |
                        (ulong)(*pbVar12 & 0xf | uVar7 << 4) << 3)) + (iVar10 * 2 - iVar6);
        if (iVar6 < -0x7fff) {
          iVar6 = -0x8000;
        }
        if (0x7ffe < iVar6) {
          iVar6 = 0x7fff;
        }
        *psVar5 = (short)iVar6;
      }
      param_2 = (short *)((long)param_2 + (param_4 & 0xffffffff));
      param_1 = psVar2 + uVar8 + uVar4 * param_5;
    } while (param_3 != 0);
  }
  return 1;
}


