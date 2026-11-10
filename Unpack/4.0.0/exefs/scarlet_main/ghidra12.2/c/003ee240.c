/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003ee240; name: FUN_003ee240
 */


void FUN_003ee240(uint *param_1,uint *param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  ulong uVar9;
  uint *puVar10;
  uint *puVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
  if (0 < (int)param_3) {
    if (3 < param_3) {
      do {
        *(ulong *)param_1 = (ulong)*param_2 * (ulong)*param_2;
        *(ulong *)(param_1 + 2) = (ulong)param_2[1] * (ulong)param_2[1];
        *(ulong *)(param_1 + 4) = (ulong)param_2[2] * (ulong)param_2[2];
        puVar7 = param_2 + 3;
        param_2 = param_2 + 4;
        param_3 = param_3 - 4;
        *(ulong *)(param_1 + 6) = (ulong)*puVar7 * (ulong)*puVar7;
        param_1 = param_1 + 8;
      } while (3 < param_3);
      if (param_3 == 0) {
        return;
      }
    }
    uVar8 = param_3 - 1;
    if ((uVar8 < 0xf) ||
       ((param_1 < param_2 + (ulong)uVar8 + 1 && (param_2 < param_1 + (ulong)uVar8 * 2 + 2)))) {
      puVar6 = param_1;
      puVar7 = param_2;
    }
    else {
      uVar1 = (ulong)uVar8 + 1;
      uVar9 = uVar1 & 0x1fffffff0;
      puVar6 = param_1 + uVar9 * 2;
      puVar7 = param_2 + uVar9;
      param_3 = param_3 - (int)uVar9;
      puVar10 = param_2 + 8;
      puVar11 = param_1 + 0x10;
      uVar12 = uVar9;
      do {
        uVar2 = *(ulong *)(puVar10 + -6);
        uVar3 = *(ulong *)(puVar10 + -2);
        lVar18 = (uVar3 & 0xffffffff) * (uVar3 & 0xffffffff);
        auVar14 = NEON_umull(*(undefined8 *)(puVar10 + -4),*(undefined8 *)(puVar10 + -4),4);
        lVar17 = (uVar2 & 0xffffffff) * (uVar2 & 0xffffffff);
        uVar4 = *(ulong *)(puVar10 + 2);
        uVar5 = *(ulong *)(puVar10 + 6);
        auVar13 = NEON_umull(*(undefined8 *)(puVar10 + -8),*(undefined8 *)(puVar10 + -8),4);
        lVar19 = (uVar4 & 0xffffffff) * (uVar4 & 0xffffffff);
        auVar15 = NEON_umull(*(undefined8 *)puVar10,*(undefined8 *)puVar10,4);
        lVar20 = (uVar5 & 0xffffffff) * (uVar5 & 0xffffffff);
        auVar16 = NEON_umull(*(undefined8 *)(puVar10 + 4),*(undefined8 *)(puVar10 + 4),4);
        puVar11[-0x10] = auVar13._0_4_;
        puVar11[-0xf] = auVar13._4_4_;
        puVar11[-0xe] = auVar13._8_4_;
        puVar11[-0xd] = auVar13._12_4_;
        puVar11[-0xc] = (uint)lVar17;
        puVar11[-0xb] = (uint)((ulong)lVar17 >> 0x20);
        *(ulong *)(puVar11 + -10) = (uVar2 >> 0x20) * (uVar2 >> 0x20);
        uVar12 = uVar12 - 0x10;
        puVar11[-8] = auVar14._0_4_;
        puVar11[-7] = auVar14._4_4_;
        puVar11[-6] = auVar14._8_4_;
        puVar11[-5] = auVar14._12_4_;
        puVar11[-4] = (uint)lVar18;
        puVar11[-3] = (uint)((ulong)lVar18 >> 0x20);
        *(ulong *)(puVar11 + -2) = (uVar3 >> 0x20) * (uVar3 >> 0x20);
        *puVar11 = auVar15._0_4_;
        puVar11[1] = auVar15._4_4_;
        puVar11[2] = auVar15._8_4_;
        puVar11[3] = auVar15._12_4_;
        puVar11[4] = (uint)lVar19;
        puVar11[5] = (uint)((ulong)lVar19 >> 0x20);
        *(ulong *)(puVar11 + 6) = (uVar4 >> 0x20) * (uVar4 >> 0x20);
        puVar11[8] = auVar16._0_4_;
        puVar11[9] = auVar16._4_4_;
        puVar11[10] = auVar16._8_4_;
        puVar11[0xb] = auVar16._12_4_;
        puVar11[0xc] = (uint)lVar20;
        puVar11[0xd] = (uint)((ulong)lVar20 >> 0x20);
        *(ulong *)(puVar11 + 0xe) = (uVar5 >> 0x20) * (uVar5 >> 0x20);
        puVar10 = puVar10 + 0x10;
        puVar11 = puVar11 + 0x20;
      } while (uVar12 != 0);
      if (uVar1 == uVar9) {
        return;
      }
    }
    uVar8 = param_3;
    if ((param_3 & 1) != 0) {
      *(ulong *)puVar6 = (ulong)*puVar7 * (ulong)*puVar7;
      puVar7 = puVar7 + 1;
      puVar6 = puVar6 + 2;
      uVar8 = param_3 - 1;
    }
    if (param_3 != 1) {
      do {
        *(ulong *)puVar6 = (ulong)*puVar7 * (ulong)*puVar7;
        puVar10 = puVar7 + 1;
        puVar7 = puVar7 + 2;
        uVar8 = uVar8 - 2;
        *(ulong *)(puVar6 + 2) = (ulong)*puVar10 * (ulong)*puVar10;
        puVar6 = puVar6 + 4;
      } while (uVar8 != 0);
    }
  }
  return;
}


