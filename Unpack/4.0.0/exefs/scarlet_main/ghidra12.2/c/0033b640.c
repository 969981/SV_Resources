/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0033b640; name: FUN_0033b640
 */


void FUN_0033b640(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 auStack_40 [32];
  
  lVar5 = param_1[0x2d];
  if (lVar5 != 0) {
                    /* try { // try from 0033b65c to 0033b67b has its CatchHandler @ 0033b854 */
    FUN_003673f0(auStack_40,"Subchannel destroyed");
    FUN_00344ea0(lVar5 + 0xd0,1,auStack_40);
                    /* try { // try from 0033b680 to 0033b68f has its CatchHandler @ 0033b858 */
    FUN_003405b0(param_1[0x2d],4);
  }
  FUN_00343d90(param_1[2]);
  puVar4 = (undefined8 *)param_1[9];
  param_1[9] = 0;
  if (puVar4 != (undefined8 *)0x0) {
                    /* try { // try from 0033b6a4 to 0033b6a7 has its CatchHandler @ 0033b84c */
    (**(code **)*puVar4)();
  }
                    /* try { // try from 0033b6ac to 0033b6af has its CatchHandler @ 0033b858 */
  FUN_00358200(param_1[3]);
  lVar5 = param_1[1];
  if (lVar5 != 0) {
    FUN_003413ec(lVar5);
    FUN_0049e790(PTR_LAB_047cba48,lVar5);
  }
  puVar4 = (undefined8 *)param_1[0x2d];
  if (puVar4 != (undefined8 *)0x0) {
    plVar1 = puVar4 + 1;
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
      (**(code **)*puVar4)(puVar4);
      FUN_0049e790(PTR_LAB_047cba48,puVar4);
    }
  }
  FUN_0033d0cc(param_1 + 0x16,param_1[0x17]);
  FUN_0033d134(param_1 + 0x13,param_1[0x14]);
  puVar4 = (undefined8 *)param_1[0x11];
  param_1[0x13] = param_1 + 0x14;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar1 = puVar4 + 1;
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
      (**(code **)*puVar4)(puVar4);
      FUN_0049e790(PTR_LAB_047cba48,puVar4);
      puVar4 = (undefined8 *)param_1[0xc];
      goto joined_r0x0033b738;
    }
  }
  puVar4 = (undefined8 *)param_1[0xc];
joined_r0x0033b738:
  if (puVar4 != (undefined8 *)0x0) {
    plVar1 = puVar4 + 1;
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
      (**(code **)*puVar4)(puVar4);
      FUN_0049e790(PTR_LAB_047cba48,puVar4);
    }
  }
  puVar4 = (undefined8 *)param_1[9];
  param_1[9] = 0;
  if (puVar4 != (undefined8 *)0x0) {
                    /* try { // try from 0033b768 to 0033b76b has its CatchHandler @ 0033b848 */
    (**(code **)*puVar4)();
  }
                    /* try { // try from 0033b770 to 0033b773 has its CatchHandler @ 0033b850 */
  FUN_0038db20(param_1 + 4);
  param_1 = (undefined8 *)*param_1;
  if (param_1 != (undefined8 *)0x0) {
    plVar1 = param_1 + 1;
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
      (**(code **)*param_1)(param_1);
      FUN_0049e790(PTR_LAB_047cba48,param_1);
      return;
    }
  }
  return;
}


