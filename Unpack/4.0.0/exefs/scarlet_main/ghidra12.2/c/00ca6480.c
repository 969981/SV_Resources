/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ca6480; name: FUN_00ca6480
 */


uint FUN_00ca6480(float param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4,
                 float param_5,long param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar1 = *(uint *)(param_6 + 0x40);
  iVar2 = *(int *)(param_6 + 0x44);
  uVar3 = 0;
  uVar5 = iVar2 - (int)((param_5 - param_3._0_4_) * param_1);
  uVar7 = iVar2 - (int)((param_5 - param_3._4_4_) * param_1);
  uVar6 = (uint)((param_2._0_4_ - param_4) * param_1);
  uVar8 = (uint)((param_2._4_4_ - param_4) * param_1);
  if (((int)uVar5 < (int)uVar1 && (int)uVar6 < (int)uVar1) && (-1 < (int)(uVar5 | uVar6))) {
    lVar4 = (long)(int)(uVar6 + uVar5 * uVar1);
    if (*(int *)(param_6 + 0x38) == 4) {
      uVar3 = (uint)*(byte *)(*(long *)(param_6 + 0x30) + (long)*(int *)(param_6 + 0x3c) + lVar4 * 4
                             );
    }
    else {
      uVar3 = (int)*(char *)(*(long *)(param_6 + 0x30) + lVar4) <<
              (ulong)((*(uint *)(param_6 + 0x3c) & 0xf) << 1) & 0xffffff80;
    }
    uVar3 = uVar3 & 0xff;
  }
  uVar9 = (uint)((param_2._8_4_ - param_4) * param_1);
  uVar6 = 0;
  uVar5 = iVar2 - (int)((param_5 - param_3._8_4_) * param_1);
  if ((((int)uVar1 > (int)uVar7 && uVar1 != uVar8) &&
       ((int)uVar1 <= (int)uVar7 || (int)uVar8 <= (int)uVar1)) && (-1 < (int)(uVar7 | uVar8))) {
    lVar4 = (long)(int)(uVar8 + uVar7 * uVar1);
    if (*(int *)(param_6 + 0x38) == 4) {
      uVar7 = (uint)*(byte *)(*(long *)(param_6 + 0x30) + (long)*(int *)(param_6 + 0x3c) + lVar4 * 4
                             );
    }
    else {
      uVar7 = (int)*(char *)(*(long *)(param_6 + 0x30) + lVar4) <<
              (ulong)((*(uint *)(param_6 + 0x3c) & 0xf) << 1) & 0xffffff80;
    }
    uVar6 = (uVar7 & 0xff) << 8;
  }
  uVar10 = (uint)((param_2._12_4_ - param_4) * param_1);
  uVar8 = 0;
  uVar7 = iVar2 - (int)((param_5 - param_3._12_4_) * param_1);
  if ((((int)uVar1 > (int)uVar5 && uVar1 != uVar9) &&
       ((int)uVar1 <= (int)uVar5 || (int)uVar9 <= (int)uVar1)) && (-1 < (int)(uVar5 | uVar9))) {
    lVar4 = (long)(int)(uVar9 + uVar5 * uVar1);
    if (*(int *)(param_6 + 0x38) == 4) {
      uVar5 = (uint)*(byte *)(*(long *)(param_6 + 0x30) + (long)*(int *)(param_6 + 0x3c) + lVar4 * 4
                             );
    }
    else {
      uVar5 = (int)*(char *)(*(long *)(param_6 + 0x30) + lVar4) <<
              (ulong)((*(uint *)(param_6 + 0x3c) & 0xf) << 1) & 0xffffff80;
    }
    uVar8 = (uVar5 & 0xff) << 0x10;
  }
  uVar5 = 0;
  if ((((int)uVar1 > (int)uVar7 && uVar1 != uVar10) &&
       ((int)uVar1 <= (int)uVar7 || (int)uVar10 <= (int)uVar1)) && (-1 < (int)(uVar7 | uVar10))) {
    lVar4 = (long)(int)(uVar10 + uVar7 * uVar1);
    if (*(int *)(param_6 + 0x38) == 4) {
      uVar5 = (uint)*(byte *)(*(long *)(param_6 + 0x30) + (long)*(int *)(param_6 + 0x3c) + lVar4 * 4
                             );
    }
    else {
      uVar5 = (int)*(char *)(*(long *)(param_6 + 0x30) + lVar4) <<
              (ulong)((*(uint *)(param_6 + 0x3c) & 0xf) << 1) & 0xffffff80;
    }
    uVar5 = uVar5 << 0x18;
  }
  return uVar8 | uVar6 | uVar5 | uVar3;
}


