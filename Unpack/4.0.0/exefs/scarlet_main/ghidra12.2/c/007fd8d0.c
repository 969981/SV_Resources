/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007fd8d0; name: FUN_007fd8d0
 */


void FUN_007fd8d0(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00799c50();
                    /* WARNING: Could not recover jumptable at 0x007fd908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar1 + 0x1318) + 0x10))
            (param_1,*(long **)(lVar1 + 0x1318),param_2 + 0x410,param_2 + 0x1b0,
             *(undefined8 *)(param_2 + 0x770));
  return;
}


