/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017601b0; name: FUN_017601b0
 */


void FUN_017601b0(long param_1,long *param_2)

{
  long *plVar1;
  
  *(long **)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x20) = 0x128;
  plVar1 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x128,8);
  *(long **)(param_1 + 0x18) = plVar1;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01760244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0xe8))();
    return;
  }
  FUN_012d4af4(plVar1,0xd600000,param_2,param_2);
  *(long **)(param_1 + 8) = plVar1;
                    /* WARNING: Could not recover jumptable at 0x01760228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xe0))(plVar1,"PEHeapType::Main");
  return;
}


