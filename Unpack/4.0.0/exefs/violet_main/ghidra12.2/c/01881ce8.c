/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01881ce8; name: FUN_01881ce8
 */


void FUN_01881ce8(long param_1,uint *param_2)

{
  uint uVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float __x;
  
  *param_2 = 0;
  *(undefined2 *)(param_2 + 1) = 0;
  if ((*(char *)(param_1 + 0x18) == '\0') && (*(char *)(param_1 + 0x19) == '\0')) {
    return;
  }
  uVar3 = *(uint *)(param_1 + 0xc);
  if (*(uint *)(param_1 + 4) <= *(uint *)(param_1 + 0xc)) {
    uVar3 = *(uint *)(param_1 + 4);
  }
  uVar1 = uVar3 * *(int *)(param_1 + 8);
  uVar5 = uVar1 / 5;
  if (uVar1 < 5) {
    uVar5 = 1;
  }
  if (*(char *)(param_1 + 0x18) == '\0') {
    if (*(char *)(param_1 + 0x19) == '\0') {
      uVar5 = 0;
      goto LAB_01881d5c;
    }
    uVar5 = uVar5 >> 1;
    if (uVar5 == 0) {
      uVar5 = 1;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  *param_2 = uVar5;
LAB_01881d5c:
  fVar6 = (float)(uVar3 & 0xffff);
  fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(param_1 + 0x10));
  __x = fVar6 + fVar6 + 10.0;
  fVar6 = fVar6 + fVar7 + 10.0;
  fVar7 = SQRT(__x);
  if (NAN(fVar7)) {
    fVar7 = sqrtf(__x);
  }
  fVar2 = SQRT(fVar6);
  if (NAN(fVar2)) {
    fVar2 = sqrtf(fVar6);
  }
  uVar3 = (uint)(((__x * __x * fVar7) / (fVar2 * fVar6 * fVar6)) * (float)uVar5 + 1.0);
  *param_2 = uVar3;
  if (*(char *)(param_1 + 0x1c) == '\0') {
    iVar4 = 0x1800;
    if (*(char *)(param_1 + 0x1e) != '\0') {
      iVar4 = 0x1b33;
    }
    uVar5 = iVar4 * uVar3;
    uVar3 = uVar5 >> 0xc;
    if (0x800 < (uVar5 & 0xfff)) {
      uVar3 = uVar3 + 1;
    }
    *param_2 = uVar3;
    *(undefined1 *)((long)param_2 + 5) = 1;
  }
  if (*(char *)(param_1 + 0x1a) != '\0') {
    uVar3 = uVar3 * 3 >> 1 & 0xfffff;
    *(undefined1 *)((long)param_2 + 5) = 1;
    *param_2 = uVar3;
  }
  if (*(char *)(param_1 + 0x1b) != '\0') {
    uVar5 = uVar3 * 0x1333;
    uVar3 = uVar5 >> 0xc;
    if (0x800 < (uVar5 & 0xfff)) {
      uVar3 = uVar3 + 1;
    }
    *param_2 = uVar3;
    *(undefined1 *)((long)param_2 + 5) = 1;
  }
  if (0xdb < *(uint *)(param_1 + 0x14)) {
    uVar5 = uVar3 * 0x1333;
    uVar3 = uVar5 >> 0xc;
    if (0x800 < (uVar5 & 0xfff)) {
      uVar3 = uVar3 + 1;
    }
    *param_2 = uVar3;
    *(undefined1 *)((long)param_2 + 5) = 1;
  }
  if (*(char *)(param_1 + 0x1d) != '\0') {
    uVar3 = uVar3 * 3 >> 1 & 0xfffff;
    *(undefined1 *)((long)param_2 + 5) = 1;
    *param_2 = uVar3;
  }
  fVar7 = *(float *)(param_1 + 0x20);
  if (1.0 < fVar7) {
    fVar6 = 0.5;
    if (fVar7 <= 0.0) {
      fVar6 = -0.5;
    }
    uVar3 = uVar3 * (int)(fVar7 * 4096.0 + fVar6);
    uVar5 = uVar3 >> 0xc;
    if (0x800 < (uVar3 & 0xfff)) {
      uVar5 = uVar5 + 1;
    }
    *param_2 = uVar5;
  }
  return;
}


