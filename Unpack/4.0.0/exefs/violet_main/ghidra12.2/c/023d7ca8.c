/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 023d7ca8; name: FUN_023d7ca8
 */


undefined8 FUN_023d7ca8(long *param_1)

{
  undefined8 *puVar1;
  
  if ((*param_1 != 0) && (puVar1 = *(undefined8 **)(*param_1 + 8), puVar1 != (undefined8 *)0x0)) {
    FUN_023d8018();
    do {
      if (puVar1 == &DAT_04848928) {
        return 1;
      }
      puVar1 = (undefined8 *)*puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  }
  return 0;
}


