/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ea74c4; name: FUN_01ea74c4
 */


long * FUN_01ea74c4(long param_1,long *param_2)

{
  undefined8 *puVar2;
  undefined8 *puVar1;
  
  if (*(undefined8 **)(param_1 + 0x1b8) != *(undefined8 **)(param_1 + 0x1c0)) {
    puVar1 = *(undefined8 **)(param_1 + 0x1b8);
    do {
      puVar2 = puVar1 + 4;
      if (*(long *)*puVar1 == *param_2) {
        return (long *)*puVar1;
      }
      puVar1 = puVar2;
    } while (*(undefined8 **)(param_1 + 0x1c0) != puVar2);
  }
  return (long *)0x0;
}


