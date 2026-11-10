/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00307910; name: FUN_00307910
 */


void FUN_00307910(long param_1,long param_2,long *param_3,ulong param_4,undefined8 param_5)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  *(long *)(param_1 + 8) = param_2;
  *(long **)(param_1 + 0x10) = param_3;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_3,0x10);
    if (bVar4) {
      *param_3 = *param_3 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  plVar1 = (long *)(*(long *)(param_1 + 8) + 8);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = *plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  *(undefined1 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
                    /* try { // try from 0030797c to 0030797f has its CatchHandler @ 00307c00 */
  FUN_00367020(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1af) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined1 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = param_5;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x318) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
                    /* try { // try from 00307a08 to 00307a0b has its CatchHandler @ 00307bf8 */
  FUN_00377130(param_1 + 0x330);
  *(undefined8 *)(param_1 + 0x418) = param_5;
  *(undefined8 *)(param_1 + 0x410) = 0x7fffffffffffffff;
  *(undefined8 *)(param_1 + 0x428) = 0;
  *(undefined8 *)(param_1 + 0x420) = 0;
  *(undefined8 *)(param_1 + 0x440) = 0;
  *(undefined8 *)(param_1 + 0x438) = 0;
  *(undefined8 *)(param_1 + 0x460) = 0;
  *(undefined8 *)(param_1 + 0x458) = 0;
  *(undefined8 *)(param_1 + 0x480) = 0;
  *(undefined8 *)(param_1 + 0x478) = 0;
  *(undefined8 *)(param_1 + 0x4a0) = 0;
  *(undefined8 *)(param_1 + 0x498) = 0;
  *(undefined8 *)(param_1 + 0x4c0) = 0;
  *(undefined8 *)(param_1 + 0x4b8) = 0;
  *(undefined8 *)(param_1 + 0x4e0) = 0;
  *(undefined8 *)(param_1 + 0x4d8) = 0;
  *(undefined8 *)(param_1 + 0x4f8) = 0;
  *(undefined8 *)(param_1 + 0x500) = 0;
  *(undefined8 *)(param_1 + 0x520) = 0;
  *(undefined8 *)(param_1 + 0x518) = 0;
  *(undefined8 *)(param_1 + 0x538) = 0;
  *(undefined8 *)(param_1 + 0x540) = 0;
  *(undefined8 *)(param_1 + 0x558) = 0;
  *(undefined8 *)(param_1 + 0x560) = 0;
                    /* try { // try from 00307a74 to 00307a77 has its CatchHandler @ 00307be4 */
  FUN_00377130(param_1 + 0x570);
  *(undefined8 *)(param_1 + 0x650) = 0x7fffffffffffffff;
  *(undefined8 *)(param_1 + 0x780) = 0;
  *(undefined1 *)(param_1 + 0x788) = 0;
  *(undefined8 *)(param_1 + 0x790) = 0;
  *(undefined8 *)(param_1 + 0x8e0) = 0;
  *(undefined1 *)(param_1 + 0x8e8) = 0;
  *(undefined8 *)(param_1 + 0x8f0) = 0x7fffffffffffffff;
  *(undefined8 *)(param_1 + 0x8f8) = 0;
  *(undefined1 *)(param_1 + 0x900) = 0;
  *(undefined4 *)(param_1 + 0x908) = 0;
  *(undefined1 *)(param_1 + 0x90c) = 0;
  *(undefined4 *)(param_1 + 0x910) = 0;
  *(undefined8 *)(param_1 + 0x918) = 0;
  *(undefined1 *)(param_1 + 0x920) = 0;
  *(undefined2 *)(param_1 + 0x938) = 0;
  *(undefined8 *)(param_1 + 0x930) = 0;
  *(undefined8 *)(param_1 + 0x928) = 0;
  *(undefined4 *)(param_1 + 0xab8) = 0;
  *(undefined8 *)(param_1 + 0xaa0) = 0;
  *(undefined8 *)(param_1 + 0xa98) = 0;
  *(undefined8 *)(param_1 + 0xab0) = 0;
  *(undefined8 *)(param_1 + 0xaa8) = 0;
  *(undefined4 *)(param_1 + 0xabc) = 1;
  *(undefined2 *)(param_1 + 0xac0) = 0;
  *(undefined8 *)(param_1 + 0xad0) = 0;
  *(undefined8 *)(param_1 + 0xac8) = 0;
  if (param_4 != 0) {
    *(int *)(param_1 + 0xa0) = (int)param_4;
    **(long **)(param_2 + 0x270) = param_1;
                    /* try { // try from 00307af4 to 00307b6f has its CatchHandler @ 00307c08 */
    FUN_00319780(param_2 + 0xa0,param_4 & 0xffffffff,param_1);
    if (*(char *)(param_2 + 0x11e1) == '\0') {
      *(char *)(param_2 + 0x11e1) = '\x01';
      plVar1 = (long *)(param_2 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      *(undefined1 **)(param_2 + 0x1210) = &LAB_0030c820;
      *(long *)(param_2 + 0x1218) = param_2;
      *(undefined8 *)(param_2 + 0x1220) = 0;
      uVar5 = FUN_00350f70(*(undefined8 *)(param_2 + 0x10));
      FUN_00359df0(uVar5,1,param_2 + 0x1208);
    }
  }
  uVar6 = (**(code **)(*(long *)(param_2 + 0x1050) + 0x10))(param_2 + 0x1050);
  if ((uVar6 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x950) = 0;
    *(undefined8 *)(param_1 + 0x948) = 0;
    puVar2 = PTR_DAT_047ccab8 + 0x10;
    *(undefined8 *)(param_1 + 0x958) = 0;
    *(undefined **)(param_1 + 0x940) = puVar2;
  }
  else {
                    /* try { // try from 00307b78 to 00307b83 has its CatchHandler @ 00307be0 */
    FUN_0030e654(param_1 + 0x940,param_2 + 0x1050,param_1);
  }
                    /* try { // try from 00307ba8 to 00307bbb has its CatchHandler @ 00307c08 */
  FUN_00368450(param_1 + 0x658);
  FUN_00368450(param_1 + 0x798);
  FUN_00368450(param_1 + 0x970);
  *(undefined1 **)(param_1 + 0x8c8) = &LAB_00307c50;
  *(long *)(param_1 + 0x8d0) = param_1;
  *(undefined8 *)(param_1 + 0x8d8) = 0;
  return;
}


