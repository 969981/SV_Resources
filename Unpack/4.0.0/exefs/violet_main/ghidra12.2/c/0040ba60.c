/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0040ba60; name: FUN_0040ba60
 */


long * FUN_0040ba60(undefined4 param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_0040c6d0(0);
  if (plVar2 != (long *)0x0) {
    lVar3 = FUN_004062c0(param_1);
    plVar2[3] = lVar3;
    if ((lVar3 == 0) ||
       ((*(code **)(*plVar2 + 0x28) != (code *)0x0 &&
        (iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2,lVar3), iVar1 == 0)))) {
      FUN_0040bae0(plVar2);
      return (long *)0x0;
    }
  }
  return plVar2;
}


