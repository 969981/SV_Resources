/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0025da98; name: FUN_0025da98
 */


void FUN_0025da98(undefined8 param_1,long param_2,char *param_3)

{
  char *__s;
  size_t sVar1;
  ulong uVar2;
  undefined8 uVar3;
  int local_e8 [20];
  byte local_98;
  char acStack_97 [15];
  char *local_88;
  
  nn::os::LockMutex((MutexType *)(param_2 + 200));
  sVar1 = strlen(param_3);
                    /* try { // try from 0025dad0 to 0025dad7 has its CatchHandler @ 0025db94 */
  FUN_01f77cc0(param_2 + 0x98,param_3,sVar1);
  if ((*(long **)(param_2 + 0xb8) != (long *)0x0) &&
     (uVar2 = (**(code **)(**(long **)(param_2 + 0xb8) + 0x20))(), (uVar2 & 1) != 0)) {
    uVar3 = (**(code **)(**(long **)(param_2 + 0xb8) + 0x38))();
                    /* try { // try from 0025db08 to 0025db0f has its CatchHandler @ 0025db7c */
    FUN_001fc604(local_e8,uVar3);
    if (local_e8[0] == 0) {
      __s = acStack_97;
      if ((local_98 & 1) != 0) {
        __s = local_88;
      }
      sVar1 = strlen(__s);
                    /* try { // try from 0025db3c to 0025db47 has its CatchHandler @ 0025db78 */
      FUN_01f77cc0(param_2 + 0x78,__s,sVar1);
    }
    FUN_001fc7e8(local_e8);
  }
                    /* try { // try from 0025db50 to 0025db5b has its CatchHandler @ 0025db80 */
  FUN_00203970(param_1,param_2 + 0x78);
  nn::os::UnlockMutex((MutexType *)(param_2 + 200));
  return;
}


