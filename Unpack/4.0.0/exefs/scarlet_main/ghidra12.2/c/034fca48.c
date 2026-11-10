/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034fca48; name: FUN_034fca48
 */


void FUN_034fca48(long *param_1,long *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *param_1;
  if ((((lVar8 != 0) && (param_1[2] != 0)) && (param_1[4] != 0)) && (param_1[6] != 0)) {
    uVar5 = *(ushort *)((long)param_2 + 0x12);
    if (1 < uVar5) {
      lVar9 = *param_2 + (ulong)param_3 * (ulong)*(ushort *)(param_2 + 2) * 4;
      uVar2 = *(uint *)((long)param_1 + 0xc);
      uVar3 = *(undefined4 *)(lVar9 + (ulong)(uVar5 - 1) * 4);
      uVar4 = *(undefined4 *)(lVar9 + (ulong)(uVar5 - 2) * 4);
      uVar7 = param_3 >> 2;
      uVar1 = param_3 & 3;
      uVar6 = uVar7 << 4;
      if ((uVar2 - 1 == param_3) && ((uVar2 & 1) != 0)) {
        uVar2 = (uVar7 + (1 < uVar1 && uVar2 != 1)) * 0x10;
        *(undefined4 *)(lVar8 + (ulong)uVar2 * 4) = uVar3;
        *(undefined4 *)(*param_1 + (ulong)uVar2 * 4 + 4) = uVar4;
        *(undefined4 *)(*param_1 + (ulong)uVar2 * 4 + 8) = uVar3;
        lVar8 = *param_1 + (ulong)uVar2 * 4;
        lVar9 = 3;
      }
      else {
        *(undefined4 *)(lVar8 + (ulong)uVar6 * 4 + (ulong)uVar1 * 4) = uVar3;
        *(undefined4 *)(*param_1 + (ulong)uVar6 * 4 + (ulong)uVar1 * 4 + 0x10) = uVar4;
        *(undefined4 *)(*param_1 + (ulong)uVar6 * 4 + (ulong)uVar1 * 4 + 0x20) = uVar3;
        lVar8 = *param_1 + (ulong)uVar6 * 4 + (ulong)uVar1 * 4;
        lVar9 = 0xc;
      }
      *(undefined4 *)(lVar8 + lVar9 * 4) = uVar4;
      uVar2 = *(uint *)((long)param_1 + 0x2c);
      if ((uVar2 - 1 == param_3) && ((uVar2 & 1) != 0)) {
        uVar1 = (uVar7 + (1 < uVar1 && uVar2 != 1)) * 0x10;
        *(undefined4 *)(param_1[4] + (ulong)uVar1 * 4) = uVar3;
        *(undefined4 *)(param_1[4] + (ulong)uVar1 * 4 + 4) = uVar4;
        *(undefined4 *)(param_1[4] + (ulong)uVar1 * 4 + 8) = uVar3;
        *(undefined4 *)(param_1[4] + (ulong)uVar1 * 4 + 0xc) = uVar4;
        return;
      }
      *(undefined4 *)(param_1[4] + (ulong)uVar6 * 4 + (ulong)uVar1 * 4) = uVar3;
      *(undefined4 *)(param_1[4] + (ulong)uVar6 * 4 + (ulong)uVar1 * 4 + 0x10) = uVar4;
      *(undefined4 *)(param_1[4] + (ulong)uVar6 * 4 + (ulong)uVar1 * 4 + 0x20) = uVar3;
      *(undefined4 *)(param_1[4] + (ulong)uVar6 * 4 + (ulong)uVar1 * 4 + 0x30) = uVar4;
    }
  }
  return;
}


