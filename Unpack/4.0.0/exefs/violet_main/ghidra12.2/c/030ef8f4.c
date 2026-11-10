/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030ef8f4; name: FUN_030ef8f4
 */


undefined1  [16]
FUN_030ef8f4(long param_1,long param_2,undefined8 *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar15;
  float fVar16;
  undefined1 auVar14 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
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
  float fVar36;
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
  
  lVar6 = *(long *)(param_1 + 0x20);
  iVar7 = *param_4;
  if (iVar7 < *(int *)(lVar6 + 0x30)) {
    lVar10 = *(long *)(lVar6 + 0x28);
    iVar5 = iVar7;
    if (*(int *)(lVar6 + 0x78) != 0) {
      iVar5 = *(int *)(*(long *)(lVar6 + 0x70) + (long)iVar7 * 4);
    }
    if (iVar5 != -1) {
      plVar9 = (long *)(lVar6 + 0xc0);
      iVar7 = iVar5;
      goto LAB_030ef938;
    }
  }
  else {
    plVar9 = (long *)(lVar6 + 0xe0);
    iVar7 = iVar7 - *(int *)(lVar6 + 0x30);
LAB_030ef938:
    lVar10 = *plVar9;
  }
  iVar2 = *(int *)(lVar6 + 0x40);
  piVar8 = (int *)(lVar10 + (long)iVar7 * 0x14);
  iVar7 = *piVar8;
  iVar5 = piVar8[1];
  lVar10 = 0x38;
  if (iVar2 <= iVar7) {
    lVar10 = 0xf0;
  }
  iVar1 = 0;
  if (iVar2 <= iVar7) {
    iVar1 = iVar2;
  }
  puVar3 = (undefined8 *)(*(long *)(lVar6 + lVar10) + (long)(iVar7 - iVar1) * 0x10);
  uVar13 = *puVar3;
  lVar10 = 0x38;
  if (iVar2 <= iVar5) {
    lVar10 = 0xf0;
  }
  fVar19 = (float)uVar13;
  fVar12 = (float)*(undefined8 *)(param_1 + 0x60);
  fVar20 = (float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20);
  fVar22 = (float)*(undefined8 *)(param_1 + 0x68);
  iVar7 = 0;
  if (iVar2 <= iVar5) {
    iVar7 = iVar2;
  }
  fVar21 = (float)((ulong)uVar13 >> 0x20);
  fVar23 = (float)*(undefined8 *)(param_1 + 0x70);
  fVar34 = (float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20);
  fVar25 = (float)*(undefined8 *)(param_1 + 0x78);
  fVar32 = (float)puVar3[1];
  fVar35 = (float)*(undefined8 *)(param_1 + 0x80);
  fVar26 = (float)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x20);
  fVar36 = (float)*(undefined8 *)(param_1 + 0x88);
  puVar3 = (undefined8 *)(*(long *)(lVar6 + lVar10) + (long)(iVar5 - iVar7) * 0x10);
  uVar13 = *puVar3;
  lVar6 = *(long *)(param_2 + 0x20);
  iVar7 = *param_5;
  fVar33 = (float)uVar13;
  fVar11 = (float)*(undefined8 *)(param_1 + 0x90);
  fVar17 = fVar11 + fVar35 * fVar32 + fVar12 * fVar19 + fVar23 * fVar21;
  fVar15 = (float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20);
  fVar18 = fVar15 + fVar26 * fVar32 + fVar20 * fVar19 + fVar34 * fVar21;
  fVar16 = (float)*(undefined8 *)(param_1 + 0x98);
  fVar19 = fVar16 + fVar36 * fVar32 + fVar22 * fVar19 + fVar25 * fVar21;
  fVar21 = (float)((ulong)uVar13 >> 0x20);
  fVar32 = (float)puVar3[1];
  fVar11 = fVar11 + fVar35 * fVar32 + fVar12 * fVar33 + fVar23 * fVar21;
  fVar15 = fVar15 + fVar26 * fVar32 + fVar20 * fVar33 + fVar34 * fVar21;
  fVar16 = fVar16 + fVar36 * fVar32 + fVar22 * fVar33 + fVar25 * fVar21;
  if (iVar7 < *(int *)(lVar6 + 0x30)) {
    lVar10 = *(long *)(lVar6 + 0x28);
    iVar5 = iVar7;
    if (*(int *)(lVar6 + 0x78) != 0) {
      iVar5 = *(int *)(*(long *)(lVar6 + 0x70) + (long)iVar7 * 4);
    }
    if (iVar5 == -1) goto LAB_030efa0c;
    plVar9 = (long *)(lVar6 + 0xc0);
    iVar7 = iVar5;
  }
  else {
    plVar9 = (long *)(lVar6 + 0xe0);
    iVar7 = iVar7 - *(int *)(lVar6 + 0x30);
  }
  lVar10 = *plVar9;
LAB_030efa0c:
  piVar8 = (int *)(lVar10 + (long)iVar7 * 0x14);
  iVar2 = *(int *)(lVar6 + 0x40);
  iVar7 = *piVar8;
  iVar5 = piVar8[1];
  lVar10 = 0x38;
  if (iVar2 <= iVar7) {
    lVar10 = 0xf0;
  }
  iVar1 = 0;
  if (iVar2 <= iVar7) {
    iVar1 = iVar2;
  }
  puVar3 = (undefined8 *)(*(long *)(lVar6 + lVar10) + (long)(iVar7 - iVar1) * 0x10);
  uVar13 = *puVar3;
  lVar10 = 0x38;
  if (iVar2 <= iVar5) {
    lVar10 = 0xf0;
  }
  iVar7 = 0;
  if (iVar2 <= iVar5) {
    iVar7 = iVar2;
  }
  puVar4 = (undefined8 *)(*(long *)(lVar6 + lVar10) + (long)(iVar5 - iVar7) * 0x10);
  uVar24 = *puVar4;
  fVar12 = (float)uVar13;
  fVar36 = (float)*(undefined8 *)(param_2 + 0x60);
  fVar37 = (float)((ulong)*(undefined8 *)(param_2 + 0x60) >> 0x20);
  fVar39 = (float)*(undefined8 *)(param_2 + 0x68);
  fVar22 = (float)((ulong)uVar13 >> 0x20);
  fVar40 = (float)*(undefined8 *)(param_2 + 0x70);
  fVar41 = (float)((ulong)*(undefined8 *)(param_2 + 0x70) >> 0x20);
  fVar43 = (float)*(undefined8 *)(param_2 + 0x78);
  fVar33 = (float)uVar24;
  fVar34 = (float)((ulong)uVar24 >> 0x20);
  fVar35 = (float)puVar4[1];
  fVar44 = (float)*(undefined8 *)(param_2 + 0x80);
  fVar45 = (float)((ulong)*(undefined8 *)(param_2 + 0x80) >> 0x20);
  fVar46 = (float)*(undefined8 *)(param_2 + 0x88);
  fVar32 = (float)puVar3[1];
  fVar27 = (float)*param_3;
  fVar30 = fVar17 * fVar27;
  fVar28 = (float)((ulong)*param_3 >> 0x20);
  fVar38 = fVar18 * fVar28;
  fVar29 = (float)param_3[1];
  fVar42 = fVar19 * fVar29;
  fVar31 = -(fVar30 + fVar38 + fVar42);
  fVar23 = (float)*(undefined8 *)(param_2 + 0x90);
  fVar20 = fVar23 + fVar44 * fVar32 + fVar36 * fVar12 + fVar40 * fVar22;
  fVar25 = (float)((ulong)*(undefined8 *)(param_2 + 0x90) >> 0x20);
  fVar21 = fVar25 + fVar45 * fVar32 + fVar37 * fVar12 + fVar41 * fVar22;
  fVar26 = (float)*(undefined8 *)(param_2 + 0x98);
  fVar22 = fVar26 + fVar46 * fVar32 + fVar39 * fVar12 + fVar43 * fVar22;
  fVar23 = fVar23 + fVar44 * fVar35 + fVar36 * fVar33 + fVar40 * fVar34;
  fVar25 = fVar25 + fVar45 * fVar35 + fVar37 * fVar33 + fVar41 * fVar34;
  fVar26 = fVar26 + fVar46 * fVar35 + fVar39 * fVar33 + fVar43 * fVar34;
  fVar32 = fVar11 * fVar27;
  fVar39 = fVar15 * fVar28;
  fVar43 = fVar16 * fVar29;
  fVar33 = -(fVar32 + fVar39 + fVar43);
  fVar34 = fVar27 * fVar20;
  fVar40 = fVar28 * fVar21;
  fVar44 = fVar29 * fVar22;
  fVar35 = -(fVar34 + fVar40 + fVar44);
  fVar36 = fVar27 * fVar23;
  fVar41 = fVar28 * fVar25;
  fVar45 = fVar29 * fVar26;
  fVar37 = -(fVar45 + fVar36 + fVar41);
  fVar12 = (fVar11 + fVar27 * fVar33) - (fVar20 + fVar27 * fVar35);
  fVar20 = (fVar15 + fVar28 * -(fVar32 + fVar39 + fVar43)) -
           (fVar21 + fVar28 * -(fVar34 + fVar40 + fVar44));
  fVar22 = (fVar16 + fVar29 * fVar33) - (fVar22 + fVar29 * fVar35);
  fVar12 = fVar12 * fVar12;
  fVar20 = fVar20 * fVar20;
  fVar22 = fVar22 * fVar22;
  fVar11 = (fVar17 + fVar27 * fVar31) - (fVar23 + fVar27 * fVar37);
  fVar21 = (fVar18 + fVar28 * -(fVar30 + fVar38 + fVar42)) -
           (fVar25 + fVar28 * -(fVar45 + fVar36 + fVar41));
  fVar19 = (fVar19 + fVar29 * fVar31) - (fVar26 + fVar29 * fVar37);
  fVar11 = fVar11 * fVar11;
  fVar21 = fVar21 * fVar21;
  fVar19 = fVar19 * fVar19;
  auVar14._0_4_ = SQRT(fVar12 + fVar20 + fVar22) + SQRT(fVar11 + fVar21 + fVar19);
  auVar14._4_4_ = SQRT(fVar12 + fVar20 + fVar22) + SQRT(fVar11 + fVar21 + fVar19);
  auVar14._8_8_ = 0;
  return auVar14;
}


