/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c54664; name: FUN_01c54664
 */


void FUN_01c54664(char *param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 *puVar2;
  
  lVar1 = 6;
  if (DAT_04815b48 == '\0') {
    lVar1 = -1;
  }
  puVar2 = (undefined4 *)FUN_01c55218(param_2);
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    *(undefined4 *)(*(long *)(param_1 + 8) + lVar1) = *puVar2;
  }
  return;
}


