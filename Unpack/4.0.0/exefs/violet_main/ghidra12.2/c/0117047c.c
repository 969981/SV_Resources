/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


