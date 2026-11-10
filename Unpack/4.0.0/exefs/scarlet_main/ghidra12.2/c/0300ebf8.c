/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0300ebf8; name: FUN_0300ebf8
 */


void FUN_0300ebf8(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  
  if (*(int *)(param_1 + 5) == 0) {
    return;
  }
  fVar7 = (float)((ulong)param_3[1] >> 0x20);
  fVar4 = (float)*param_3;
  fVar8 = (float)param_3[2];
  iVar13 = -(uint)(fVar4 < fVar8);
  fVar5 = (float)((ulong)*param_3 >> 0x20);
  fVar10 = (float)((ulong)param_3[2] >> 0x20);
  iVar15 = -(uint)(fVar5 < fVar10);
  fVar6 = (float)param_3[1];
  iVar16 = -(uint)(fVar6 < fVar7);
  iVar13 = CONCAT13((byte)((uint)iVar15 >> 0x18) | (byte)((uint)iVar13 >> 0x18) |
                    (byte)((uint)iVar16 >> 0x18),
                    CONCAT12((byte)((uint)iVar15 >> 0x10) | (byte)((uint)iVar13 >> 0x10) |
                             (byte)((uint)iVar16 >> 0x10),
                             CONCAT11((byte)((uint)iVar15 >> 8) | (byte)((uint)iVar13 >> 8) |
                                      (byte)((uint)iVar16 >> 8),
                                      (byte)iVar15 | (byte)iVar13 | (byte)iVar16)));
  if (iVar13 != 0) {
    iVar15 = -(uint)((float)*param_4 < (float)param_4[2]);
    iVar16 = -(uint)((float)((ulong)*param_4 >> 0x20) < (float)((ulong)param_4[2] >> 0x20));
    iVar17 = -(uint)((float)param_4[1] < (float)((ulong)param_4[1] >> 0x20));
    if (CONCAT13((byte)((uint)iVar16 >> 0x18) | (byte)((uint)iVar15 >> 0x18) |
                 (byte)((uint)iVar17 >> 0x18),
                 CONCAT12((byte)((uint)iVar16 >> 0x10) | (byte)((uint)iVar15 >> 0x10) |
                          (byte)((uint)iVar17 >> 0x10),
                          CONCAT11((byte)((uint)iVar16 >> 8) | (byte)((uint)iVar15 >> 8) |
                                   (byte)((uint)iVar17 >> 8),
                                   (byte)iVar16 | (byte)iVar15 | (byte)iVar17))) != 0) {
      return;
    }
  }
  if ((*(uint *)(param_2 + 0x54) >> 4 & 1) != 0) {
    return;
  }
  fVar18 = (float)((ulong)param_4[1] >> 0x20);
  fVar14 = (float)*param_4;
  iVar15 = -(uint)(fVar14 == fVar4);
  fVar4 = (float)((ulong)*param_4 >> 0x20);
  iVar16 = -(uint)(fVar4 == fVar5);
  fVar5 = (float)param_4[1];
  iVar17 = -(uint)(fVar5 == fVar6);
  uVar3 = (*(uint *)(param_2 + 0x54) << 2 ^ 0xffffffff) & 4;
  fVar6 = (float)param_4[2];
  iVar9 = -(uint)(fVar6 == fVar8);
  fVar8 = (float)((ulong)param_4[2] >> 0x20);
  iVar11 = -(uint)(fVar8 == fVar10);
  iVar12 = -(uint)(fVar18 == fVar7);
  uVar1 = *(uint *)(param_2 + 0x50);
  if (CONCAT13((byte)((uint)iVar11 >> 0x18) & (byte)((uint)iVar16 >> 0x18) &
               (byte)((uint)iVar9 >> 0x18) & (byte)((uint)iVar15 >> 0x18) &
               (byte)((uint)iVar12 >> 0x18) & (byte)((uint)iVar17 >> 0x18),
               CONCAT12((byte)((uint)iVar11 >> 0x10) & (byte)((uint)iVar16 >> 0x10) &
                        (byte)((uint)iVar9 >> 0x10) & (byte)((uint)iVar15 >> 0x10) &
                        (byte)((uint)iVar12 >> 0x10) & (byte)((uint)iVar17 >> 0x10),
                        CONCAT11((byte)((uint)iVar11 >> 8) & (byte)((uint)iVar16 >> 8) &
                                 (byte)((uint)iVar9 >> 8) & (byte)((uint)iVar15 >> 8) &
                                 (byte)((uint)iVar12 >> 8) & (byte)((uint)iVar17 >> 8),
                                 (byte)iVar11 & (byte)iVar16 & (byte)iVar9 & (byte)iVar15 &
                                 (byte)iVar12 & (byte)iVar17))) == 0) {
    iVar15 = -(uint)(fVar14 < fVar6);
    iVar16 = -(uint)(fVar4 < fVar8);
    iVar17 = -(uint)(fVar5 < fVar18);
    if (iVar13 == 0) {
      uVar3 = uVar3 | 2;
      FUN_0300ed80(*param_1,param_1,uVar1,param_3,uVar3);
    }
    if (CONCAT13((byte)((uint)iVar16 >> 0x18) | (byte)((uint)iVar15 >> 0x18) |
                 (byte)((uint)iVar17 >> 0x18),
                 CONCAT12((byte)((uint)iVar16 >> 0x10) | (byte)((uint)iVar15 >> 0x10) |
                          (byte)((uint)iVar17 >> 0x10),
                          CONCAT11((byte)((uint)iVar16 >> 8) | (byte)((uint)iVar15 >> 8) |
                                   (byte)((uint)iVar17 >> 8),
                                   (byte)iVar16 | (byte)iVar15 | (byte)iVar17))) != 0)
    goto LAB_0300ed24;
    uVar3 = uVar3 & 4 | 1;
  }
  else {
    uVar3 = uVar3 | 3;
  }
  FUN_0300ed80(*param_1,param_1,uVar1,param_4,uVar3);
LAB_0300ed24:
  uVar2 = FUN_0300f0e0(*(undefined8 *)(param_2 + 0x78));
  if ((uVar2 & 1) != 0) {
    if (uVar3 == 2) {
      if (uVar1 >> 0x18 < 0xff) {
        return;
      }
    }
    else if (iVar13 != 0) {
      return;
    }
    *(undefined4 *)((long)param_1 + 100) = 1;
  }
  return;
}


