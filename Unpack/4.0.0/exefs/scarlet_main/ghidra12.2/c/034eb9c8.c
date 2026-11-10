/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034eb9c8; name: FUN_034eb9c8
 */


void FUN_034eb9c8(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined1 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58;
  
  uStack_90 = *(undefined8 *)(param_3 + 8);
  local_88 = 0;
  local_80 = 0;
  local_78 = 0xff;
  local_70 = 0xff;
  local_68 = 0;
  local_98 = 0;
  fVar8 = *(float *)(param_4 + 0x24);
  if (0.0 < fVar8) {
    fVar5 = *(float *)(param_4 + 0x1c) - *(float *)(param_5 + 0x7c);
    fVar6 = *(float *)(param_4 + 0x18) - *(float *)(param_5 + 0x78);
    fVar7 = *(float *)(param_4 + 0x20) - *(float *)(param_5 + 0x80);
    FUN_03447a94(*(float *)(param_5 + 0x3c) * fVar6 + fVar5 * *(float *)(param_5 + 0x40) +
                 fVar7 * *(float *)(param_5 + 0x44),
                 *(float *)(param_5 + 0x54) * fVar6 + fVar5 * *(float *)(param_5 + 0x58) +
                 fVar7 * *(float *)(param_5 + 0x5c),
                 *(float *)(param_5 + 0x48) * fVar6 + fVar5 * *(float *)(param_5 + 0x4c) +
                 fVar7 * *(float *)(param_5 + 0x50),fVar8,(long)&local_98 + 4,&local_98);
    fVar8 = *(float *)(param_4 + 0x24);
  }
  puVar1 = PTR_DAT_047e6fd8;
  lVar2 = *(long *)PTR_DAT_047e6fd8;
  if (*(int *)(lVar2 + 0x48) != 0) {
    puVar3 = *(undefined4 **)(lVar2 + 0x40);
    do {
      local_60 = 0x400000000;
      local_58 = 0;
      puVar4 = puVar3 + 1;
      FUN_034b6d0c(fVar8,lVar2,*puVar3,&uStack_90,&local_60,1,1);
      puVar3 = puVar4;
    } while (puVar4 != (undefined4 *)(*(long *)(lVar2 + 0x40) + (ulong)*(uint *)(lVar2 + 0x48) * 4))
    ;
    lVar2 = *(long *)puVar1;
  }
  if (*(int *)(lVar2 + 0x58) != 0) {
    fVar8 = local_98._4_4_ * 57.295776;
    puVar3 = *(undefined4 **)(lVar2 + 0x50);
    do {
      local_60 = 0x400000000;
      local_58 = 0;
      puVar4 = puVar3 + 1;
      FUN_034b6d0c(fVar8,lVar2,*puVar3,&uStack_90,&local_60,1,1);
      puVar3 = puVar4;
    } while (puVar4 != (undefined4 *)(*(long *)(lVar2 + 0x50) + (ulong)*(uint *)(lVar2 + 0x58) * 4))
    ;
    lVar2 = *(long *)puVar1;
  }
  if (*(int *)(lVar2 + 0x68) != 0) {
    fVar8 = (float)local_98 * 57.295776;
    puVar3 = *(undefined4 **)(lVar2 + 0x60);
    do {
      local_60 = 0x400000000;
      local_58 = 0;
      puVar4 = puVar3 + 1;
      FUN_034b6d0c(fVar8,lVar2,*puVar3,&uStack_90,&local_60,1,1);
      puVar3 = puVar4;
    } while (puVar4 != (undefined4 *)(*(long *)(lVar2 + 0x60) + (ulong)*(uint *)(lVar2 + 0x68) * 4))
    ;
    lVar2 = *(long *)puVar1;
  }
  if (*(int *)(lVar2 + 0x78) != 0) {
    fVar8 = *(float *)(param_4 + 0x28);
    puVar3 = *(undefined4 **)(lVar2 + 0x70);
    do {
      local_60 = 0x400000000;
      local_58 = 0;
      puVar4 = puVar3 + 1;
      FUN_034b6d0c(fVar8 * 57.295776,lVar2,*puVar3,&uStack_90,&local_60,1,1);
      puVar3 = puVar4;
    } while (puVar4 != (undefined4 *)(*(long *)(lVar2 + 0x70) + (ulong)*(uint *)(lVar2 + 0x78) * 4))
    ;
    lVar2 = *(long *)puVar1;
  }
  if (*(int *)(lVar2 + 0x88) != 0) {
    uVar9 = *(undefined4 *)(param_4 + 0x40);
    puVar3 = *(undefined4 **)(lVar2 + 0x80);
    do {
      local_60 = 0x400000000;
      local_58 = 0;
      puVar4 = puVar3 + 1;
      FUN_034b6d0c(uVar9,lVar2,*puVar3,&uStack_90,&local_60,1,1);
      puVar3 = puVar4;
    } while (puVar4 != (undefined4 *)(*(long *)(lVar2 + 0x80) + (ulong)*(uint *)(lVar2 + 0x88) * 4))
    ;
    lVar2 = *(long *)puVar1;
  }
  if (*(int *)(lVar2 + 0x98) != 0) {
    uVar9 = *(undefined4 *)(param_4 + 0x3c);
    puVar3 = *(undefined4 **)(lVar2 + 0x90);
    do {
      local_60 = 0x400000000;
      local_58 = 0;
      puVar4 = puVar3 + 1;
      FUN_034b6d0c(uVar9,lVar2,*puVar3,&uStack_90,&local_60,1,1);
      puVar3 = puVar4;
    } while (puVar4 != (undefined4 *)(*(long *)(lVar2 + 0x90) + (ulong)*(uint *)(lVar2 + 0x98) * 4))
    ;
    lVar2 = *(long *)puVar1;
  }
  if (*(int *)(lVar2 + 0xa8) != 0) {
    fVar8 = *(float *)(param_4 + 0x2c);
    puVar3 = *(undefined4 **)(lVar2 + 0xa0);
    do {
      local_60 = 0x400000000;
      local_58 = 0;
      puVar4 = puVar3 + 1;
      FUN_034b6d0c(fVar8 * 57.295776,lVar2,*puVar3,&uStack_90,&local_60,1,1);
      puVar3 = puVar4;
    } while (puVar4 != (undefined4 *)(*(long *)(lVar2 + 0xa0) + (ulong)*(uint *)(lVar2 + 0xa8) * 4))
    ;
    lVar2 = *(long *)puVar1;
  }
  if (*(int *)(lVar2 + 0xb8) != 0) {
    puVar3 = *(undefined4 **)(lVar2 + 0xb0);
    do {
      local_60 = 0x400000000;
      local_58 = 0;
      puVar4 = puVar3 + 1;
      FUN_034b6d0c(param_1,lVar2,*puVar3,&uStack_90,&local_60,1,1);
      puVar3 = puVar4;
    } while (puVar4 != (undefined4 *)(*(long *)(lVar2 + 0xb0) + (ulong)*(uint *)(lVar2 + 0xb8) * 4))
    ;
    lVar2 = *(long *)puVar1;
  }
  if (*(int *)(lVar2 + 200) != 0) {
    puVar3 = *(undefined4 **)(lVar2 + 0xc0);
    do {
      local_60 = 0x400000000;
      local_58 = 0;
      puVar4 = puVar3 + 1;
      FUN_034b6d0c(param_2,lVar2,*puVar3,&uStack_90,&local_60,1,1);
      puVar3 = puVar4;
    } while (puVar4 != (undefined4 *)(*(long *)(lVar2 + 0xc0) + (ulong)*(uint *)(lVar2 + 200) * 4));
  }
  return;
}


