/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00178d10; name: FUN_00178d10
 */


long FUN_00178d10(int *param_1,long param_2,ulong *param_3)

{
  int *piVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  int iVar6;
  bool bVar7;
  byte *pbVar8;
  ulong uVar9;
  uint uVar10;
  
  if (0 < param_2) {
    pbVar3 = (byte *)*param_3;
    pbVar4 = (byte *)param_3[1];
    if (pbVar4 <= pbVar3) {
      return -1;
    }
    pbVar8 = pbVar3 + 1;
    piVar1 = (int *)((long)param_1 + param_2);
    uVar10 = -(uint)param_3[2];
    uVar2 = (uint)*pbVar3 & 0xffU >> (ulong)((uint)param_3[2] & 0x1f);
    uVar9 = (ulong)uVar2;
    if (uVar2 == 0) goto LAB_00178d98;
    while( true ) {
      uVar2 = *(uint *)(&DAT_03cb1eb8 + uVar9 * 4);
      bVar5 = (&DAT_03cbfaa0)[uVar9];
      *param_1 = (uVar2 & 0xf0f0f0f) + uVar10;
      param_1[1] = uVar2 >> 4 & 0xf0f0f0f;
      param_1 = (int *)((long)param_1 + (ulong)bVar5);
      if (piVar1 <= param_1) break;
      uVar10 = uVar2 >> 0x1c;
      pbVar3 = pbVar8;
      while( true ) {
        if (pbVar4 <= pbVar3) {
          return -1;
        }
        pbVar8 = pbVar3 + 1;
        uVar9 = (ulong)*pbVar3;
        if (*pbVar3 != 0) break;
LAB_00178d98:
        uVar10 = uVar10 + 8;
        pbVar3 = pbVar8;
      }
    }
    for (; uVar10 = (uint)uVar9, piVar1 < param_1; param_1 = (int *)((long)param_1 + -1)) {
      uVar9 = (ulong)(uVar10 - 1 & uVar10);
    }
    uVar10 = (uVar10 & 0xaaaaaaaa) >> 1 | (uVar10 & 0x55555555) << 1;
    uVar10 = (uVar10 & 0xcccccccc) >> 2 | (uVar10 & 0x33333333) << 2;
    bVar7 = (uVar9 & 1) != 0;
    pbVar3 = pbVar8 + -1;
    if (bVar7) {
      pbVar3 = pbVar8;
    }
    *param_3 = (ulong)pbVar3;
    iVar6 = 8 - (int)LZCOUNT((uVar10 >> 4 | (uVar10 & 0xf0f0f0f) << 4) << 0x18);
    if (bVar7) {
      iVar6 = 0;
    }
    *(int *)(param_3 + 2) = iVar6;
  }
  return param_2;
}


