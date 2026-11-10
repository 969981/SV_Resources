/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0178d850; name: FUN_0178d850
 */


long FUN_0178d850(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  
  if ((ulong)param_1[1] < param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar1 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,param_2 * 0x18,8);
  if (lVar1 == 0) {
    (**(code **)(*(long *)*param_1 + 0xe8))();
  }
  return lVar1;
}


