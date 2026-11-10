/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029d1180; name: FUN_029d1180
 */


void FUN_029d1180(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  if ((*(long **)(param_1 + 0x70) != (long *)0x0) &&
     (uVar1 = (**(code **)(**(long **)(param_1 + 0x70) + 0x70))(), (uVar1 & 1) != 0)) {
    (**(code **)(**(long **)(param_1 + 0x70) + 0xb0))
              (*(long **)(param_1 + 0x70),param_2,param_3,param_1);
  }
  if ((*(long **)(param_1 + 0x78) == (long *)0x0) ||
     (uVar1 = (**(code **)(**(long **)(param_1 + 0x78) + 0x70))(), (uVar1 & 1) == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x029d120c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x78) + 0xb0))
            (*(long **)(param_1 + 0x78),param_2,param_3,param_1);
  return;
}


