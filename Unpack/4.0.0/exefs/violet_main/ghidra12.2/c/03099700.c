/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03099700; name: FUN_03099700
 */


void FUN_03099700(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  short *psVar9;
  long lVar10;
  ulong uVar11;
  
  *(undefined4 *)(param_2 + 1) = 0;
  iVar1 = *(int *)(param_1 + 0xe8);
  uVar6 = 0;
  if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) < iVar1) {
    FUN_02e9b320(param_2,PTR_PTR_047d1a50 + 0x20,(long)iVar1);
    uVar6 = *(uint *)(param_2 + 1);
  }
  if ((int)uVar6 < iVar1) {
    *(int *)(param_2 + 1) = iVar1;
    memset((void *)(*param_2 + (long)(int)uVar6 * 4),0xff,(ulong)(iVar1 + ~uVar6) * 4 + 4);
  }
  else if (iVar1 < (int)uVar6) {
    *(int *)(param_2 + 1) = iVar1;
  }
  puVar5 = PTR_DAT_047e4f38;
  uVar6 = *(uint *)(param_1 + 0xd8);
  iVar1 = *(int *)(param_1 + 0x30);
  iVar2 = *(int *)PTR_DAT_047e4f38;
  lVar4 = tpidr_el0;
  lVar8 = *(long *)(lVar4 + 0x1000b8);
  if (lVar8 == 0) {
    lVar8 = FUN_00e5d3b4();
    *(long *)(lVar4 + 0x1000b8) = lVar8;
  }
  if (*(long *)(lVar8 + (long)iVar2 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  if (0 < (int)uVar6) {
    uVar11 = 0;
    uVar7 = 0;
    do {
      lVar8 = *(long *)(param_1 + 0xd0);
      iVar2 = *(int *)(lVar8 + uVar11 * 0x10);
      uVar3 = iVar2 - iVar1;
      if ((iVar1 <= iVar2) && (psVar9 = (short *)(lVar8 + uVar11 * 0x10 + 8), 0 < *psVar9)) {
        lVar10 = 0;
        do {
          *(int *)(*param_2 + (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2) +
                  lVar10 * 4) = (int)uVar11;
          lVar10 = lVar10 + 1;
        } while (lVar10 < *psVar9);
      }
      lVar8 = lVar8 + uVar11 * 0x10;
      iVar2 = *(int *)(lVar8 + 4);
      uVar3 = iVar2 - iVar1;
      if ((iVar1 <= iVar2) && (psVar9 = (short *)(lVar8 + 10), 0 < *psVar9)) {
        lVar8 = 0;
        do {
          *(int *)(*param_2 + (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2) +
                  lVar8 * 4) = (int)uVar11;
          lVar8 = lVar8 + 1;
        } while (lVar8 < *psVar9);
      }
      if (0xffe08aef < uVar7) {
        iVar2 = *(int *)puVar5;
        lVar8 = *(long *)(lVar4 + 0x1000b8);
        if (lVar8 == 0) {
          lVar8 = FUN_00e5d3b4();
          *(long *)(lVar4 + 0x1000b8) = lVar8;
        }
        if (*(long *)(lVar8 + (long)iVar2 * 8 + 1000) != 0) {
          FUN_03231bdc();
        }
      }
      uVar11 = uVar11 + 1;
      uVar7 = uVar7 + 0x1f7510;
    } while (uVar11 != uVar6);
  }
  return;
}


