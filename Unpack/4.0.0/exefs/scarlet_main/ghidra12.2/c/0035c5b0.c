/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0035c5b0; name: FUN_0035c5b0
 */


void FUN_0035c5b0(long *param_1,int param_2,long param_3)

{
  long lVar1;
  void *__ptr;
  long lVar2;
  
  *(int *)(param_1 + 2) = param_2;
  *(int *)((long)param_1 + 0x14) = param_2;
  FUN_0038db00(param_1 + 3);
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = param_3;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  *(undefined2 *)((long)param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
                    /* try { // try from 0035c60c to 0035c61b has its CatchHandler @ 0035c6a0 */
  lVar1 = FUN_0038c780(((long)param_2 + (long)param_2 * 4) * 0x40);
  *param_1 = lVar1;
  lVar1 = FUN_0038c780((long)param_2 << 3);
  param_1[1] = lVar1;
  __ptr = (void *)*param_1;
  if ((lVar1 == 0) || (__ptr == (void *)0x0)) {
                    /* try { // try from 0035c67c to 0035c687 has its CatchHandler @ 0035c6a0 */
    free(__ptr);
    free((void *)param_1[1]);
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  else if (0 < (int)param_1[2]) {
    lVar2 = 0;
    lVar1 = 0;
    while( true ) {
      *(undefined8 *)((long)__ptr + lVar2 + 0x128) = 0;
      *(undefined8 *)((long)__ptr + lVar2 + 0x130) = 0;
      *(undefined8 *)((long)__ptr + lVar2 + 0x138) = 0;
                    /* try { // try from 0035c650 to 0035c653 has its CatchHandler @ 0035c6a4 */
      FUN_00368450();
      *(long *)(param_1[1] + lVar1 * 8) = *param_1 + lVar2;
      lVar1 = lVar1 + 1;
      if ((int)param_1[2] <= lVar1) break;
      __ptr = (void *)*param_1;
      lVar2 = lVar2 + 0x140;
    }
  }
  return;
}


