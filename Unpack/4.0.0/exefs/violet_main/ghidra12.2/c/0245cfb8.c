/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0245cfb8; name: FUN_0245cfb8
 */


void FUN_0245cfb8(undefined8 param_1,char *param_2)

{
  if (param_2 == (char *)0x0) {
    return;
  }
  if (*param_2 == '\x01') {
    FUN_0245e704(param_2 + 8);
  }
  FUN_0245eb74(param_1,param_2);
  return;
}


