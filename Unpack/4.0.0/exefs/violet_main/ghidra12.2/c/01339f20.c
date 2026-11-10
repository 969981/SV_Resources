/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01339f20; name: FUN_01339f20
 */


void FUN_01339f20(long param_1,long param_2)

{
  undefined1 (*pauVar1) [12];
  long lVar2;
  long *plVar3;
  unkbyte10 *pVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined *puVar9;
  undefined1 (*pauVar10) [12];
  float *pfVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  int *piVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined2 uVar24;
  undefined2 uVar25;
  undefined2 uVar26;
  undefined2 uVar27;
  float fVar28;
  float fVar30;
  undefined8 uVar29;
  float fVar31;
  float fVar32;
  float fVar34;
  undefined8 uVar33;
  float fVar35;
  undefined8 uVar36;
  float fVar38;
  undefined1 auVar37 [16];
  undefined1 auVar39 [16];
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
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  
  puVar9 = PTR_PTR_047d1a50;
  lVar13 = **(long **)(param_1 + 0xc0);
  lVar2 = lVar13 + param_2 * 0x80;
  lVar14 = *(long *)(lVar2 + 0x10);
  if ((*(long **)(param_1 + 0xc0))[1] != lVar13) {
    uVar15 = 0;
    plVar16 = (long *)(lVar13 + 0x20);
    do {
      if (((char)plVar16[-4] == '\0') && (plVar16[-3] == -1)) {
        lVar13 = plVar16[-1];
        if ((lVar13 == lVar14) || (*plVar16 == lVar14)) {
          plVar16[-3] = lVar14;
          plVar3 = plVar16;
          if (lVar13 != lVar14) {
            plVar3 = plVar16 + -1;
          }
          lVar13 = *plVar3;
          plVar16[-2] = lVar13;
          if (lVar13 != *(long *)(lVar2 + 8)) {
            piVar17 = (int *)(lVar2 + 0x60);
            iVar12 = *piVar17;
            lVar13 = (long)iVar12;
            if ((int)(*(uint *)(lVar2 + 100) & 0x7fffffff) <= iVar12) {
              FUN_0133bb88((long *)(lVar2 + 0x58),puVar9,lVar13 + 1);
              iVar12 = *piVar17;
            }
            *(int *)(*(long *)(lVar2 + 0x58) + (long)iVar12 * 4) = (int)uVar15;
            *piVar17 = (int)(lVar13 + 1);
            FUN_01339f20(param_1,uVar15);
          }
        }
      }
      uVar15 = uVar15 + 1;
      plVar16 = plVar16 + 0x10;
    } while (uVar15 < (ulong)((*(long **)(param_1 + 0xc0))[1] - **(long **)(param_1 + 0xc0) >> 7));
  }
  pauVar10 = (undefined1 (*) [12])
             (**(code **)(**(long **)(param_1 + 0x18) + 0x118))
                       (*(long **)(param_1 + 0x18),*(undefined8 *)(lVar2 + 8));
  pfVar11 = (float *)(**(code **)(**(long **)(param_1 + 0x18) + 0x118))
                               (*(long **)(param_1 + 0x18),lVar14);
  uVar23 = (undefined4)((ulong)*(undefined8 *)(*pauVar10 + 8) >> 0x20);
  fVar20 = (float)((ulong)*(undefined8 *)*pauVar10 >> 0x20);
  pVar4 = (unkbyte10 *)(pauVar10[1] + 4);
  uVar36 = *(undefined8 *)pauVar10[2];
  uVar24 = (undefined2)((ulong)uVar36 >> 0x10);
  uVar25 = (undefined2)((ulong)uVar36 >> 0x20);
  uVar26 = (undefined2)((ulong)uVar36 >> 0x30);
  auVar39._10_2_ = uVar24;
  auVar39._0_10_ = *pVar4;
  auVar39._12_2_ = uVar25;
  auVar39._14_2_ = uVar26;
  auVar6._10_2_ = uVar24;
  auVar6._0_10_ = *pVar4;
  auVar6._12_2_ = uVar25;
  auVar6._14_2_ = uVar26;
  auVar39 = NEON_ext(auVar39,auVar6,8,1);
  auVar37._12_4_ = uVar23;
  auVar37._0_12_ = *pauVar10;
  auVar5._12_4_ = uVar23;
  auVar5._0_12_ = *pauVar10;
  auVar37 = NEON_ext(auVar37,auVar5,8,1);
  fVar53 = auVar37._0_4_;
  fVar18 = auVar39._0_4_;
  pauVar1 = (undefined1 (*) [12])(pauVar10[2] + 8);
  uVar23 = (undefined4)((ulong)*(undefined8 *)(pauVar10[3] + 4) >> 0x20);
  fVar40 = (float)*(undefined8 *)*pauVar1;
  fVar42 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  auVar7._12_4_ = uVar23;
  auVar7._0_12_ = *pauVar1;
  auVar8._12_4_ = uVar23;
  auVar8._0_12_ = *pauVar1;
  auVar37 = NEON_ext(auVar7,auVar8,8,1);
  fVar34 = (float)*(undefined8 *)pVar4;
  fVar32 = (float)*(undefined8 *)*pauVar10;
  fVar35 = (float)((ulong)*(undefined8 *)pVar4 >> 0x20);
  fVar48 = *pfVar11;
  fVar51 = pfVar11[1];
  fVar52 = pfVar11[2];
  fVar45 = (float)*(undefined8 *)(pfVar11 + 6);
  fVar46 = (float)*(undefined8 *)(pfVar11 + 4);
  fVar43 = (float)((ulong)*(undefined8 *)(pfVar11 + 4) >> 0x20);
  fVar28 = (float)*(undefined8 *)(pfVar11 + 0xc) - (float)*(undefined8 *)pauVar10[4];
  fVar30 = (float)((ulong)*(undefined8 *)(pfVar11 + 0xc) >> 0x20) -
           (float)((ulong)*(undefined8 *)pauVar10[4] >> 0x20);
  fVar31 = (float)*(undefined8 *)(pfVar11 + 0xe) - (float)*(undefined8 *)(pauVar10[4] + 8);
  fVar47 = (float)*(undefined8 *)(pfVar11 + 8);
  fVar38 = auVar37._0_4_;
  fVar50 = (float)*(undefined8 *)(pfVar11 + 10);
  fVar49 = (float)((ulong)*(undefined8 *)(pfVar11 + 8) >> 0x20);
  uVar36 = NEON_fmov(0x3f800000,4);
  fVar19 = fVar53 * fVar31 + fVar32 * fVar28 + fVar20 * fVar30;
  fVar21 = fVar18 * fVar31 + fVar34 * fVar28 + fVar35 * fVar30;
  fVar22 = fVar38 * fVar31 + fVar40 * fVar28 + fVar42 * fVar30;
  fVar41 = fVar53 * fVar45 + fVar32 * fVar46 + fVar20 * fVar43;
  fVar44 = fVar18 * fVar45 + fVar34 * fVar46 + fVar35 * fVar43;
  fVar46 = fVar38 * fVar45 + fVar40 * fVar46 + fVar42 * fVar43;
  *(ulong *)(lVar2 + 0x38) =
       CONCAT44(auVar37._4_4_ * fVar31 + fVar42 * fVar28 + auVar37._4_4_ * fVar30,fVar22);
  *(ulong *)(lVar2 + 0x30) = CONCAT44(fVar21,fVar19);
  fVar28 = fVar53 * fVar52 + fVar32 * fVar48 + fVar20 * fVar51;
  fVar30 = fVar18 * fVar52 + fVar34 * fVar48 + fVar35 * fVar51;
  fVar48 = fVar38 * fVar52 + fVar40 * fVar48 + fVar42 * fVar51;
  fVar32 = fVar53 * fVar50 + fVar32 * fVar47 + fVar20 * fVar49;
  fVar34 = fVar18 * fVar50 + fVar34 * fVar47 + fVar35 * fVar49;
  fVar35 = fVar38 * fVar50 + fVar40 * fVar47 + fVar42 * fVar49;
  fVar51 = fVar35 + (float)uVar36;
  fVar52 = fVar46 - fVar34;
  fVar46 = fVar46 + fVar34;
  fVar53 = fVar32 - fVar48;
  fVar48 = fVar48 + fVar32;
  fVar32 = fVar30 - fVar41;
  fVar34 = (float)uVar36 - fVar35;
  fVar30 = fVar30 + fVar41;
  uVar36 = CONCAT44(fVar28 + fVar44 + fVar51,fVar32);
  if (fVar28 < -fVar44) {
    uVar36 = CONCAT44(fVar32,fVar51 - (fVar28 + fVar44));
  }
  *(float *)(lVar2 + 0x68) = SQRT(fVar19 * fVar19 + fVar21 * fVar21 + fVar22 * fVar22);
  fVar32 = fVar52;
  fVar51 = fVar53;
  if (fVar28 < -fVar44) {
    fVar32 = fVar48;
    fVar51 = fVar46;
  }
  uVar29 = CONCAT44(fVar53,fVar46);
  if (fVar44 < fVar28) {
    uVar29 = CONCAT44(fVar52,fVar48);
  }
  uVar33 = CONCAT44(fVar34 - (fVar28 - fVar44),fVar30);
  if (fVar44 < fVar28) {
    uVar33 = CONCAT26((short)((uint)fVar30 >> 0x10),
                      CONCAT24(SUB42(fVar30,0),(fVar28 - fVar44) + fVar34));
  }
  uVar24 = (undefined2)uVar36;
  uVar25 = (undefined2)((ulong)uVar36 >> 0x10);
  uVar26 = (undefined2)((ulong)uVar36 >> 0x20);
  uVar27 = (undefined2)((ulong)uVar36 >> 0x30);
  if (fVar35 < 0.0) {
    uVar24 = (undefined2)uVar29;
    uVar25 = (undefined2)((ulong)uVar29 >> 0x10);
    uVar26 = (undefined2)((ulong)uVar29 >> 0x20);
    uVar27 = (undefined2)((ulong)uVar29 >> 0x30);
    fVar32 = (float)uVar33;
    fVar51 = (float)((ulong)uVar33 >> 0x20);
  }
  fVar28 = fVar32 * fVar32 + fVar51 * fVar51;
  fVar30 = (float)CONCAT22(uVar25,uVar24) * (float)CONCAT22(uVar25,uVar24) +
           (float)CONCAT22(uVar27,uVar26) * (float)CONCAT22(uVar27,uVar26);
  fVar34 = fVar28 + fVar30;
  if (fVar34 == 0.0) {
    fVar32 = 0.0;
    fVar51 = 0.0;
    fVar34 = 0.0;
    fVar28 = 0.0;
  }
  else {
    fVar34 = SQRT(fVar34);
    fVar28 = SQRT(fVar28 + fVar30);
    fVar32 = fVar32 / fVar34;
    fVar51 = fVar51 / fVar28;
    fVar34 = (float)CONCAT22(uVar25,uVar24) / fVar34;
    fVar28 = (float)(CONCAT26(uVar27,CONCAT24(uVar26,CONCAT22(uVar25,uVar24))) >> 0x20) / fVar28;
  }
  *(ulong *)(lVar2 + 0x48) = CONCAT44(fVar28,fVar34);
  *(ulong *)(lVar2 + 0x40) = CONCAT44(fVar51,fVar32);
  return;
}


