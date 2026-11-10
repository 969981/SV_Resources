/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022a2464; name: FUN_022a2464
 */


void FUN_022a2464(char *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = 0x10;
  if (DAT_04843b00 == '\0') {
    lVar1 = -1;
  }
  puVar2 = (undefined8 *)FUN_0229dd44(param_2);
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    *(undefined8 *)(*(long *)(param_1 + 8) + lVar1) = *puVar2;
  }
  return;
}


