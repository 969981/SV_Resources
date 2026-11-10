/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0035e970; name: FUN_0035e970
 */


void FUN_0035e970(long *param_1)

{
  undefined *puVar1;
  void *__ptr;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  __ptr = (void *)*param_1;
  if ((__ptr != (void *)0x0) && (0 < (int)param_1[2])) {
    lVar3 = 0;
                    /* try { // try from 0035e99c to 0035e99f has its CatchHandler @ 0035ea3c */
    for (lVar4 = 1; FUN_00368470((long)__ptr + lVar3), lVar4 < (int)param_1[2]; lVar4 = lVar4 + 1) {
      __ptr = (void *)*param_1;
      lVar3 = lVar3 + 0x140;
    }
    __ptr = (void *)*param_1;
  }
                    /* try { // try from 0035e9c0 to 0035e9cb has its CatchHandler @ 0035ea20 */
  free(__ptr);
  free((void *)param_1[1]);
  puVar1 = PTR_LAB_047cba48;
  plVar2 = (long *)param_1[0xb];
  while (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
    FUN_0049e790(puVar1);
  }
  lVar3 = param_1[9];
  param_1[9] = 0;
  if (lVar3 != 0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
                    /* try { // try from 0035ea0c to 0035ea0f has its CatchHandler @ 0035ea1c */
  FUN_0038db20(param_1 + 3);
  return;
}


