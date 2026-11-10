/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02198818; name: FUN_02198818
 */


void FUN_02198818(undefined1 *param_1,char *param_2)

{
  undefined1 auVar1 [16];
  
  if ((*param_2 == '\x04') && (*(long *)(param_2 + 8) != 0)) {
    auVar1 = FUN_02198860();
    *param_1 = 1;
    *(undefined1 (*) [16])(param_1 + 0x10) = auVar1;
  }
  else {
    *param_1 = 0;
  }
  return;
}


