/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004ba408; name: FUN_004ba408
 */


void FUN_004ba408(long param_1,long param_2,long param_3)

{
  size_t sVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_258;
  undefined4 local_250;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_d8;
  undefined4 local_d0;
  char *local_a8;
  undefined4 local_a0;
  undefined1 auStack_9c [36];
  byte local_78 [16];
  undefined8 local_68;
  
  if (0 < *(int *)(param_2 + 0x68)) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      FUN_004baba8(param_1,*(long *)(param_2 + 0x28) + lVar4,
                   *(undefined8 *)(*(long *)(param_3 + 0x28) + lVar5 * 8 + 8));
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x98;
    } while (lVar5 < *(int *)(param_2 + 0x68));
  }
  if (0 < *(int *)(param_2 + 0x74)) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      FUN_004ba408(param_1,*(long *)(param_2 + 0x38) + lVar4,
                   *(undefined8 *)(*(long *)(param_3 + 0x40) + lVar5 * 8 + 8));
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x90;
    } while (lVar5 < *(int *)(param_2 + 0x74));
  }
  if (0 < *(int *)(param_2 + 0x78)) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      FUN_004ba6f0(param_1,*(long *)(param_2 + 0x40) + lVar4,
                   *(undefined8 *)(*(long *)(param_3 + 0x58) + lVar5 * 8 + 8));
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x50;
    } while (lVar5 < *(int *)(param_2 + 0x78));
  }
  if (0 < *(int *)(param_2 + 0x80)) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      FUN_004baba8(param_1,*(long *)(param_2 + 0x50) + lVar4,
                   *(undefined8 *)(*(long *)(param_3 + 0x88) + lVar5 * 8 + 8));
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x98;
    } while (lVar5 < *(int *)(param_2 + 0x80));
  }
  lVar5 = 0x1fffffff;
  if (*(char *)(*(long *)(param_2 + 0x20) + 0x48) != '\0') {
    lVar5 = 0x7fffffff;
  }
  iVar3 = *(int *)(param_2 + 0x7c);
  if (0 < iVar3) {
    lVar4 = 0;
    lVar6 = 4;
    do {
      if (lVar5 + 1 < (long)*(int *)(*(long *)(param_2 + 0x48) + lVar6)) {
        uVar7 = *(undefined8 *)(param_2 + 8);
        uVar8 = *(undefined8 *)(*(long *)(param_3 + 0x70) + lVar4 * 8 + 8);
        local_a8 = (char *)FUN_005330a0(lVar5,auStack_9c);
        sVar1 = strlen(local_a8);
        local_a0 = (undefined4)sVar1;
        local_d8 = 0;
        local_d0 = 0xffffffff;
        local_108 = 0;
        local_100 = 0xffffffff;
        local_138 = 0;
        local_130 = 0xffffffff;
        local_168 = 0;
        local_160 = 0xffffffff;
        local_198 = 0;
        local_190 = 0xffffffff;
        local_1c8 = 0;
        local_1c0 = 0xffffffff;
        local_1f8 = 0;
        local_1f0 = 0xffffffff;
        local_228 = 0;
        local_220 = 0xffffffff;
        local_258 = 0;
        local_250 = 0xffffffff;
        FUN_00506f30(local_78,"Extension numbers cannot be greater than $0.",&local_a8,&local_d8,
                     &local_108,&local_138,&local_168,&local_198,&local_1c8,&local_1f8,&local_228,
                     &local_258);
        plVar2 = *(long **)(param_1 + 0x10);
        if (plVar2 != (long *)0x0) {
                    /* try { // try from 004ba670 to 004ba687 has its CatchHandler @ 004ba6cc */
          (**(code **)(*plVar2 + 0x10))(plVar2,param_1 + 0x38,uVar7,uVar8,1,local_78);
        }
        *(undefined1 *)(param_1 + 0x30) = 1;
        if ((local_78[0] & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_68);
        }
        iVar3 = *(int *)(param_2 + 0x7c);
      }
      lVar4 = lVar4 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar4 < iVar3);
  }
  return;
}


