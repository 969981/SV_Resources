/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029b3afc; name: FUN_029b3afc
 */


void FUN_029b3afc(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  float fVar6;
  int iVar7;
  undefined8 uVar8;
  float fVar9;
  int iVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  uVar8 = *param_2;
  uVar2 = *(uint *)(param_1 + 0x5c);
  puVar5 = (undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = param_2[1];
  *puVar5 = uVar8;
  lVar4 = *(long *)(param_1 + 0x40);
  lVar1 = 0;
  if (lVar4 != 0) {
    lVar1 = lVar4 + param_1 + 0x40;
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(lVar1 + 0x20);
  iVar7 = *(int *)(lVar1 + 0x40);
  lVar4 = 0;
  if (iVar7 != 0) {
    lVar4 = (long)iVar7 + lVar1 + 0x40;
  }
  FUN_00cb0560(lVar4,*(undefined4 *)(lVar1 + 0x44),param_3,puVar5,(undefined4 *)(param_1 + 0x20),
               param_1 + 0x60);
  fVar6 = (float)*puVar5;
  fVar9 = (float)((ulong)*puVar5 >> 0x20);
  iVar13 = -(uint)(fVar9 == fVar6);
  fVar11 = (float)*(undefined8 *)(param_1 + 0x58);
  iVar14 = -(uint)(fVar11 == fVar6);
  iVar7 = -(uint)(fVar6 < 0.0);
  iVar10 = -(uint)(fVar9 < 0.0);
  iVar12 = -(uint)(fVar11 < 0.0);
  uVar3 = 0x3f000000;
  if (CONCAT13((byte)((uint)iVar13 >> 0x18) & (byte)((uint)iVar14 >> 0x18),
               CONCAT12((byte)((uint)iVar13 >> 0x10) & (byte)((uint)iVar14 >> 0x10),
                        CONCAT11((byte)((uint)iVar13 >> 8) & (byte)((uint)iVar14 >> 8),
                                 (byte)iVar13 & (byte)iVar14))) != 0) {
    uVar3 = CONCAT13((byte)((uint)iVar10 >> 0x18) & (byte)((uint)iVar7 >> 0x18) &
                     (byte)((uint)iVar12 >> 0x18),
                     CONCAT12((byte)((uint)iVar10 >> 0x10) & (byte)((uint)iVar7 >> 0x10) &
                              (byte)((uint)iVar12 >> 0x10),
                              CONCAT11((byte)((uint)iVar10 >> 8) & (byte)((uint)iVar7 >> 8) &
                                       (byte)((uint)iVar12 >> 8),
                                       (byte)iVar10 & (byte)iVar7 & (byte)iVar12))) == 0 |
            0x3f000000;
  }
  uVar3 = uVar3 | ((byte)POPCOUNT(((byte)iVar10 & 2) + (fVar6 < 0.0) | (byte)iVar12 & 4) & 1) << 1;
  *(uint *)(param_1 + 0x5c) = uVar3;
  if ((uVar2 >> 2 & 1) == 0) {
    return;
  }
  *(uint *)(param_1 + 0x5c) = uVar3 | 0x3f000004;
  FUN_00cb04b4(param_1 + 0x70,param_1,3);
  return;
}


