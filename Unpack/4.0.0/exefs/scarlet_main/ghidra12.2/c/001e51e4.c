/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001e51e4; name: FUN_001e51e4
 */


undefined8 FUN_001e51e4(long param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  if ((param_1 == 0) || (*(long *)(*(long *)(param_1 + 0x420) + 0x30) == 0)) {
    *param_2 = 1;
    return 0;
  }
  *param_2 = 0;
                    /* WARNING: Could not recover jumptable at 0x001e5200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(long *)(param_1 + 0x420) + 0x30))();
  return uVar1;
}


