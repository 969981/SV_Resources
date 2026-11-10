/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0289ff38; name: FUN_0289ff38
 */


bool FUN_0289ff38(long param_1,ulong param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  int local_30 [4];
  
  if ((param_2 & 1) == 0) {
    if ((((*(char *)(param_1 + 0x60) != '\0') ||
         ((*(long *)(param_1 + 0x48) != 0 && (*(short *)(*(long *)(param_1 + 0x48) + 0x1a) != 0))))
        && (plVar6 = *(long **)(param_1 + 0x58), plVar6 != (long *)0x0)) &&
       ((uVar4 = (**(code **)*plVar6)(plVar6), (uVar4 & 1) != 0 &&
        (uVar1 = (**(code **)(*plVar6 + 0x40))(plVar6), 1 < uVar1)))) {
      if (*(long *)PTR_DAT_047d0a08 == 0) {
        return false;
      }
      iVar2 = FUN_00f21480();
      if ((iVar2 == 1) && (*(long *)PTR_DAT_047d0860 != 0)) {
        lVar5 = FUN_00f21488(*(long *)PTR_DAT_047d0860 + 0x10,DAT_0485ea80,0x68);
        if (lVar5 == 0) {
          return false;
        }
        uVar4 = FUN_0117e018();
        if ((uVar4 & 1) != 0) {
          uVar3 = FUN_0117e030(lVar5);
          return param_3 + 2U <= uVar3;
        }
      }
    }
  }
  else if (((*(char *)(param_1 + 0x60) != '\0') ||
           ((*(long *)(param_1 + 0x48) != 0 && (*(short *)(*(long *)(param_1 + 0x48) + 0x1a) != 0)))
           ) && ((plVar6 = *(long **)(param_1 + 0x58), plVar6 != (long *)0x0 &&
                 ((uVar4 = (**(code **)*plVar6)(plVar6), (uVar4 & 1) != 0 &&
                  (uVar1 = (**(code **)(*plVar6 + 0x40))(plVar6), 1 < uVar1)))))) {
    if (*(long *)PTR_DAT_047d0a08 == 0) {
      return false;
    }
    iVar2 = FUN_00f21480();
    if ((iVar2 == 1) && (*(long *)PTR_DAT_047d0860 != 0)) {
      plVar6 = (long *)FUN_00f21488(*(long *)PTR_DAT_047d0860 + 0x10,DAT_0485ea74,0x80);
      if (plVar6 == (long *)0x0) {
        return false;
      }
      (**(code **)(*plVar6 + 0xa0))(local_30,plVar6,param_3 + 2);
      return local_30[0] == 0;
    }
  }
  return false;
}


