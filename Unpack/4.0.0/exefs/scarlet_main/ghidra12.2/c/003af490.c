/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003af490; name: FUN_003af490
 */


void FUN_003af490(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x003af4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x550) + 0x1e8))
            (param_1,0,param_2,param_3,param_4,param_5,
             *(undefined8 *)(*(long *)(param_1 + 0x550) + 0x1f8));
  return;
}


