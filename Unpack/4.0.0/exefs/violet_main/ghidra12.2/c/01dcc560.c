/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dcc560; name: FUN_01dcc560
 */


void FUN_01dcc560(long *param_1)

{
  undefined8 *puVar1;
  
  if ((*param_1 != 0) &&
     (puVar1 = (undefined8 *)FUN_00e895f4(*(undefined8 *)(*param_1 + 0x170)),
     puVar1 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)*puVar1 + 0x20))((long *)*puVar1,1);
    (**(code **)(*(long *)*puVar1 + 0xe0))();
    *(undefined1 *)((long)puVar1 + 0x31) = 0;
    if ((undefined1 *)puVar1[7] != (undefined1 *)0x0) {
      *(undefined1 *)puVar1[7] = 1;
    }
  }
  return;
}


