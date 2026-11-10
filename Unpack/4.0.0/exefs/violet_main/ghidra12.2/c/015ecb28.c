/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015ecb28; name: FUN_015ecb28
 */


float FUN_015ecb28(float param_1,long param_2,int param_3)

{
  long lVar1;
  void *__src;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_e0 [48];
  undefined1 auStack_b0 [48];
  undefined1 auStack_80 [48];
  
  fVar6 = *(float *)(param_2 + 0x430);
  fVar2 = fVar6 - *(float *)(param_2 + 0x434);
  lVar1 = 0x3b0;
  if (fVar6 <= 1.1920929e-07 || fVar2 <= 1.1920929e-07) {
    lVar1 = 0x110;
  }
  uVar3 = *(undefined4 *)(param_2 + lVar1);
  __src = (void *)(param_2 + 0x2e0);
  if (fVar6 <= 1.1920929e-07 || fVar2 <= 1.1920929e-07) {
    __src = (void *)(param_2 + 0x40);
  }
  if (param_3 == 0) {
    FUN_015ed920(auStack_80,0,__src);
  }
  else {
    memcpy(auStack_80,(void *)((long)__src + 0x60),0x30);
  }
  fVar2 = (float)FUN_015ecfb8(uVar3,auStack_80);
  if (fVar2 <= param_1) {
    return 0.0;
  }
  if (param_3 == 0) {
    FUN_015ed920(auStack_b0,0x3f800000,__src);
    fVar2 = (float)FUN_015ecfb8(uVar3,auStack_b0);
    if (param_1 <= fVar2) {
      return 1.0;
    }
    FUN_015ed920(auStack_e0,0x3f000000,__src);
    fVar2 = (float)FUN_015ecfb8(uVar3,auStack_e0);
    if (ABS(fVar2 - param_1) <= 0.015625) {
      return 0.5;
    }
    fVar6 = 0.5;
    if (fVar2 <= param_1) {
      fVar6 = 0.0;
    }
    fVar7 = fVar6 + 0.25;
    FUN_015ed920(auStack_e0,fVar7,__src);
    fVar4 = (float)FUN_015ecfb8(uVar3,auStack_e0);
    if (ABS(fVar4 - param_1) <= 0.015625) {
      return fVar7;
    }
    fVar5 = 1.0;
    if (fVar2 <= param_1) {
      fVar5 = 0.5;
    }
    fVar2 = fVar7;
    if (fVar4 <= param_1) {
      fVar2 = fVar6;
      fVar5 = fVar7;
    }
    fVar4 = fVar2 + (fVar5 - fVar2) * 0.5;
    FUN_015ed920(auStack_e0,fVar4,__src);
    fVar6 = (float)FUN_015ecfb8(uVar3,auStack_e0);
    if (ABS(fVar6 - param_1) <= 0.015625) {
      return fVar4;
    }
    fVar7 = fVar4;
    if (fVar6 <= param_1) {
      fVar7 = fVar2;
      fVar5 = fVar4;
    }
    fVar6 = fVar7 + (fVar5 - fVar7) * 0.5;
    FUN_015ed920(auStack_e0,fVar6,__src);
    fVar2 = (float)FUN_015ecfb8(uVar3,auStack_e0);
    if (ABS(fVar2 - param_1) <= 0.015625) {
      return fVar6;
    }
    fVar4 = fVar6;
    if (fVar2 <= param_1) {
      fVar4 = fVar7;
      fVar5 = fVar6;
    }
    fVar6 = fVar4 + (fVar5 - fVar4) * 0.5;
    FUN_015ed920(auStack_e0,fVar6,__src);
    fVar2 = (float)FUN_015ecfb8(uVar3,auStack_e0);
    if (ABS(fVar2 - param_1) <= 0.015625) {
      return fVar6;
    }
    fVar7 = fVar6;
    if (fVar2 <= param_1) {
      fVar7 = fVar4;
      fVar5 = fVar6;
    }
    fVar2 = fVar7 + (fVar5 - fVar7) * 0.5;
    FUN_015ed920(auStack_e0,fVar2,__src);
  }
  else {
    memcpy(auStack_b0,__src,0x30);
    fVar2 = (float)FUN_015ecfb8(uVar3,auStack_b0);
    if (param_1 <= fVar2) {
      return 1.0;
    }
    memcpy(auStack_e0,(void *)((long)__src + 0x30),0x30);
    fVar2 = (float)FUN_015ecfb8(uVar3,auStack_e0);
    if (ABS(fVar2 - param_1) <= 0.015625) {
      return 0.5;
    }
    fVar6 = 0.5;
    if (fVar2 <= param_1) {
      fVar6 = 0.0;
    }
    fVar7 = fVar6 + 0.25;
    FUN_00d900b4(auStack_e0,fVar7,__src);
    fVar4 = (float)FUN_015ecfb8(uVar3,auStack_e0);
    if (ABS(fVar4 - param_1) <= 0.015625) {
      return fVar7;
    }
    fVar5 = 1.0;
    if (fVar2 <= param_1) {
      fVar5 = 0.5;
    }
    fVar2 = fVar7;
    if (fVar4 <= param_1) {
      fVar2 = fVar6;
      fVar5 = fVar7;
    }
    fVar4 = fVar2 + (fVar5 - fVar2) * 0.5;
    FUN_00d900b4(auStack_e0,fVar4,__src);
    fVar6 = (float)FUN_015ecfb8(uVar3,auStack_e0);
    if (ABS(fVar6 - param_1) <= 0.015625) {
      return fVar4;
    }
    fVar7 = fVar4;
    if (fVar6 <= param_1) {
      fVar7 = fVar2;
      fVar5 = fVar4;
    }
    fVar6 = fVar7 + (fVar5 - fVar7) * 0.5;
    FUN_00d900b4(auStack_e0,fVar6,__src);
    fVar2 = (float)FUN_015ecfb8(uVar3,auStack_e0);
    if (ABS(fVar2 - param_1) <= 0.015625) {
      return fVar6;
    }
    fVar4 = fVar6;
    if (fVar2 <= param_1) {
      fVar4 = fVar7;
      fVar5 = fVar6;
    }
    fVar6 = fVar4 + (fVar5 - fVar4) * 0.5;
    FUN_00d900b4(auStack_e0,fVar6,__src);
    fVar2 = (float)FUN_015ecfb8(uVar3,auStack_e0);
    if (ABS(fVar2 - param_1) <= 0.015625) {
      return fVar6;
    }
    fVar7 = fVar6;
    if (fVar2 <= param_1) {
      fVar7 = fVar4;
      fVar5 = fVar6;
    }
    fVar2 = fVar7 + (fVar5 - fVar7) * 0.5;
    FUN_00d900b4(auStack_e0,fVar2,__src);
  }
  fVar6 = (float)FUN_015ecfb8(uVar3,auStack_e0);
  if (0.015625 < ABS(fVar6 - param_1)) {
    fVar4 = fVar2;
    if (fVar6 <= param_1) {
      fVar4 = fVar7;
      fVar5 = fVar2;
    }
    fVar2 = fVar4 + (fVar5 - fVar4) * 0.5;
  }
  return fVar2;
}


