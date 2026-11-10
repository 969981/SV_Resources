/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01be34ac; name: FUN_01be34ac
 */


void FUN_01be34ac(char *param_1,long param_2,long param_3)

{
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    param_2 = *(long *)(param_1 + 8) + param_2;
    FUN_00d0a71c(param_2 + 8,param_3 + 8);
    *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_3 + 0x28);
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
  }
  return;
}


