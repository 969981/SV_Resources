/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0038c510; name: FUN_0038c510
 */


void FUN_0038c510(void)

{
  char *pcVar1;
  void *pvVar2;
  size_t sVar3;
  undefined8 *__ptr;
  char *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  char *local_48;
  
  FUN_0038ed44(&local_48,&PTR_s_grpc_trace_044971c8);
  pcVar4 = local_48;
  pcVar1 = strchr(local_48,0x2c);
  if (pcVar1 == (char *)0x0) {
    lVar5 = 0;
    lVar8 = 0;
    sVar3 = strlen(pcVar4);
  }
  else {
    lVar5 = 0;
    lVar8 = 0;
    lVar7 = 8;
    do {
      sVar3 = (long)pcVar1 - (long)pcVar4;
      if (pcVar1 < pcVar4) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
                    /* try { // try from 0038c568 to 0038c56b has its CatchHandler @ 0038c6b8 */
      pvVar2 = (void *)FUN_0038c780(sVar3 + 1);
      memcpy(pvVar2,pcVar4,sVar3);
      *(undefined1 *)((long)pvVar2 + sVar3) = 0;
                    /* try { // try from 0038c580 to 0038c58b has its CatchHandler @ 0038c6b8 */
      lVar5 = FUN_0038c7f0(lVar5,lVar7);
      pcVar4 = pcVar1 + 1;
      *(void **)(lVar5 + lVar8 * 8) = pvVar2;
      lVar8 = lVar8 + 1;
      pcVar1 = strchr(pcVar4,0x2c);
      lVar7 = lVar7 + 8;
    } while (pcVar1 != (char *)0x0);
    sVar3 = strlen(pcVar4);
  }
  if ((long)sVar3 < 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0038c6a4 to 0038c6ab has its CatchHandler @ 0038c6b0 */
    abort();
  }
                    /* try { // try from 0038c5cc to 0038c5cf has its CatchHandler @ 0038c6b0 */
  pvVar2 = (void *)FUN_0038c780(sVar3 + 1);
  lVar7 = lVar8 + 1;
  memcpy(pvVar2,pcVar4,sVar3);
  *(undefined1 *)((long)pvVar2 + sVar3) = 0;
                    /* try { // try from 0038c5ec to 0038c5f3 has its CatchHandler @ 0038c6b0 */
  __ptr = (undefined8 *)FUN_0038c7f0(lVar5,lVar7 * 8);
  __ptr[lVar8] = pvVar2;
  if (lVar7 != 0) {
    puVar6 = __ptr;
    lVar8 = lVar7;
    do {
      while (pcVar4 = (char *)*puVar6, *pcVar4 == '-') {
        FUN_0038c3c8(pcVar4 + 1,0);
        lVar8 = lVar8 + -1;
        puVar6 = puVar6 + 1;
        if (lVar8 == 0) goto LAB_0038c648;
      }
      FUN_0038c3c8(pcVar4,1);
      lVar8 = lVar8 + -1;
      puVar6 = puVar6 + 1;
    } while (lVar8 != 0);
LAB_0038c648:
    puVar6 = __ptr;
    do {
                    /* try { // try from 0038c650 to 0038c653 has its CatchHandler @ 0038c6b4 */
      free((void *)*puVar6);
      lVar7 = lVar7 + -1;
      puVar6 = puVar6 + 1;
    } while (lVar7 != 0);
  }
                    /* try { // try from 0038c660 to 0038c667 has its CatchHandler @ 0038c6b0 */
  free(__ptr);
  pcVar4 = local_48;
  local_48 = (char *)0x0;
  if (pcVar4 != (char *)0x0) {
                    /* try { // try from 0038c674 to 0038c677 has its CatchHandler @ 0038c6ac */
    free(pcVar4);
  }
  return;
}


