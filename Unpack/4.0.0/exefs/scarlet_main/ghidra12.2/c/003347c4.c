/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003347c4; name: FUN_003347c4
 */


void FUN_003347c4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  *param_1 = (long)(PTR_DAT_047ccc60 + 0x10);
  plVar6 = param_1 + 9;
  if (*plVar6 != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00334890 to 00334897 has its CatchHandler @ 00334898 */
    abort();
  }
  if (param_1[0xd] != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar7 = (undefined8 *)param_1[0xc];
  param_1[0xd] = 0;
  if (puVar7 != (undefined8 *)0x0) {
    plVar1 = puVar7 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)*puVar7)(puVar7);
      FUN_0049e790(PTR_LAB_047cba48,puVar7);
      pvVar4 = (void *)param_1[0xb];
      param_1[0xb] = 0;
      goto joined_r0x00334820;
    }
  }
  pvVar4 = (void *)param_1[0xb];
  param_1[0xb] = 0;
joined_r0x00334820:
  if (pvVar4 != (void *)0x0) {
                    /* try { // try from 00334824 to 00334827 has its CatchHandler @ 003348dc */
    free(pvVar4);
  }
  puVar7 = (undefined8 *)*plVar6;
  *plVar6 = 0;
  if (puVar7 != (undefined8 *)0x0) {
                    /* try { // try from 0033483c to 0033483f has its CatchHandler @ 003348d8 */
    (**(code **)*puVar7)();
  }
  pvVar4 = (void *)param_1[7];
  param_1[7] = 0;
  if (pvVar4 != (void *)0x0) {
                    /* try { // try from 0033484c to 0033484f has its CatchHandler @ 003348d4 */
    free(pvVar4);
  }
  FUN_0032d30c(param_1);
  return;
}


