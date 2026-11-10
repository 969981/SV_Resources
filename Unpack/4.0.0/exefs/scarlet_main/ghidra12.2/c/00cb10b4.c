/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cb10b4; name: FUN_00cb10b4
 */


void FUN_00cb10b4(long *param_1,long param_2,long *param_3,undefined4 param_4,int param_5)

{
  long *plVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  long *plVar9;
  long *plVar10;
  float fVar11;
  long lVar12;
  float fVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  
  uVar5 = *(undefined1 *)(param_2 + 0x19);
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *(undefined1 *)(param_1 + 3) = 0x11;
  *(undefined2 *)((long)param_1 + 0x1a) = 0;
  plVar1 = param_1 + 8;
  *(undefined1 *)((long)param_1 + 0x19) = uVar5;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  plVar9 = param_1 + 4;
  *(undefined4 *)plVar9 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = (long)(PTR_DAT_047e3468 + 0x10);
  lVar4 = 0;
  if (param_2 != 0) {
    lVar4 = param_2 - (long)plVar1;
  }
  param_1[7] = 0;
  param_1[8] = lVar4;
  uVar2 = *(ushort *)(param_2 + 0x1a) & 0x8080;
  *(ushort *)((long)param_1 + 0x1a) = uVar2;
  *param_1 = (long)(PTR_DAT_047e3460 + 0x10);
  *(ushort *)((long)param_1 + 0x1a) = uVar2 | *(ushort *)(param_2 + 0x1a) & 0x8010;
  lVar12 = *param_3;
  lVar3 = 0;
  if (lVar4 != 0) {
    lVar3 = lVar4 + (long)plVar1;
  }
  plVar10 = param_1 + 10;
  param_1[0xb] = param_3[1];
  *plVar10 = lVar12;
  *(undefined4 *)plVar9 = *(undefined4 *)(lVar3 + 0x20);
  iVar14 = *(int *)(lVar3 + 0x40);
  lVar4 = 0;
  if (iVar14 != 0) {
    lVar4 = (long)iVar14 + lVar3 + 0x40;
  }
  FUN_00cb0560(lVar4,*(undefined4 *)(lVar3 + 0x44),param_4,plVar10,plVar9,param_1 + 0xc);
  fVar11 = (float)*plVar10;
  iVar16 = -(uint)(fVar11 < 0.0);
  fVar13 = (float)((ulong)*plVar10 >> 0x20);
  iVar17 = -(uint)(fVar13 < 0.0);
  iVar18 = -(uint)((float)param_1[0xb] < 0.0);
  iVar14 = -(uint)(fVar13 == fVar11);
  iVar15 = -(uint)((float)param_1[0xb] == fVar11);
  *param_1 = (long)(PTR_DAT_047e3518 + 0x10);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  uVar6 = 0x3f000000;
  if (CONCAT13((byte)((uint)iVar14 >> 0x18) & (byte)((uint)iVar15 >> 0x18),
               CONCAT12((byte)((uint)iVar14 >> 0x10) & (byte)((uint)iVar15 >> 0x10),
                        CONCAT11((byte)((uint)iVar14 >> 8) & (byte)((uint)iVar15 >> 8),
                                 (byte)iVar14 & (byte)iVar15))) != 0) {
    uVar6 = CONCAT13((byte)((uint)iVar17 >> 0x18) & (byte)((uint)iVar16 >> 0x18) &
                     (byte)((uint)iVar18 >> 0x18),
                     CONCAT12((byte)((uint)iVar17 >> 0x10) & (byte)((uint)iVar16 >> 0x10) &
                              (byte)((uint)iVar18 >> 0x10),
                              CONCAT11((byte)((uint)iVar17 >> 8) & (byte)((uint)iVar16 >> 8) &
                                       (byte)((uint)iVar18 >> 8),
                                       (byte)iVar17 & (byte)iVar16 & (byte)iVar18))) == 0 |
            0x3f000000;
  }
  uVar6 = uVar6 | ((byte)POPCOUNT(((byte)iVar17 & 2) + (fVar11 < 0.0) | (byte)iVar18 & 4) & 1) << 1;
  *(uint *)((long)param_1 + 0x5c) = uVar6;
  if (param_5 == 1) {
    *(uint *)((long)param_1 + 0x5c) = uVar6 | 0x3f000004;
  }
  lVar4 = 0;
  if (*plVar1 != 0) {
    lVar4 = *plVar1 + (long)plVar1;
  }
  if (*(long *)(lVar4 + 8) != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = *plVar1 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  return;
}


