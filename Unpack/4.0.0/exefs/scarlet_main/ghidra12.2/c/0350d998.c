/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0350d998; name: FUN_0350d998
 */


undefined8 FUN_0350d998(long param_1,uint *param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint local_64;
  
  fVar8 = (float)(**(code **)(**(long **)(param_1 + 8) + 0x40))();
  if ((*(char *)(param_1 + 0x7e) == '\0') && (*(float *)(param_1 + 0x78) == fVar8)) {
    uVar3 = *(uint *)(param_1 + 0x44);
  }
  else {
    fVar10 = *(float *)(param_1 + 0x74);
    fVar9 = exp2f(fVar8 * 0.00083333335);
    fVar9 = fVar10 * fVar9 * 65536.0 + 0.5;
    uVar3 = (uint)fVar9;
    *(float *)(param_1 + 0x78) = fVar8;
    if (uVar3 == 0) {
      uVar3 = 1;
    }
    if (2.1474836e+09 <= fVar9) {
      uVar3 = 0x7fffffff;
    }
    *(uint *)(param_1 + 0x44) = uVar3;
    *(uint *)(param_1 + 0x48) = uVar3;
    *(undefined4 *)(param_1 + 0x4c) = 0x400;
    *(undefined1 *)(param_1 + 0x7e) = 0;
  }
  fVar9 = (float)NEON_ucvtf(*param_2);
  fVar8 = (float)uVar3;
  uVar3 = (uint)(fVar8 * fVar9 * 1.5258789e-05 + 0.5);
  if (uVar3 == 0) {
    uVar2 = 0x2d;
    fVar9 = 0.0;
  }
  else {
    uVar4 = (uint)*(ushort *)(param_1 + 0x92);
    uVar7 = 0;
    do {
      if ((uVar4 & 0xffff) == 0) {
        if (*(char *)(param_1 + 0xf0) == '\0') {
          local_64 = *param_2;
          uVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x20))(*(long **)(param_1 + 8),&local_64);
          if ((int)uVar2 != 0x2d) {
            if ((int)uVar2 != 0x11) {
              return uVar2;
            }
            *(undefined1 *)(param_1 + 0xf0) = 1;
          }
          lVar5 = *(long *)(param_1 + 0xe8);
          uVar4 = *(uint *)(lVar5 + 699);
          if ((uVar4 >> 0x16 & 1) == 0) {
            uVar6 = *(uint *)(lVar5 + 0x2b4);
          }
          else {
            uVar6 = 0;
          }
          iVar1 = 0;
          if (local_64 <= uVar6) {
            iVar1 = uVar6 - local_64;
          }
          *(int *)(lVar5 + 0x2b4) = iVar1;
          *(uint *)(lVar5 + 699) = uVar4 & 0xfe3fffff;
          uVar4 = 0;
          if (uVar6 <= local_64) {
            uVar4 = local_64 - uVar6;
          }
          *(short *)(param_1 + 0x92) = (short)uVar4;
        }
        else {
          uVar4 = 0;
        }
      }
      uVar6 = uVar3;
      if ((uVar4 & 0xffff) <= uVar3) {
        uVar6 = uVar4 & 0xffff;
      }
      uVar4 = uVar4 - uVar6;
      uVar7 = uVar6 + uVar7;
      *(short *)(param_1 + 0x92) = (short)uVar4;
      if (((uVar4 & 0xffff) == 0) && (*(char *)(param_1 + 0xf0) != '\0')) {
        uVar2 = 0x11;
        goto LAB_0350db5c;
      }
      uVar3 = uVar3 - uVar6;
    } while (uVar3 != 0);
    uVar2 = 0x2d;
LAB_0350db5c:
    fVar8 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x44));
    fVar9 = (float)uVar7;
  }
  *param_2 = (int)(fVar9 / (fVar8 * 1.5258789e-05) + 0.5);
  return uVar2;
}


