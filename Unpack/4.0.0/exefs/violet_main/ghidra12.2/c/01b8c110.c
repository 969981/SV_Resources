/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b8c110; name: FUN_01b8c110
 */


void FUN_01b8c110(char *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = 0xb4;
  if (DAT_0480bd50 == '\0') {
    lVar1 = -1;
  }
  puVar2 = (undefined8 *)FUN_01b8c6c0(param_2);
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    *(undefined8 *)(*(long *)(param_1 + 8) + lVar1) = *puVar2;
  }
  return;
}


