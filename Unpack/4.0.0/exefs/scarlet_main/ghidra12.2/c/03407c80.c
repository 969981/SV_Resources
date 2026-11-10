/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03407c80; name: FUN_03407c80
 */


ulong FUN_03407c80(ulong param_1,uint param_2,int param_3,long param_4,long *param_5,long param_6)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  ulong *puVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  
  puVar5 = PTR_DAT_047e6c20;
  switch(*(undefined4 *)(param_6 + 0x24)) {
  case 0:
    break;
  case 1:
    uVar6 = (uint)*(byte *)(param_4 + 0x1a);
    if (*(int *)(param_6 + 0x20) == 1) {
      if (uVar6 == 0) {
        return 0;
      }
      uVar7 = 0;
      uVar9 = 0;
      uVar11 = param_1 & 0xffffffff;
      param_1 = 0;
      do {
        uVar3 = 0;
        if (param_3 != 0) {
          uVar3 = (int)uVar11 / param_3;
        }
        uVar9 = uVar9 + 1;
        uVar2 = uVar7 & 0x1f;
        uVar7 = uVar7 + *(byte *)(*(long *)(param_4 + 0x10) + 0x50);
        param_1 = (ulong)((uint)*(ushort *)
                                 (*(long *)(param_6 + 0x18) +
                                 (ulong)((int)uVar11 - uVar3 * param_3) * 2) << (ulong)uVar2 |
                         (uint)param_1);
        uVar11 = (ulong)uVar3;
      } while (uVar9 < uVar6);
    }
    else {
      if (uVar6 == 0) {
        return 0;
      }
      uVar6 = 0;
      uVar11 = (ulong)*(byte *)(param_5 + 1);
      param_1 = 0;
      bVar1 = *(byte *)(*(long *)(param_4 + 0x10) + 0x50);
      puVar8 = (ulong *)*param_5;
      iVar10 = *(int *)((long)param_5 + 0xc);
      do {
        uVar12 = *puVar8;
        uVar9 = (int)uVar11 + (uint)bVar1;
        uVar7 = *(uint *)(puVar5 + (ulong)bVar1 * 4);
        puVar8 = (ulong *)((long)puVar8 + (ulong)(uVar9 >> 5) * 4);
        iVar10 = iVar10 - (uVar9 >> 5);
        uVar4 = uVar11 & 0x3f;
        uVar11 = (ulong)(uVar9 & 0x1f);
        *(char *)(param_5 + 1) = (char)(uVar9 & 0x1f);
        *(int *)((long)param_5 + 0xc) = iVar10;
        *param_5 = (long)puVar8;
        bVar1 = *(byte *)(*(long *)(param_4 + 0x10) + 0x50);
        uVar9 = uVar6 * bVar1;
        uVar6 = uVar6 + 1;
        param_1 = (ulong)((uVar7 & (uint)(uVar12 >> uVar4)) << (ulong)(uVar9 & 0x1f) | (uint)param_1
                         );
      } while (uVar6 < *(byte *)(param_4 + 0x1a));
    }
    break;
  case 2:
    if (*(byte *)(param_4 + 0x1a) == 0) {
      return 0;
    }
    uVar9 = 0;
    uVar6 = 0;
    uVar11 = param_1 & 0xffffffff;
    param_1 = 0;
    do {
      uVar7 = 0;
      if (param_3 != 0) {
        uVar7 = (int)uVar11 / param_3;
      }
      uVar6 = uVar6 + 1;
      uVar3 = uVar9 & 0x1f;
      uVar9 = uVar9 + *(int *)(param_6 + 0x10);
      param_1 = (ulong)((int)uVar11 - uVar7 * param_3 << (ulong)uVar3 | (uint)param_1);
      uVar11 = (ulong)uVar7;
    } while (uVar6 < *(byte *)(param_4 + 0x1a));
    break;
  case 3:
    return (ulong)param_2;
  default:
    return 0;
  }
  return param_1;
}


