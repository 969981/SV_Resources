/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017a0190; name: FUN_017a0190
 */


void FUN_017a0190(long param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x40) = *param_2;
  FUN_017a01cc(param_1 + 0x48,*(undefined8 *)(param_2 + 2));
  FUN_017a01cc(param_1 + 0x50,*(undefined8 *)(param_2 + 4));
  return;
}


