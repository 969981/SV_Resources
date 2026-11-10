/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03099938; name: FUN_03099938
 */


void FUN_03099938(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  short *psVar5;
  int iVar6;
  long lVar7;
  
  *(undefined4 *)(param_2 + 1) = 0;
  iVar6 = *(int *)(param_1 + 0xe8);
  uVar2 = 0;
  if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) < iVar6) {
    FUN_02e9b320(param_2,PTR_PTR_047d1a50 + 0x20,(long)iVar6);
    uVar2 = *(uint *)(param_2 + 1);
  }
  if ((int)uVar2 < iVar6) {
    *(int *)(param_2 + 1) = iVar6;
    memset((void *)(*param_2 + (long)(int)uVar2 * 4),0xff,(ulong)(iVar6 + ~uVar2) * 4 + 4);
  }
  else if (iVar6 < (int)uVar2) {
    *(int *)(param_2 + 1) = iVar6;
  }
  if (0 < *(int *)(param_1 + 0xb8)) {
    lVar3 = 0;
    do {
      lVar4 = *(long *)(param_1 + 0xb0);
      iVar6 = *(int *)(param_1 + 0x30);
      iVar1 = *(int *)(lVar4 + lVar3 * 0x10);
      uVar2 = iVar1 - iVar6;
      if ((iVar6 <= iVar1) && (psVar5 = (short *)(lVar4 + lVar3 * 0x10 + 8), 0 < *psVar5)) {
        lVar7 = 0;
        do {
          *(int *)(*param_2 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2) +
                  lVar7 * 4) = (int)lVar3;
          lVar7 = lVar7 + 1;
        } while (lVar7 < *psVar5);
        iVar6 = *(int *)(param_1 + 0x30);
      }
      lVar4 = lVar4 + lVar3 * 0x10;
      iVar1 = *(int *)(lVar4 + 4);
      uVar2 = iVar1 - iVar6;
      if ((iVar6 <= iVar1) && (psVar5 = (short *)(lVar4 + 10), 0 < *psVar5)) {
        lVar4 = 0;
        do {
          *(int *)(*param_2 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2) +
                  lVar4 * 4) = (int)lVar3;
          lVar4 = lVar4 + 1;
        } while (lVar4 < *psVar5);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0xb8));
  }
  return;
}


