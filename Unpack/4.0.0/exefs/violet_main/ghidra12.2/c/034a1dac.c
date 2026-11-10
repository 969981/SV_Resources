/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034a1dac; name: FUN_034a1dac
 */


void FUN_034a1dac(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,int param_6)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  undefined8 *puVar7;
  int *piVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined1 auStack_90 [8];
  undefined4 local_88;
  undefined8 local_60;
  undefined1 local_58;
  
  *param_1 = &DAT_047c3be0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = &PTR___cxa_pure_virtual_047c3c08;
  FUN_0346d39c(param_1 + 3,*(undefined8 *)(param_2 + 0x10),param_3,
               *(byte *)(param_2 + 0x290) >> 2 & 1);
  param_1[0x41] = 0;
  *param_1 = &PTR_FUN_047c3a60;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[2] = &PTR_LAB_047c3b40;
  param_1[3] = &PTR_LAB_047c3b58;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x45) = *(undefined4 *)(param_2 + 0x34);
  *(undefined8 *)((long)param_1 + 0x21c) = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)((long)param_1 + 0x224) = *(undefined4 *)(param_2 + 0x30);
  piVar8 = *(int **)(param_2 + 0x20);
  if (piVar8 != (int *)0x0) {
    *piVar8 = *piVar8 + 1;
  }
  *(int **)((long)param_1 + 0x214) = piVar8;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  lVar12 = *(long *)(param_2 + 8);
  param_1[0x49] = param_4;
  param_1[0x4a] = 0;
  *(undefined4 *)((long)param_1 + 0x25c) = 0;
  param_1[0x48] = lVar12;
  *(undefined8 *)((long)param_1 + 0x264) = 0x3f8000003f800000;
  *(undefined8 *)((long)param_1 + 0x26c) = 0x3f800000;
  uVar9 = 0x220000;
  if (param_6 != 0) {
    uVar9 = 0x620000;
  }
  *(undefined2 *)(param_1 + 0x57) = 1;
  *(int *)((long)param_1 + 0x2b4) = param_6;
  *(byte *)((long)param_1 + 0x2ba) = *(byte *)((long)param_1 + 0x2ba) & 0x80;
  uVar4 = *(uint *)((long)param_1 + 699);
  *(uint *)((long)param_1 + 699) = uVar4 & 0xf8000000 | uVar9;
  uVar1 = (*(byte *)(param_2 + 0x290) >> 3 & 1) << 0x1b;
  *(uint *)((long)param_1 + 699) = uVar4 & 0x80000000 | uVar9 | uVar1;
  uVar9 = uVar9 | uVar1 | (*(byte *)(param_2 + 0x290) & 2) << 0x1e;
  *(uint *)((long)param_1 + 699) = uVar9;
  uVar10 = *param_5;
  uVar3 = param_5[1];
  *(undefined4 *)(param_1 + 0x5a) = *(undefined4 *)(param_5 + 2);
  param_1[0x59] = uVar3;
  param_1[0x58] = uVar10;
  *(undefined4 *)((long)param_1 + 0x2d4) = 0;
  *(undefined4 *)(param_1 + 0x5b) = *(undefined4 *)(param_2 + 0x84);
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  uVar10 = *(undefined8 *)(param_2 + 0x98);
  *(undefined4 *)((long)param_1 + 0x2f4) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined8 *)((long)param_1 + 0x2ec) = uVar10;
  param_1[0x5f] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  *(undefined4 *)(param_1 + 99) = 0xffffffff;
  iVar6 = *(int *)(param_2 + 0x90);
  if (iVar6 == 0) {
    iVar6 = DAT_047c3a48;
    DAT_047c3a48 = DAT_047c3a48 + 1;
  }
  else {
    *(uint *)((long)param_1 + 699) = uVar9 | 0x2000000;
  }
  *(undefined4 *)((long)param_1 + 0x2c4) = *(undefined4 *)((long)param_1 + 0x19c);
  *(int *)(param_1 + 0x59) = iVar6;
  *(undefined4 *)((long)param_1 + 0x25c) = 0x4101;
  memcpy(param_1 + 0x4e,(void *)(param_2 + 0x38),0x44);
  bVar5 = *(byte *)((long)param_1 + 0x2ec);
  uVar9 = bVar5 - 0x80;
  if ((uVar9 < 0x21) && ((1L << ((ulong)uVar9 & 0x3f) & 0x100010001U) != 0)) {
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)((long)param_1 + 0x2ed);
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_1 + 0x5e);
  }
  else {
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)((long)param_1 + 0x2ed);
    *(undefined1 *)(param_1 + 9) = 0xff;
    if (bVar5 == 0) {
      *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_1 + 0x45);
      param_1[10] = param_1;
      goto LAB_034a2070;
    }
  }
  if (lVar12 != 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(lVar12 + 0x10);
  }
  param_1[10] = param_1;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_1 + 0x45);
  if ((bVar5 == 0x90) && (bVar5 = *(byte *)((long)param_1 + 0x2f1), bVar5 != 0)) {
    memcpy(auStack_90,param_1 + 5,0x30);
    local_88 = 0;
    local_58 = 0;
    local_60 = 0x400000000;
    FUN_034b6d0c((float)bVar5,*(undefined8 *)PTR_DAT_047e6fd8,0x81,auStack_90,&local_60,1,0);
  }
LAB_034a2070:
  piVar8 = *(int **)(param_2 + 0xa8);
  param_1[0x5f] = piVar8;
  if (piVar8 != (int *)0x0) {
    *piVar8 = *piVar8 + 1;
    lVar12 = param_1[0x31];
    iVar6 = FUN_034a7dd0(lVar12);
    if (iVar6 == 2) {
      uVar9 = 1;
    }
    else {
      do {
        puVar2 = (uint *)(lVar12 + 0xda);
        lVar12 = *(long *)(lVar12 + 0x98);
      } while (lVar12 != 0 && (*puVar2 & 0x800000) == 0);
      uVar9 = *puVar2 >> 0x19 & 2;
    }
    lVar12 = param_1[0x5f];
    puVar11 = (undefined8 *)(lVar12 + 0x58);
    puVar7 = (undefined8 *)*puVar11;
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x18);
      if (puVar7 == (undefined8 *)0x0) {
        return;
      }
      *puVar7 = *puVar11;
      *puVar11 = puVar7;
    }
    if (*(undefined8 **)(lVar12 + 0x50) == (undefined8 *)0x0) {
      *(undefined8 **)(lVar12 + 0x48) = puVar7;
    }
    else {
      **(undefined8 **)(lVar12 + 0x50) = puVar7;
      puVar7 = (undefined8 *)*puVar11;
    }
    *(undefined8 **)(lVar12 + 0x50) = puVar7;
    *(undefined8 *)(lVar12 + 0x58) = *puVar7;
    *puVar7 = 0;
    *(int *)(lVar12 + 0x6c) = *(int *)(lVar12 + 0x6c) + 1;
    lVar12 = *(long *)(lVar12 + 0x50);
    *(uint *)(lVar12 + 8) = uVar9;
    *(undefined8 **)(lVar12 + 0x10) = param_1;
  }
  return;
}


