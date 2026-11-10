/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e74998; name: FUN_02e74998
 */


void FUN_02e74998(long param_1,long param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  float fVar10;
  byte bVar11;
  float fVar12;
  byte bVar13;
  float fVar14;
  byte bVar15;
  float fVar16;
  byte bVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  
  plVar8 = *(long **)(param_2 + 8);
  if (plVar8 != (long *)0x0) {
    lVar9 = *plVar8;
    if (*(code **)(lVar9 + 0x18) != (code *)0x0) {
      (**(code **)(lVar9 + 0x18))("BroadPhase",10,*(undefined8 *)(lVar9 + 0x28));
    }
    puVar6 = (undefined8 *)plVar8[2];
    uVar3 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
    if ((uVar3 <= (ulong)plVar8[3]) && (plVar8[2] = uVar3, puVar6 != (undefined8 *)0x0)) {
      *puVar6 = "TtBroadPhase";
      uVar2 = nn::os::GetSystemTick();
      puVar6[1] = uVar2;
    }
    if (((*(byte *)(lVar9 + 0x38) & 1) != 0) && (plVar8[6] != 0)) {
      puVar6 = (undefined8 *)plVar8[2];
      uVar3 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
      if ((uVar3 <= (ulong)plVar8[3]) && (plVar8[2] = uVar3, puVar6 != (undefined8 *)0x0)) {
        *puVar6 = &DAT_03c4e575;
        puVar6[1] = *(undefined8 *)(plVar8[6] + 8);
      }
    }
    lVar9 = *plVar8;
    if (*(code **)(lVar9 + 0x18) != (code *)0x0) {
      (**(code **)(lVar9 + 0x18))("Update",6,*(undefined8 *)(lVar9 + 0x28));
    }
    puVar6 = (undefined8 *)plVar8[2];
    uVar3 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
    if ((uVar3 <= (ulong)plVar8[3]) && (plVar8[2] = uVar3, puVar6 != (undefined8 *)0x0)) {
      *puVar6 = "TtUpdate";
      uVar2 = nn::os::GetSystemTick();
      puVar6[1] = uVar2;
    }
    if (((*(byte *)(lVar9 + 0x38) & 1) != 0) && (plVar8[6] != 0)) {
      puVar6 = (undefined8 *)plVar8[2];
      uVar3 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
      if ((uVar3 <= (ulong)plVar8[3]) && (plVar8[2] = uVar3, puVar6 != (undefined8 *)0x0)) {
        *puVar6 = &DAT_03c4e575;
        puVar6[1] = *(undefined8 *)(plVar8[6] + 8);
      }
    }
    lVar9 = *plVar8;
    if (*(code **)(lVar9 + 0x18) != (code *)0x0) {
      (**(code **)(lVar9 + 0x18))("PrepareTreeBuildData",0x14,*(undefined8 *)(lVar9 + 0x28));
    }
    puVar6 = (undefined8 *)plVar8[2];
    uVar3 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
    if ((uVar3 <= (ulong)plVar8[3]) && (plVar8[2] = uVar3, puVar6 != (undefined8 *)0x0)) {
      *puVar6 = "TtPrepareTreeBuildData";
      uVar2 = nn::os::GetSystemTick();
      puVar6[1] = uVar2;
    }
    if (((*(byte *)(lVar9 + 0x38) & 1) != 0) && (plVar8[6] != 0)) {
      puVar6 = (undefined8 *)plVar8[2];
      uVar3 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
      if ((uVar3 <= (ulong)plVar8[3]) && (plVar8[2] = uVar3, puVar6 != (undefined8 *)0x0)) {
        *puVar6 = &DAT_03c4e575;
        puVar6[1] = *(undefined8 *)(plVar8[6] + 8);
      }
    }
  }
  lVar9 = *(long *)(param_1 + 8);
  lVar5 = *(long *)(*(long *)(lVar9 + 0x10) + (long)param_3 * 8);
  uVar18 = *(uint *)(lVar5 + 0x58);
  uVar3 = (ulong)uVar18;
  if (0 < (int)uVar18) {
    lVar4 = *(long *)(lVar9 + 0x140);
    lVar9 = *(long *)(lVar9 + 0x120);
    puVar6 = *(undefined8 **)(lVar5 + 0x50);
    do {
      iVar1 = *(int *)((long)puVar6 + 0xc);
      if (*(char *)(lVar4 + iVar1) != '\0') {
        puVar7 = (undefined8 *)(lVar9 + (long)iVar1 * 0x18);
        fVar16 = (float)((ulong)puVar7[1] >> 0x20);
        fVar10 = ((float)*puVar7 + (float)puVar7[2]) * 0.5;
        fVar12 = ((float)((ulong)*puVar7 >> 0x20) + (float)((ulong)puVar7[2] >> 0x20)) * 0.5;
        fVar14 = ((float)puVar7[1] + fVar16) * 0.5;
        fVar16 = (fVar16 + fVar16) * 0.5;
        uVar18 = (uint)((int)fVar10 >> 0x1f) >> 1;
        uVar19 = (uint)((int)fVar12 >> 0x1f) >> 1;
        uVar20 = (uint)((int)fVar14 >> 0x1f) >> 1;
        uVar21 = (uint)((int)fVar16 >> 0x1f) >> 1;
        bVar11 = (byte)((uint)fVar10 >> 0x18);
        bVar13 = (byte)((uint)fVar12 >> 0x18);
        bVar15 = (byte)((uint)fVar14 >> 0x18);
        bVar17 = (byte)((uint)fVar16 >> 0x18);
        puVar6[1] = CONCAT17((byte)((char)bVar17 >> 7) >> 1 ^ bVar17,
                             CONCAT16((byte)(uVar21 >> 0x10) ^ (byte)((uint)fVar16 >> 0x10),
                                      CONCAT15((byte)(uVar21 >> 8) ^ (byte)((uint)fVar16 >> 8),
                                               CONCAT14((byte)uVar21 ^ SUB41(fVar16,0),
                                                        CONCAT13((byte)((char)bVar15 >> 7) >> 1 ^
                                                                 bVar15,CONCAT12((byte)(uVar20 >>
                                                                                       0x10) ^
                                                                                 (byte)((uint)fVar14
                                                                                       >> 0x10),
                                                                                 CONCAT11((byte)(
                                                  uVar20 >> 8) ^ (byte)((uint)fVar14 >> 8),
                                                  (byte)uVar20 ^ SUB41(fVar14,0))))))));
        *puVar6 = CONCAT17((byte)((char)bVar13 >> 7) >> 1 ^ bVar13,
                           CONCAT16((byte)(uVar19 >> 0x10) ^ (byte)((uint)fVar12 >> 0x10),
                                    CONCAT15((byte)(uVar19 >> 8) ^ (byte)((uint)fVar12 >> 8),
                                             CONCAT14((byte)uVar19 ^ SUB41(fVar12,0),
                                                      CONCAT13((byte)((char)bVar11 >> 7) >> 1 ^
                                                               bVar11,CONCAT12((byte)(uVar18 >> 0x10
                                                                                     ) ^ (byte)((
                                                  uint)fVar10 >> 0x10),
                                                  CONCAT11((byte)(uVar18 >> 8) ^
                                                           (byte)((uint)fVar10 >> 8),
                                                           (byte)uVar18 ^ SUB41(fVar10,0))))))));
        *(int *)((long)puVar6 + 0xc) = iVar1;
      }
      uVar3 = uVar3 - 1;
      puVar6 = puVar6 + 2;
    } while (uVar3 != 0);
  }
  if (plVar8 == (long *)0x0) {
    return;
  }
  lVar9 = *plVar8;
  if (((*(byte *)(lVar9 + 0x38) & 1) != 0) && (plVar8[6] != 0)) {
    puVar6 = (undefined8 *)plVar8[2];
    uVar3 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
    if ((uVar3 <= (ulong)plVar8[3]) && (plVar8[2] = uVar3, puVar6 != (undefined8 *)0x0)) {
      *puVar6 = &DAT_03c4e575;
      puVar6[1] = *(undefined8 *)(plVar8[6] + 8);
    }
  }
  puVar6 = (undefined8 *)plVar8[2];
  uVar3 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
  if ((uVar3 <= (ulong)plVar8[3]) && (plVar8[2] = uVar3, puVar6 != (undefined8 *)0x0)) {
    *puVar6 = &DAT_03c2d363;
    uVar2 = nn::os::GetSystemTick();
    puVar6[1] = uVar2;
  }
  if (*(code **)(lVar9 + 0x20) != (code *)0x0) {
    (**(code **)(lVar9 + 0x20))(*(undefined8 *)(lVar9 + 0x28));
  }
  lVar9 = *plVar8;
  if (((*(byte *)(lVar9 + 0x38) & 1) == 0) || (plVar8[6] == 0)) {
LAB_02e74cd0:
    puVar7 = (undefined8 *)plVar8[2];
  }
  else {
    puVar6 = (undefined8 *)plVar8[2];
    puVar7 = (undefined8 *)((long)puVar6 + 0x17U & 0xfffffffffffffff8);
    if ((undefined8 *)plVar8[3] < puVar7) goto LAB_02e74cd0;
    plVar8[2] = (long)puVar7;
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &DAT_03c4e575;
      puVar6[1] = *(undefined8 *)(plVar8[6] + 8);
      goto LAB_02e74cd0;
    }
  }
  uVar3 = (long)puVar7 + 0x17U & 0xfffffffffffffff8;
  if ((uVar3 <= (ulong)plVar8[3]) && (plVar8[2] = uVar3, puVar7 != (undefined8 *)0x0)) {
    *puVar7 = &DAT_03c2d363;
    uVar2 = nn::os::GetSystemTick();
    puVar7[1] = uVar2;
  }
  if (*(code **)(lVar9 + 0x20) != (code *)0x0) {
    (**(code **)(lVar9 + 0x20))(*(undefined8 *)(lVar9 + 0x28));
  }
  lVar9 = *plVar8;
  if (((*(byte *)(lVar9 + 0x38) & 1) != 0) && (plVar8[6] != 0)) {
    puVar6 = (undefined8 *)plVar8[2];
    puVar7 = (undefined8 *)((long)puVar6 + 0x17U & 0xfffffffffffffff8);
    if (puVar7 <= (undefined8 *)plVar8[3]) {
      plVar8[2] = (long)puVar7;
      if (puVar6 == (undefined8 *)0x0) goto LAB_02e74d60;
      *puVar6 = &DAT_03c4e575;
      puVar6[1] = *(undefined8 *)(plVar8[6] + 8);
    }
  }
  puVar7 = (undefined8 *)plVar8[2];
LAB_02e74d60:
  uVar3 = (long)puVar7 + 0x17U & 0xfffffffffffffff8;
  if ((uVar3 <= (ulong)plVar8[3]) && (plVar8[2] = uVar3, puVar7 != (undefined8 *)0x0)) {
    *puVar7 = &DAT_03c2d363;
    uVar2 = nn::os::GetSystemTick();
    puVar7[1] = uVar2;
  }
  if (*(code **)(lVar9 + 0x20) != (code *)0x0) {
    (**(code **)(lVar9 + 0x20))(*(undefined8 *)(lVar9 + 0x28));
  }
  return;
}


