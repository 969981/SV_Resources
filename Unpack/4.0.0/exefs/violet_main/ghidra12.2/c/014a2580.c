/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014a2580; name: FUN_014a2580
 */


void FUN_014a2580(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  
  FUN_00eeb618(param_1 + 0x30);
  plVar4 = (long *)*param_3;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x58))(plVar4);
  }
  plVar2 = *(long **)(param_1 + 0x38);
  *(long **)(param_1 + 0x38) = plVar4;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x60))();
  }
  FUN_01084328(param_1 + 0x40,param_4);
  uVar3 = FUN_01195854();
  iVar1 = FUN_014a22c4();
  *(int *)(param_1 + 0x60) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x60) = 3;
    FUN_01dcc61c(uVar3,3);
    return;
  }
  return;
}


