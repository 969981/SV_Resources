/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02985a2c; name: FUN_02985a2c
 */


void FUN_02985a2c(undefined8 param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if ((*(char *)((long)param_2 + 0x21) == '\x01') &&
     (plVar3 = (long *)FUN_014813f4(param_1,*param_2), plVar3 != (long *)0x0)) {
    uVar4 = FUN_01243584(param_1);
    uVar2 = (**(code **)(*plVar3 + 0x98))(plVar3);
    uVar1 = (**(code **)(*plVar3 + 400))(plVar3);
    FUN_0129af6c(uVar4,uVar2,0x35f,uVar1);
    return;
  }
  return;
}


