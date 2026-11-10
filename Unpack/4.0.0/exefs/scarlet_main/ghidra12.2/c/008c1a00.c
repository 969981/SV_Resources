/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008c1a00; name: FUN_008c1a00
 */


void FUN_008c1a00(undefined8 param_1,long param_2,long param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  byte *pbVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
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
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined8 uVar43;
  ulong local_b8;
  long lStack_b0;
  ulong local_a8;
  long lStack_a0;
  ulong local_98;
  long lStack_90;
  ulong local_88;
  long lStack_80;
  
  if (0 < *(int *)(param_2 + 0x10)) {
    lVar11 = 0;
    lVar12 = 8;
    do {
      plVar7 = *(long **)(*(long *)(param_2 + 0x18) + lVar12);
      (**(code **)(*plVar7 + 0x28))(param_1,plVar7,param_3);
      lVar11 = lVar11 + 1;
      lVar12 = lVar12 + 0x28;
    } while (lVar11 < *(int *)(param_2 + 0x10));
    if (0 < *(int *)(param_2 + 0x10)) {
      lVar11 = 0;
      uVar14 = 0;
      uVar13 = 0;
      do {
        plVar7 = *(long **)(*(long *)(param_2 + 0x18) + lVar11 * 0x28 + 8);
        for (iVar4 = (**(code **)(*plVar7 + 0x38))(plVar7); iVar6 = (int)uVar14, iVar4 != 0;
            iVar4 = iVar4 + -1) {
          iVar5 = (**(code **)(*plVar7 + 0x48))(plVar7);
          uVar14 = (ulong)(uint)(iVar5 + iVar6);
          iVar6 = (**(code **)(*plVar7 + 0x48))(plVar7);
          uVar13 = (ulong)(uint)(iVar6 * 3 + (int)uVar13);
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 < *(int *)(param_2 + 0x10));
      if (iVar6 != 0) {
        lVar12 = *(long *)(*(long *)(param_3 + 0xb8) + 0x70);
        lVar8 = *(long *)(*(long *)(param_3 + 0xb8) + 0x78);
        uVar13 = -(uVar13 >> 0x1f) & 0xfffffffc00000000 | uVar13 << 2;
        lVar11 = ((long)iVar6 << 3 | 4U) + uVar13 + (lVar8 + lVar12) * 2;
        pbVar9 = *(byte **)(param_3 + 200);
        if ((*pbVar9 & 1) == 0) {
          lVar10 = *(long *)(pbVar9 + 0x48) + lVar11;
          *(long *)(pbVar9 + 0x48) = lVar10;
        }
        else {
          plVar7 = *(long **)(pbVar9 + 0x48);
          do {
            lVar10 = *plVar7 + lVar11;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *plVar7 = lVar10;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        lStack_80 = *(long *)(*(long *)(param_3 + 200) + 0x38);
        local_b8 = (lStack_80 + (*(long *)(pbVar9 + 0x18) - lVar10) + 3U & 0xfffffffffffffffc) +
                   lVar12 + -1 & -lVar12;
        lStack_b0 = local_b8 - lStack_80;
        local_a8 = lVar8 + -1 + local_b8 + (-(uVar14 >> 0x1f) & 0xfffffff800000000 | uVar14 << 3) &
                   -lVar8;
        local_98 = lVar12 + -1 + local_a8 + uVar13 & -lVar12;
        lStack_90 = local_98 - lStack_80;
        local_88 = local_98 + lVar8 + -1 & -lVar8;
        lStack_a0 = local_a8 - lStack_80;
        lStack_80 = local_88 - lStack_80;
        *(undefined8 *)(param_2 + 0x28) = 0;
        *(long *)(param_2 + 0x30) = lStack_b0;
        *(long *)(param_2 + 0x38) = lStack_a0;
        if (0 < *(int *)(param_2 + 0x10)) {
          lVar11 = 0;
          do {
            uVar19 = param_4[1];
            uVar23 = param_4[3];
            uVar39 = param_4[5];
            uVar43 = param_4[7];
            fVar15 = (float)*param_4;
            fVar24 = (float)*param_5;
            fVar25 = (float)((ulong)*param_5 >> 0x20);
            fVar26 = (float)param_5[1];
            fVar27 = (float)((ulong)param_5[1] >> 0x20);
            fVar17 = (float)((ulong)*param_4 >> 0x20);
            fVar28 = (float)param_5[2];
            fVar29 = (float)((ulong)param_5[2] >> 0x20);
            fVar30 = (float)param_5[3];
            fVar31 = (float)((ulong)param_5[3] >> 0x20);
            fVar18 = (float)uVar19;
            fVar32 = (float)param_5[4];
            fVar33 = (float)((ulong)param_5[4] >> 0x20);
            fVar34 = (float)param_5[5];
            fVar35 = (float)((ulong)param_5[5] >> 0x20);
            fVar20 = (float)param_4[2];
            fVar21 = (float)((ulong)param_4[2] >> 0x20);
            fVar22 = (float)uVar23;
            fVar36 = (float)param_4[4];
            fVar37 = (float)((ulong)param_4[4] >> 0x20);
            fVar40 = (float)param_4[6];
            fVar41 = (float)((ulong)param_4[6] >> 0x20);
            fVar38 = (float)uVar39;
            fVar42 = (float)uVar43;
            lVar8 = *(long *)(*(long *)(param_3 + 0xb8) + 0x68);
            pbVar9 = *(byte **)(param_3 + 200);
            lVar12 = *(long *)(param_2 + 8);
            uVar13 = lVar8 + 0x3fU & -lVar8;
            if ((*pbVar9 & 1) == 0) {
              lVar8 = *(long *)(pbVar9 + 0x40);
              *(ulong *)(pbVar9 + 0x40) = lVar8 + uVar13;
            }
            else {
              plVar7 = *(long **)(pbVar9 + 0x40);
              do {
                lVar8 = *plVar7;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                if (bVar3) {
                  *plVar7 = lVar8 + uVar13;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            puVar1 = (undefined8 *)(*(long *)(*(long *)(param_3 + 200) + 0x38) + lVar8);
            puVar1[1] = CONCAT44((float)((ulong)uVar19 >> 0x20) +
                                 fVar27 * fVar15 + fVar31 * fVar17 + fVar35 * fVar18,
                                 fVar26 * fVar15 + fVar30 * fVar17 + fVar34 * fVar18 + 0.0);
            *puVar1 = CONCAT44(fVar25 * fVar15 + fVar29 * fVar17 + fVar33 * fVar18 + 0.0,
                               fVar24 * fVar15 + fVar28 * fVar17 + fVar32 * fVar18 + 0.0);
            puVar1[3] = CONCAT44((float)((ulong)uVar23 >> 0x20) +
                                 fVar27 * fVar20 + fVar31 * fVar21 + fVar35 * fVar22,
                                 fVar26 * fVar20 + fVar30 * fVar21 + fVar34 * fVar22 + 0.0);
            puVar1[2] = CONCAT44(fVar25 * fVar20 + fVar29 * fVar21 + fVar33 * fVar22 + 0.0,
                                 fVar24 * fVar20 + fVar28 * fVar21 + fVar32 * fVar22 + 0.0);
            puVar1[5] = CONCAT44((float)((ulong)uVar39 >> 0x20) +
                                 fVar27 * fVar36 + fVar31 * fVar37 + fVar35 * fVar38,
                                 fVar26 * fVar36 + fVar30 * fVar37 + fVar34 * fVar38 + 0.0);
            puVar1[4] = CONCAT44(fVar25 * fVar36 + fVar29 * fVar37 + fVar33 * fVar38 + 0.0,
                                 fVar24 * fVar36 + fVar28 * fVar37 + fVar32 * fVar38 + 0.0);
            puVar1[7] = CONCAT44((float)((ulong)uVar43 >> 0x20) +
                                 fVar27 * fVar40 + fVar31 * fVar41 + fVar35 * fVar42,
                                 fVar26 * fVar40 + fVar30 * fVar41 + fVar34 * fVar42 + 0.0);
            puVar1[6] = CONCAT44(fVar25 * fVar40 + fVar29 * fVar41 + fVar33 * fVar42 + 0.0,
                                 fVar24 * fVar40 + fVar28 * fVar41 + fVar32 * fVar42 + 0.0);
            *(long *)(*(long *)(param_2 + 0x18) + lVar11 * 0x28) = lVar8;
            uVar16 = FUN_008bea60(param_1,lVar12 + lVar11 * 0x38 + 0x18);
            lVar12 = *(long *)(*(long *)(param_3 + 0xb8) + 0x68);
            pbVar9 = *(byte **)(param_3 + 200);
            uVar13 = lVar12 + 0xfU & -lVar12;
            if ((*pbVar9 & 1) == 0) {
              lVar12 = *(long *)(pbVar9 + 0x40);
              *(ulong *)(pbVar9 + 0x40) = lVar12 + uVar13;
            }
            else {
              plVar7 = *(long **)(pbVar9 + 0x40);
              do {
                lVar12 = *plVar7;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                if (bVar3) {
                  *plVar7 = lVar12 + uVar13;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            puVar1 = (undefined8 *)(*(long *)(*(long *)(param_3 + 200) + 0x38) + lVar12);
            *puVar1 = 0x3f8000003f800000;
            *(undefined4 *)(puVar1 + 1) = 0x3f800000;
            *(undefined4 *)((long)puVar1 + 0xc) = uVar16;
            lVar8 = lVar11 * 0x28;
            *(long *)(*(long *)(param_2 + 0x18) + lVar8 + 0x20) = lVar12;
            plVar7 = *(long **)(*(long *)(param_2 + 0x18) + lVar8 + 8);
            iVar4 = *(int *)(param_2 + 0x2c);
            (**(code **)(*plVar7 + 0x68))
                      (plVar7,&local_b8,(undefined8 *)(param_2 + 0x28),&local_a8,param_2 + 0x2c,0);
            *(int *)(*(long *)(param_2 + 0x18) + lVar8 + 0x14) = iVar4;
            *(int *)(*(long *)(param_2 + 0x18) + lVar8 + 0x18) = *(int *)(param_2 + 0x2c) - iVar4;
            lVar11 = lVar11 + 1;
          } while (lVar11 < *(int *)(param_2 + 0x10));
        }
      }
    }
  }
  return;
}


