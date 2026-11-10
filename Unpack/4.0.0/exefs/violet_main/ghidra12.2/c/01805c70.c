/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01805c70; name: FUN_01805c70
 */


void FUN_01805c70(char *param_1,long param_2,undefined8 param_3)

{
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    FUN_00d4ca00(*(long *)(param_1 + 8) + param_2,param_3);
    return;
  }
  return;
}


