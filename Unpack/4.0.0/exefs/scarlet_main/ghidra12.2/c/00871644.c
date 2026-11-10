/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00871644; name: FUN_00871644
 */


void FUN_00871644(long param_1,long *param_2)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  ushort uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  lVar8 = *param_2;
  lVar1 = 0;
  if (lVar8 != 0) {
    lVar1 = lVar8 + (long)param_2;
  }
  lVar1 = lVar1 + (long)(*(int *)(param_1 + 0x48) << 3) * 4;
  if (0 < *(int *)(param_1 + 0x48)) {
    iVar5 = 0;
    lVar6 = 0x5c;
    lVar7 = 1;
    while( true ) {
      lVar3 = 0;
      if (lVar8 != 0) {
        lVar3 = lVar8 + (long)param_2;
      }
      piVar2 = (int *)(lVar3 + (long)iVar5 * 4);
      uVar4 = *(ushort *)(*(long *)(param_1 + 0x40) + param_1 + 0x40 + lVar6);
      uVar9 = (ulong)(uVar4 >> 3) & 0x1ffc;
      *(uint *)(lVar1 + uVar9) =
           (uint)(((((((piVar2[1] != 0 || *piVar2 != 0) || piVar2[2] != 0) || piVar2[3] != 0) ||
                    piVar2[4] != 0) || piVar2[5] != 0) || piVar2[6] != 0) || piVar2[7] != 0) <<
           (ulong)(uVar4 & 0x1f) |
           *(uint *)(lVar1 + uVar9) & (1 << (ulong)(uVar4 & 0x1f) ^ 0xffffffffU);
      if (*(int *)(param_1 + 0x48) <= lVar7) break;
      lVar8 = *param_2;
      iVar5 = iVar5 + 8;
      lVar6 = lVar6 + 0x60;
      lVar7 = lVar7 + 1;
    }
  }
  FUN_00871890(param_1,lVar1);
  return;
}


