/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002d5730; name: FUN_002d5730
 */


undefined8 FUN_002d5730(long param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = pthread_rwlock_wrlock((pthread_rwlock_t *)(param_1 + 0x10));
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* try { // try from 002d5758 to 002d5767 has its CatchHandler @ 002d5798 */
  uVar2 = FUN_002d57b8(param_1,param_2,param_3);
                    /* try { // try from 002d576c to 002d5773 has its CatchHandler @ 002d5794 */
  iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)(param_1 + 0x10));
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002d5790 to 002d5793 has its CatchHandler @ 002d5794 */
    abort();
  }
  return uVar2;
}


