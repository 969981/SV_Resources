/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f1dfdc; name: FUN_02f1dfdc
 */


void FUN_02f1dfdc(long param_1,undefined2 param_2,long param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar10;
  undefined8 uVar9;
  
  uVar9 = *(undefined8 *)(param_1 + 0x60);
  *(undefined2 *)(param_1 + 0x58) = param_2;
  fVar1 = *(float *)(param_3 + 0x10);
  if ((float)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20) == fVar1) goto LAB_02f1e058;
  fVar4 = (float)*(undefined8 *)(param_1 + 0x68);
  uVar5 = CONCAT44(fVar1,fVar4);
  fVar2 = (float)uVar9;
  fVar3 = (float)((ulong)uVar9 >> 0x20);
  fVar6 = fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3;
  fVar7 = fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3;
  *(undefined8 *)(param_1 + 0x68) = uVar5;
  *(undefined8 *)(param_1 + 0x60) = uVar9;
  iVar8 = -(uint)(fVar6 <= fVar1 * fVar1);
  iVar10 = -(uint)(fVar7 <= fVar1 * fVar1);
  if (CONCAT13((byte)((uint)iVar10 >> 0x18) | (byte)((uint)iVar8 >> 0x18),
               CONCAT12((byte)((uint)iVar10 >> 0x10) | (byte)((uint)iVar8 >> 0x10),
                        CONCAT11((byte)((uint)iVar10 >> 8) | (byte)((uint)iVar8 >> 8),
                                 (byte)iVar10 | (byte)iVar8))) == 0) {
    if ((~(uint)fVar6 & 0x7fc00000) == 0) goto LAB_02f1e058;
    uVar9 = NEON_fmov(0x3f800000,4);
    fVar6 = (float)uVar9 / SQRT(fVar6);
    if ((~(uint)fVar6 & 0x7fc00000) == 0) goto LAB_02f1e058;
    fVar6 = fVar1 * fVar6 * 0.99999976;
    uVar9 = CONCAT44(fVar3 * fVar1 * ((float)((ulong)uVar9 >> 0x20) / SQRT(fVar7)) * 0.99999976,
                     fVar2 * fVar6);
    uVar5 = CONCAT44(fVar1,fVar4 * fVar6);
  }
  *(undefined8 *)(param_1 + 0x68) = uVar5;
  *(undefined8 *)(param_1 + 0x60) = uVar9;
LAB_02f1e058:
  uVar9 = *(undefined8 *)(param_1 + 0x70);
  fVar1 = *(float *)(param_3 + 0x14);
  if ((float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20) == fVar1) {
    return;
  }
  fVar4 = (float)*(undefined8 *)(param_1 + 0x78);
  uVar5 = CONCAT44(fVar1,fVar4);
  fVar2 = (float)uVar9;
  fVar3 = (float)((ulong)uVar9 >> 0x20);
  fVar6 = fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3;
  fVar7 = fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3;
  *(undefined8 *)(param_1 + 0x78) = uVar5;
  *(undefined8 *)(param_1 + 0x70) = uVar9;
  iVar8 = -(uint)(fVar6 <= fVar1 * fVar1);
  iVar10 = -(uint)(fVar7 <= fVar1 * fVar1);
  if (CONCAT13((byte)((uint)iVar10 >> 0x18) | (byte)((uint)iVar8 >> 0x18),
               CONCAT12((byte)((uint)iVar10 >> 0x10) | (byte)((uint)iVar8 >> 0x10),
                        CONCAT11((byte)((uint)iVar10 >> 8) | (byte)((uint)iVar8 >> 8),
                                 (byte)iVar10 | (byte)iVar8))) == 0) {
    if ((~(uint)fVar6 & 0x7fc00000) == 0) {
      return;
    }
    uVar9 = NEON_fmov(0x3f800000,4);
    fVar6 = (float)uVar9 / SQRT(fVar6);
    if ((~(uint)fVar6 & 0x7fc00000) == 0) {
      return;
    }
    fVar6 = fVar1 * fVar6 * 0.99999976;
    uVar9 = CONCAT44(fVar3 * fVar1 * ((float)((ulong)uVar9 >> 0x20) / SQRT(fVar7)) * 0.99999976,
                     fVar2 * fVar6);
    uVar5 = CONCAT44(fVar1,fVar4 * fVar6);
  }
  *(undefined8 *)(param_1 + 0x78) = uVar5;
  *(undefined8 *)(param_1 + 0x70) = uVar9;
  return;
}


