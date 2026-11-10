/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003347a0; name: FUN_003347a0
 */


void FUN_003347a0(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
                    /* try { // try from 003347b4 to 003347b7 has its CatchHandler @ 003347c0 */
    free(__ptr);
  }
  return;
}


