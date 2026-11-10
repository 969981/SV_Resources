/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001e28ec; name: FUN_001e28ec
 */


void FUN_001e28ec(long param_1,int param_2,long param_3,uint param_4,int param_5)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  lVar6 = *(long *)(param_1 + 0x10);
  if (((*(byte *)(lVar6 + 0x3ff) >> 2 & 1) == 0) && (*(int *)(lVar6 + 0x230) != 0x14)) {
    if (param_2 == -1) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = *(undefined4 *)(lVar6 + (long)param_2 * 4 + 600);
    }
    *(undefined4 *)(lVar6 + 0x450) = uVar4;
    if (param_5 == -1) {
      iVar2 = -1;
    }
    else {
      iVar2 = *(int *)(lVar6 + (long)param_5 * 4 + 600);
    }
  }
  else {
    iVar2 = param_2;
    if ((param_2 != -1) || (iVar2 = param_5, param_5 != -1)) {
      iVar2 = *(int *)(lVar6 + (long)iVar2 * 4 + 600);
    }
    *(int *)(lVar6 + 0x450) = iVar2;
  }
  *(int *)(lVar6 + 0x454) = iVar2;
  uVar1 = *(ushort *)(param_1 + 0x660);
  uVar5 = 0x80;
  if ((param_4 & 1) == 0) {
    uVar5 = 0;
  }
  uVar3 = uVar1 & 0xffffff7f | uVar5;
  *(short *)(param_1 + 0x660) = (short)uVar3;
  *(long *)(param_1 + 0xf0) = param_3;
  if ((param_4 & 1) == 0) {
    uVar3 = uVar1 & 0xffffff7e | uVar5;
    *(short *)(param_1 + 0x660) = (short)uVar3;
    if (0 < param_3) {
      FUN_001dac48(param_1,param_3);
      uVar3 = (uint)*(ushort *)(param_1 + 0x660);
    }
  }
  if (((uVar3 >> 7 & 1) != 0) || ((*(byte *)(param_1 + 0xf43) & 1) == 0)) {
    if (param_2 != -1) {
      *(uint *)(param_1 + 0x1c0) = *(uint *)(param_1 + 0x1c0) | 1;
    }
    if (param_5 != -1) {
      if ((*(byte *)(param_1 + 0x15a5) & 1) != 0) {
        if (((*(byte *)(*(long *)(lVar6 + 0x420) + 0x80) & 3) != 0) &&
           (*(int *)(*(long *)(param_1 + 0x1e8) + 0x208) == 2)) {
          *(undefined4 *)(param_1 + 0x198) = 1;
          auVar7 = FUN_001e0dfc();
          *(undefined1 (*) [16])(param_1 + 0x188) = auVar7;
          FUN_001cea34(param_1,*(undefined8 *)(param_1 + 0xee0),0);
          return;
        }
        *(undefined4 *)(param_1 + 0x198) = 2;
      }
      *(uint *)(param_1 + 0x1c0) = *(uint *)(param_1 + 0x1c0) | 2;
    }
  }
  return;
}


