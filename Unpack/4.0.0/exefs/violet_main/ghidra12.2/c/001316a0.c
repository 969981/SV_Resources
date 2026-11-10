/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001316a0; name: FUN_001316a0
 */


void FUN_001316a0(long param_1,undefined4 *param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  long *plVar12;
  bool bVar13;
  long lVar14;
  int *piVar15;
  long *plVar16;
  long local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined1 local_b0;
  undefined1 local_af;
  undefined1 local_ae;
  undefined1 local_ad;
  long local_a8;
  undefined8 local_a0;
  long local_98;
  undefined1 *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined2 local_68;
  undefined1 uStack_66;
  undefined4 uStack_65;
  
  plVar12 = *(long **)(param_1 + 0x30);
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  lVar14 = *plVar12;
  piVar15 = (int *)(lVar14 + 0x20);
  iVar2 = *piVar15;
  if (iVar2 <= (int)plVar12[6]) {
    lVar5 = FUN_0012d3b0(uVar7,*(undefined8 *)(lVar14 + 0x48),(int)plVar12[6],piVar15,8,0x1ffff,
                         "functions");
    *(long *)(lVar14 + 0x48) = lVar5;
    if (iVar2 < *(int *)(lVar14 + 0x20)) {
      *(undefined8 *)(lVar5 + (long)iVar2 * 8) = 0;
      lVar5 = (long)iVar2 + 1;
      if (lVar5 < *piVar15) {
        do {
          *(undefined8 *)(*(long *)(lVar14 + 0x48) + lVar5 * 8) = 0;
          lVar5 = lVar5 + 1;
        } while (lVar5 < *(int *)(lVar14 + 0x20));
      }
    }
  }
  lVar6 = FUN_00129c10(uVar7);
  lVar5 = plVar12[6];
  lVar9 = *(long *)(lVar14 + 0x48);
  *(int *)(plVar12 + 6) = (int)lVar5 + 1;
  *(long *)(lVar9 + (long)(int)lVar5 * 8) = lVar6;
  if (((*(byte *)(lVar14 + 9) >> 5 & 1) != 0) && ((*(byte *)(lVar6 + 9) & 0x18) != 0)) {
    FUN_00129d70(uVar7,lVar14,lVar6);
  }
  *(int *)(lVar6 + 0x2c) = param_4;
  local_a0 = *(undefined8 *)(param_1 + 0x30);
  *(long **)(param_1 + 0x30) = &local_a8;
  local_88 = 0;
  local_80 = *(undefined4 *)(lVar6 + 0x2c);
  local_7c = 0;
  local_74 = 0;
  local_68 = 0;
  uStack_66 = 0;
  uStack_65 = 0;
  lVar14 = *(long *)(param_1 + 0x60);
  local_70 = *(undefined4 *)(*(long *)(param_1 + 0x58) + 8);
  local_6c = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x28);
  local_90 = (undefined1 *)0x0;
  *(long *)(lVar6 + 0x70) = lVar14;
  local_a8 = lVar6;
  local_98 = param_1;
  if (((*(byte *)(lVar6 + 9) >> 5 & 1) != 0) && ((*(byte *)(lVar14 + 9) & 0x18) != 0)) {
    FUN_00129d70(*(undefined8 *)(param_1 + 0x38),lVar6);
  }
  *(undefined1 *)(lVar6 + 0xc) = 2;
  local_b0 = uStack_66;
  local_ae = 0;
  local_b8 = *(undefined4 *)(*(long *)(local_98 + 0x58) + 0x28);
  uStack_b4 = *(undefined4 *)(*(long *)(local_98 + 0x58) + 0x18);
  local_af = 0;
  if (local_90 == (undefined1 *)0x0) {
    local_ad = false;
  }
  else {
    local_ad = *(char *)((long)local_90 + 0x13) != '\0';
  }
  local_c0 = (long)local_90;
  local_90 = (undefined1 *)&local_c0;
  if (*(int *)(param_1 + 0x10) != 0x28) {
LAB_00131aec:
    FUN_001329f0(param_1,0x28);
LAB_00131af8:
                    /* WARNING: Subroutine does not return */
    FUN_00138770(param_1,"<name> or \'...\' expected");
  }
  local_90 = (undefined1 *)&local_c0;
  FUN_00138a10(param_1);
  if (param_3 != 0) {
    uVar7 = FUN_001388e0(param_1,&DAT_03c60fbe,4);
    plVar12 = *(long **)(param_1 + 0x58);
    lVar14 = *(long *)(param_1 + 0x30);
    iVar2 = (int)plVar12[1] + 1;
    if (200 < iVar2 - *(int *)(lVar14 + 0x38)) {
LAB_00131adc:
      FUN_0012efb0(lVar14,200,"local variables");
      goto LAB_00131aec;
    }
    lVar14 = FUN_0012d3b0(*(undefined8 *)(param_1 + 0x38),*plVar12,iVar2,(long)plVar12 + 0xc,0x18,
                          0xffff,"local variables");
    lVar5 = lVar14 + (long)(int)plVar12[1] * 0x18;
    *plVar12 = lVar14;
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    *(undefined1 *)(lVar5 + 9) = 0;
    *(undefined8 *)(lVar5 + 0x10) = uVar7;
    FUN_00131f40(param_1,1);
  }
  plVar12 = *(long **)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x10);
  lVar5 = *plVar12;
  if (iVar2 == 0x29) {
    iVar11 = 0;
LAB_00131904:
    bVar13 = true;
  }
  else {
    iVar11 = 0;
    while (iVar2 != 0x118) {
      if (iVar2 != 0x123) goto LAB_00131af8;
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      FUN_00138a10(param_1);
      plVar16 = *(long **)(param_1 + 0x58);
      lVar14 = *(long *)(param_1 + 0x30);
      iVar2 = (int)plVar16[1] + 1;
      if (200 < iVar2 - *(int *)(lVar14 + 0x38)) goto LAB_00131adc;
      lVar14 = FUN_0012d3b0(*(undefined8 *)(param_1 + 0x38),*plVar16,iVar2,(long)plVar16 + 0xc,0x18,
                            0xffff,"local variables");
      lVar6 = lVar14 + (long)(int)plVar16[1] * 0x18;
      *plVar16 = lVar14;
      iVar11 = iVar11 + 1;
      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      *(undefined1 *)(lVar6 + 9) = 0;
      *(undefined8 *)(lVar6 + 0x10) = uVar7;
      if (*(int *)(param_1 + 0x10) != 0x2c) goto LAB_00131904;
      FUN_00138a10(param_1);
      iVar2 = *(int *)(param_1 + 0x10);
    }
    FUN_00138a10(param_1);
    bVar13 = false;
  }
  FUN_00131f40(param_1,iVar11);
  uVar1 = *(undefined1 *)((long)plVar12 + 0x42);
  *(undefined1 *)(lVar5 + 10) = uVar1;
  if (!bVar13) {
    *(undefined1 *)(*plVar12 + 0xb) = 1;
    FUN_00133250(plVar12,0x51,uVar1,0,0,0);
  }
  FUN_00133830(plVar12,*(undefined1 *)((long)plVar12 + 0x42));
  if (*(int *)(param_1 + 0x10) == 0x29) {
    FUN_00138a10(param_1);
    do {
      iVar2 = *(int *)(param_1 + 0x10);
      uVar3 = iVar2 - 0x103;
      if (uVar3 < 0x1e && (1 << (ulong)(uVar3 & 0x1f) & 0x20020007U) != 0) break;
      FUN_0012f030(param_1);
    } while (iVar2 != 0x111);
    *(undefined4 *)(local_a8 + 0x30) = *(undefined4 *)(param_1 + 4);
    if (*(int *)(param_1 + 0x10) == 0x105) {
      FUN_00138a10(param_1);
      lVar14 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uVar4 = FUN_00133750(lVar14,0x4f,0,*(int *)(lVar14 + 0x30) + -1);
      *(undefined8 *)(param_2 + 4) = 0xffffffffffffffff;
      param_2[2] = uVar4;
      *param_2 = 0x11;
      FUN_00133e30(lVar14,param_2);
      FUN_0012ee20(param_1);
      return;
    }
  }
  else {
    FUN_001329f0(param_1,0x29);
  }
  if (*(int *)(param_1 + 4) == param_4) {
    FUN_001329f0(param_1,0x105);
  }
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  uVar7 = FUN_00138700(param_1,0x105);
  uVar8 = FUN_00138700(param_1,0x108);
  uVar7 = FUN_0012e860(uVar10,"%s expected (to close %s at line %d)",uVar7,uVar8,param_4);
                    /* WARNING: Subroutine does not return */
  FUN_00138770(param_1,uVar7);
}


