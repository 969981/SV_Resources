/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024a9880; name: FUN_024a9880
 */


void FUN_024a9880(undefined8 *param_1,long param_2)

{
  FUN_024a98cc(param_2 + 0x20,*(undefined8 *)(param_2 + 0x28));
  FUN_024a9920(param_2);
                    /* WARNING: Could not recover jumptable at 0x024a98c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_2,0x50,0x10);
  return;
}


