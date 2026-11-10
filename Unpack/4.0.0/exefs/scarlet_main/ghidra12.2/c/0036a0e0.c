/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0036a0e0; name: FUN_0036a0e0
 */


void FUN_0036a0e0(undefined8 param_1,long *param_2,undefined4 param_3)

{
  long lVar1;
  ulong uVar2;
  void *__ptr;
  void *local_20;
  undefined8 local_18;
  
  lVar1 = (long)param_2 + 9;
  if (*param_2 != 0) {
    lVar1 = param_2[2];
  }
  uVar2 = param_2[1] & 0xff;
  if (*param_2 != 0) {
    uVar2 = param_2[1];
  }
  local_20 = (void *)FUN_0038ce30(lVar1,uVar2,param_3,&local_18);
                    /* try { // try from 0036a11c to 0036a127 has its CatchHandler @ 0036a148 */
  FUN_00367820(param_1,&local_20,local_18);
  __ptr = local_20;
  local_20 = (void *)0x0;
  if (__ptr != (void *)0x0) {
                    /* try { // try from 0036a134 to 0036a137 has its CatchHandler @ 0036a144 */
    free(__ptr);
  }
  return;
}


