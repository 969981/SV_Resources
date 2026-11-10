/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002d689c; name: FUN_002d689c
 */


undefined8 FUN_002d689c(long *param_1,long param_2,long *param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  if (*param_3 != 0) {
    return 1;
  }
  iVar1 = pthread_rwlock_wrlock((pthread_rwlock_t *)(param_1 + 2));
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*param_3 == 0) {
    puVar3 = (undefined4 *)param_1[8];
    *puVar3 = 0;
    puVar3[0xc] = puVar3[10];
    lVar2 = 0xc;
    if (*(char *)(param_2 + 0x20) != '\0') {
      lVar2 = 8;
    }
                    /* try { // try from 002d690c to 002d692b has its CatchHandler @ 002d6968 */
    FUN_002d50dc(param_1,puVar3,*(undefined4 *)(*param_1 + lVar2),param_4);
    lVar2 = FUN_002d47a0(param_1,param_1[8],0,param_4);
    if (lVar2 == 0) {
      uVar4 = 0;
      goto LAB_002d6938;
    }
    *param_3 = lVar2;
  }
  uVar4 = 1;
LAB_002d6938:
                    /* try { // try from 002d6938 to 002d693f has its CatchHandler @ 002d6988 */
  iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)(param_1 + 2));
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002d6964 to 002d6967 has its CatchHandler @ 002d6988 */
    abort();
  }
  return uVar4;
}


