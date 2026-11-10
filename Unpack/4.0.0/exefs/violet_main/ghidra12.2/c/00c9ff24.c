/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c9ff24; name: FUN_00c9ff24
 */


undefined1  [16]
FUN_00c9ff24(float param_1,float param_2,long param_3,int param_4,uint param_5,uint param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar8;
  float fVar9;
  float fVar11;
  undefined8 uVar10;
  undefined1 auVar7 [16];
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar2 = *(long *)(param_3 + 0x2a0);
  lVar1 = (long)param_4;
  lVar4 = lVar2 + lVar1 * 0x550;
  lVar3 = lVar2 + (long)param_4 * 0x550;
  if ((param_5 & 1) == 0) {
    uVar6 = *(undefined8 *)(lVar3 + 0x3b0);
    lVar2 = lVar2 + lVar1 * 0x550;
    fVar5 = (float)uVar6;
    fVar8 = (float)((ulong)uVar6 >> 0x20);
    fVar9 = (float)*(undefined8 *)(lVar3 + 0x3b8);
    fVar11 = (float)((ulong)*(undefined8 *)(lVar3 + 0x3b8) >> 0x20);
    uVar6 = CONCAT44(fVar8 + ((float)((ulong)*(undefined8 *)(lVar4 + 0x3c0) >> 0x20) - fVar8) *
                             param_1,
                     fVar5 + ((float)*(undefined8 *)(lVar4 + 0x3c0) - fVar5) * param_1);
    uVar10 = CONCAT44(fVar11 + ((float)((ulong)*(undefined8 *)(lVar4 + 0x3c8) >> 0x20) - fVar11) *
                               param_1,
                      fVar9 + ((float)*(undefined8 *)(lVar4 + 0x3c8) - fVar9) * param_1);
    if ((param_6 & 1) == 0) {
      uVar15 = *(undefined8 *)(lVar2 + 0x3f8);
      uVar14 = *(undefined8 *)(lVar2 + 0x3f0);
      goto LAB_00c9ffa8;
    }
    uVar15 = *(undefined8 *)(lVar2 + 0x398);
    uVar14 = *(undefined8 *)(lVar2 + 0x390);
  }
  else {
    uVar6 = *(undefined8 *)(lVar3 + 0x3b0);
    lVar2 = lVar2 + lVar1 * 0x550;
    fVar5 = (float)uVar6;
    fVar8 = (float)((ulong)uVar6 >> 0x20);
    fVar9 = (float)*(undefined8 *)(lVar3 + 0x3b8);
    fVar11 = (float)((ulong)*(undefined8 *)(lVar3 + 0x3b8) >> 0x20);
    uVar6 = CONCAT44(fVar8 + ((float)((ulong)*(undefined8 *)(lVar4 + 0x3a0) >> 0x20) - fVar8) *
                             param_1,
                     fVar5 + ((float)*(undefined8 *)(lVar4 + 0x3a0) - fVar5) * param_1);
    uVar10 = CONCAT44(fVar11 + ((float)((ulong)*(undefined8 *)(lVar4 + 0x3a8) >> 0x20) - fVar11) *
                               param_1,
                      fVar9 + ((float)*(undefined8 *)(lVar4 + 0x3a8) - fVar9) * param_1);
    if ((param_6 & 1) == 0) {
      uVar15 = *(undefined8 *)(lVar2 + 0x3d8);
      uVar14 = *(undefined8 *)(lVar2 + 0x3d0);
LAB_00c9ffa8:
      uVar13 = *(undefined8 *)(lVar2 + 1000);
      uVar12 = *(undefined8 *)(lVar2 + 0x3e0);
      goto LAB_00c9ffac;
    }
    uVar15 = *(undefined8 *)(lVar2 + 0x378);
    uVar14 = *(undefined8 *)(lVar2 + 0x370);
  }
  uVar13 = *(undefined8 *)(lVar2 + 0x388);
  uVar12 = *(undefined8 *)(lVar2 + 0x380);
LAB_00c9ffac:
  fVar9 = (float)((ulong)uVar12 >> 0x20);
  fVar11 = (float)((ulong)uVar13 >> 0x20);
  fVar5 = (float)((ulong)uVar6 >> 0x20);
  fVar8 = (float)((ulong)uVar10 >> 0x20);
  auVar7._0_4_ = (float)uVar6 +
                 (((float)uVar12 + param_1 * ((float)uVar14 - (float)uVar12)) - (float)uVar6) *
                 param_2;
  auVar7._4_4_ = fVar5 + ((fVar9 + param_1 * ((float)((ulong)uVar14 >> 0x20) - fVar9)) - fVar5) *
                         param_2;
  auVar7._8_4_ = (float)uVar10 +
                 (((float)uVar13 + param_1 * ((float)uVar15 - (float)uVar13)) - (float)uVar10) *
                 param_2;
  auVar7._12_4_ =
       fVar8 + ((fVar11 + param_1 * ((float)((ulong)uVar15 >> 0x20) - fVar11)) - fVar8) * param_2;
  return auVar7;
}


