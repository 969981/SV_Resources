/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c0e53c; name: FUN_01c0e53c
 */


void FUN_01c0e53c(char *param_1,long param_2,undefined8 param_3)

{
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    FUN_01afa108(*(long *)(param_1 + 8) + param_2,param_3);
  }
  return;
}


