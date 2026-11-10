/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034c2bc8; name: FUN_034c2bc8
 */


long * FUN_034c2bc8(long *param_1,long param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  byte *pbVar11;
  uint uVar12;
  ulong uVar13;
  
  plVar9 = *(long **)(*(long *)(param_2 + 0x88) + 0x18);
  uVar2 = *(uint *)(plVar9 + 1);
  uVar12 = *(uint *)((long)plVar9 + 0xc);
  if (uVar12 <= uVar2) {
    iVar8 = uVar12 + (uVar12 >> 1);
    if (uVar12 == 0) {
      iVar8 = 1;
    }
    uVar12 = iVar8 + uVar12;
    lVar6 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,*plVar9,(ulong)uVar12 * 0x28);
    if (lVar6 == 0) {
      return (long *)0x0;
    }
    *plVar9 = lVar6;
    *(uint *)((long)plVar9 + 0xc) = uVar12;
  }
  if (uVar2 < uVar12) {
    uVar13 = (ulong)*(uint *)(plVar9 + 1);
    lVar6 = *plVar9;
    *(uint *)(plVar9 + 1) = *(uint *)(plVar9 + 1) + 1;
    if (lVar6 != 0) {
      plVar9 = (long *)(lVar6 + uVar13 * 0x28);
      lVar10 = lVar6 + uVar13 * 0x28;
      *(undefined2 *)(plVar9 + 2) = 0;
      *plVar9 = 0;
      plVar9[1] = 0;
      pbVar11 = (byte *)(lVar10 + 0x12);
      *pbVar11 = *pbVar11 & 0xfc;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(undefined8 *)(lVar10 + 0x20) = 0;
      if (param_1 == (long *)0x0) {
        *plVar9 = 0;
      }
      else {
        (**(code **)(*param_1 + 0x28))(param_1);
        plVar7 = (long *)*plVar9;
        *plVar9 = (long)param_1;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x30))();
        }
      }
      bVar3 = *pbVar11;
      puVar1 = (undefined2 *)(lVar6 + uVar13 * 0x28 + 0x10);
      if (*(short *)((long)param_1 + 0x13c) == 0) {
        *pbVar11 = bVar3 | 3;
        *puVar1 = 1;
        return plVar9;
      }
      *pbVar11 = bVar3 & 0xfd;
      uVar4 = *(ushort *)((long)param_1 + 0x13e);
      uVar5 = *(ushort *)((long)param_1 + 0x13c);
      uVar12 = (uint)*(ushort *)(param_1 + 0x28) - (uint)uVar4;
      if ((uVar12 & 0xffff) == 0) {
        iVar8 = 0;
      }
      else {
        lVar6 = *(long *)PTR_DAT_047e7068 * 0x5851f42d4c957f2d + 1;
        *(long *)PTR_DAT_047e7068 = lVar6;
        iVar8 = (int)((double)(uint)((ulong)lVar6 >> 0x21) *
                      (double)(int)(short)uVar12 * 4.656612875245797e-10 + 0.5);
      }
      uVar12 = (uint)uVar4 + (uint)uVar5 + iVar8;
      if ((short)uVar12 < 2) {
        uVar12 = 1;
      }
      *pbVar11 = bVar3 & 0xfc | 1 < (uVar12 & 0xffff);
      *puVar1 = (short)uVar12;
      return plVar9;
    }
  }
  return (long *)0x0;
}


