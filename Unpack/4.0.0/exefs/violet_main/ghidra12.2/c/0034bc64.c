/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0034bc64; name: FUN_0034bc64
 */


void FUN_0034bc64(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
  FUN_0038db40(param_1 + 2);
  if (param_1[10] != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0034bdd0 to 0034bdd7 has its CatchHandler @ 0034bddc */
    abort();
  }
  if (*(char *)(param_1 + 6) != '\0') {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  param_1[0x1e] = param_2;
                    /* try { // try from 0034bcb8 to 0034bd5f has its CatchHandler @ 0034bddc */
  uVar5 = FUN_003438f0(param_3);
  param_1[0x1f] = uVar5;
  param_1[0x22] = param_7;
  uVar5 = FUN_0038c780(0x128);
  param_1[0x20] = uVar5;
  FUN_00368450();
  if (((param_5 != 0) && (*(char *)(param_5 + 0x10) != '\0')) && (*(long *)(param_5 + 0x18) != 0)) {
    FUN_00368930(param_1[0x20],*(long *)(param_5 + 0x18) + 0x18);
  }
  puVar4 = PTR_LAB_047ccda0;
  param_1[0x1d] = 0;
  param_1[0x1b] = param_6;
  param_1[0x1c] = param_1 + 0x1e;
  plVar1 = param_1 + 1;
  param_1[0xe] = 0;
  param_1[0xf] = param_5;
  param_1[0xc] = puVar4;
  param_1[0xd] = param_1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    puVar4 = PTR_LAB_047ccda8;
  } while (cVar2 != '\0');
  param_1[0x19] = 0;
  param_1[0x17] = puVar4;
  param_1[0x18] = param_1;
  FUN_00360550(param_1 + 0x10,param_4,param_1 + 0x16);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar6 = FUN_0034b914(param_1,0);
                    /* try { // try from 0034bd64 to 0034bd6b has its CatchHandler @ 0034bdd8 */
  FUN_0038db60(param_1 + 2);
  if ((uVar6 & 1) != 0) {
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)*param_1)(param_1);
      FUN_0049e790(PTR_LAB_047cba48,param_1);
      return;
    }
  }
  return;
}


