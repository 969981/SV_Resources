/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03509490; name: FUN_03509490
 */


void FUN_03509490(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  if (*(long **)(param_1 + 0x78) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x78) + 0x68))();
    puVar2 = *(undefined8 **)(param_1 + 0x78);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,puVar2);
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  if (*(long **)(param_1 + 0x80) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x80) + 0x68))();
    puVar2 = *(undefined8 **)(param_1 + 0x80);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,puVar2);
    }
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  if (*(long **)(param_1 + 0x88) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x88) + 0x68))();
    puVar2 = *(undefined8 **)(param_1 + 0x88);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,puVar2);
    }
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  if (*(long **)(param_1 + 0x90) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x90) + 0x68))();
    puVar2 = *(undefined8 **)(param_1 + 0x90);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,puVar2);
    }
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  puVar1 = PTR_PTR_047e71e0;
  if (*(long *)(param_1 + 0x10) != 0) {
    (**(code **)(*(long *)PTR_PTR_047e71e0 + 0x18))(PTR_PTR_047e71e0);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  return;
}


