/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002db70c; name: FUN_002db70c
 */


void FUN_002db70c(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  
  if (*(int *)(param_1 + 0x4c) != 2) {
    FUN_002db810(param_1,param_2,param_3,param_4 & 1);
    return;
  }
  uVar2 = (uint)param_2;
  if ((0xff < (int)uVar2) || (uVar3 = (uint)param_3, (int)uVar3 < (int)uVar2)) {
    return;
  }
  if (0xfe < (int)uVar3) {
    uVar3 = 0xff;
  }
  uVar1 = FUN_002da6c4(param_1,uVar2 & 0xff,uVar3 & 0xff,param_4 & 1);
  uVar2 = *(uint *)(param_1 + 0xa4);
  iVar4 = (int)((ulong)uVar1 >> 0x20);
  if (uVar2 == 0) {
    *(int *)(param_1 + 0xa4) = iVar4;
    FUN_002db13c(param_1,uVar1);
    return;
  }
  if (iVar4 != 0) {
    lVar5 = *(long *)(param_1 + 0x58);
    uVar3 = uVar2;
    do {
      while (uVar7 = uVar3, (uVar7 & 1) != 0) {
        uVar3 = *(uint *)(lVar5 + (ulong)(uVar7 >> 1) * 8 + 4);
        if (uVar3 == 0) goto LAB_002db79c;
      }
      uVar3 = *(uint *)(lVar5 + (ulong)(uVar7 >> 1) * 8) >> 4;
    } while (uVar3 != 0);
LAB_002db79c:
    if ((uVar7 & 1) != 0) {
      *(int *)(lVar5 + (ulong)(uVar7 >> 1) * 8 + 4) = iVar4;
      *(uint *)(param_1 + 0xa4) = uVar2;
      FUN_002db13c(param_1,uVar1);
      return;
    }
    lVar6 = (ulong)(uVar7 >> 1) * 8;
    uVar3 = *(uint *)(lVar5 + lVar6);
    *(uint *)(lVar5 + lVar6) = uVar3 & 8 | iVar4 << 4 | uVar3 & 7;
  }
  *(uint *)(param_1 + 0xa4) = uVar2;
  FUN_002db13c(param_1,uVar1);
  return;
}


