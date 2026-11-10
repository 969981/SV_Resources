/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03407b60; name: FUN_03407b60
 */


uint FUN_03407b60(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  ulong uVar11;
  long lVar12;
  
  uVar9 = (ulong)(int)(*(uint *)(PTR_DAT_047e6c20 + 0x60) &
                      (uint)(*(ulong *)*param_2 >> ((ulong)*(byte *)(param_2 + 1) & 0x3f)));
  if (*(char *)((long)param_1 + 0x1b) == '\x02') {
    lVar3 = *param_1;
    uVar5 = *(ushort *)(lVar3 + (*(ushort *)(param_1 + 3) & uVar9) * 2);
    uVar6 = (uint)uVar5;
    bVar10 = *(byte *)(param_1[1] + (*(ushort *)(param_1 + 3) & uVar9));
    uVar8 = (ulong)bVar10;
    if (-1 < (short)uVar5) {
      lVar12 = lVar3 + (ulong)uVar6 * 2;
      uVar11 = 0;
      uVar9 = uVar9 >> (uVar8 & 0x3f);
      Hint_Prefetch(lVar3 + (ulong)uVar5 * 2,0,0,0);
      do {
        lVar12 = lVar12 + (uVar11 & 0xff) * 2;
        uVar11 = uVar9 & 1;
        uVar9 = uVar9 >> 1;
        cVar4 = *(char *)(lVar12 + uVar11);
        uVar11 = (ulong)cVar4;
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulong)uVar7;
      } while (-1 < cVar4);
      uVar6 = (uint)*(ushort *)(lVar12 + (uVar11 & 0x7f) * 2);
      goto LAB_03407c58;
    }
  }
  else {
    if (*(char *)((long)param_1 + 0x1b) != '\x01') {
      uVar7 = 0;
      uVar6 = 0;
      goto LAB_03407c58;
    }
    lVar3 = *param_1;
    uVar5 = *(ushort *)(lVar3 + (*(ushort *)(param_1 + 3) & uVar9) * 2);
    uVar6 = (uint)uVar5;
    bVar10 = *(byte *)(param_1[1] + (*(ushort *)(param_1 + 3) & uVar9));
    uVar8 = (ulong)bVar10;
    if (-1 < (short)uVar5) {
      lVar12 = lVar3 + (ulong)uVar6 * 2;
      bVar10 = 0;
      uVar9 = uVar9 >> (uVar8 & 0x3f);
      Hint_Prefetch(lVar3 + (ulong)uVar5 * 2,0,0,0);
      do {
        lVar12 = lVar12 + (ulong)bVar10 * 2;
        uVar11 = uVar9 & 1;
        uVar9 = uVar9 >> 1;
        bVar10 = *(byte *)(lVar12 + uVar11);
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulong)uVar7;
      } while (-1 < (char)bVar10);
      uVar6 = bVar10 & 0x7f;
      goto LAB_03407c58;
    }
  }
  uVar7 = (uint)bVar10;
  uVar6 = uVar6 & 0x7fff;
LAB_03407c58:
  iVar1 = uVar7 + *(byte *)(param_2 + 1);
  iVar2 = iVar1 >> 5;
  *(byte *)(param_2 + 1) = (byte)iVar1 & 0x1f;
  *(int *)((long)param_2 + 0xc) = *(int *)((long)param_2 + 0xc) - iVar2;
  *param_2 = *param_2 + (long)iVar2 * 4;
  return uVar6;
}


