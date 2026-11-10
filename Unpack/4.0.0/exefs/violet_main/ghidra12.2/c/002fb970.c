/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002fb970; name: FUN_002fb970
 */


undefined4
FUN_002fb970(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *local_50 [4];
  
  if (*(char *)(param_1 + 0x32) == '\0') {
    lVar6 = *(long *)(param_1 + 0x58);
    if (lVar6 == 0) {
      FUN_002fd030(*(undefined8 *)(param_1 + 0x38));
      lVar6 = FUN_002fd020();
      lVar6 = *(long *)(lVar6 + 0x28);
      *(long *)(param_1 + 0x40) = lVar6;
      if (lVar6 == 0) goto LAB_002fbb48;
      lVar6 = *(long *)(param_1 + 0x58);
      if (lVar6 != 0) goto LAB_002fb9ec;
      lVar6 = FUN_002fd020();
      lVar6 = *(long *)(lVar6 + 0xc0);
      puVar5 = &LAB_002fbb70;
    }
    else {
LAB_002fb9ec:
      puVar5 = &LAB_002fbbb0;
    }
    lVar6 = FUN_002fbe70(param_1,lVar6,*(undefined8 *)(param_1 + 0x38),
                         *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                         param_1 + 0x10,puVar5,param_4,param_5,*(undefined8 *)(param_1 + 0x50),
                         *(undefined1 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x98));
    if (lVar6 == 0) {
      return 5;
    }
    FUN_0038db40(param_1 + 0x68);
    if (*(long *)(param_1 + 0x88) != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002fbb4c to 002fbb4f has its CatchHandler @ 002fbb50 */
      abort();
    }
    *(long *)(param_1 + 0x88) = lVar6;
    cVar1 = *(char *)(param_1 + 0x90);
                    /* try { // try from 002fba44 to 002fba4b has its CatchHandler @ 002fbb68 */
    FUN_0038db60(param_1 + 0x68);
    if (cVar1 != '\0') {
      return 0xe;
    }
    *(undefined1 *)(param_1 + 0x32) = 1;
    lVar6 = *(long *)(param_1 + 0x58);
  }
  else {
    lVar6 = *(long *)(param_1 + 0x58);
  }
  if ((lVar6 == 0) && (*(long *)(param_1 + 0x50) == 0)) {
    lVar6 = FUN_002fd020();
    uVar4 = FUN_00371800(*(undefined8 *)(lVar6 + 0x20),*(undefined8 *)(param_1 + 0x88));
    if ((uVar4 & 1) == 0) {
LAB_002fbb48:
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  if ((param_2 == 0) || (param_3 == 0)) {
    FUN_00367020(local_50);
    if (*(char *)(param_1 + 0x31) == '\0') goto LAB_002fba90;
  }
  else {
    FUN_003676d0(local_50,param_2,param_3);
    if (*(char *)(param_1 + 0x31) == '\0') {
LAB_002fba90:
      *(undefined1 *)(param_1 + 0x31) = 1;
      if (*(char *)(param_1 + 0x30) == '\0') {
        uVar3 = FUN_002fc1e0(*(undefined8 *)(param_1 + 0x88),local_50);
      }
      else {
        uVar3 = FUN_002fc1c0();
      }
      goto joined_r0x002fbb18;
    }
  }
  uVar3 = FUN_002fc200(*(undefined8 *)(param_1 + 0x88),local_50);
joined_r0x002fbb18:
  if ((local_50[0] != (undefined8 *)0x0) && (plVar7 = (long *)*local_50[0], plVar7 != (long *)0x0))
  {
    do {
      lVar6 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)local_50[0][3])(local_50[0][4]);
    }
  }
  return uVar3;
}


