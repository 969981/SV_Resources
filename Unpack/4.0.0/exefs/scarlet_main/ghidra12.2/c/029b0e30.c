/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029b0e30; name: FUN_029b0e30
 */


void FUN_029b0e30(long param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 local_64;
  
  plVar1 = (long *)(param_1 + 0x228);
  uVar7 = *(long *)(param_1 + 0x1f8) - *(long *)(param_1 + 0x1f0);
  FUN_018dbb30(plVar1,*(undefined8 *)(param_1 + 0x228));
  FUN_029b0f48(plVar1,(long)(uVar7 * 0x80000000) >> 0x20);
  iVar5 = (int)(uVar7 >> 1);
  if (0 < iVar5) {
    uVar6 = (ulong)(iVar5 - 1);
    uVar8 = 0;
    do {
      *(int *)(*(long *)(param_1 + 0x228) + uVar8 * 0x60 + 0x50) = (int)uVar8 + -1;
      *(undefined2 *)(*(long *)(param_1 + 0x228) + uVar8 * 0x60 + 0x54) =
           *(undefined2 *)(*(long *)(param_1 + 0x1f0) + uVar8 * 2);
      if (uVar8 == uVar6) {
        lVar2 = *(long *)(param_1 + 0x228) + uVar6 * 0x60;
        uVar9 = uVar6 + 1;
        uVar4 = param_2;
      }
      else {
        uVar9 = uVar8 + 1;
        local_64 = (undefined4)uVar9;
        FUN_029b0f84(*(long *)(param_1 + 0x228) + uVar8 * 0x60 + 0x18,&local_64);
        lVar2 = *plVar1 + uVar8 * 0x60;
        uVar4 = 0xffffffff;
      }
      *(undefined4 *)(lVar2 + 0x10) = uVar4;
      puVar3 = (undefined8 *)(*plVar1 + uVar8 * 0x60);
      *puVar3 = 0;
      puVar3[1] = 0;
      uVar8 = uVar9;
    } while (uVar9 != (uVar7 >> 1 & 0xffffffff));
  }
  return;
}


