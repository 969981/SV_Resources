/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002f3180; name: FUN_002f3180
 */


void FUN_002f3180(long *param_1)

{
  undefined8 *__ptr;
  
  *param_1 = (long)(PTR_DAT_047cc9b8 + 0x10);
                    /* try { // try from 002f31a0 to 002f31a3 has its CatchHandler @ 002f31e4 */
  free((void *)param_1[4]);
  __ptr = (undefined8 *)param_1[3];
  if (__ptr != (undefined8 *)0x0) {
                    /* try { // try from 002f31b0 to 002f31bb has its CatchHandler @ 002f31e0 */
    free((void *)*__ptr);
    free((void *)__ptr[1]);
                    /* try { // try from 002f31bc to 002f31d3 has its CatchHandler @ 002f31e4 */
    free(__ptr);
  }
  if ((code *)param_1[7] != (code *)0x0) {
    (*(code *)param_1[7])(param_1[6]);
  }
  return;
}


