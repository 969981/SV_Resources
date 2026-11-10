/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028ccc1c; name: FUN_028ccc1c
 */


void FUN_028ccc1c(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  (**(code **)(*param_1 + 0x88))(param_1,0);
  puVar1 = (undefined8 *)param_1[0x81];
  for (puVar2 = (undefined8 *)param_1[0x80]; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_028ccc68(*puVar2);
  }
  return;
}


