/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0290f434; name: FUN_0290f434
 */


int FUN_0290f434(long param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  
  iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  plVar5 = *(long **)(param_1 + 0x30);
  if (iVar2 < 0x1e) {
    uVar6 = (**(code **)(*plVar5 + 0x4c0))(plVar5,0x5a);
    if ((uVar6 & 1) != 0) {
      return -3;
    }
  }
  else {
    iVar2 = (**(code **)(*plVar5 + 0xa0))(plVar5,*(undefined4 *)(param_1 + 0xb0));
    if (iVar2 < 0x32) {
      uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
      iVar2 = -(uVar4 & 1);
      goto LAB_0290f4bc;
    }
  }
  iVar2 = 0;
LAB_0290f4bc:
  uVar1 = *(ushort *)(param_1 + 0xb6);
  if ((((uVar1 < 0x3f) && ((1L << ((ulong)uVar1 & 0x3f) & 0x4000002002800000U) != 0)) ||
      ((uVar1 - 0x5a < 0xc && ((1 << (ulong)(uVar1 - 0x5a & 0x1f) & 0xb01U) != 0)))) &&
     (uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e),
     (uVar6 & 1) != 0)) {
    iVar2 = iVar2 + 2;
  }
  else {
    iVar3 = FUN_02915ecc(param_1);
    if ((iVar3 != 1) ||
       (uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x46),
       (uVar6 & 1) == 0)) {
      uVar1 = *(ushort *)(param_1 + 0xb6);
      uVar4 = uVar1 - 0x9c;
      if ((((0x1f < uVar4) || ((1 << (ulong)(uVar4 & 0x1f) & 0xe2602005U) == 0)) &&
          (((0x22 < uVar1 || ((1L << ((ulong)uVar1 & 0x3f) & 0x700000008U) == 0)) && (uVar1 != 0x7a)
           ))) || (uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                                     (*(long **)(param_1 + 0x30),0x32), (uVar6 & 1) == 0)) {
        uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x55);
        return iVar2 - (uVar4 & 1);
      }
    }
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


