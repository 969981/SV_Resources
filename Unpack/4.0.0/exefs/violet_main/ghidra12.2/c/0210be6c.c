/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0210be6c; name: FUN_0210be6c
 */


undefined8 FUN_0210be6c(long *param_1)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  plVar2 = (long *)(**(code **)(*param_1 + 0x930))();
  if (plVar2 != (long *)0x0) {
    uVar3 = (**(code **)(*param_1 + 0x928))(param_1);
    uVar1 = (**(code **)(*plVar2 + 0x98))(plVar2);
    lVar4 = FUN_014c0ee8(uVar3,uVar1);
    if (lVar4 != 0) {
      uVar3 = FUN_01480644();
      return uVar3;
    }
  }
  return 0;
}


