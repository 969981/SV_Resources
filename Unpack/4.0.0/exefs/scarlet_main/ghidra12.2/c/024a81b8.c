/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024a81b8; name: FUN_024a81b8
 */


void FUN_024a81b8(undefined8 *param_1,long param_2)

{
  FUN_024a8204(param_2 + 0x20,*(undefined8 *)(param_2 + 0x28));
  FUN_024a8258(param_2);
                    /* WARNING: Could not recover jumptable at 0x024a8200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_2,0x50,0x10);
  return;
}


