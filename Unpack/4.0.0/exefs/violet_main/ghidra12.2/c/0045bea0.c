/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0045bea0; name: FUN_0045bea0
 */


int FUN_0045bea0(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  undefined **ppuVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  undefined4 local_60 [2];
  long local_58;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    return *(int *)(param_1 + 0x10);
  }
  iVar4 = *(int *)(param_1 + 0x14);
  if (iVar4 != 0) {
    if (DAT_047f19f0 != 0) {
      local_60[0] = 0;
      local_58 = param_1;
      lVar3 = FUN_00451a40(DAT_047f19f0,local_60);
      if (lVar3 != 0) {
        ppuVar5 = *(undefined ***)(lVar3 + 8);
LAB_0045bff0:
        return *(int *)(ppuVar5 + 2);
      }
      iVar4 = *(int *)(param_1 + 0x14);
      if (iVar4 == 0) {
        iVar4 = 0;
        iVar6 = 0x42f;
        while( true ) {
          iVar7 = iVar4 + iVar6;
          if (iVar7 < 0) {
            iVar7 = iVar7 + 1;
          }
          iVar7 = iVar7 >> 1;
          uVar8 = (ulong)*(uint *)(&DAT_03cfa698 + (long)iVar7 * 4);
          if (*(int *)(&DAT_044aa1dc + uVar8 * 0x28) == 0) break;
          if (*(int *)(&DAT_044aa1dc + uVar8 * 0x28) < 1) {
            iVar4 = iVar7 + 1;
            iVar7 = iVar6;
          }
          iVar6 = iVar7;
          if (iVar7 <= iVar4) {
            return 0;
          }
        }
LAB_0045bfe0:
        ppuVar5 = &PTR_s_UNDEF_044aa1c8 + uVar8 * 5;
        goto LAB_0045bff0;
      }
    }
    iVar6 = 0;
    iVar7 = 0x42f;
    do {
      while( true ) {
        iVar1 = iVar6 + iVar7;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        iVar1 = iVar1 >> 1;
        uVar8 = (ulong)*(uint *)(&DAT_03cfa698 + (long)iVar1 * 4);
        iVar2 = iVar4 - *(int *)(&DAT_044aa1dc + uVar8 * 0x28);
        if (iVar2 != 0) break;
        iVar2 = memcmp(*(void **)(param_1 + 0x18),*(void **)(&DAT_044aa1e0 + uVar8 * 0x28),
                       (long)iVar4);
        if (-1 < iVar2) goto LAB_0045bf74;
LAB_0045bf24:
        iVar7 = iVar1;
        if (iVar1 <= iVar6) {
          return 0;
        }
      }
      if (iVar2 < 0) goto LAB_0045bf24;
LAB_0045bf74:
      if (iVar2 == 0) goto LAB_0045bfe0;
      iVar6 = iVar1 + 1;
    } while (iVar6 < iVar7);
  }
  return 0;
}


