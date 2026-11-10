/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034ec6ac; name: FUN_034ec6ac
 */


int FUN_034ec6ac(long param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  long *plVar2;
  undefined1 auStack_34 [4];
  
  plVar2 = *(long **)(param_1 + 8);
  if (plVar2 == (long *)0x0) {
    iVar1 = 2;
  }
  else {
    iVar1 = (**(code **)(*plVar2 + 0x50))(plVar2,0,0,0);
    if (iVar1 == 1) {
      iVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x40))
                        (0,*(long **)(param_1 + 8),param_2,param_3,1,0,auStack_34);
    }
    (**(code **)(**(long **)(param_1 + 8) + 0x10))();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return iVar1;
}


