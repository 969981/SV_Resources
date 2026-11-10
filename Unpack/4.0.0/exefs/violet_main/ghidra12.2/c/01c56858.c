/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c56858; name: FUN_01c56858
 */


void FUN_01c56858(undefined1 *param_1,undefined8 param_2,undefined2 param_3)

{
  undefined1 *puVar1;
  undefined1 local_30 [16];
  undefined2 local_4 [2];
  
  puVar1 = &LAB_00968020;
  if (DAT_04815c18 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_4[0] = param_3;
  local_30 = FUN_01c5782c(param_2,puVar1,0,local_4);
  *param_1 = 1;
  FUN_01c5786c(param_1 + 8,local_30);
  return;
}


