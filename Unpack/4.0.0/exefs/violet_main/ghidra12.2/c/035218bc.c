/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 035218bc; name: FUN_035218bc
 */


undefined8 FUN_035218bc(long param_1,ushort *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  float fVar6;
  
  bVar1 = *(byte *)(param_1 + 0x6c);
  uVar5 = bVar1 & 0xfc;
  *(char *)(param_1 + 0x6c) = (char)uVar5;
  uVar3 = 2;
  if ((param_2 != (ushort *)0x0) && (param_3 != 0)) {
    uVar5 = uVar5 | 1;
    *(ushort **)(param_1 + 8) = param_2;
    *(uint *)(param_1 + 0x10) = param_3;
    *(char *)(param_1 + 0x6c) = (char)uVar5;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    uVar2 = ((*param_2 & 0xff00) << 8 | (uint)*param_2 << 0x18) >> 0x10;
    *(uint *)(param_1 + 0x1c) = uVar2;
    if (uVar2 != 0) {
      fVar6 = *(float *)(param_2 + 1);
      *(undefined1 *)(param_1 + 0x20) = 0;
      *(undefined1 *)(param_1 + 0x4a) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(float *)(param_1 + 0x50) = fVar6;
      fVar6 = fVar6 * (float)uVar2;
      *(ulong *)(param_1 + 0x30) = (long)param_2 + (ulong)param_3;
      *(undefined8 *)(param_1 + 0x38) = 0;
      uVar5 = bVar1 | 3;
      *(char *)(param_1 + 0x6c) = (char)uVar5;
      *(float *)(param_1 + 0x58) = fVar6 * 1.6666667e-05;
      *(ushort **)(param_1 + 0x28) = param_2 + 3;
      *(float *)(param_1 + 0x54) = 60000.0 / fVar6;
    }
    if ((uVar5 >> 1 & 1) != 0) {
      uVar4 = FUN_035219bc(param_1);
      uVar5 = 2;
      if ((uVar4 & 1) == 0) {
        uVar5 = 0;
      }
      uVar5 = *(byte *)(param_1 + 0x6c) & 0xfffffffd | uVar5;
      *(char *)(param_1 + 0x6c) = (char)uVar5;
    }
    if ((uVar5 >> 1 & 1) == 0) {
      uVar3 = 2;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}


