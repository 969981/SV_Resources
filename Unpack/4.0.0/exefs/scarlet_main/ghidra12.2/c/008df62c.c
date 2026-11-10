/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008df62c; name: FUN_008df62c
 */


void FUN_008df62c(undefined8 param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  
  lVar13 = *(long *)(param_2 + 0x418);
  lVar14 = *(long *)(lVar13 + 0x18);
  if ((lVar14 == 0) || (*(char *)(lVar13 + 0x10) == '\0')) {
    return;
  }
  lVar12 = *(long *)(*(long *)(param_2 + 0x238) + 0x338);
  lVar4 = FUN_008ee7bc(param_2 + 0x7a8,*(undefined4 *)(lVar13 + 0x38));
  puVar3 = PTR_DAT_047d25d8;
  lVar16 = 0;
  lVar6 = lVar4;
  do {
    fVar18 = *(float *)(param_2 + 0x4c) + *(float *)(lVar14 + 0x7c);
    fVar17 = *(float *)(lVar14 + 0x88);
    iVar2 = *(int *)(lVar13 + 0x20);
    uVar7 = *(uint *)(lVar14 + 0x70);
    lVar15 = *(long *)(lVar14 + 0x68);
    *(float *)(lVar14 + 0x7c) = fVar18;
    *(float *)(lVar14 + 0x88) = fVar18;
    if ((int)uVar7 < 2) {
      plVar1 = (long *)(lVar13 + 0x18);
      if (lVar16 != 0) {
        plVar1 = (long *)(lVar16 + 0x68);
      }
      *plVar1 = lVar15;
      fVar17 = *(float *)(*(long *)(*(long *)(param_2 + 0x238) + 0x338) + 0x14);
      lVar10 = *(long *)puVar3;
      uVar5 = *(undefined8 *)(lVar14 + 0x50);
      *(int *)(param_2 + 0x838) = *(int *)(param_2 + 0x838) + -1;
      *(ulong *)(param_2 + 0x830) =
           *(long *)(param_2 + 0x830) - ((ulong)(uint)(int)fVar17 * 0x40 + 0xff & 0x7fffffff00);
      lVar6 = FUN_008d4410(uVar5,1);
      *(undefined8 *)(lVar14 + 0x50) = 0;
      *(undefined1 *)(lVar14 + 0x84) = 0;
      *(int *)(lVar10 + 0x2c) = *(int *)(lVar10 + 0x2c) + -1;
    }
    else {
      if (0.0 < (float)(int)fVar18 - (float)(int)fVar17) {
        uVar7 = uVar7 - 1;
        *(uint *)(lVar14 + 0x70) = uVar7;
      }
      fVar17 = 1.0;
      lVar16 = *(long *)(*(long *)(param_2 + 0x238) + 0x10);
      if (*(char *)(lVar16 + 0x75c) != '\0') {
        fVar17 = *(float *)(param_2 + 0x74);
      }
      if (*(char *)(lVar16 + 0x756) != '\0') {
        fVar17 = fVar17 * *(float *)(param_2 + 0x70);
      }
      lVar10 = (long)iVar2 * (long)*(int *)(lVar14 + 0x74);
      lVar16 = lVar14;
      if (*(float *)(lVar12 + 0x10) == 0.0) {
        if ((int)uVar7 < 3) {
          *(undefined4 *)(lVar14 + 0x78) = 0;
        }
        else {
          puVar11 = (undefined8 *)(lVar4 + 0x50 + lVar10 * 0x50);
          puVar9 = *(undefined8 **)(lVar14 + 0x58);
          uVar8 = 0;
          do {
            puVar9 = (undefined8 *)puVar9[6];
            uVar24 = puVar9[5];
            uVar23 = puVar9[4];
            uVar20 = puVar9[1];
            uVar5 = *puVar9;
            uVar22 = puVar9[3];
            uVar21 = puVar9[2];
            fVar25 = (float)(int)uVar8;
            uVar8 = uVar8 + 1;
            fVar18 = (float)((ulong)uVar20 >> 0x20);
            puVar11[-10] = uVar5;
            uVar19 = (undefined4)uVar20;
            *(undefined4 *)(puVar11 + -9) = uVar19;
            puVar11[-8] = uVar21;
            *(float *)((long)puVar11 + -0x44) = fVar17 * fVar18;
            fVar26 = (1.0 / ((float)(int)uVar7 + -1.0)) * fVar25;
            *(int *)(puVar11 + -7) = (int)uVar22;
            puVar11[-6] = uVar23;
            *(float *)((long)puVar11 + -0x34) = fVar26;
            *(int *)(puVar11 + -5) = (int)uVar24;
            *(float *)((long)puVar11 + -0x24) = fVar25;
            *puVar11 = uVar5;
            puVar11[-4] = 0;
            puVar11[-3] = 0;
            puVar11[-2] = 0;
            puVar11[-1] = 0;
            *(undefined4 *)(puVar11 + 1) = uVar19;
            puVar11[2] = uVar21;
            *(float *)((long)puVar11 + 0xc) = fVar17 * -fVar18;
            *(int *)(puVar11 + 3) = (int)uVar22;
            *(float *)((long)puVar11 + 0x1c) = fVar26;
            puVar11[4] = uVar23;
            *(int *)(puVar11 + 5) = (int)uVar24;
            *(float *)((long)puVar11 + 0x2c) = fVar25;
            puVar11[8] = 0;
            puVar11[9] = 0;
            puVar11[6] = 0;
            puVar11[7] = 0;
            puVar11 = puVar11 + 0x14;
          } while (uVar7 != uVar8);
          *(uint *)(lVar14 + 0x78) = uVar7 << 1;
        }
      }
      else {
        lVar6 = FUN_008de6fc(lVar6,lVar14,lVar12,lVar4 + lVar10 * 0x50);
      }
    }
    lVar14 = lVar15;
  } while (lVar15 != 0);
  FUN_008ee7c8(param_2 + 0x7a8);
  return;
}


