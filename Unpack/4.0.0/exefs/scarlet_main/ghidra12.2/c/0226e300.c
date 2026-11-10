/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0226e300; name: FUN_0226e300
 */


void FUN_0226e300(float param_1,float param_2,long param_3,ulong param_4,uint param_5)

{
  ulong uVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  float __x;
  float fVar9;
  float fVar10;
  
  if (*(int *)(param_3 + 0x4bc) == 2) {
LAB_0226e42c:
    uVar5 = 0;
LAB_0226e360:
    uVar3 = *(ulong *)(param_3 + 0x450);
    if ((param_4 & 1) == 0) {
LAB_0226e4ac:
      uVar3 = uVar3 & 0xffffffffff000000 | (uVar5 >> 0xd & 1) << 0x15 | (uVar5 >> 0xf) << 0x17 |
              uVar3 & 0xfffff | (uVar5 >> 0xc & 1) << 0x14;
      *(ulong *)(param_3 + 0x450) = uVar3;
      if (((uint)uVar5 >> 0xe & 1) == 0) {
        return;
      }
      uVar3 = uVar3 | 0x400000;
      goto LAB_0226e4e0;
    }
  }
  else {
    fVar9 = *(float *)(param_3 + 0x40);
    fVar10 = *(float *)(param_3 + 0x44);
    uVar3 = *(ulong *)(param_3 + 0x450);
    uVar4 = *(ulong *)(param_3 + 0x460);
    cVar2 = *(char *)(param_3 + 0x49);
    if ((*(int *)(param_3 + 0x4bc) == 1) && ((param_5 & 1) == 0)) goto LAB_0226e42c;
    __x = param_1 * param_1 + param_2 * param_2;
    fVar8 = SQRT(__x);
    if (NAN(fVar8)) {
      fVar8 = sqrtf(__x);
      param_4 = param_4 & 0xffffffff;
    }
    if (fVar10 < fVar8) {
      param_2 = param_2 / fVar8;
      param_1 = param_1 / fVar8;
      fVar10 = param_1 + param_2 * 0.0;
      fVar8 = param_2 * 0.0 - param_1;
      uVar6 = (ulong)(0.0 < fVar10);
      uVar7 = (ulong)(fVar9 < fVar10);
      fVar10 = param_2 + param_1 * 0.0;
      uVar5 = uVar7 << 0xe | 0x1000;
      if (fVar8 <= fVar9) {
        uVar5 = uVar7 << 0xe;
      }
      uVar7 = uVar6 << 0xe | 0x1000;
      if (fVar8 <= 0.0) {
        uVar7 = uVar6 << 0xe;
      }
      param_2 = param_1 * 0.0 - param_2;
      uVar6 = uVar5 | 0x2000;
      if (fVar10 <= fVar9) {
        uVar6 = uVar5;
      }
      uVar1 = uVar7 | 0x2000;
      if (fVar10 <= 0.0) {
        uVar1 = uVar7;
      }
      uVar5 = uVar6 | 0x8000;
      if (param_2 <= fVar9) {
        uVar5 = uVar6;
      }
      uVar6 = uVar1 | 0x8000;
      if (param_2 <= 0.0) {
        uVar6 = uVar1;
      }
      if (uVar5 == 0) goto LAB_0226e354;
      goto LAB_0226e360;
    }
    uVar6 = 0;
LAB_0226e354:
    if ((uVar4 != 0) || (cVar2 == '\0')) {
      uVar5 = uVar6 & uVar4;
      goto LAB_0226e360;
    }
    if ((param_4 & 1) == 0) {
      uVar5 = uVar3 >> 8 & 0xf000;
      uVar3 = *(ulong *)(param_3 + 0x450);
      goto LAB_0226e4ac;
    }
    uVar5 = uVar3 >> 4 & 0xf000;
    uVar3 = *(ulong *)(param_3 + 0x450);
  }
  uVar3 = uVar3 & 0xfffffffffff00000 | (uVar5 >> 0xd & 1) << 0x11 | (uVar5 >> 0xf) << 0x13 |
          uVar3 & 0xffff | (uVar5 >> 0xc & 1) << 0x10;
  *(ulong *)(param_3 + 0x450) = uVar3;
  if (((uint)uVar5 >> 0xe & 1) == 0) {
    return;
  }
  uVar3 = uVar3 | 0x40000;
LAB_0226e4e0:
  *(ulong *)(param_3 + 0x450) = uVar3;
  return;
}


