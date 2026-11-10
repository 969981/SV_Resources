/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03512854; name: FUN_03512854
 */


undefined8 FUN_03512854(short *param_1,short *param_2,int param_3,ulong param_4,ulong param_5)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  
  if (param_3 != 0) {
    param_5 = param_5 & 0xffffffff;
    do {
      iVar6 = (int)*param_1;
      lVar5 = 4;
      uVar7 = (ulong)*(byte *)(param_1 + 1);
      *param_2 = *param_1;
      do {
        bVar2 = *(byte *)((long)param_1 + lVar5);
        iVar3 = ((bVar2 & 7) << 1 | 1) * *(int *)(&DAT_03d9a7d4 + uVar7 * 4);
        iVar1 = iVar3 + 7;
        if (-1 < iVar3) {
          iVar1 = iVar3;
        }
        uVar4 = *(int *)(&DAT_03d9a794 + ((ulong)bVar2 & 0xf) * 4) + (int)uVar7;
        iVar3 = -(iVar1 >> 3);
        if ((bVar2 & 8) == 0) {
          iVar3 = iVar1 >> 3;
        }
        iVar3 = iVar3 + iVar6;
        if (iVar3 < -0x7fff) {
          iVar3 = -0x8000;
        }
        if (0x7ffe < iVar3) {
          iVar3 = 0x7fff;
        }
        if (0x57 < (int)uVar4) {
          uVar4 = 0x58;
        }
        uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
        param_2[param_5] = (short)iVar3;
        iVar6 = ((bVar2 >> 4 & 7) << 1 | 1) * *(int *)(&DAT_03d9a7d4 + (ulong)uVar4 * 4);
        iVar1 = iVar6 + 7;
        if (-1 < iVar6) {
          iVar1 = iVar6;
        }
        iVar6 = -(iVar1 >> 3);
        if ((bVar2 & 0x80) == 0) {
          iVar6 = iVar1 >> 3;
        }
        iVar6 = iVar3 + iVar6;
        if (iVar6 < -0x7fff) {
          iVar6 = -0x8000;
        }
        uVar4 = uVar4 + *(int *)(&DAT_03d9a794 + (ulong)(bVar2 >> 4) * 4);
        if (0x7ffe < iVar6) {
          iVar6 = 0x7fff;
        }
        if (0x57 < (int)uVar4) {
          uVar4 = 0x58;
        }
        uVar7 = (ulong)(uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU));
        lVar5 = lVar5 + 1;
        param_2 = param_2 + param_5 * 2;
        *param_2 = (short)iVar6;
      } while ((int)lVar5 != 0x23);
      iVar3 = ((*(byte *)((long)param_1 + lVar5) & 7) << 1 | 1) *
              *(int *)(&DAT_03d9a7d4 + uVar7 * 4);
      iVar1 = iVar3 + 7;
      if (-1 < iVar3) {
        iVar1 = iVar3;
      }
      iVar3 = -(iVar1 >> 3);
      if ((*(byte *)((long)param_1 + lVar5) & 8) == 0) {
        iVar3 = iVar1 >> 3;
      }
      iVar3 = iVar3 + iVar6;
      if (iVar3 < -0x7fff) {
        iVar3 = -0x8000;
      }
      if (0x7ffe < iVar3) {
        iVar3 = 0x7fff;
      }
      param_2[param_5] = (short)iVar3;
      param_3 = param_3 + -1;
      param_2 = param_2 + param_5 * 2;
      param_1 = (short *)((long)param_1 + (param_4 & 0xffffffff));
    } while (param_3 != 0);
  }
  return 1;
}


