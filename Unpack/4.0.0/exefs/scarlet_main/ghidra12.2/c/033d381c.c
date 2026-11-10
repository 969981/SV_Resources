/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033d381c; name: FUN_033d381c
 */


void FUN_033d381c(undefined8 *param_1,long *param_2,long *param_3,long param_4,long param_5,
                 int *param_6,uint param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  void *pvVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  void *__src;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  float fVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  float fVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  float fVar63;
  
  uVar4 = *(ushort *)((long)param_2 + 0x12);
  uVar2 = *(uint *)(param_1 + 1);
  uVar3 = *(uint *)(param_1 + 4);
  __src = (void *)*param_2;
  uVar17 = (uint)uVar4;
  if (uVar4 != 0) {
    fVar35 = *(float *)(param_4 + 4);
    fVar37 = *(float *)(param_4 + 8);
    fVar40 = 1.0 / (float)uVar4;
    fVar38 = *(float *)(param_4 + 0x10);
    fVar39 = *(float *)(param_4 + 0x14);
    fVar41 = (*(float *)(param_5 + 0x10) - fVar38) * fVar40;
    fVar47 = (*(float *)(param_5 + 8) - fVar37) * fVar40;
    fVar52 = (*(float *)(param_5 + 0x14) - fVar39) * fVar40;
    fVar40 = (*(float *)(param_5 + 4) - fVar35) * fVar40;
    fVar42 = fVar40 + fVar35;
    fVar43 = fVar42 + fVar40;
    fVar63 = fVar47 + fVar37;
    fVar55 = fVar40 * 4.0;
    fVar40 = fVar43 + fVar40;
    fVar60 = fVar47 * 4.0;
    fVar56 = fVar63 + fVar47;
    fVar47 = fVar56 + fVar47;
    fVar44 = fVar41 + fVar38;
    fVar48 = fVar52 + fVar39;
    fVar45 = fVar44 + fVar41;
    fVar57 = fVar48 + fVar52;
    fVar46 = fVar45 + fVar41;
    fVar49 = fVar57 + fVar52;
    fVar41 = fVar41 * 4.0;
    fVar52 = fVar52 * 4.0;
    uVar8 = (ulong)*(uint *)((long)param_1 + 0xc);
    uVar10 = (ulong)*(uint *)((long)param_1 + 0x24);
    lVar9 = *param_3;
    uVar15 = uVar2 - *(uint *)((long)param_1 + 0xc);
    uVar5 = uVar3 - *(uint *)((long)param_1 + 0x24);
    lVar11 = lVar9 + (ulong)*(ushort *)(param_3 + 2) * 4;
    pvVar12 = (void *)((long)__src + (ulong)*(ushort *)(param_2 + 2) * 4);
    lVar13 = *(long *)param_1[3] + uVar10 * 4;
    lVar14 = *(long *)*param_1 + uVar8 * 4;
    if (uVar5 <= uVar15) {
      uVar15 = uVar5;
    }
    uVar5 = uVar17;
    do {
      uVar6 = uVar5;
      if (uVar15 <= uVar5) {
        uVar6 = uVar15;
      }
      uVar15 = uVar6 >> 2;
      if (uVar15 != 0) {
        lVar16 = 0;
        do {
          uVar51 = ((undefined8 *)(lVar14 + lVar16))[1];
          uVar50 = *(undefined8 *)(lVar14 + lVar16);
          uVar15 = uVar15 - 1;
          uVar54 = ((undefined8 *)(lVar13 + lVar16))[1];
          uVar53 = *(undefined8 *)(lVar13 + lVar16);
          uVar59 = ((undefined8 *)((long)__src + lVar16))[1];
          uVar58 = *(undefined8 *)((long)__src + lVar16);
          fVar19 = fVar39 * (float)uVar53;
          fVar26 = (float)((ulong)uVar53 >> 0x20);
          fVar23 = fVar48 * fVar26;
          fVar27 = fVar57 * (float)uVar54;
          fVar34 = (float)((ulong)uVar54 >> 0x20);
          fVar31 = fVar49 * fVar34;
          uVar62 = ((undefined8 *)((long)pvVar12 + lVar16))[1];
          uVar61 = *(undefined8 *)((long)pvVar12 + lVar16);
          fVar20 = fVar37 * (float)uVar50;
          fVar25 = (float)((ulong)uVar50 >> 0x20);
          fVar24 = fVar63 * fVar25;
          fVar28 = fVar56 * (float)uVar51;
          fVar33 = (float)((ulong)uVar51 >> 0x20);
          fVar32 = fVar47 * fVar33;
          fVar37 = fVar37 + fVar60;
          fVar63 = fVar63 + fVar60;
          fVar56 = fVar56 + fVar60;
          fVar47 = fVar47 + fVar60;
          fVar21 = fVar35 * (float)uVar50;
          fVar25 = fVar42 * fVar25;
          fVar29 = fVar43 * (float)uVar51;
          fVar33 = fVar40 * fVar33;
          fVar22 = fVar38 * (float)uVar53;
          fVar26 = fVar44 * fVar26;
          fVar30 = fVar45 * (float)uVar54;
          fVar34 = fVar46 * fVar34;
          fVar39 = fVar39 + fVar52;
          fVar48 = fVar48 + fVar52;
          fVar57 = fVar57 + fVar52;
          fVar49 = fVar49 + fVar52;
          fVar35 = fVar35 + fVar55;
          fVar42 = fVar42 + fVar55;
          fVar43 = fVar43 + fVar55;
          fVar40 = fVar40 + fVar55;
          fVar38 = fVar38 + fVar41;
          fVar44 = fVar44 + fVar41;
          fVar45 = fVar45 + fVar41;
          fVar46 = fVar46 + fVar41;
          ((undefined8 *)(lVar9 + lVar16))[1] = uVar51;
          *(undefined8 *)(lVar9 + lVar16) = uVar50;
          ((undefined8 *)(lVar11 + lVar16))[1] = uVar54;
          *(undefined8 *)(lVar11 + lVar16) = uVar53;
          ((undefined8 *)((long)__src + lVar16))[1] =
               CONCAT44((float)((ulong)uVar59 >> 0x20) + fVar31 + fVar33,
                        (float)uVar59 + fVar27 + fVar29);
          *(undefined8 *)((long)__src + lVar16) =
               CONCAT44((float)((ulong)uVar58 >> 0x20) + fVar23 + fVar25,
                        (float)uVar58 + fVar19 + fVar21);
          ((undefined8 *)((long)pvVar12 + lVar16))[1] =
               CONCAT44((float)((ulong)uVar62 >> 0x20) + fVar32 + fVar34,
                        (float)uVar62 + fVar28 + fVar30);
          *(undefined8 *)((long)pvVar12 + lVar16) =
               CONCAT44((float)((ulong)uVar61 >> 0x20) + fVar24 + fVar26,
                        (float)uVar61 + fVar20 + fVar22);
          lVar16 = lVar16 + 0x10;
        } while (uVar15 != 0);
        lVar14 = lVar14 + lVar16;
        lVar13 = lVar13 + lVar16;
        __src = (void *)((long)__src + lVar16);
        lVar9 = lVar9 + lVar16;
        pvVar12 = (void *)((long)pvVar12 + lVar16);
        lVar11 = lVar11 + lVar16;
      }
      uVar15 = uVar6 + (int)uVar8;
      uVar8 = (ulong)uVar15;
      uVar1 = uVar6 + (int)uVar10;
      uVar10 = (ulong)uVar1;
      if (uVar15 == uVar2) {
        uVar8 = 0;
        lVar14 = *(long *)*param_1;
      }
      if (uVar1 == uVar3) {
        uVar10 = 0;
        lVar13 = *(long *)param_1[3];
      }
      uVar5 = uVar5 - uVar6;
      uVar15 = uVar2 - (int)uVar8;
      uVar6 = uVar3 - (int)uVar10;
      if (uVar6 <= uVar15) {
        uVar15 = uVar6;
      }
    } while (uVar5 != 0);
    __src = (void *)*param_2;
  }
  uVar8 = (ulong)*(ushort *)(param_2 + 2);
  pvVar12 = (void *)((long)__src + uVar8 * 4);
  if (*param_6 != 0) {
    if ((param_7 & 1) != 0) {
      uVar36 = NEON_ucvtf(*(undefined4 *)(param_1 + 10));
      FUN_033d3c04(uVar36,param_6[2],param_6[1],param_6[3],param_1 + 8,*param_6 + -1);
      uVar8 = (ulong)*(ushort *)(param_2 + 2);
    }
    FUN_033d3b30(param_1 + 6,__src,uVar17,uVar8);
  }
  uVar5 = *(uint *)((long)param_1 + 0xc);
  uVar1 = uVar2 - uVar5;
  uVar6 = *(uint *)((long)param_1 + 0x24);
  uVar7 = uVar3 - uVar6;
  uVar18 = (uint)uVar4;
  uVar15 = uVar18;
  if (uVar1 <= uVar18) {
    uVar15 = uVar1;
  }
  memcpy((void *)(*(long *)*param_1 + (ulong)uVar5 * 4),__src,(ulong)(uVar15 << 2));
  if (uVar1 < uVar18) {
    memcpy(*(void **)*param_1,(void *)((long)__src + (ulong)uVar1 * 4),(ulong)((uVar17 - uVar1) * 4)
          );
  }
  uVar15 = uVar18;
  if (uVar7 < uVar17 || uVar7 == uVar18) {
    uVar15 = uVar7;
  }
  memcpy((void *)(*(long *)param_1[3] + (ulong)uVar6 * 4),pvVar12,(ulong)(uVar15 << 2));
  if (uVar7 < uVar18) {
    memcpy(*(void **)param_1[3],(void *)((long)pvVar12 + (ulong)uVar7 * 4),
           (ulong)((uVar18 - uVar7) * 4));
  }
  uVar15 = 0;
  if (uVar2 != 0) {
    uVar15 = (uVar5 + uVar17) / uVar2;
  }
  *(uint *)((long)param_1 + 0xc) = (uVar5 + uVar17) - uVar15 * uVar2;
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar2 = (uVar6 + uVar17) / uVar3;
  }
  *(uint *)((long)param_1 + 0x24) = (uVar6 + uVar17) - uVar2 * uVar3;
  return;
}


