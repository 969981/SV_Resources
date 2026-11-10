/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00879b20; name: FUN_00879b20
 */


void FUN_00879b20(long param_1,long *param_2,long *param_3,uint *param_4,uint param_5,
                 undefined4 param_6)

{
  uint uVar1;
  ushort uVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  uint local_b8 [2];
  long local_b0 [4];
  long local_90 [4];
  undefined4 local_70 [4];
  
  local_b8[0] = 0;
  lVar5 = *(long *)(param_1 + 0x4f0);
  if ((lVar5 != 0) && (uVar4 = (ulong)*(uint *)(param_1 + 0xc), *(uint *)(param_1 + 0xc) != 0)) {
    lVar11 = 0;
    lVar12 = 0;
    uVar6 = 0;
    uVar13 = 0;
    while( true ) {
      lVar7 = *param_2;
      uVar2 = *(ushort *)(param_2 + 2);
      local_b0[uVar6] = lVar5 + lVar12;
      local_90[uVar6] = lVar7 + lVar11 * (ulong)uVar2 + (ulong)param_5 * 4;
      local_b8[0] = (int)uVar6 + 1;
      local_70[uVar6] = (int)uVar13;
      if (local_b8[0] == 4) {
        FUN_00879da4(param_1,local_b8,param_6);
        uVar4 = (ulong)*(uint *)(param_1 + 0xc);
      }
      uVar13 = uVar13 + 1;
      if (uVar4 <= uVar13) break;
      lVar5 = *(long *)(param_1 + 0x4f0);
      lVar12 = lVar12 + 0x170;
      lVar11 = lVar11 + 4;
      uVar6 = (ulong)local_b8[0];
    }
  }
  lVar5 = *(long *)(param_1 + 0x4f8);
  if ((lVar5 != 0) && (*(char *)(param_1 + 9) != '\0')) {
    lVar11 = 0;
    lVar12 = 0;
    uVar4 = 0;
    cVar3 = '\x01';
    while( true ) {
      uVar13 = (ulong)local_b8[0];
      lVar7 = *param_3;
      uVar2 = *(ushort *)(param_3 + 2);
      local_b0[uVar13] = lVar5 + lVar12;
      local_90[uVar13] = lVar7 + lVar11 * (ulong)uVar2 + (ulong)param_5 * 4;
      local_b8[0] = local_b8[0] + 1;
      local_70[uVar13] = (int)uVar4;
      if (local_b8[0] == 4) {
        FUN_00879da4(param_1,local_b8,param_6);
        cVar3 = *(char *)(param_1 + 9);
      }
      uVar4 = uVar4 + 1;
      if ((ulong)(cVar3 != '\0') << 1 <= uVar4) break;
      lVar5 = *(long *)(param_1 + 0x4f8);
      lVar12 = lVar12 + 0x170;
      lVar11 = lVar11 + 4;
    }
  }
  if ((*(long *)(param_1 + 0x500) != 0) && (uVar4 = (ulong)*param_4, *param_4 != 0)) {
    uVar13 = 0;
    do {
      uVar1 = *(uint *)(param_1 + 0x510);
      if (0 < (int)uVar1) {
        plVar10 = *(long **)(param_1 + 0x508);
        plVar8 = *(long **)(*(long *)(param_4 + 2) + uVar13 * 8);
        uVar9 = 0;
        lVar5 = 0;
        do {
          if (*plVar10 == **(long **)(*(long *)(param_4 + 4) + uVar13 * 8)) {
            if ((uVar9 < uVar1) && (*(short *)((long)plVar8 + 0x12) != 0)) {
              lVar12 = *plVar8;
              uVar6 = (ulong)local_b8[0];
              local_b0[uVar6] = *(long *)(param_1 + 0x500) + lVar5;
              local_90[uVar6] = lVar12 + (ulong)param_5 * 4;
              local_b8[0] = local_b8[0] + 1;
              local_70[uVar6] = 0;
              if (local_b8[0] == 4) {
                FUN_00879da4(param_1,local_b8,param_6);
                uVar4 = (ulong)*param_4;
              }
            }
            break;
          }
          lVar5 = lVar5 + 0x170;
          uVar9 = uVar9 + 1;
          plVar10 = plVar10 + 1;
        } while ((ulong)uVar1 * 0x170 != lVar5);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar4);
  }
  FUN_00879da4(param_1,local_b8,param_6);
  return;
}


