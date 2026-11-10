/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0349c38c; name: FUN_0349c38c
 */


void FUN_0349c38c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x1b0);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(param_1 + 8) & 0x11) == 0) {
      (**(code **)(*(long *)(param_1 + 0x150) + 0x10))(param_1 + 0x150);
      (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3,param_4,param_5);
    }
    else if ((*(byte *)(param_1 + 0xc) & 0x11) == 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  plVar1 = *(long **)(param_1 + 0x218);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(param_1 + 8) & 0x12) == 0) {
      (**(code **)(*(long *)(param_1 + 0x1b8) + 0x10))(param_1 + 0x1b8);
      (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3,param_4,param_5);
    }
    else if ((*(byte *)(param_1 + 0xc) & 0x12) == 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  plVar1 = *(long **)(param_1 + 0x280);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(param_1 + 8) & 0x14) == 0) {
      (**(code **)(*(long *)(param_1 + 0x220) + 0x10))(param_1 + 0x220);
      (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3,param_4,param_5);
    }
    else if ((*(byte *)(param_1 + 0xc) & 0x14) == 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  plVar1 = *(long **)(param_1 + 0x2e8);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(param_1 + 8) & 0x18) == 0) {
      (**(code **)(*(long *)(param_1 + 0x288) + 0x10))(param_1 + 0x288);
      (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3,param_4,param_5);
    }
    else if ((*(byte *)(param_1 + 0xc) & 0x18) == 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
  return;
}


