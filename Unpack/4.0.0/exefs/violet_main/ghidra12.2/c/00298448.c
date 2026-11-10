/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00298448; name: FUN_00298448
 */


void FUN_00298448(long *param_1)

{
  char cVar1;
  bool bVar2;
  void *__ptr;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  *param_1 = (long)(PTR_DAT_047cc640 + 0x10);
  if (param_1[3] != 0) {
    uVar6 = 0;
    do {
      lVar7 = param_1[5];
      if (*(char *)(lVar7 + uVar6 * 0x30 + 0x28) != '\0') {
        puVar3 = *(undefined8 **)(lVar7 + uVar6 * 0x30);
        if ((puVar3 != (undefined8 *)0x0) && (plVar4 = (long *)*puVar3, plVar4 != (long *)0x0)) {
          do {
            lVar5 = *plVar4;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar2) {
              *plVar4 = lVar5 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar5 + -1 == 0) {
                    /* try { // try from 002984c8 to 002984cb has its CatchHandler @ 00298500 */
            (*(code *)puVar3[3])(puVar3[4]);
          }
        }
        lVar7 = lVar7 + uVar6 * 0x30;
        __ptr = *(void **)(lVar7 + 0x20);
        *(undefined8 *)(lVar7 + 0x20) = 0;
        if (__ptr != (void *)0x0) {
                    /* try { // try from 002984dc to 002984df has its CatchHandler @ 00298504 */
          free(__ptr);
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (ulong)param_1[3]);
  }
                    /* try { // try from 002984e8 to 002984eb has its CatchHandler @ 002984fc */
  free((void *)param_1[5]);
  return;
}


