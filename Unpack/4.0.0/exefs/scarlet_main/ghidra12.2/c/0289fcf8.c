/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0289fcf8; name: FUN_0289fcf8
 */


bool FUN_0289fcf8(long param_1,long *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  if ((((*(char *)(param_1 + 0x60) != '\0') ||
       ((*(long *)(param_1 + 0x48) != 0 && (*(short *)(*(long *)(param_1 + 0x48) + 0x1a) != 0)))) &&
      (plVar5 = *(long **)(param_1 + 0x58), plVar5 != (long *)0x0)) &&
     ((uVar3 = (**(code **)*plVar5)(plVar5), (uVar3 & 1) != 0 &&
      (lVar4 = (**(code **)(*plVar5 + 0x20))(plVar5), lVar4 != *param_2)))) {
    if (*(long *)PTR_DAT_047d0a08 == 0) {
      return false;
    }
    iVar1 = FUN_00f21480();
    if ((iVar1 == 1) && (*(long *)PTR_DAT_047d0860 != 0)) {
      lVar4 = FUN_00f21488(*(long *)PTR_DAT_047d0860 + 0x10,DAT_0485ea80,0x68);
      if (lVar4 == 0) {
        return false;
      }
      uVar3 = FUN_0117e018();
      if ((uVar3 & 1) != 0) {
        uVar2 = FUN_0117e030(lVar4);
        return param_3 + 2U <= uVar2;
      }
    }
  }
  return false;
}


