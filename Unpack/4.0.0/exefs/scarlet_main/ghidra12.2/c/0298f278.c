/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0298f278; name: FUN_0298f278
 */


void FUN_0298f278(long *param_1,long param_2)

{
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  *(undefined2 *)((long)param_1 + 0xc) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0298f290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}


