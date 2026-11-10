/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00880b40; name: FUN_00880b40
 */


undefined8
FUN_00880b40(long param_1,long param_2,long param_3,undefined8 param_4,uint param_5,uint param_6,
            uint param_7)

{
  long lVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  float fVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  undefined8 uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined8 uVar47;
  float fVar48;
  float fVar49;
  undefined8 uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    return 0x80260201;
  }
  if ((param_7 & 3) != 0) {
    iVar2 = 4 - (param_7 & 3);
    memset((void *)(param_2 + (ulong)(param_7 * param_6) * 4),0,(ulong)(param_6 * iVar2 * 4));
    param_7 = iVar2 + param_7;
  }
  if (param_5 != 0) {
    uVar15 = 0;
    if (param_7 == 0) {
      do {
        uVar19 = (int)uVar15 + 4;
        uVar15 = (ulong)uVar19;
      } while (uVar19 < param_5);
    }
    else {
      fVar3 = *(float *)(param_1 + 0xc);
      fVar4 = *(float *)(param_1 + 0x10);
      fVar5 = *(float *)(param_1 + 0x14);
      fVar6 = *(float *)(param_1 + 4);
      fVar7 = *(float *)(param_1 + 8);
      lVar17 = (ulong)(param_6 * 3) * 4;
      lVar18 = (ulong)(param_6 * 2) * 4;
      lVar16 = (ulong)(param_6 << 2) * 4;
      do {
        lVar20 = uVar15 * 4;
        lVar1 = param_1 + lVar20;
        uVar35 = *(undefined8 *)(lVar1 + 0x20);
        uVar34 = *(undefined8 *)(lVar1 + 0x18);
        uVar19 = 0;
        uVar32 = *(undefined8 *)(lVar1 + 0x50);
        uVar30 = *(undefined8 *)(lVar1 + 0x48);
        uVar29 = *(undefined8 *)(lVar1 + 0x80);
        uVar28 = *(undefined8 *)(lVar1 + 0x78);
        uVar27 = *(undefined8 *)(lVar1 + 0xb0);
        uVar25 = *(undefined8 *)(lVar1 + 0xa8);
        lVar10 = param_3;
        lVar11 = param_3 + (ulong)param_6 * 4;
        lVar12 = param_3 + lVar18;
        lVar13 = param_3 + lVar17;
        lVar14 = param_2;
        lVar21 = param_2 + (ulong)param_6 * 4;
        lVar22 = param_2 + lVar18;
        lVar23 = param_2 + lVar17;
        do {
          uVar40 = ((undefined8 *)(lVar14 + lVar20))[1];
          uVar37 = *(undefined8 *)(lVar14 + lVar20);
          uVar19 = uVar19 + 4;
          uVar50 = ((undefined8 *)(lVar21 + lVar20))[1];
          uVar47 = *(undefined8 *)(lVar21 + lVar20);
          lVar21 = lVar21 + lVar16;
          fVar36 = (float)uVar37;
          fVar38 = (float)((ulong)uVar37 >> 0x20);
          fVar39 = (float)uVar40;
          fVar41 = (float)((ulong)uVar40 >> 0x20);
          fVar52 = (float)uVar34;
          fVar53 = (float)((ulong)uVar34 >> 0x20);
          fVar54 = (float)uVar35;
          fVar55 = (float)((ulong)uVar35 >> 0x20);
          fVar46 = (float)uVar47;
          fVar48 = (float)((ulong)uVar47 >> 0x20);
          fVar49 = (float)uVar50;
          fVar51 = (float)((ulong)uVar50 >> 0x20);
          fVar42 = (float)uVar30;
          uVar8 = (ulong)uVar30 >> 0x20;
          fVar44 = (float)uVar32;
          uVar9 = (ulong)uVar32 >> 0x20;
          uVar32 = ((undefined8 *)(lVar22 + lVar20))[1];
          uVar30 = *(undefined8 *)(lVar22 + lVar20);
          lVar22 = lVar22 + lVar16;
          fVar24 = (float)((ulong)uVar28 >> 0x20);
          fVar26 = (float)((ulong)uVar29 >> 0x20);
          fVar42 = fVar36 * fVar3 + fVar4 * fVar52 + fVar5 * fVar42 + fVar6 * (float)uVar28 +
                   fVar7 * (float)uVar25;
          fVar43 = fVar38 * fVar3 + fVar4 * fVar53 + fVar5 * (float)uVar8 + fVar6 * fVar24 +
                   fVar7 * (float)((ulong)uVar25 >> 0x20);
          fVar44 = fVar39 * fVar3 + fVar4 * fVar54 + fVar5 * fVar44 + fVar6 * (float)uVar29 +
                   fVar7 * (float)uVar27;
          fVar45 = fVar41 * fVar3 + fVar4 * fVar55 + fVar5 * (float)uVar9 + fVar6 * fVar26 +
                   fVar7 * (float)((ulong)uVar27 >> 0x20);
          fVar31 = (float)((ulong)uVar30 >> 0x20);
          fVar33 = (float)((ulong)uVar32 >> 0x20);
          uVar35 = ((undefined8 *)(lVar23 + lVar20))[1];
          uVar34 = *(undefined8 *)(lVar23 + lVar20);
          lVar23 = lVar23 + lVar16;
          ((undefined8 *)(lVar10 + lVar20))[1] = CONCAT44(fVar45,fVar44);
          *(undefined8 *)(lVar10 + lVar20) = CONCAT44(fVar43,fVar42);
          lVar10 = lVar10 + lVar16;
          fVar52 = fVar46 * fVar3 + fVar4 * fVar36 + fVar5 * fVar52 + fVar6 * fVar42 +
                   fVar7 * (float)uVar28;
          fVar53 = fVar48 * fVar3 + fVar4 * fVar38 + fVar5 * fVar53 + fVar6 * fVar43 +
                   fVar7 * fVar24;
          fVar54 = fVar49 * fVar3 + fVar4 * fVar39 + fVar5 * fVar54 + fVar6 * fVar44 +
                   fVar7 * (float)uVar29;
          fVar55 = fVar51 * fVar3 + fVar4 * fVar41 + fVar5 * fVar55 + fVar6 * fVar45 +
                   fVar7 * fVar26;
          fVar24 = (float)uVar30 * fVar3 + fVar4 * fVar46 + fVar5 * fVar36 + fVar6 * fVar52 +
                   fVar7 * fVar42;
          fVar26 = fVar31 * fVar3 + fVar4 * fVar48 + fVar5 * fVar38 + fVar6 * fVar53 +
                   fVar7 * fVar43;
          uVar25 = CONCAT44(fVar26,fVar24);
          fVar42 = (float)uVar32 * fVar3 + fVar4 * fVar49 + fVar5 * fVar39 + fVar6 * fVar54 +
                   fVar7 * fVar44;
          fVar44 = fVar33 * fVar3 + fVar4 * fVar51 + fVar5 * fVar41 + fVar6 * fVar55 +
                   fVar7 * fVar45;
          uVar27 = CONCAT44(fVar44,fVar42);
          ((undefined8 *)(lVar11 + lVar20))[1] = CONCAT44(fVar55,fVar54);
          *(undefined8 *)(lVar11 + lVar20) = CONCAT44(fVar53,fVar52);
          ((undefined8 *)(lVar12 + lVar20))[1] = uVar27;
          *(undefined8 *)(lVar12 + lVar20) = uVar25;
          lVar12 = lVar12 + lVar16;
          lVar11 = lVar11 + lVar16;
          uVar28 = CONCAT44((float)((ulong)uVar34 >> 0x20) * fVar3 + fVar4 * fVar31 + fVar5 * fVar48
                            + fVar6 * fVar26 + fVar7 * fVar53,
                            (float)uVar34 * fVar3 + fVar4 * (float)uVar30 + fVar5 * fVar46 +
                            fVar6 * fVar24 + fVar7 * fVar52);
          uVar29 = CONCAT44((float)((ulong)uVar35 >> 0x20) * fVar3 + fVar4 * fVar33 + fVar5 * fVar51
                            + fVar6 * fVar44 + fVar7 * fVar55,
                            (float)uVar35 * fVar3 + fVar4 * (float)uVar32 + fVar5 * fVar49 +
                            fVar6 * fVar42 + fVar7 * fVar54);
          lVar14 = lVar14 + lVar16;
          ((undefined8 *)(lVar13 + lVar20))[1] = uVar29;
          *(undefined8 *)(lVar13 + lVar20) = uVar28;
          lVar13 = lVar13 + lVar16;
        } while (uVar19 < param_7);
        uVar19 = (int)uVar15 + 4;
        uVar15 = (ulong)uVar19;
        *(undefined8 *)(lVar1 + 0x20) = uVar35;
        *(undefined8 *)(lVar1 + 0x18) = uVar34;
        *(undefined8 *)(lVar1 + 0x50) = uVar32;
        *(undefined8 *)(lVar1 + 0x48) = uVar30;
        *(undefined8 *)(lVar1 + 0x80) = uVar29;
        *(undefined8 *)(lVar1 + 0x78) = uVar28;
        *(undefined8 *)(lVar1 + 0xb0) = uVar27;
        *(undefined8 *)(lVar1 + 0xa8) = uVar25;
      } while (uVar19 < param_5);
    }
  }
  return 0;
}


