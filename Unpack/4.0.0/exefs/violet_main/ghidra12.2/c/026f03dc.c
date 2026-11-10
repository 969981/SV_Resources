/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026f03dc; name: FUN_026f03dc
 */


void FUN_026f03dc(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\0') {
    return;
  }
  FUN_026f041c();
  FUN_026f04fc(param_1);
  FUN_026f071c(param_1);
  return;
}


