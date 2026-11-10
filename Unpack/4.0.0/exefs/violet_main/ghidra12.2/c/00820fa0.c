/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00820fa0; name: FUN_00820fa0
 */


void FUN_00820fa0(void)

{
  void *__ptr;
  void *pvVar1;
  void *pvStack_18;
  
  if (DAT_047fb940 != (void *)0x0) {
                    /* try { // try from 00820fb4 to 00820fbf has its CatchHandler @ 00821018 */
    pthread_mutex_lock((pthread_mutex_t *)&DAT_044e8a80);
    __ptr = DAT_047fb940;
    if (DAT_047fb940 == (void *)0x0) {
                    /* try { // try from 00820ffc to 00821007 has its CatchHandler @ 00821018 */
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_044e8a80);
    }
    else {
      DAT_047fb940 = (void *)0x0;
                    /* try { // try from 00820fcc to 00820fd7 has its CatchHandler @ 00821014 */
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_044e8a80);
      do {
                    /* try { // try from 00820fdc to 00820fe3 has its CatchHandler @ 00821020 */
        pthread_join(*(pthread_t *)((long)__ptr + 0x18),&pvStack_18);
        pvVar1 = *(void **)((long)__ptr + 0x28);
                    /* try { // try from 00820fe8 to 00820fef has its CatchHandler @ 0082101c */
        free(__ptr);
        __ptr = pvVar1;
      } while (pvVar1 != (void *)0x0);
    }
  }
  return;
}


