/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00307d50; name: FUN_00307d50
 */


void FUN_00307d50(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined1 auStack_18 [8];
  
  lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x1360);
  if (lVar4 == 0) goto LAB_00307d9c;
  if (*(char *)(*(long *)(param_1 + 8) + 0xc48) == '\0') {
    if (*(char *)(param_1 + 0x1b6) == '\0') goto LAB_00307d88;
LAB_00307d78:
    plVar5 = (long *)(lVar4 + 0x40);
  }
  else {
    if (*(char *)(param_1 + 0x1b5) != '\0') goto LAB_00307d78;
LAB_00307d88:
    plVar5 = (long *)(lVar4 + 0x48);
  }
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_00307d9c:
  if ((*(char *)(param_1 + 0x1b0) == '\0') || (*(char *)(param_1 + 0x1b1) == '\0')) {
    if (*(int *)(param_1 + 0xa0) != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
                    /* try { // try from 00307dbc to 00307eab has its CatchHandler @ 00307f88 */
    if ((*(int *)(param_1 + 0xa0) != 0) &&
       (lVar4 = FUN_003198f0(*(long *)(param_1 + 8) + 0xa0), lVar4 != 0)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  FUN_00368470(param_1 + 0x798);
  FUN_00368470(param_1 + 0x658);
  if (*(int *)(param_1 + 0xab8) != 0) {
    FUN_00368470(param_1 + 0xae8);
  }
  if (*(int *)(param_1 + 0xabc) != 1) {
    FUN_00368470(param_1 + 0xc18);
  }
  FUN_00319560(*(undefined8 *)(param_1 + 8),param_1);
  FUN_00319690(*(undefined8 *)(param_1 + 8),param_1);
  if ((((*(char *)(param_1 + 0x98) != '\0') || (*(char *)(param_1 + 0x99) != '\0')) ||
      (*(char *)(param_1 + 0x9a) != '\0')) ||
     ((*(char *)(param_1 + 0x9b) != '\0' || (*(char *)(param_1 + 0x9c) != '\0')))) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00307f58 to 00307f5b has its CatchHandler @ 00307f78 */
    abort();
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00307f5c to 00307f77 has its CatchHandler @ 00307f88 */
    abort();
  }
  if (*(long *)(param_1 + 0xd0) != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(long *)(param_1 + 200) != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(long *)(param_1 + 0x148) != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(long *)(param_1 + 0x160) != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(long *)(param_1 + 0x170) != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_00368470(param_1 + 0x970);
  if (4 < *(ulong *)(param_1 + 0x1b8)) {
    FUN_00350fd0();
  }
  if (4 < *(ulong *)(param_1 + 0x1c0)) {
    FUN_00350fd0();
  }
  if (4 < *(ulong *)(param_1 + 0x8e0)) {
    FUN_00350fd0();
  }
  (*(code *)**(undefined8 **)(param_1 + 0x940))(param_1 + 0x940);
  lVar4 = *(long *)(param_1 + 8);
  if (*(long *)(lVar4 + 0x20) != 0) {
                    /* try { // try from 00307ec8 to 00307ecf has its CatchHandler @ 00307f88 */
    FUN_00359d00(*(long *)(lVar4 + 0x20),0x3c00);
    lVar4 = *(long *)(param_1 + 8);
  }
  plVar5 = (long *)(lVar4 + 8);
  do {
    lVar6 = *plVar5;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar6 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if ((lVar4 != 0) && (lVar6 == 1)) {
    FUN_003065d4(lVar4);
    FUN_0049e790(PTR_LAB_047cba48,lVar4);
  }
                    /* try { // try from 00307f10 to 00307f1b has its CatchHandler @ 00307f80 */
  FUN_0035351c(auStack_18,*(undefined8 *)(param_1 + 0x40),0);
  FUN_0030f1b8(param_1 + 0x908);
                    /* try { // try from 00307f28 to 00307f33 has its CatchHandler @ 00307f84 */
  FUN_00377160(param_1 + 0x570);
  FUN_00377160(param_1 + 0x330);
  puVar3 = *(undefined8 **)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  if (puVar3 != (undefined8 *)0x0) {
                    /* try { // try from 00307f48 to 00307f4b has its CatchHandler @ 00307f7c */
    (**(code **)*puVar3)();
  }
  return;
}


