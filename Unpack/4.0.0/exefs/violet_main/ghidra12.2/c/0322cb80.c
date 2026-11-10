/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0322cb80; name: FUN_0322cb80
 */


void FUN_0322cb80(long param_1)

{
  FUN_0322c8e0();
  if ((*(ulong *)(param_1 + 0x28) & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0322cbc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_DAT_047d1a08 + 8))(0,*(ulong *)(param_1 + 0x28) - 1,0);
  return;
}


