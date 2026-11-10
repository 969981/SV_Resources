/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0084c7c8; name: FUN_0084c7c8
 */


void FUN_0084c7c8(long *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  
  *param_1 = (long)(PTR_DAT_047d1a58 + 0x10);
  puVar5 = PTR_DAT_047d1a08;
  lVar6 = param_1[0x1f];
  if (*(int *)((long)param_1 + 0x104) < 0) {
    lVar1 = 0;
    if (lVar6 != 0) {
      lVar1 = lVar6 + (long)(param_1 + 0x1f);
    }
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar1,0);
    lVar6 = param_1[0x1d];
    iVar2 = *(int *)((long)param_1 + 0xf4);
  }
  else {
    lVar6 = param_1[0x1d];
    iVar2 = *(int *)((long)param_1 + 0xf4);
  }
  if (iVar2 < 0) {
    lVar1 = 0;
    if (lVar6 != 0) {
      lVar1 = (long)param_1 + lVar6 + 0xe8;
    }
    (**(code **)(puVar5 + 8))(0,lVar1,0);
    iVar2 = *(int *)((long)param_1 + 0xe4);
  }
  else {
    iVar2 = *(int *)((long)param_1 + 0xe4);
  }
  if (iVar2 < 0) {
    lVar6 = 0;
    if (param_1[0x1b] != 0) {
      lVar6 = (long)param_1 + param_1[0x1b] + 0xd8;
    }
    (**(code **)(puVar5 + 8))(0,lVar6,0);
    lVar6 = param_1[0x18];
    iVar2 = *(int *)((long)param_1 + 0xcc);
  }
  else {
    lVar6 = param_1[0x18];
    iVar2 = *(int *)((long)param_1 + 0xcc);
  }
  if (iVar2 < 0) {
    lVar1 = 0;
    if (lVar6 != 0) {
      lVar1 = (long)param_1 + lVar6 + 0xc0;
    }
    (**(code **)(puVar5 + 8))(0,lVar1,0);
    lVar6 = param_1[0x16];
    iVar2 = *(int *)((long)param_1 + 0xbc);
  }
  else {
    lVar6 = param_1[0x16];
    iVar2 = *(int *)((long)param_1 + 0xbc);
  }
  if (iVar2 < 0) {
    lVar1 = 0;
    if (lVar6 != 0) {
      lVar1 = (long)param_1 + lVar6 + 0xb0;
    }
    (**(code **)(puVar5 + 8))(0,lVar1,0);
    lVar6 = param_1[0x14];
    iVar2 = *(int *)((long)param_1 + 0xac);
  }
  else {
    lVar6 = param_1[0x14];
    iVar2 = *(int *)((long)param_1 + 0xac);
  }
  if (iVar2 < 0) {
    lVar1 = 0;
    if (lVar6 != 0) {
      lVar1 = (long)param_1 + lVar6 + 0xa0;
    }
    (**(code **)(puVar5 + 8))(0,lVar1,0);
    lVar6 = param_1[0x12];
    iVar2 = *(int *)((long)param_1 + 0x9c);
  }
  else {
    lVar6 = param_1[0x12];
    iVar2 = *(int *)((long)param_1 + 0x9c);
  }
  if (iVar2 < 0) {
    lVar1 = 0;
    if (lVar6 != 0) {
      lVar1 = (long)param_1 + lVar6 + 0x90;
    }
    (**(code **)(puVar5 + 8))(0,lVar1,0);
    lVar6 = param_1[0x10];
    iVar2 = *(int *)((long)param_1 + 0x8c);
  }
  else {
    lVar6 = param_1[0x10];
    iVar2 = *(int *)((long)param_1 + 0x8c);
  }
  if (iVar2 < 0) {
    lVar1 = 0;
    if (lVar6 != 0) {
      lVar1 = (long)param_1 + lVar6 + 0x80;
    }
    (**(code **)(puVar5 + 8))(0,lVar1,0);
    lVar6 = param_1[0xe];
    iVar2 = *(int *)((long)param_1 + 0x7c);
  }
  else {
    lVar6 = param_1[0xe];
    iVar2 = *(int *)((long)param_1 + 0x7c);
  }
  if (iVar2 < 0) {
    lVar1 = 0;
    if (lVar6 != 0) {
      lVar1 = (long)param_1 + lVar6 + 0x70;
    }
    (**(code **)(puVar5 + 8))(0,lVar1,0);
  }
  plVar7 = param_1 + 0xc;
  uVar8 = (ulong)*(uint *)(param_1 + 0xd);
  if (0 < (int)*(uint *)(param_1 + 0xd)) {
    lVar6 = 0;
    if (*plVar7 != 0) {
      lVar6 = *plVar7 + (long)plVar7;
    }
    plVar4 = (long *)(lVar6 + uVar8 * 0x60);
    do {
      plVar9 = plVar4 + -0xc;
      if (*(int *)((long)plVar4 + -0x54) < 0) {
        lVar6 = 0;
        if (*plVar9 != 0) {
          lVar6 = *plVar9 + (long)plVar9;
        }
        (**(code **)(puVar5 + 8))(0,lVar6,0);
      }
      uVar3 = (int)uVar8 - 1;
      uVar8 = (ulong)uVar3;
      plVar4 = plVar9;
    } while (uVar3 != 0);
  }
  if (*(int *)((long)param_1 + 0x6c) < 0) {
    lVar6 = 0;
    if (*plVar7 != 0) {
      lVar6 = *plVar7 + (long)plVar7;
    }
    (**(code **)(puVar5 + 8))(0,lVar6,0);
    iVar2 = *(int *)((long)param_1 + 0x2c);
  }
  else {
    iVar2 = *(int *)((long)param_1 + 0x2c);
  }
  if (iVar2 < 0) {
    lVar6 = 0;
    if (param_1[4] != 0) {
      lVar6 = (long)param_1 + param_1[4] + 0x20;
    }
    (**(code **)(puVar5 + 8))(0,lVar6,0);
  }
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
  return;
}


