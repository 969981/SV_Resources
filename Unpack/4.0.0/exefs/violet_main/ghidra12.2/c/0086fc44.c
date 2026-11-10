/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0086fc44; name: FUN_0086fc44
 */


void FUN_0086fc44(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint *puVar6;
  long lVar7;
  ulong uVar8;
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int iVar17;
  uint uVar18;
  int iVar22;
  undefined1 auVar19 [12];
  int iVar21;
  undefined1 auVar20 [16];
  int iVar23;
  int iVar25;
  int iVar26;
  undefined1 auVar24 [16];
  
  lVar2 = *(long *)(param_1 + 0x18);
  plVar3 = (long *)(lVar2 + 0x18);
  uVar5 = *(uint *)(lVar2 + 0x34);
  lVar1 = *plVar3 + (long)plVar3;
  lVar7 = 0;
  if (*plVar3 != 0) {
    lVar7 = lVar1;
  }
  if (uVar5 == param_2) {
    *(undefined4 *)(lVar2 + 0x34) = 0;
  }
  else {
    puVar4 = (undefined8 *)(lVar7 + (ulong)param_2 * 0x30);
    uVar14 = puVar4[1];
    uVar13 = *puVar4;
    uVar16 = puVar4[3];
    uVar15 = puVar4[2];
    puVar6 = (uint *)(lVar7 + (ulong)param_2 * 0x30 + 0x20);
    lVar12 = lVar7 + (ulong)*puVar6 * 0x30;
    uVar8 = (ulong)*(uint *)(lVar12 + (ulong)(*(uint *)(lVar12 + 0x28) != param_2) * 4 + 0x24);
    lVar11 = lVar7 + uVar8 * 0x30;
    uVar18 = *(uint *)(lVar12 + 0x20);
    if (uVar18 == 0) {
      *(undefined4 *)(lVar1 + (long)(int)uVar5 * 0x30) = *(undefined4 *)(lVar2 + 0x28);
      lVar1 = 0;
      if (*(long *)(lVar2 + 0x18) != 0) {
        lVar1 = *(long *)(lVar2 + 0x18) + (long)plVar3;
      }
      *(int *)(lVar2 + 0x34) = (int)((ulong)(lVar11 - lVar1) >> 4) * -0x55555555;
      *(uint *)(lVar2 + 0x28) = uVar5;
      *(undefined4 *)(lVar7 + uVar8 * 0x30 + 0x20) = 0;
    }
    else {
      lVar7 = lVar7 + uVar8 * 0x30;
      *(uint *)(lVar7 + 0x20) = uVar18;
      lVar1 = 0;
      if (*(long *)(lVar2 + 0x18) != 0) {
        lVar1 = *(long *)(lVar2 + 0x18) + (long)plVar3;
      }
      lVar12 = lVar1 + (ulong)*(uint *)(lVar12 + 0x20) * 0x30;
      *(int *)(lVar12 + (ulong)(*(uint *)(lVar12 + 0x28) == *puVar6) * 4 + 0x24) =
           (int)((ulong)(lVar11 - lVar1) >> 4) * -0x55555555;
      uVar5 = *puVar6;
      *(undefined4 *)((long)plVar3 + (long)(int)uVar5 * 0x30 + *(long *)(lVar2 + 0x18)) =
           *(undefined4 *)(lVar2 + 0x28);
      *(uint *)(lVar2 + 0x28) = uVar5;
      uVar5 = *(uint *)(lVar7 + 0x20);
      do {
        lVar1 = 0;
        if (*plVar3 != 0) {
          lVar1 = *plVar3 + (long)plVar3;
        }
        puVar4 = (undefined8 *)
                 (lVar1 + (ulong)(uint)((int)((ulong)uVar5 * 0x30 >> 4) * -0x55555555) * 0x30);
        uVar5 = *(uint *)(lVar1 + (ulong)uVar5 * 0x30 + 0x20);
        pauVar9 = (undefined1 (*) [16])(lVar1 + (ulong)*(uint *)((long)puVar4 + 0x24) * 0x30);
        pauVar10 = (undefined1 (*) [16])(lVar1 + (ulong)*(uint *)(puVar4 + 5) * 0x30);
        auVar24 = NEON_fmax(pauVar9[1],pauVar10[1],4);
        auVar20 = NEON_fmin(*pauVar9,*pauVar10,4);
        puVar4[1] = auVar20._8_8_;
        *puVar4 = auVar20._0_8_;
        puVar4[3] = auVar24._8_8_;
        puVar4[2] = auVar24._0_8_;
        if (uVar5 == 0) break;
        iVar17 = -(uint)(auVar20._0_4_ <= (float)uVar13);
        iVar21 = -(uint)(auVar20._4_4_ <= (float)((ulong)uVar13 >> 0x20));
        iVar22 = -(uint)(auVar20._8_4_ <= (float)uVar14);
        iVar23 = -(uint)((float)uVar15 <= auVar24._0_4_);
        iVar25 = -(uint)((float)((ulong)uVar15 >> 0x20) <= auVar24._4_4_);
        iVar26 = -(uint)((float)uVar16 <= auVar24._8_4_);
        uVar18 = CONCAT13((byte)((uint)iVar23 >> 0x18) & (byte)((uint)iVar17 >> 0x18),
                          CONCAT12((byte)((uint)iVar23 >> 0x10) & (byte)((uint)iVar17 >> 0x10),
                                   CONCAT11((byte)((uint)iVar23 >> 8) & (byte)((uint)iVar17 >> 8),
                                            (byte)iVar23 & (byte)iVar17)));
        auVar19._0_8_ =
             CONCAT17((byte)((uint)iVar25 >> 0x18) & (byte)((uint)iVar21 >> 0x18),
                      CONCAT16((byte)((uint)iVar25 >> 0x10) & (byte)((uint)iVar21 >> 0x10),
                               CONCAT15((byte)((uint)iVar25 >> 8) & (byte)((uint)iVar21 >> 8),
                                        CONCAT14((byte)iVar25 & (byte)iVar21,uVar18))));
        auVar19[8] = (byte)iVar26 & (byte)iVar22;
        auVar19[9] = (byte)((uint)iVar26 >> 8) & (byte)((uint)iVar22 >> 8);
        auVar19[10] = (byte)((uint)iVar26 >> 0x10) & (byte)((uint)iVar22 >> 0x10);
        auVar19[0xb] = (byte)((uint)iVar26 >> 0x18) & (byte)((uint)iVar22 >> 0x18);
      } while ((uVar18 & (uint)((ulong)auVar19._0_8_ >> 0x20) & auVar19._8_4_) == 0);
    }
  }
  *(undefined4 *)((long)plVar3 + (long)(int)param_2 * 0x30 + *(long *)(lVar2 + 0x18)) =
       *(undefined4 *)(lVar2 + 0x28);
  *(uint *)(lVar2 + 0x28) = param_2;
  *(int *)(lVar2 + 0x2c) = *(int *)(lVar2 + 0x2c) + -1;
  return;
}


