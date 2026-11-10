/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f1de80; name: FUN_02f1de80
 */


void FUN_02f1de80(long param_1,long param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar11;
  undefined8 uVar10;
  
  lVar1 = *(long *)(param_2 + 0x40);
  uVar10 = *(undefined8 *)(param_1 + 0x60);
  fVar2 = *(float *)(lVar1 + (ulong)*(ushort *)(param_1 + 0x58) * 0x70 + 0x10);
  if ((float)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20) == fVar2) goto LAB_02f1df08;
  fVar5 = (float)*(undefined8 *)(param_1 + 0x68);
  uVar6 = CONCAT44(fVar2,fVar5);
  fVar3 = (float)uVar10;
  fVar4 = (float)((ulong)uVar10 >> 0x20);
  fVar7 = fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4;
  fVar8 = fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4;
  *(undefined8 *)(param_1 + 0x68) = uVar6;
  *(undefined8 *)(param_1 + 0x60) = uVar10;
  iVar9 = -(uint)(fVar7 <= fVar2 * fVar2);
  iVar11 = -(uint)(fVar8 <= fVar2 * fVar2);
  if (CONCAT13((byte)((uint)iVar11 >> 0x18) | (byte)((uint)iVar9 >> 0x18),
               CONCAT12((byte)((uint)iVar11 >> 0x10) | (byte)((uint)iVar9 >> 0x10),
                        CONCAT11((byte)((uint)iVar11 >> 8) | (byte)((uint)iVar9 >> 8),
                                 (byte)iVar11 | (byte)iVar9))) == 0) {
    if ((~(uint)fVar7 & 0x7fc00000) == 0) goto LAB_02f1df08;
    uVar10 = NEON_fmov(0x3f800000,4);
    fVar7 = (float)uVar10 / SQRT(fVar7);
    if ((~(uint)fVar7 & 0x7fc00000) == 0) goto LAB_02f1df08;
    fVar7 = fVar2 * fVar7 * 0.99999976;
    uVar10 = CONCAT44(fVar4 * fVar2 * ((float)((ulong)uVar10 >> 0x20) / SQRT(fVar8)) * 0.99999976,
                      fVar3 * fVar7);
    uVar6 = CONCAT44(fVar2,fVar5 * fVar7);
  }
  *(undefined8 *)(param_1 + 0x68) = uVar6;
  *(undefined8 *)(param_1 + 0x60) = uVar10;
LAB_02f1df08:
  uVar10 = *(undefined8 *)(param_1 + 0x70);
  fVar2 = *(float *)(lVar1 + (ulong)*(ushort *)(param_1 + 0x58) * 0x70 + 0x14);
  if ((float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20) == fVar2) {
    return;
  }
  fVar5 = (float)*(undefined8 *)(param_1 + 0x78);
  uVar6 = CONCAT44(fVar2,fVar5);
  fVar3 = (float)uVar10;
  fVar4 = (float)((ulong)uVar10 >> 0x20);
  fVar7 = fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4;
  fVar8 = fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4;
  *(undefined8 *)(param_1 + 0x78) = uVar6;
  *(undefined8 *)(param_1 + 0x70) = uVar10;
  iVar9 = -(uint)(fVar7 <= fVar2 * fVar2);
  iVar11 = -(uint)(fVar8 <= fVar2 * fVar2);
  if (CONCAT13((byte)((uint)iVar11 >> 0x18) | (byte)((uint)iVar9 >> 0x18),
               CONCAT12((byte)((uint)iVar11 >> 0x10) | (byte)((uint)iVar9 >> 0x10),
                        CONCAT11((byte)((uint)iVar11 >> 8) | (byte)((uint)iVar9 >> 8),
                                 (byte)iVar11 | (byte)iVar9))) == 0) {
    if ((~(uint)fVar7 & 0x7fc00000) == 0) {
      return;
    }
    uVar10 = NEON_fmov(0x3f800000,4);
    fVar7 = (float)uVar10 / SQRT(fVar7);
    if ((~(uint)fVar7 & 0x7fc00000) == 0) {
      return;
    }
    fVar7 = fVar2 * fVar7 * 0.99999976;
    uVar10 = CONCAT44(fVar4 * fVar2 * ((float)((ulong)uVar10 >> 0x20) / SQRT(fVar8)) * 0.99999976,
                      fVar3 * fVar7);
    uVar6 = CONCAT44(fVar2,fVar5 * fVar7);
  }
  *(undefined8 *)(param_1 + 0x78) = uVar6;
  *(undefined8 *)(param_1 + 0x70) = uVar10;
  return;
}


