/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008c35e4; name: FUN_008c35e4
 */


long FUN_008c35e4(long param_1,undefined8 param_2)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  ushort *puVar8;
  ulong uVar9;
  
  if (*(int *)(param_1 + 0x50) < 1) {
    lVar5 = 0;
    iVar6 = *(int *)(param_1 + 0xc0);
  }
  else {
    iVar6 = 0;
    lVar5 = 0;
    do {
      lVar2 = FUN_008b4d30(param_2,0x10,0x40);
      lVar3 = FUN_008b4d30(param_2,0x10,0x10);
      iVar6 = iVar6 + 1;
      lVar5 = lVar2 + lVar5 + lVar3;
    } while (iVar6 < *(int *)(param_1 + 0x50));
    iVar6 = *(int *)(param_1 + 0xc0);
  }
  if (iVar6 != 0) {
    uVar7 = 0;
    do {
      lVar3 = *(long *)(param_1 + 0xa0);
      lVar2 = FUN_008b4d30(param_2,0x10,0x40);
      puVar8 = (ushort *)(lVar3 + uVar7 * 0xa0 + 0x10);
      uVar1 = *puVar8;
      uVar4 = (ulong)uVar1;
      lVar5 = lVar2 + lVar5;
      if (uVar1 != 0) {
        uVar9 = 0;
        do {
          if (**(byte **)(*(long *)(*(long *)(param_1 + 0xa0) + uVar7 * 0xa0 + 0x18) + uVar9 * 8) <
              2) {
            lVar2 = FUN_008b4d30(param_2,0x10,0x10);
            uVar4 = (ulong)*puVar8;
            lVar5 = lVar2 + lVar5;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar4);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_1 + 0xc0));
  }
  return lVar5;
}


