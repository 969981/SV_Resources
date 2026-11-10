/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027d966c; name: FUN_027d966c
 */


void FUN_027d966c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  undefined1 auStack_8 [8];
  
  plVar1 = (long *)*param_1;
  if ((plVar1 != (long *)0x0) && (*param_2 != 0)) {
    FUN_027d6574(auStack_8);
    (**(code **)(*plVar1 + 0x68))(plVar1,auStack_8);
    FUN_027d6640(auStack_8);
  }
  return;
}


