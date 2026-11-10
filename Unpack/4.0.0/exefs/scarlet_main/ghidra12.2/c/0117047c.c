/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0117047c; name: FUN_0117047c
 */


void FUN_0117047c(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 uStack_38;
  
  puVar2 = (undefined8 *)(param_1 + 0x18);
  plVar1 = (long *)(**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,0x50,0x10);
  if (plVar1 == (long *)0x0) {
    (**(code **)(*(long *)*puVar2 + 0xe8))();
  }
  *plVar1 = 0;
  uStack_38 = 1;
  local_40 = puVar2;
  FUN_011705d0(puVar2,plVar1 + 2,param_2);
  *plVar1 = param_1;
  puVar2 = *(undefined8 **)(param_1 + 8);
  plVar1[1] = (long)puVar2;
  *puVar2 = plVar1;
  *(long **)(param_1 + 8) = plVar1;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
  local_48 = 0;
  FUN_01170528(&local_48);
  return;
}


