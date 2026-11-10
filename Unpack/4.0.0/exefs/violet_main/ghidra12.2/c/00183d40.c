/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00183d40; name: FUN_00183d40
 */


void FUN_00183d40(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  if (1 < (int)param_5) {
    uVar4 = 1;
    do {
      lVar5 = uVar4 - 1;
      lVar9 = (long)*(int *)(param_4 + uVar4 * 4);
      iVar1 = *(int *)(param_3 + lVar5 * 4);
      pbVar10 = (byte *)(param_1 + lVar9);
      if (iVar1 < 1) {
        iVar7 = *(int *)(param_3 + uVar4 * 4);
        lVar11 = 0;
        if (0 < iVar7) goto LAB_00183dac;
LAB_00183e78:
        lVar12 = 0;
        if (lVar11 < 1) goto LAB_00183e8c;
LAB_00183de0:
        lVar8 = lVar5 * 4;
        lVar6 = uVar4 * 4;
        if (lVar11 <= lVar12) goto LAB_00183e8c;
        pbVar10 = (byte *)(param_1 + -1 + lVar9);
        do {
          lVar9 = param_2 + uVar4 * 0x400;
          lVar12 = (ulong)*pbVar10 * 4;
          *(int *)(lVar9 + lVar12) = *(int *)(lVar9 + lVar12) + 1;
          lVar11 = param_2 + lVar5 * 0x400;
          *(int *)(lVar11 + lVar12) = *(int *)(lVar11 + lVar12) + -1;
          *(int *)(param_3 + lVar6) = *(int *)(param_3 + lVar6) + 1;
          *(int *)(param_3 + lVar8) = *(int *)(param_3 + lVar8) + -1;
          *(int *)(param_4 + lVar6) = *(int *)(param_4 + lVar6) + -1;
          if (*(int *)(param_3 + lVar8) == 0) break;
          pbVar10 = pbVar10 + -1;
        } while (0 < (long)((ulong)*(uint *)(lVar9 + (ulong)*pbVar10 * 4) *
                            (long)*(int *)(param_3 + lVar8) -
                           (long)*(int *)(param_3 + uVar4 * 4) *
                           (ulong)*(uint *)(lVar11 + (ulong)*pbVar10 * 4)));
      }
      else {
        iVar7 = *(int *)(param_3 + uVar4 * 4);
        lVar11 = (ulong)*(uint *)(param_2 + uVar4 * 0x400 + (ulong)pbVar10[-1] * 4) * (long)iVar1 -
                 (long)iVar7 * (ulong)*(uint *)(param_2 + lVar5 * 0x400 + (ulong)pbVar10[-1] * 4);
        if (iVar7 < 1) goto LAB_00183e78;
LAB_00183dac:
        lVar12 = (ulong)*(uint *)(param_2 + lVar5 * 0x400 + (ulong)*pbVar10 * 4) * (long)iVar7 -
                 (ulong)*(uint *)(param_2 + uVar4 * 0x400 + (ulong)*pbVar10 * 4) * (long)iVar1;
        if (0 < lVar11) goto LAB_00183de0;
LAB_00183e8c:
        lVar11 = uVar4 * 4;
        if (0 < lVar12) {
          uVar13 = (ulong)*pbVar10;
          lVar12 = param_2 + lVar5 * 0x400;
          lVar6 = param_2 + uVar4 * 0x400;
          uVar2 = (ulong)*(uint *)(lVar12 + uVar13 * 4);
          uVar3 = (ulong)*(uint *)(lVar6 + uVar13 * 4);
          pbVar10 = (byte *)(param_1 + 1 + lVar9);
          do {
            *(int *)(lVar12 + uVar13 * 4) = (int)uVar2 + 1;
            *(int *)(lVar6 + uVar13 * 4) = (int)uVar3 + -1;
            *(int *)(param_3 + lVar5 * 4) = *(int *)(param_3 + lVar5 * 4) + 1;
            *(int *)(param_3 + lVar11) = *(int *)(param_3 + lVar11) + -1;
            *(int *)(param_4 + lVar11) = *(int *)(param_4 + lVar11) + 1;
            if (*(int *)(param_3 + lVar11) == 0) break;
            uVar13 = (ulong)*pbVar10;
            uVar2 = (ulong)*(uint *)(lVar12 + uVar13 * 4);
            uVar3 = (ulong)*(uint *)(lVar6 + uVar13 * 4);
            pbVar10 = pbVar10 + 1;
          } while (0 < (long)(uVar2 * (long)*(int *)(param_3 + lVar11) -
                             (long)*(int *)(param_3 + lVar5 * 4) * uVar3));
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != param_5);
  }
  return;
}


