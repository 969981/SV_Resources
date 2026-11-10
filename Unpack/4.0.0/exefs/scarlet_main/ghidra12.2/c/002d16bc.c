/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002d16bc; name: FUN_002d16bc
 */


void FUN_002d16bc(long param_1)

{
  int *piVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  short sVar8;
  long *plVar9;
  void *pvVar10;
  void *__dest;
  uint *puVar11;
  undefined8 uVar12;
  void *pvVar13;
  ulong uVar14;
  ulong uVar15;
  int *piVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long *plVar21;
  long *plVar20;
  int iVar22;
  size_t sVar23;
  undefined4 *puVar24;
  long lVar25;
  uint *__dest_00;
  uint *local_118;
  uint *local_110;
  uint *local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined *local_f0;
  long *local_e8;
  long *local_e0;
  undefined8 local_d8;
  undefined4 local_d0 [2];
  long local_c8;
  int local_c0;
  long local_b8;
  int local_b0;
  int local_a8 [2];
  void *local_a0;
  int local_98;
  undefined4 *local_90;
  int local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined4 local_68 [2];
  long local_60;
  int local_58;
  long local_50;
  int local_48;
  
  if (*(char *)(param_1 + 3) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 3) = 1;
  puVar2 = PTR_FUN_047cba38;
  iVar22 = *(int *)(param_1 + 0x10);
  local_68[0] = 0;
  local_60 = FUN_0049e770(PTR_FUN_047cba38,(long)iVar22 << 2);
  local_58 = iVar22;
  local_50 = FUN_0049e770(puVar2,(long)iVar22 << 2);
  local_70 = 0;
  local_80 = 0;
  local_78 = 0;
  local_48 = iVar22;
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar19 = 0;
  }
  else {
    lVar18 = (long)*(int *)(param_1 + 0x10) * 4;
    local_78 = FUN_0049e770(PTR_FUN_047cba38,lVar18);
    local_70 = local_78 + lVar18;
    uVar19 = (ulong)*(uint *)(param_1 + 0x10);
  }
  puVar2 = PTR_FUN_047cba38;
  local_a8[0] = 0;
  local_80 = local_78;
  local_a0 = (void *)FUN_0049e770(PTR_FUN_047cba38,
                                  -(uVar19 >> 0x1f) & 0xfffffffc00000000 | uVar19 << 2);
  local_98 = (int)uVar19;
  local_90 = (undefined4 *)FUN_0049e770(puVar2,-(uVar19 >> 0x1f) & 0xfffffff800000000 | uVar19 << 3)
  ;
  iVar22 = *(int *)(param_1 + 0x10);
  local_d0[0] = 0;
  local_88 = (int)uVar19;
  local_c8 = FUN_0049e770(puVar2,(long)iVar22 << 2);
  local_c0 = iVar22;
  local_b8 = FUN_0049e770(puVar2,(long)iVar22 << 3);
  local_d8 = 0;
  local_e8 = (long *)0x0;
  local_e0 = (long *)0x0;
                    /* try { // try from 002d17c8 to 002d17e3 has its CatchHandler @ 002d1dd4 */
  local_b0 = iVar22;
  FUN_002d1fc4(param_1,local_a8,local_d0,&local_e8,local_68,&local_80);
  puVar2 = PTR_FUN_047cba38;
  lVar25 = (long)local_a8[0];
  lVar18 = 0;
  if (local_90 != (undefined4 *)0x0) {
    lVar18 = (long)local_88 << 2;
  }
  pvVar10 = (void *)FUN_0049e770(PTR_FUN_047cba38,lVar18);
  lVar18 = 0;
  if (local_90 != (undefined4 *)0x0) {
    lVar18 = (long)local_88 << 3;
  }
  __dest = (void *)FUN_0049e770(puVar2,lVar18);
  if ((((local_90 != (undefined4 *)0x0) && (local_88 != 0)) &&
      (memmove(pvVar10,local_a0,(long)local_88 << 2), local_90 != (undefined4 *)0x0)) &&
     (local_88 != 0)) {
    memmove(__dest,local_90,(long)local_88 << 3);
  }
  pvVar13 = (void *)((long)__dest + lVar25 * 8);
  local_100 = PTR_LAB_047cc8b0;
                    /* try { // try from 002d187c to 002d188b has its CatchHandler @ 002d1dc8 */
  FUN_002d36b0(__dest,pvVar13,&local_100);
  if ((void *)((long)pvVar13 + -8) != __dest) {
    lVar18 = lVar25 * 8 + -8;
    do {
      iVar22 = *(int *)((long)__dest + lVar18);
      if ((iVar22 != *(int *)(param_1 + 0xc)) && (iVar22 != *(int *)(param_1 + 8))) {
                    /* try { // try from 002d18c8 to 002d18e3 has its CatchHandler @ 002d1de4 */
        FUN_002d2718(param_1,iVar22,local_a8,local_d0,&local_e8,local_68,&local_80);
      }
      lVar18 = lVar18 + -8;
    } while (lVar18 != 0);
  }
  local_f8 = (undefined *)0x0;
  local_f0 = (undefined *)0x0;
  local_100 = (undefined *)0x0;
  if (local_a8[0] != 0) {
    if (local_a8[0] < 0) {
                    /* try { // try from 002d1db0 to 002d1db7 has its CatchHandler @ 002d1db8 */
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    sVar23 = (long)local_a8[0] * 4;
    local_100 = (undefined *)FUN_0049e770(PTR_FUN_047cba38,sVar23);
    puVar2 = local_100 + sVar23;
    local_f0 = puVar2;
    memset(local_100,0,sVar23);
    local_f8 = puVar2;
  }
  local_118 = (uint *)0x0;
  local_110 = (uint *)0x0;
  local_108 = (uint *)0x0;
  iVar22 = *(int *)(param_1 + 0x10);
  if (iVar22 != 0) {
    puVar11 = (uint *)FUN_0049e770(PTR_FUN_047cba38,(long)iVar22 * 8);
    sVar23 = (long)local_110 - (long)local_118;
    __dest_00 = (uint *)((long)puVar11 - sVar23);
    if (0 < (long)sVar23) {
      memcpy(__dest_00,local_118,sVar23);
    }
    bVar3 = local_118 != (uint *)0x0;
    local_118 = __dest_00;
    local_110 = puVar11;
    local_108 = puVar11 + (long)iVar22 * 2;
    if (bVar3) {
      FUN_0049e790(PTR_LAB_047cba48);
    }
  }
  if (local_a8[0] != 0) {
    puVar24 = local_90;
    do {
      *(int *)(local_100 + (long)(int)puVar24[1] * 4) =
           (int)((ulong)((long)local_110 - (long)local_118) >> 3);
                    /* try { // try from 002d19b8 to 002d19cf has its CatchHandler @ 002d1df0 */
      uVar12 = FUN_002d2b6c(param_1,*puVar24,local_a8,&local_118,local_68,&local_80);
      local_110[-2] = local_110[-2] | 8;
      FUN_002d31f0(uVar12,&local_118,*(undefined4 *)(local_100 + (long)(int)puVar24[1] * 4),
                   (ulong)((long)local_110 - (long)local_118) >> 3);
      puVar24 = puVar24 + 2;
    } while (puVar24 != local_90 + (long)local_a8[0] * 2);
  }
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(int *)(param_1 + 0x28) = (int)((ulong)((long)local_f8 - (long)local_100) >> 2);
  uVar19 = (long)local_110 - (long)local_118;
  iVar22 = (int)(uVar19 >> 3);
  if (0 < iVar22) {
    uVar15 = uVar19 >> 3 & 0xffffffff;
    puVar11 = local_118;
    do {
      uVar5 = *puVar11;
      if ((uVar5 & 7) != 1) {
        *puVar11 = uVar5 & 0xf | *(int *)(local_100 + ((ulong)(uVar5 >> 2) & 0x3ffffffc)) << 4;
      }
      lVar18 = param_1 + (ulong)(uVar5 & 7) * 4;
      puVar11 = puVar11 + 2;
      uVar15 = uVar15 - 1;
      *(int *)(lVar18 + 0x2c) = *(int *)(lVar18 + 0x2c) + 1;
    } while (uVar15 != 0);
  }
  iVar6 = *(int *)(param_1 + 0xc);
  if (iVar6 != 0) {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(local_100 + 4);
    lVar18 = 4;
    if (iVar6 != *(int *)(param_1 + 8)) {
      lVar18 = 8;
    }
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(local_100 + lVar18);
  }
  *(int *)(param_1 + 0x10) = iVar22;
  pvVar13 = (void *)FUN_0049e770(PTR_FUN_047cba38,((long)(uVar19 * 0x20000000) >> 0x20) << 3);
  lVar18 = *(long *)(param_1 + 0x60);
  *(void **)(param_1 + 0x60) = pvVar13;
  if (lVar18 != 0) {
    FUN_0049e790(PTR_LAB_047cba48);
    pvVar13 = *(void **)(param_1 + 0x60);
  }
  *(int *)(param_1 + 0x68) = iVar22;
  memmove(pvVar13,local_118,(long)*(int *)(param_1 + 0x10) << 3);
  iVar22 = *(int *)(param_1 + 0x10);
  if (iVar22 < 0x201) {
    pvVar13 = (void *)FUN_0049e770(PTR_FUN_047cba38,(long)iVar22 << 1);
    lVar18 = *(long *)(param_1 + 0x50);
    *(void **)(param_1 + 0x50) = pvVar13;
    if (lVar18 != 0) {
      FUN_0049e790(PTR_LAB_047cba48);
      pvVar13 = *(void **)(param_1 + 0x50);
    }
    *(int *)(param_1 + 0x58) = iVar22;
    memset(pvVar13,0xff,(long)*(int *)(param_1 + 0x10) << 1);
    uVar5 = *(uint *)(param_1 + 0x28);
    uVar19 = (ulong)uVar5;
    if (0 < (int)uVar5) {
      lVar18 = *(long *)(param_1 + 0x50);
      if (uVar5 < 4) {
        uVar14 = 0;
      }
      else {
        uVar15 = 0;
        uVar14 = uVar19 & 0xfffffffc;
        do {
          piVar16 = (int *)(local_100 + uVar15 * 4);
          iVar6 = piVar16[1];
          iVar22 = piVar16[2];
          iVar4 = piVar16[3];
          uVar7 = (ushort)uVar15;
          *(ushort *)(lVar18 + (long)*piVar16 * 2) = uVar7;
          *(ushort *)(lVar18 + (long)iVar6 * 2) = uVar7 | 1;
          *(ushort *)(lVar18 + (long)iVar22 * 2) = uVar7 | 2;
          uVar15 = uVar15 + 4;
          *(ushort *)(lVar18 + (long)iVar4 * 2) = uVar7 | 3;
        } while (uVar14 != uVar15);
        if (uVar14 == uVar19) goto LAB_002d1c34;
      }
      uVar17 = ~uVar14;
      uVar15 = uVar19 & 3;
      if ((uVar5 & 3) != 0) {
        do {
          uVar15 = uVar15 - 1;
          *(short *)(lVar18 + (long)*(int *)(local_100 + uVar14 * 4) * 2) = (short)uVar14;
          uVar14 = uVar14 + 1;
        } while (uVar15 != 0);
      }
      if (2 < uVar17 + uVar19) {
        piVar16 = (int *)(local_100 + uVar14 * 4 + 8);
        do {
          sVar8 = (short)uVar14;
          *(short *)(lVar18 + (long)piVar16[-2] * 2) = sVar8;
          *(short *)(lVar18 + (long)piVar16[-1] * 2) = sVar8 + 1;
          *(short *)(lVar18 + (long)*piVar16 * 2) = sVar8 + 2;
          piVar1 = piVar16 + 1;
          uVar14 = uVar14 + 4;
          piVar16 = piVar16 + 4;
          *(short *)(lVar18 + (long)*piVar1 * 2) = sVar8 + 3;
        } while (uVar19 != uVar14);
      }
    }
  }
LAB_002d1c34:
  if (local_118 != (uint *)0x0) {
    local_110 = local_118;
    FUN_0049e790(PTR_LAB_047cba48);
  }
  if (local_100 != (undefined *)0x0) {
    local_f8 = local_100;
    FUN_0049e790(PTR_LAB_047cba48);
  }
  if (__dest != (void *)0x0) {
    FUN_0049e790(PTR_LAB_047cba48,__dest);
  }
  if (pvVar10 != (void *)0x0) {
    FUN_0049e790(PTR_LAB_047cba48,pvVar10);
  }
  plVar9 = local_e8;
  puVar2 = PTR_LAB_047cba48;
  if (local_e8 != (long *)0x0) {
    if (local_e0 != local_e8) {
      plVar20 = local_e0;
      do {
        plVar21 = plVar20 + -3;
        if (*plVar21 != 0) {
          plVar20[-2] = *plVar21;
          FUN_0049e790(puVar2);
        }
        plVar20 = plVar21;
      } while (plVar9 != plVar21);
    }
    local_e0 = plVar9;
    FUN_0049e790(PTR_LAB_047cba48,local_e8);
  }
  lVar18 = local_b8;
  local_b8 = 0;
  if (lVar18 != 0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  lVar18 = local_c8;
  local_c8 = 0;
  if (lVar18 != 0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  puVar24 = local_90;
  local_90 = (undefined4 *)0x0;
  if (puVar24 != (undefined4 *)0x0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  pvVar10 = local_a0;
  local_a0 = (void *)0x0;
  if (pvVar10 != (void *)0x0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  if (local_80 != 0) {
    local_78 = local_80;
    FUN_0049e790(PTR_LAB_047cba48);
  }
  lVar18 = local_50;
  local_50 = 0;
  if (lVar18 != 0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  lVar18 = local_60;
  local_60 = 0;
  if (lVar18 != 0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  return;
}


