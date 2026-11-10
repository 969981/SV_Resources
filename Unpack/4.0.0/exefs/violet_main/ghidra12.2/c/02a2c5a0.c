/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a2c5a0; name: FUN_02a2c5a0
 */


void FUN_02a2c5a0(long *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  undefined1 local_4 [4];
  
  lVar2 = *param_1;
  iVar1 = atoi((char *)*param_2);
  local_4[0] = (undefined1)iVar1;
  FUN_02a28048(lVar2 + 0xc0,local_4);
  return;
}


