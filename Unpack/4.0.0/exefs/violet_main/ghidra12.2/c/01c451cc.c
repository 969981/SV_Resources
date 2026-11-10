/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c451cc; name: FUN_01c451cc
 */


void FUN_01c451cc(char *param_1,long param_2,long param_3)

{
  if (*param_1 == '\x01') {
    FUN_01c45390(param_1 + 8,param_2,param_3);
    return;
  }
  if ((*param_1 == '\0') && (*(long *)(param_1 + 8) != 0)) {
    param_2 = *(long *)(param_1 + 8) + param_2;
    FUN_00d8e6c4(param_2,param_3);
    FUN_01c45238(param_2 + 0x10,*(undefined8 *)(param_3 + 0x10));
    return;
  }
  return;
}


