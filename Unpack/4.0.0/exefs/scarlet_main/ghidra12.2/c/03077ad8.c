/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03077ad8; name: FUN_03077ad8
 */


void FUN_03077ad8(undefined1 param_1 [16],long param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  
  fVar8 = param_1._0_4_;
  fVar7 = *(float *)(param_2 + 0x18);
  if (fVar8 * 1.1920929e-07 < ABS(fVar8 - fVar7)) {
    if (((param_3 & 1) == 0) || (fVar7 <= fVar8 || *(int *)(param_2 + 0x40) == 0)) {
      if (*(float *)(param_2 + 0x1c) + 0.001 < fVar7) {
        *(undefined4 *)(param_2 + 0x40) = 0;
        *(undefined4 *)(param_2 + 0x48) = 0;
        uVar2 = *(uint *)(param_2 + 0x30);
        uVar6 = (ulong)uVar2;
        if (0 < (int)uVar2) {
          uVar3 = uVar6 & 3;
          if (uVar6 - 1 < 3) {
            uVar4 = 0;
          }
          else {
            uVar4 = 0;
            do {
              *(undefined4 *)(*(long *)(param_2 + 0x28) + uVar4 * 4) = 0xffffffff;
              *(undefined4 *)(*(long *)(param_2 + 0x28) + uVar4 * 4 + 4) = 0xffffffff;
              *(undefined4 *)(*(long *)(param_2 + 0x28) + uVar4 * 4 + 8) = 0xffffffff;
              lVar5 = uVar4 * 4;
              uVar4 = uVar4 + 4;
              *(undefined4 *)(*(long *)(param_2 + 0x28) + lVar5 + 0xc) = 0xffffffff;
            } while ((uVar6 & 0xfffffffc) != uVar4);
          }
          if ((uVar2 & 3) != 0) {
            lVar5 = uVar4 << 2;
            do {
              *(undefined4 *)(*(long *)(param_2 + 0x28) + lVar5) = 0xffffffff;
              uVar3 = uVar3 - 1;
              lVar5 = lVar5 + 4;
            } while (uVar3 != 0);
          }
        }
        uVar2 = *(uint *)(param_2 + 0x58);
        if (0 < (int)uVar2) {
          if (uVar2 == 1) {
            uVar6 = 0;
          }
          else {
            lVar5 = 0;
            uVar6 = 0;
            do {
              *(undefined2 *)(*(long *)(param_2 + 0x50) + lVar5) = 0xff00;
              uVar6 = uVar6 + 2;
              lVar1 = *(long *)(param_2 + 0x50) + lVar5;
              lVar5 = lVar5 + 4;
              *(undefined2 *)(lVar1 + 2) = 0xff00;
            } while (((ulong)uVar2 & 0xfffffffe) != uVar6);
          }
          if ((uVar2 & 1) != 0) {
            *(undefined2 *)(*(long *)(param_2 + 0x50) + uVar6 * 2) = 0xff00;
          }
        }
        uVar2 = *(uint *)(param_2 + 0x68);
        uVar6 = (ulong)uVar2;
        if (0 < (int)uVar2) {
          uVar3 = uVar6 & 3;
          if (uVar6 - 1 < 3) {
            uVar4 = 0;
          }
          else {
            uVar4 = 0;
            do {
              *(undefined1 *)(*(long *)(param_2 + 0x60) + uVar4) = 0xff;
              *(undefined1 *)(*(long *)(param_2 + 0x60) + uVar4 + 1) = 0xff;
              *(undefined1 *)(*(long *)(param_2 + 0x60) + uVar4 + 2) = 0xff;
              lVar5 = *(long *)(param_2 + 0x60) + uVar4;
              uVar4 = uVar4 + 4;
              *(undefined1 *)(lVar5 + 3) = 0xff;
            } while ((uVar6 & 0xfffffffc) != uVar4);
          }
          if ((uVar2 & 3) != 0) {
            do {
              *(undefined1 *)(*(long *)(param_2 + 0x60) + uVar4) = 0xff;
              uVar4 = uVar4 + 1;
              uVar3 = uVar3 - 1;
            } while (uVar3 != 0);
          }
        }
        *(undefined4 *)(param_2 + 0x70) = 0;
      }
    }
    else {
      FUN_03077d2c(fVar7,param_1._0_8_,param_2);
    }
  }
  *(float *)(param_2 + 0x18) = fVar8;
  if (fVar8 <= *(float *)(param_2 + 0x1c) + 0.001) {
    *(undefined4 *)(param_2 + 0x24) = 0;
    fVar7 = 0.0;
  }
  else {
    fVar8 = fVar8 - *(float *)(param_2 + 0x1c);
    fVar7 = fVar8 / 254.0;
    *(int *)(param_2 + 0x24) = (int)(254.0 / fVar8) + 1;
  }
  *(float *)(param_2 + 0x20) = fVar7;
  return;
}


