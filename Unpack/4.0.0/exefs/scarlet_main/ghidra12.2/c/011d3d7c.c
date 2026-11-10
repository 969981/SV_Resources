/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011d3d7c; name: FUN_011d3d7c
 */


undefined8 FUN_011d3d7c(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x290) + 8);
  uVar3 = FUN_00f7e2a0(*(undefined4 *)(lVar5 + 0x36c),*(undefined1 *)(lVar5 + 0x370),0);
  if (((uVar3 & 1) == 0) ||
     (uVar3 = FUN_011d40a0(param_1,(ulong)(2 < *(uint *)(*(long *)(*(long *)(param_1 + 0x290) + 8) +
                                                        0x36c)) << 1), (uVar3 & 1) == 0)) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x290) + 8);
    uVar3 = FUN_00f7e2a0(*(undefined4 *)(lVar5 + 0x36c),*(undefined1 *)(lVar5 + 0x370),1);
    if ((uVar3 & 1) != 0) {
      uVar6 = 1;
      if (2 < *(uint *)(*(long *)(*(long *)(param_1 + 0x290) + 8) + 0x36c)) {
        uVar6 = 2;
      }
      uVar3 = FUN_011d40a0(param_1,uVar6);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
    }
    lVar5 = *(long *)(*(long *)(param_1 + 0x290) + 8);
    uVar3 = FUN_00f7e2a0(*(undefined4 *)(lVar5 + 0x36c),*(undefined1 *)(lVar5 + 0x370),2);
    if ((uVar3 & 1) != 0) {
      iVar2 = *(int *)(*(long *)(*(long *)(param_1 + 0x290) + 8) + 0x36c);
      if ((iVar2 == 2) || (iVar2 == 1)) {
        uVar4 = 0;
      }
      else {
        uVar4 = 2;
      }
      uVar3 = FUN_011d40a0(param_1,uVar4);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
    }
    lVar5 = *(long *)(*(long *)(param_1 + 0x290) + 8);
    uVar3 = FUN_00f7e2a0(*(undefined4 *)(lVar5 + 0x36c),*(undefined1 *)(lVar5 + 0x370),3);
    if ((uVar3 & 1) != 0) {
      iVar2 = *(int *)(*(long *)(*(long *)(param_1 + 0x290) + 8) + 0x36c);
      uVar6 = 1;
      if (iVar2 != 1) {
        uVar6 = 2;
      }
      uVar1 = 0;
      if (iVar2 != 2) {
        uVar1 = uVar6;
      }
      uVar3 = FUN_011d40a0(param_1,uVar1);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
    }
    lVar5 = *(long *)(*(long *)(param_1 + 0x290) + 8);
    uVar3 = FUN_00f7e2a0(*(undefined4 *)(lVar5 + 0x36c),*(undefined1 *)(lVar5 + 0x370),4);
    if (((uVar3 & 1) == 0) ||
       (uVar3 = FUN_011d40a0(param_1,(ulong)(*(int *)(*(long *)(*(long *)(param_1 + 0x290) + 8) +
                                                     0x36c) != 2) << 1), (uVar3 & 1) == 0)) {
      return 0;
    }
  }
  return 1;
}


