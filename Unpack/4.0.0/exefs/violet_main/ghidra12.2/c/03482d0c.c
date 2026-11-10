/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03482d0c; name: FUN_03482d0c
 */


bool FUN_03482d0c(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(2,0x18);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = 0;
    }
    *(undefined8 **)(param_1 + 0x10) = puVar1;
  }
  return puVar1 != (undefined8 *)0x0;
}


