/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016be75c; name: FUN_016be75c
 */


void FUN_016be75c(long param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  int local_10 [4];
  
  local_10[2] = 0;
  local_10[3] = param_2;
  local_10[0] = 0xff;
  local_10[1] = 0xff;
  piVar1 = local_10 + 1;
  if (param_2 < 0x100) {
    piVar1 = local_10 + 3;
  }
  piVar2 = local_10 + 2;
  if (-1 < param_2) {
    piVar2 = piVar1;
  }
  iVar7 = *piVar2;
  local_10[2] = *(int *)(param_1 + 0x150);
  *(int *)(param_1 + 0x308) = iVar7;
  local_10[1] = 0;
  piVar1 = local_10;
  if (local_10[2] < 0x100) {
    piVar1 = local_10 + 2;
  }
  piVar2 = local_10 + 1;
  if (-1 < local_10[2]) {
    piVar2 = piVar1;
  }
  lVar4 = *(long *)(param_1 + 0x208);
  lVar6 = *(long *)(param_1 + 0x200);
  if (0 < (int)((ulong)(lVar4 - lVar6) >> 3)) {
    iVar3 = *piVar2;
    lVar5 = 0;
    while( true ) {
      lVar8 = *(long *)(lVar6 + lVar5 * 8);
      iVar7 = (iVar3 * 4 - 0xf423cU | 3) + (int)lVar5 + iVar7 * 0x400;
      if (iVar7 != *(int *)(lVar8 + 0x1e4)) {
        *(int *)(lVar8 + 0x1e4) = iVar7;
        *(undefined1 *)(*(long *)(*(long *)(lVar8 + 0x30) + 0x50) + 200) = 1;
        lVar4 = *(long *)(param_1 + 0x208);
        lVar6 = *(long *)(param_1 + 0x200);
      }
      lVar5 = lVar5 + 1;
      if ((int)((ulong)(lVar4 - lVar6) >> 3) <= lVar5) break;
      iVar7 = *(int *)(param_1 + 0x308);
    }
  }
  return;
}


