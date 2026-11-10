/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008804d0; name: FUN_008804d0
 */


void FUN_008804d0(long param_1,long param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  float *pfVar4;
  undefined8 *puVar5;
  float *pfVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if ((param_3 & 0xfffffff0) == 0) {
    uVar1 = 0;
    if ((param_3 & 0xfffffffc) == 0) goto LAB_0088056c;
  }
  else {
    uVar1 = 0;
    puVar5 = (undefined8 *)(param_2 + 0x20);
    puVar7 = (undefined8 *)(param_1 + 0x20);
    do {
      uVar1 = uVar1 + 0x10;
      uVar9 = puVar5[-4];
      uVar14 = puVar5[-1];
      uVar12 = puVar5[-2];
      uVar11 = puVar5[1];
      uVar10 = *puVar5;
      uVar15 = puVar5[3];
      uVar13 = puVar5[2];
      puVar7[-3] = CONCAT44((float)((ulong)puVar5[-3] >> 0x20) + (float)((ulong)puVar7[-3] >> 0x20),
                            (float)puVar5[-3] + (float)puVar7[-3]);
      puVar7[-4] = CONCAT44((float)((ulong)uVar9 >> 0x20) + (float)((ulong)puVar7[-4] >> 0x20),
                            (float)uVar9 + (float)puVar7[-4]);
      puVar7[-1] = CONCAT44((float)((ulong)uVar14 >> 0x20) + (float)((ulong)puVar7[-1] >> 0x20),
                            (float)uVar14 + (float)puVar7[-1]);
      puVar7[-2] = CONCAT44((float)((ulong)uVar12 >> 0x20) + (float)((ulong)puVar7[-2] >> 0x20),
                            (float)uVar12 + (float)puVar7[-2]);
      puVar7[1] = CONCAT44((float)((ulong)uVar11 >> 0x20) + (float)((ulong)puVar7[1] >> 0x20),
                           (float)uVar11 + (float)puVar7[1]);
      *puVar7 = CONCAT44((float)((ulong)uVar10 >> 0x20) + (float)((ulong)*puVar7 >> 0x20),
                         (float)uVar10 + (float)*puVar7);
      puVar7[3] = CONCAT44((float)((ulong)uVar15 >> 0x20) + (float)((ulong)puVar7[3] >> 0x20),
                           (float)uVar15 + (float)puVar7[3]);
      puVar7[2] = CONCAT44((float)((ulong)uVar13 >> 0x20) + (float)((ulong)puVar7[2] >> 0x20),
                           (float)uVar13 + (float)puVar7[2]);
      puVar5 = puVar5 + 8;
      puVar7 = puVar7 + 8;
    } while (uVar1 < (param_3 & 0xfffffff0));
    if ((param_3 & 0xfffffffc) <= (uint)uVar1) goto LAB_0088056c;
  }
  uVar1 = uVar1 & 0xffffffff;
  puVar5 = (undefined8 *)(param_1 + uVar1 * 4);
  puVar7 = (undefined8 *)(param_2 + uVar1 * 4);
  do {
    uVar1 = uVar1 + 4;
    uVar9 = *puVar7;
    puVar5[1] = CONCAT44((float)((ulong)puVar7[1] >> 0x20) + (float)((ulong)puVar5[1] >> 0x20),
                         (float)puVar7[1] + (float)puVar5[1]);
    *puVar5 = CONCAT44((float)((ulong)uVar9 >> 0x20) + (float)((ulong)*puVar5 >> 0x20),
                       (float)uVar9 + (float)*puVar5);
    puVar5 = puVar5 + 2;
    puVar7 = puVar7 + 2;
  } while (uVar1 < (param_3 & 0xfffffffc));
LAB_0088056c:
  if ((uint)uVar1 < param_3) {
    uVar1 = uVar1 & 0xffffffff;
    uVar2 = ~uVar1;
    if ((param_3 & 1) != 0) {
      lVar8 = uVar1 * 4;
      uVar1 = uVar1 + 1;
      *(float *)(param_1 + lVar8) = *(float *)(param_2 + lVar8) + *(float *)(param_1 + lVar8);
    }
    if (uVar2 + param_3 != 0) {
      lVar3 = param_3 - uVar1;
      lVar8 = uVar1 * 4 + 4;
      pfVar4 = (float *)(param_1 + lVar8);
      pfVar6 = (float *)(param_2 + lVar8);
      do {
        lVar3 = lVar3 + -2;
        pfVar4[-1] = pfVar6[-1] + pfVar4[-1];
        *pfVar4 = *pfVar6 + *pfVar4;
        pfVar4 = pfVar4 + 2;
        pfVar6 = pfVar6 + 2;
      } while (lVar3 != 0);
    }
  }
  return;
}


