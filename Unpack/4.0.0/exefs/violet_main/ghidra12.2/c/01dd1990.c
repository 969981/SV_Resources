/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dd1990; name: FUN_01dd1990
 */


void FUN_01dd1990(long param_1,undefined4 *param_2)

{
  if (*(char *)(param_1 + 500) == '\0') {
    return;
  }
  FUN_01dd19e0(*param_2,param_1 + 0x1ec);
  FUN_01dd19e0(param_2[1],param_1 + 0x1f0);
  FUN_01dd1a34(param_1);
  return;
}


