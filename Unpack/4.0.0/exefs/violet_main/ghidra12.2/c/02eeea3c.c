/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02eeea3c; name: FUN_02eeea3c
 */


long * FUN_02eeea3c(long param_1,long param_2,long *param_3,undefined4 param_4)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  float fVar9;
  long lVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  
  plVar7 = *(long **)(param_1 + 0x10);
  uVar5 = *(undefined1 *)(param_2 + 0x19);
  plVar7[1] = 0xffffffff;
  plVar7[2] = 1;
  *(undefined1 *)((long)plVar7 + 0x19) = uVar5;
  *(undefined2 *)((long)plVar7 + 0x1a) = 0;
  *(undefined1 *)((long)plVar7 + 0x1c) = 0;
  *(undefined1 *)(plVar7 + 3) = 0x11;
  plVar6 = plVar7 + 4;
  *(undefined4 *)plVar6 = 0;
  plVar7[5] = 0;
  plVar7[6] = 0;
  *plVar7 = (long)(PTR_DAT_047e3468 + 0x10);
  lVar4 = 0;
  if (param_2 != 0) {
    lVar4 = param_2 - (long)(plVar7 + 8);
  }
  plVar7[7] = 0;
  plVar7[8] = lVar4;
  uVar1 = *(ushort *)(param_2 + 0x1a) & 0x8080;
  *(ushort *)((long)plVar7 + 0x1a) = uVar1;
  *plVar7 = (long)(PTR_DAT_047e3460 + 0x10);
  *(ushort *)((long)plVar7 + 0x1a) = uVar1 | *(ushort *)(param_2 + 0x1a) & 0x8010;
  lVar10 = *param_3;
  lVar3 = 0;
  if (lVar4 != 0) {
    lVar3 = lVar4 + (long)(plVar7 + 8);
  }
  plVar8 = plVar7 + 10;
  plVar7[0xb] = param_3[1];
  *plVar8 = lVar10;
  *(undefined4 *)plVar6 = *(undefined4 *)(lVar3 + 0x20);
  iVar12 = *(int *)(lVar3 + 0x40);
  lVar4 = 0;
  if (iVar12 != 0) {
    lVar4 = (long)iVar12 + lVar3 + 0x40;
  }
  FUN_00cb0560(lVar4,*(undefined4 *)(lVar3 + 0x44),param_4,plVar8,plVar6,plVar7 + 0xc);
  plVar7[1] = 0;
  fVar9 = (float)*plVar8;
  iVar14 = -(uint)(fVar9 < 0.0);
  fVar11 = (float)((ulong)*plVar8 >> 0x20);
  iVar15 = -(uint)(fVar11 < 0.0);
  iVar16 = -(uint)((float)plVar7[0xb] < 0.0);
  iVar12 = -(uint)(fVar11 == fVar9);
  iVar13 = -(uint)((float)plVar7[0xb] == fVar9);
  uVar2 = 0x3f000000;
  if (CONCAT13((byte)((uint)iVar12 >> 0x18) & (byte)((uint)iVar13 >> 0x18),
               CONCAT12((byte)((uint)iVar12 >> 0x10) & (byte)((uint)iVar13 >> 0x10),
                        CONCAT11((byte)((uint)iVar12 >> 8) & (byte)((uint)iVar13 >> 8),
                                 (byte)iVar12 & (byte)iVar13))) != 0) {
    uVar2 = CONCAT13((byte)((uint)iVar15 >> 0x18) & (byte)((uint)iVar14 >> 0x18) &
                     (byte)((uint)iVar16 >> 0x18),
                     CONCAT12((byte)((uint)iVar15 >> 0x10) & (byte)((uint)iVar14 >> 0x10) &
                              (byte)((uint)iVar16 >> 0x10),
                              CONCAT11((byte)((uint)iVar15 >> 8) & (byte)((uint)iVar14 >> 8) &
                                       (byte)((uint)iVar16 >> 8),
                                       (byte)iVar15 & (byte)iVar14 & (byte)iVar16))) == 0 |
            0x3f000000;
  }
  *(uint *)((long)plVar7 + 0x5c) =
       uVar2 | ((byte)POPCOUNT(((byte)iVar15 & 2) + (fVar9 < 0.0) | (byte)iVar16 & 4) & 1) << 1;
  *(long **)(param_1 + 8) = plVar7;
  return plVar7;
}


