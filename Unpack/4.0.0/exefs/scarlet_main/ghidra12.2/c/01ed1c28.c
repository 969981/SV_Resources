/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ed1c28; name: FUN_01ed1c28
 */


void FUN_01ed1c28(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  undefined1 auStack_8 [8];
  
  plVar1 = (long *)*param_1;
  if ((plVar1 != (long *)0x0) && (*param_2 != 0)) {
    FUN_01e7ed84(auStack_8);
    (**(code **)(*plVar1 + 0x68))(plVar1,auStack_8);
    FUN_01e7ee80(auStack_8);
  }
  return;
}


