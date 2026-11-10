/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002d698c; name: FUN_002d698c
 */


uint FUN_002d698c(long param_1,long *param_2,undefined8 *param_3,byte param_4,byte param_5,
                 byte param_6,undefined1 *param_7,long *param_8,undefined8 param_9)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long local_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  long local_88;
  pthread_rwlock_t **pppStack_80;
  char local_78;
  long local_70;
  undefined8 uStack_68;
  pthread_rwlock_t *local_60;
  char local_58;
  
  *param_8 = 0;
  if (*(char *)(param_1 + 0xc) != '\0') {
    uVar3 = 0;
    *param_7 = 1;
    goto LAB_002d6b18;
  }
  local_60 = (pthread_rwlock_t *)(param_1 + 0x60);
  *param_7 = 0;
  local_58 = '\0';
  iVar2 = pthread_rwlock_rdlock(local_60);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lStack_a8 = param_2[1];
  local_b0 = *param_2;
  uStack_98 = param_3[1];
  uStack_a0 = *param_3;
  pppStack_80 = &local_60;
  local_78 = '\0';
  local_88 = 0;
  local_90._0_2_ = (ushort)(param_4 & 1);
  local_90 = CONCAT13(param_6,CONCAT12(param_5,(ushort)local_90)) & 0x101ffff;
  local_70 = 0;
  uStack_68 = param_9;
                    /* try { // try from 002d6a34 to 002d6a3f has its CatchHandler @ 002d6b48 */
  uVar4 = FUN_002d6698(param_1,&local_b0);
  if ((uVar4 & 1) == 0) {
LAB_002d6ad4:
    uVar3 = 0;
    *param_7 = 1;
  }
  else if (local_88 == 1) {
    uVar3 = 0;
  }
  else if (local_88 == 2) {
    uVar3 = 1;
    lVar1 = *param_2 + param_2[1];
    if (((param_5 ^ param_6) & 1) == 0) {
      lVar1 = *param_2;
    }
    *param_8 = lVar1;
  }
  else {
    uVar4 = (ulong)(byte)(local_90._2_1_ << 1 | local_90._1_1_ << 2 | local_90._3_1_);
                    /* try { // try from 002d6ac4 to 002d6acb has its CatchHandler @ 002d6b40 */
    uVar3 = (*(code *)(&PTR_LAB_04490d40)[uVar4 * 2])
                      (param_1 + (*(long *)(&DAT_04490d48 + uVar4 * 0x10) >> 1),&local_b0);
    if (local_78 != '\0') goto LAB_002d6ad4;
    *param_8 = local_70;
  }
  if (local_58 == '\0') {
    iVar2 = pthread_rwlock_unlock(local_60);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002d6b3c to 002d6b3f has its CatchHandler @ 002d6b44 */
      abort();
    }
  }
  else {
                    /* try { // try from 002d6aec to 002d6b13 has its CatchHandler @ 002d6b44 */
    iVar2 = pthread_rwlock_unlock(local_60);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
LAB_002d6b18:
  return uVar3 & 1;
}


