/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02545bac; name: FUN_02545bac
 */


undefined8 FUN_02545bac(long *param_1)

{
  undefined8 *puVar1;
  
  if ((*param_1 != 0) && (puVar1 = *(undefined8 **)(*param_1 + 8), puVar1 != (undefined8 *)0x0)) {
    FUN_02545f1c();
    do {
      if (puVar1 == (undefined8 *)PTR_DAT_047dd9b8) {
        return 1;
      }
      puVar1 = (undefined8 *)*puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  }
  return 0;
}


