/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018654fc; name: FUN_018654fc
 */


bool FUN_018654fc(long param_1,long *param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  int local_40 [4];
  
  if ((((*(char *)(param_1 + 0x60) != '\0') ||
       ((*(long *)(param_1 + 0x48) != 0 && (*(short *)(*(long *)(param_1 + 0x48) + 0x1a) != 0)))) &&
      (plVar4 = *(long **)(param_1 + 0x58), plVar4 != (long *)0x0)) &&
     ((uVar2 = (**(code **)*plVar4)(plVar4), (uVar2 & 1) != 0 &&
      (lVar3 = (**(code **)(*plVar4 + 0x20))(plVar4), lVar3 != *param_2)))) {
    if (*(long *)PTR_DAT_047d0a08 == 0) {
      return false;
    }
    iVar1 = FUN_00f21480();
    if ((iVar1 == 1) && (*(long *)PTR_DAT_047d0860 != 0)) {
      plVar4 = (long *)FUN_00f21488(*(long *)PTR_DAT_047d0860 + 0x10,DAT_0485ea68,0x7c);
      if (plVar4 == (long *)0x0) {
        return false;
      }
      (**(code **)(*plVar4 + 0x70))(local_40,plVar4,*param_2,param_3 + 2);
      return local_40[0] == 0;
    }
  }
  return false;
}


