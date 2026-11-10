/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002f1180; name: FUN_002f1180
 */


bool FUN_002f1180(undefined8 *param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if (param_1 != (undefined8 *)0x0) {
    iVar2 = strcmp((char *)*param_1,"invalid");
    bVar1 = iVar2 != 0;
  }
  return bVar1;
}


