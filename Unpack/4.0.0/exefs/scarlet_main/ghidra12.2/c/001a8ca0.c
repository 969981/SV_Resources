/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001a8ca0; name: FUN_001a8ca0
 */


void FUN_001a8ca0(undefined4 *param_1,undefined4 param_2,undefined8 param_3,int param_4,long param_5
                 ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  int iVar6;
  float fVar7;
  
  iVar3 = param_4;
  if (param_4 < 3) {
    iVar3 = 2;
  }
  iVar3 = FUN_00152930(param_3,iVar3,param_5,0x10,0x14,0x11,0x18);
  param_1[0x15] = 0xc;
  fVar7 = 0.0025;
  *param_1 = param_2;
  param_1[1] = param_4;
  param_1[0x11] = 0x3b23d70a;
  uVar1 = *(uint *)(param_5 + 0x18);
  if (uVar1 != 0) {
    fVar7 = (float)(int)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) * 0.00390625 * 0.0025;
  }
  param_1[6] = 0x20000;
  param_1[0x11] = fVar7;
  *(long *)(param_1 + 4) = param_5;
  *(undefined1 *)((long)param_1 + 0x51) = 1;
  uVar4 = FUN_001a3cc0();
  *(undefined8 *)(param_1 + 2) = uVar4;
  *(undefined8 *)(param_1 + 0x12) = 0x4000000ff;
  puVar2 = PTR_LAB_047cb8e0;
  if (param_4 < 4) {
    param_1[0x12] = 0xdf;
    if (param_4 == 3) {
      FUN_001683c0(param_1,param_6,param_7,iVar3,param_8,0);
      puVar5 = &LAB_001ab1c0;
    }
    else {
      param_1[0x12] = 0xcf;
      if (param_4 < 2) {
        param_1[0x12] = 0xcd;
        iVar6 = iVar3;
        if (0x12 < iVar3) {
          iVar6 = 0x13;
        }
        if (0 < *(int *)(param_5 + 0x2c)) {
          iVar6 = iVar3;
        }
        FUN_001a8ee0(param_1,param_6,param_7,iVar6,param_8,0);
        puVar5 = &LAB_001a90c0;
      }
      else {
        FUN_00167340(param_1,param_6,param_7,iVar3,param_8,0);
        puVar5 = &LAB_001aa0c0;
      }
    }
  }
  else {
    if (5 < param_4) {
      *(undefined1 **)(param_1 + 0x16) = &LAB_001ac1f0;
      param_1[0x10] = 4;
      *(undefined1 *)(param_1 + 0x14) = 1;
      *(undefined **)(param_1 + 0xe) = puVar2;
      return;
    }
    if (param_4 == 5) {
      *(undefined1 **)(param_1 + 0x16) = &LAB_001ac1f0;
      *(undefined **)(param_1 + 0xe) = PTR_LAB_047cb8e8;
      param_1[0x10] = 4;
      *(undefined1 *)(param_1 + 0x14) = 0;
      return;
    }
    FUN_0016cb80(param_1,param_6,param_7,iVar3,param_8,0);
    puVar5 = &LAB_001b24c0;
  }
  *(undefined1 **)(param_1 + 0x16) = puVar5;
  return;
}


