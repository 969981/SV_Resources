/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e724b8; name: FUN_02e724b8
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02e724b8(long *param_1,char *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  float fVar11;
  int iVar12;
  uint uVar13;
  byte bVar14;
  float fVar15;
  byte bVar16;
  float fVar17;
  int iVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  undefined4 local_420 [256];
  undefined4 *local_20;
  
  uVar4 = _UNK_03cab278;
  uVar3 = _DAT_03cab270;
  local_20 = (undefined4 *)((ulong)local_420 | 4);
  do {
    puVar5 = local_20 + -1;
    puVar1 = (undefined8 *)((long)param_1 + (long)(int)local_20[-1] * 0x80 + *param_1);
    if (*param_2 == '\0') {
      fVar11 = (float)*(undefined8 *)(param_2 + 0x10);
      fVar15 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
      fVar17 = (float)*(undefined8 *)(param_2 + 0x18);
      bVar10 = -(fVar11 <= (float)puVar1[2]) & -((float)*puVar1 <= fVar11) &
               -((float)puVar1[4] <= fVar15) & -(fVar15 <= (float)puVar1[6]) &
               -((float)puVar1[8] <= fVar17) & -(fVar17 <= (float)puVar1[10]);
      bVar14 = -(fVar11 <= (float)((ulong)puVar1[2] >> 0x20)) &
               -((float)((ulong)*puVar1 >> 0x20) <= fVar11) &
               -((float)((ulong)puVar1[4] >> 0x20) <= fVar15) &
               -(fVar15 <= (float)((ulong)puVar1[6] >> 0x20)) &
               -((float)((ulong)puVar1[8] >> 0x20) <= fVar17) &
               -(fVar17 <= (float)((ulong)puVar1[10] >> 0x20));
      bVar16 = -(fVar11 <= (float)puVar1[3]) & -((float)puVar1[1] <= fVar11) &
               -((float)puVar1[5] <= fVar15) & -(fVar15 <= (float)puVar1[7]) &
               -((float)puVar1[9] <= fVar17) & -(fVar17 <= (float)puVar1[0xb]);
      bVar19 = -(fVar11 <= (float)((ulong)puVar1[3] >> 0x20)) &
               -((float)((ulong)puVar1[1] >> 0x20) <= fVar11) &
               -((float)((ulong)puVar1[5] >> 0x20) <= fVar15) &
               -(fVar15 <= (float)((ulong)puVar1[7] >> 0x20)) &
               -((float)((ulong)puVar1[9] >> 0x20) <= fVar17) &
               -(fVar17 <= (float)((ulong)puVar1[0xb] >> 0x20));
      bVar2 = (byte)(((uint)(-((int)puVar1[0xc] == (int)*(undefined8 *)(param_2 + 0x20)) & bVar10)
                     << 0x1f) >> 0x18);
      bVar20 = (char)bVar2 >> 7;
      bVar21 = (byte)(((uint)(-((int)((ulong)puVar1[0xc] >> 0x20) ==
                               (int)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20)) & bVar14) <<
                      0x1f) >> 0x18);
      bVar22 = (byte)(((uint)(-((int)puVar1[0xd] == (int)*(undefined8 *)(param_2 + 0x28)) & bVar16)
                      << 0x1f) >> 0x18);
      bVar23 = (byte)(((uint)(-((int)((ulong)puVar1[0xd] >> 0x20) ==
                               (int)((ulong)*(undefined8 *)(param_2 + 0x28) >> 0x20)) & bVar19) <<
                      0x1f) >> 0x18);
      bVar8 = (byte)((ulong)uVar3 >> 0x20);
      bVar9 = (byte)((ulong)uVar4 >> 0x20);
      if ((CONCAT13((char)(bVar21 | bVar2 | bVar22 | bVar23) >> 7,
                    CONCAT12((char)(bVar21 | bVar2 | bVar22 | bVar23) >> 7,
                             CONCAT11((char)(bVar21 | bVar2 | bVar22 | bVar23) >> 7,
                                      (char)(bVar21 | bVar2 | bVar22 | bVar23) >> 7))) == 0) ||
         (*(char *)(puVar1 + 0xe) == '\0')) {
        uVar13 = (uint)(byte)((byte)((int)((uint)bVar10 << 0x1f) >> 0x1f) & (byte)uVar3) +
                 (uint)((byte)((int)((uint)bVar14 << 0x1f) >> 0x1f) & bVar8) +
                 (uint)(byte)((byte)((int)((uint)bVar16 << 0x1f) >> 0x1f) & (byte)uVar4) +
                 (uint)((byte)((int)((uint)bVar19 << 0x1f) >> 0x1f) & bVar9);
      }
      else {
        iVar12 = CONCAT13(bVar20 & (byte)((ulong)uVar3 >> 0x18),
                          CONCAT12(bVar20 & (byte)((ulong)uVar3 >> 0x10),
                                   CONCAT11(bVar20 & (byte)((ulong)uVar3 >> 8),bVar20 & (byte)uVar3)
                                  ));
        bVar21 = (char)bVar21 >> 7;
        bVar22 = (char)bVar22 >> 7;
        iVar18 = CONCAT13(bVar22 & (byte)((ulong)uVar4 >> 0x18),
                          CONCAT12(bVar22 & (byte)((ulong)uVar4 >> 0x10),
                                   CONCAT11(bVar22 & (byte)((ulong)uVar4 >> 8),bVar22 & (byte)uVar4)
                                  ));
        bVar23 = (char)bVar23 >> 7;
        iVar12 = iVar12 + (int)(CONCAT17(bVar21 & (byte)((ulong)uVar3 >> 0x38),
                                         CONCAT16(bVar21 & (byte)((ulong)uVar3 >> 0x30),
                                                  CONCAT15(bVar21 & (byte)((ulong)uVar3 >> 0x28),
                                                           CONCAT14(bVar21 & bVar8,iVar12)))) >>
                               0x20) +
                 iVar18 + (int)(CONCAT17(bVar23 & (byte)((ulong)uVar4 >> 0x38),
                                         CONCAT16(bVar23 & (byte)((ulong)uVar4 >> 0x30),
                                                  CONCAT15(bVar23 & (byte)((ulong)uVar4 >> 0x28),
                                                           CONCAT14(bVar23 & bVar9,iVar18)))) >>
                               0x20);
        if (iVar12 == 2) {
          *(undefined4 *)((long)puVar1 + 4) = 0x7f7fffee;
          puVar6 = (undefined8 *)((long)puVar1 + 0x54);
          lVar7 = 1;
          *(undefined4 *)((long)puVar1 + 0x14) = 0xff7fffee;
          *(undefined4 *)((long)puVar1 + 0x24) = 0x7f7fffee;
          *(undefined4 *)((long)puVar1 + 0x34) = 0xff7fffee;
          *(undefined4 *)((long)puVar1 + 0x44) = 0x7f7fffee;
        }
        else if (iVar12 == 4) {
          *(undefined4 *)(puVar1 + 1) = 0x7f7fffee;
          puVar6 = puVar1 + 0xb;
          lVar7 = 2;
          *(undefined4 *)(puVar1 + 3) = 0xff7fffee;
          *(undefined4 *)(puVar1 + 5) = 0x7f7fffee;
          *(undefined4 *)(puVar1 + 7) = 0xff7fffee;
          *(undefined4 *)(puVar1 + 9) = 0x7f7fffee;
        }
        else if (iVar12 == 8) {
          puVar6 = (undefined8 *)((long)puVar1 + 0x5c);
          lVar7 = 3;
          *(undefined4 *)((long)puVar1 + 0xc) = 0x7f7fffee;
          *(undefined4 *)((long)puVar1 + 0x1c) = 0xff7fffee;
          *(undefined4 *)((long)puVar1 + 0x2c) = 0x7f7fffee;
          *(undefined4 *)((long)puVar1 + 0x3c) = 0xff7fffee;
          *(undefined4 *)((long)puVar1 + 0x4c) = 0x7f7fffee;
        }
        else {
          lVar7 = 0;
          *(undefined4 *)puVar1 = 0x7f7fffee;
          puVar6 = puVar1 + 10;
          *(undefined4 *)(puVar1 + 2) = 0xff7fffee;
          *(undefined4 *)(puVar1 + 4) = 0x7f7fffee;
          *(undefined4 *)(puVar1 + 6) = 0xff7fffee;
          *(undefined4 *)(puVar1 + 8) = 0x7f7fffee;
        }
        *(undefined4 *)puVar6 = 0xff7fffee;
        uVar13 = 0;
        *(undefined4 *)((long)puVar1 + lVar7 * 4 + 0x60) = 0xffffffff;
        *param_2 = '\x01';
      }
    }
    else {
      uVar13 = 0;
    }
    if (*(char *)(puVar1 + 0xe) == '\0') {
      if ((uVar13 & 1) != 0) {
        *puVar5 = *(undefined4 *)(puVar1 + 0xc);
        puVar5 = local_20;
      }
      if ((uVar13 >> 1 & 1) != 0) {
        *puVar5 = *(undefined4 *)((long)puVar1 + 100);
        puVar5 = puVar5 + 1;
      }
      if ((uVar13 >> 2 & 1) != 0) {
        *puVar5 = *(undefined4 *)(puVar1 + 0xd);
        puVar5 = puVar5 + 1;
      }
      if ((uVar13 >> 3 & 1) != 0) {
        *puVar5 = *(undefined4 *)((long)puVar1 + 0x6c);
        puVar5 = puVar5 + 1;
      }
    }
    local_20 = puVar5;
  } while (local_420 != local_20);
  return;
}


