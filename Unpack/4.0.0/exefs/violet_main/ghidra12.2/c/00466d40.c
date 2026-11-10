/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00466d40; name: FUN_00466d40
 */


long * FUN_00466d40(long param_1,long param_2,int param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_00468d90();
  if (plVar2 != (long *)0x0) {
    if (param_3 != 0x14) {
      lVar3 = FUN_003e5030();
      plVar2[2] = lVar3;
      if ((lVar3 == 0) || (iVar1 = FUN_003e1030(lVar3,(long)param_3), iVar1 == 0))
      goto LAB_00466df0;
    }
    if ((param_1 != 0) && (iVar1 = FUN_0043b710(param_1), iVar1 != 0x40)) {
      lVar3 = FUN_003e55a0();
      *plVar2 = lVar3;
      if (lVar3 == 0) goto LAB_00466df0;
      FUN_003e5690(lVar3,param_1);
    }
    if (param_2 != 0) {
      param_1 = param_2;
    }
    iVar1 = FUN_00466e10(plVar2 + 1,param_1);
    if (iVar1 != 0) {
      if (param_1 == 0) {
        return plVar2;
      }
      iVar1 = FUN_0043b710(param_1);
      if (iVar1 == 0x40) {
        return plVar2;
      }
      lVar3 = FUN_003e55a0();
      plVar2[4] = lVar3;
      if (lVar3 != 0) {
        FUN_003e5690(lVar3,param_1);
        return plVar2;
      }
    }
  }
LAB_00466df0:
  FUN_00468da0(plVar2);
  return (long *)0x0;
}


