/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03458770; name: FUN_03458770
 */


int FUN_03458770(long param_1)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  ulong uVar10;
  long lVar11;
  undefined4 local_4;
  
  local_4 = *(undefined4 *)(PTR_DAT_047e70a8 + 0x40);
  pbVar7 = *(byte **)(param_1 + 0x20);
  if (pbVar7 != (byte *)0x0) {
    bVar3 = *pbVar7;
    uVar1 = (uint)bVar3;
    if (bVar3 < 2) {
      uVar1 = 1;
    }
    uVar10 = (ulong)uVar1;
    pbVar5 = pbVar7 + ((ulong)(bVar3 + 4) & 0x1fc);
    pbVar9 = pbVar7;
    do {
      pbVar7 = pbVar5;
      pbVar9 = pbVar9 + 1;
      if (*pbVar9 == 0x10) goto LAB_034587cc;
      uVar10 = uVar10 - 1;
      pbVar5 = pbVar7 + 4;
    } while (uVar10 != 0);
    pbVar7 = (byte *)0x0;
  }
LAB_034587cc:
  pbVar5 = *(byte **)(param_1 + 0x28);
  pbVar9 = (byte *)&local_4;
  if (pbVar7 != (byte *)0x0) {
    pbVar9 = pbVar7;
  }
  iVar2 = *(int *)pbVar9;
  if (pbVar5 != (byte *)0x0) {
    bVar3 = *pbVar5;
    uVar1 = (uint)bVar3;
    if (bVar3 < 2) {
      uVar1 = 1;
    }
    uVar10 = (ulong)uVar1;
    pbVar7 = pbVar5 + ((ulong)(bVar3 + 4) & 0x1fc);
    do {
      pbVar5 = pbVar5 + 1;
      if (*pbVar5 == 0x10) {
        iVar6 = *(int *)pbVar7;
        iVar4 = *(int *)(pbVar7 + 4) - iVar6;
        iVar8 = 0;
        if (iVar4 != 0) {
          lVar11 = *(long *)PTR_DAT_047e7068 * 0x5851f42d4c957f2d + 1;
          *(long *)PTR_DAT_047e7068 = lVar11;
          iVar6 = *(int *)pbVar7;
          iVar8 = (int)((double)(uint)((ulong)lVar11 >> 0x21) *
                        (double)iVar4 * 4.656612875245797e-10 + 0.5);
        }
        return iVar6 + iVar2 + iVar8;
      }
      pbVar7 = pbVar7 + 8;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return iVar2;
}


