/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0037c060; name: FUN_0037c060
 */


undefined8
FUN_0037c060(long param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6,
            char *param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  long *plVar9;
  undefined8 uVar10;
  void *__s;
  size_t __n;
  code *pcVar11;
  long lVar12;
  bool bVar13;
  undefined4 uVar14;
  long lVar15;
  
  if (param_7 == (char *)0x0) {
    return 0xfffffffa;
  }
  if (param_8 != 0x70) {
    return 0xfffffffa;
  }
  if (*param_7 != '1') {
    return 0xfffffffa;
  }
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  pcVar11 = *(code **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x30) = 0;
  puVar8 = PTR_FUN_047ccf90;
  if (pcVar11 == (code *)0x0) {
    *(undefined **)(param_1 + 0x40) = PTR_FUN_047ccf90;
    *(undefined8 *)(param_1 + 0x50) = 0;
    lVar12 = *(long *)(param_1 + 0x48);
    pcVar11 = (code *)puVar8;
  }
  else {
    lVar12 = *(long *)(param_1 + 0x48);
  }
  if (lVar12 == 0) {
    *(undefined **)(param_1 + 0x48) = PTR_LAB_047ccf98;
    uVar7 = 6;
    if (param_2 != 0xffffffff) {
      uVar7 = param_2;
    }
  }
  else {
    uVar7 = 6;
    if (param_2 != 0xffffffff) {
      uVar7 = param_2;
    }
  }
  if ((int)param_4 < 0) {
    uVar14 = 0;
    uVar2 = -param_4;
    bVar13 = true;
  }
  else {
    bVar13 = 0xf < (int)param_4;
    uVar2 = param_4 - 0x10;
    if ((int)param_4 < 0x10) {
      uVar2 = param_4;
    }
    uVar14 = 1;
    if (0xf < (int)param_4) {
      uVar14 = 2;
    }
  }
  if (4 < param_6) {
    return 0xfffffffe;
  }
  if (9 < uVar7) {
    return 0xfffffffe;
  }
  if (param_3 != 8) {
    return 0xfffffffe;
  }
  if (8 < param_5 - 1U) {
    return 0xfffffffe;
  }
  if ((uVar2 & 0xfffffff8) != 8) {
    return 0xfffffffe;
  }
  if ((bool)(uVar2 == 8 & bVar13)) {
    return 0xfffffffe;
  }
  uVar1 = 9;
  if (uVar2 != 8) {
    uVar1 = uVar2;
  }
  plVar9 = (long *)(*pcVar11)(*(undefined8 *)(param_1 + 0x50),1,0x1740);
  if (plVar9 != (long *)0x0) {
    *(long **)(param_1 + 0x38) = plVar9;
    iVar5 = 1 << (ulong)(uVar1 & 0x1f);
    *(undefined4 *)(plVar9 + 1) = 0x2a;
    *(uint *)((long)plVar9 + 0x54) = uVar1;
    *(int *)(plVar9 + 0xb) = iVar5 + -1;
    iVar6 = 1 << (ulong)(param_5 + 7U & 0x1f);
    *(int *)((long)plVar9 + 0x84) = iVar6;
    *(uint *)(plVar9 + 0x11) = param_5 + 7U;
    *plVar9 = param_1;
    *(undefined4 *)(plVar9 + 6) = uVar14;
    plVar9[7] = 0;
    *(int *)(plVar9 + 10) = iVar5;
    *(int *)((long)plVar9 + 0x8c) = iVar6 + -1;
    *(uint *)(plVar9 + 0x12) = (param_5 + 9U & 0xff) / 3;
    lVar12 = (**(code **)(param_1 + 0x40))(*(undefined8 *)(param_1 + 0x50),iVar5,2);
    plVar9[0xc] = lVar12;
    lVar12 = (**(code **)(param_1 + 0x40))(*(undefined8 *)(param_1 + 0x50),(int)plVar9[10],2);
    plVar9[0xe] = lVar12;
    lVar12 = (**(code **)(param_1 + 0x40))
                       (*(undefined8 *)(param_1 + 0x50),*(undefined4 *)((long)plVar9 + 0x84),2);
    iVar5 = 1 << (ulong)(param_5 + 6U & 0x1f);
    plVar9[0xf] = lVar12;
    plVar9[0x2e7] = 0;
    *(int *)(plVar9 + 0x2e1) = iVar5;
    lVar12 = (**(code **)(param_1 + 0x40))(*(undefined8 *)(param_1 + 0x50),iVar5,4);
    uVar2 = *(uint *)(plVar9 + 0x2e1);
    plVar9[2] = lVar12;
    plVar9[3] = (ulong)uVar2 << 2;
    puVar8 = PTR_PTR_047ccfa0;
    if ((((plVar9[0xc] != 0) && (plVar9[0xe] != 0)) && (lVar12 != 0)) && (plVar9[0xf] != 0)) {
      plVar9[0x2e0] = lVar12 + (ulong)uVar2 * 3;
      plVar9[0x2e2] = lVar12 + (ulong)(uVar2 & 0xfffffffe);
      *(uint *)((long)plVar9 + 0xc4) = uVar7;
      *(uint *)(plVar9 + 0x19) = param_6;
      *(undefined1 *)(plVar9 + 9) = 8;
      uVar10 = FUN_0037c920(param_1);
      if ((int)uVar10 == 0) {
        lVar15 = *(long *)(param_1 + 0x38);
        *(ulong *)(lVar15 + 0x68) = (ulong)*(uint *)(lVar15 + 0x50) << 1;
        __s = *(void **)(lVar15 + 0x78);
        __n = (ulong)(*(int *)(lVar15 + 0x84) - 1) * 2;
        *(undefined2 *)((long)__s + __n) = 0;
        memset(__s,0,__n);
        lVar12 = (long)*(int *)(lVar15 + 0xc4) * 0x10;
        *(undefined4 *)(lVar15 + 0xa0) = 2;
        uVar3 = *(ushort *)(&DAT_04496db4 + lVar12);
        *(uint *)(lVar15 + 0xcc) = (uint)*(ushort *)(&DAT_04496db0 + lVar12);
        *(uint *)(lVar15 + 0xd0) = (uint)uVar3;
        uVar10 = DAT_03cb5420;
        uVar3 = *(ushort *)(&DAT_04496db2 + lVar12);
        uVar4 = *(ushort *)(&DAT_04496db6 + lVar12);
        *(undefined8 *)(lVar15 + 0x98) = 0;
        *(undefined4 *)(lVar15 + 0x172c) = 0;
        *(undefined4 *)(lVar15 + 0x80) = 0;
        *(undefined8 *)(lVar15 + 0xb4) = uVar10;
        *(uint *)(lVar15 + 0xbc) = (uint)uVar4;
        *(uint *)(lVar15 + 0xc0) = (uint)uVar3;
        *(undefined8 *)(lVar15 + 0xa8) = 0;
        return 0;
      }
      return uVar10;
    }
    *(undefined4 *)(plVar9 + 1) = 0x29a;
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(puVar8 + 0x30);
    FUN_0037c380(param_1);
  }
  return 0xfffffffc;
}


