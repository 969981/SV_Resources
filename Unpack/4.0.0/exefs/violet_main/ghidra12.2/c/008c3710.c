/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008c3710; name: FUN_008c3710
 */


void FUN_008c3710(undefined8 param_1,long param_2,long param_3,undefined8 *param_4,int param_5,
                 long param_6)

{
  undefined4 *puVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  long *plVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
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
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  fVar34 = *(float *)(param_2 + 0x18);
  if (*(int *)(param_2 + 0xc4) == 0) {
    FUN_008c25fc(param_1,param_2,&local_a0,param_6 + 0x30);
  }
  else {
    puVar5 = (undefined8 *)
             (*(long *)(param_2 + 0xb8) +
             (ulong)*(ushort *)(*(long *)(param_2 + 0xa0) + (long)param_5 * 0xa0 + 2) * 0x40);
    uStack_78 = puVar5[5];
    local_88 = puVar5[3];
    local_a0 = *puVar5;
    uStack_98 = puVar5[1];
    local_90 = puVar5[2];
    local_80 = puVar5[4];
    fVar34 = fVar34 * *(float *)(puVar5 + 6);
  }
  uVar26 = param_4[1];
  uVar27 = param_4[3];
  puVar5 = *(undefined8 **)(param_2 + 0x20);
  uVar28 = param_4[5];
  uVar29 = param_4[7];
  pbVar9 = *(byte **)(param_3 + 200);
  fVar24 = (float)*puVar5;
  fVar22 = (float)local_a0;
  fVar23 = (float)((ulong)local_a0 >> 0x20);
  fVar41 = (float)uStack_98;
  fVar42 = (float)((ulong)uStack_98 >> 0x20);
  fVar25 = (float)((ulong)*puVar5 >> 0x20);
  fVar14 = (float)local_90;
  fVar16 = (float)((ulong)local_90 >> 0x20);
  fVar18 = (float)local_88;
  fVar20 = (float)((ulong)local_88 >> 0x20);
  fVar38 = (float)puVar5[2];
  fVar39 = (float)((ulong)puVar5[2] >> 0x20);
  fVar43 = (float)puVar5[4];
  fVar44 = (float)((ulong)puVar5[4] >> 0x20);
  fVar33 = (float)puVar5[1];
  fVar15 = (float)local_80;
  fVar17 = (float)((ulong)local_80 >> 0x20);
  fVar19 = (float)uStack_78;
  fVar21 = (float)((ulong)uStack_78 >> 0x20);
  fVar40 = (float)puVar5[3];
  fVar45 = (float)puVar5[5];
  fVar30 = fVar22 * fVar24 + fVar14 * fVar25 + fVar15 * fVar33 + 0.0;
  fVar31 = fVar23 * fVar24 + fVar16 * fVar25 + fVar17 * fVar33 + 0.0;
  fVar32 = fVar41 * fVar24 + fVar18 * fVar25 + fVar19 * fVar33 + 0.0;
  fVar33 = (float)((ulong)puVar5[1] >> 0x20) + fVar42 * fVar24 + fVar20 * fVar25 + fVar21 * fVar33;
  fVar35 = fVar22 * fVar38 + fVar14 * fVar39 + fVar15 * fVar40 + 0.0;
  fVar36 = fVar23 * fVar38 + fVar16 * fVar39 + fVar17 * fVar40 + 0.0;
  fVar37 = fVar41 * fVar38 + fVar18 * fVar39 + fVar19 * fVar40 + 0.0;
  fVar38 = (float)((ulong)puVar5[3] >> 0x20) + fVar42 * fVar38 + fVar20 * fVar39 + fVar21 * fVar40;
  lVar6 = *(long *)(*(long *)(param_3 + 0xb8) + 0x68);
  fVar24 = (float)*param_4;
  fVar25 = (float)((ulong)*param_4 >> 0x20);
  fVar39 = fVar22 * fVar43 + fVar14 * fVar44 + fVar15 * fVar45 + 0.0;
  fVar40 = fVar23 * fVar43 + fVar16 * fVar44 + fVar17 * fVar45 + 0.0;
  fVar41 = fVar41 * fVar43 + fVar18 * fVar44 + fVar19 * fVar45 + 0.0;
  fVar42 = (float)((ulong)puVar5[5] >> 0x20) + fVar42 * fVar43 + fVar20 * fVar44 + fVar21 * fVar45;
  fVar14 = (float)uVar26;
  fVar15 = (float)param_4[2];
  fVar16 = (float)((ulong)param_4[2] >> 0x20);
  fVar18 = (float)param_4[4];
  fVar17 = (float)uVar27;
  fVar21 = (float)param_4[6];
  fVar19 = (float)((ulong)param_4[4] >> 0x20);
  fVar22 = (float)((ulong)param_4[6] >> 0x20);
  fVar20 = (float)uVar28;
  fVar23 = (float)uVar29;
  uVar7 = lVar6 + 0x3fU & -lVar6;
  if ((*pbVar9 & 1) == 0) {
    lVar6 = *(long *)(pbVar9 + 0x40);
    *(ulong *)(pbVar9 + 0x40) = lVar6 + uVar7;
  }
  else {
    plVar10 = *(long **)(pbVar9 + 0x40);
    do {
      lVar6 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar6 + uVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar5 = (undefined8 *)(*(long *)(*(long *)(param_3 + 200) + 0x38) + lVar6);
  puVar5[1] = CONCAT44((float)((ulong)uVar26 >> 0x20) +
                       fVar33 * fVar24 + fVar38 * fVar25 + fVar42 * fVar14,
                       fVar32 * fVar24 + fVar37 * fVar25 + fVar41 * fVar14 + 0.0);
  *puVar5 = CONCAT44(fVar31 * fVar24 + fVar36 * fVar25 + fVar40 * fVar14 + 0.0,
                     fVar30 * fVar24 + fVar35 * fVar25 + fVar39 * fVar14 + 0.0);
  puVar5[3] = CONCAT44((float)((ulong)uVar27 >> 0x20) +
                       fVar33 * fVar15 + fVar38 * fVar16 + fVar42 * fVar17,
                       fVar32 * fVar15 + fVar37 * fVar16 + fVar41 * fVar17 + 0.0);
  puVar5[2] = CONCAT44(fVar31 * fVar15 + fVar36 * fVar16 + fVar40 * fVar17 + 0.0,
                       fVar30 * fVar15 + fVar35 * fVar16 + fVar39 * fVar17 + 0.0);
  puVar5[5] = CONCAT44((float)((ulong)uVar28 >> 0x20) +
                       fVar33 * fVar18 + fVar38 * fVar19 + fVar42 * fVar20,
                       fVar32 * fVar18 + fVar37 * fVar19 + fVar41 * fVar20 + 0.0);
  puVar5[4] = CONCAT44(fVar31 * fVar18 + fVar36 * fVar19 + fVar40 * fVar20 + 0.0,
                       fVar30 * fVar18 + fVar35 * fVar19 + fVar39 * fVar20 + 0.0);
  puVar5[7] = CONCAT44((float)((ulong)uVar29 >> 0x20) +
                       fVar33 * fVar21 + fVar38 * fVar22 + fVar42 * fVar23,
                       fVar32 * fVar21 + fVar37 * fVar22 + fVar41 * fVar23 + 0.0);
  puVar5[6] = CONCAT44(fVar31 * fVar21 + fVar36 * fVar22 + fVar40 * fVar23 + 0.0,
                       fVar30 * fVar21 + fVar35 * fVar22 + fVar39 * fVar23 + 0.0);
  *(long *)(*(long *)(param_2 + 0xa8) + (long)param_5 * 0x30) = lVar6;
  if (*(short *)(param_6 + 0x10) != 0) {
    uVar7 = 0;
    do {
      pbVar9 = *(byte **)(*(long *)(param_6 + 0x18) + uVar7 * 8);
      bVar2 = *pbVar9;
      if (bVar2 < 2) {
        if (bVar2 == 1) {
          uVar11 = FUN_008bea60(param_1,pbVar9 + 0x30);
          uVar12 = FUN_008bea60(param_1,pbVar9 + 0x40);
          uVar13 = FUN_008bea60(param_1,pbVar9 + 0x50);
          fVar14 = (float)FUN_008bea60(param_1,pbVar9 + 0x60);
          fVar14 = fVar34 * fVar14;
          pbVar9 = *(byte **)(param_3 + 200);
          lVar6 = *(long *)(*(long *)(param_3 + 0xb8) + 0x68);
          uVar8 = lVar6 + 0xfU & -lVar6;
          if ((*pbVar9 & 1) == 0) {
LAB_008c3a2c:
            lVar6 = *(long *)(pbVar9 + 0x40);
            *(ulong *)(pbVar9 + 0x40) = lVar6 + uVar8;
          }
          else {
            plVar10 = *(long **)(pbVar9 + 0x40);
            do {
              lVar6 = *plVar10;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar4) {
                *plVar10 = lVar6 + uVar8;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
LAB_008c3a50:
          puVar1 = (undefined4 *)(*(long *)(*(long *)(param_3 + 200) + 0x38) + lVar6);
          *puVar1 = uVar11;
          puVar1[1] = uVar12;
          puVar1[2] = uVar13;
          puVar1[3] = fVar14;
          goto LAB_008c3918;
        }
        if (bVar2 == 0) {
          uVar11 = FUN_008bea60(param_1,pbVar9 + 8);
          uVar12 = FUN_008bea60(param_1,pbVar9 + 0x18);
          uVar13 = FUN_008bea60(param_1,pbVar9 + 0x28);
          fVar14 = (float)FUN_008bea60(param_1,pbVar9 + 0x38);
          fVar14 = fVar34 * fVar14;
          pbVar9 = *(byte **)(param_3 + 200);
          lVar6 = *(long *)(*(long *)(param_3 + 0xb8) + 0x68);
          uVar8 = lVar6 + 0xfU & -lVar6;
          if ((*pbVar9 & 1) == 0) goto LAB_008c3a2c;
          plVar10 = *(long **)(pbVar9 + 0x40);
          do {
            lVar6 = *plVar10;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar4) {
              *plVar10 = lVar6 + uVar8;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          goto LAB_008c3a50;
        }
      }
      else {
        lVar6 = 0;
LAB_008c3918:
        *(long *)(*(long *)(*(long *)(param_2 + 0xa8) + (long)param_5 * 0x30 + 8) + uVar7 * 8) =
             lVar6;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(ushort *)(param_6 + 0x10));
  }
  return;
}


