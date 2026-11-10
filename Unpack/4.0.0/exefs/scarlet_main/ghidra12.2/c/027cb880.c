/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027cb880; name: FUN_027cb880
 */


void FUN_027cb880(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  
  FUN_01870100();
  *param_1 = &PTR_FUN_045e24a0;
  param_1[0xb] = 0;
  param_1[4] = &PTR_LAB_045e2520;
  param_1[5] = &PTR_LAB_045e2570;
  param_1[10] = 0;
  FUN_027c2138(param_1 + 10,param_2);
  FUN_01cfa5b0(param_1 + 0xc,param_3);
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  uVar3 = *(undefined8 *)(param_3 + 0x28);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_3 + 0x30);
  param_1[0x10] = uVar2;
  param_1[0x11] = uVar3;
  FUN_027c2388(param_1 + 0x13,param_3 + 0x38);
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_3 + 0xa0);
  param_1[0x21] = *(undefined8 *)(param_3 + 0xa8);
  lVar6 = *(long *)(param_3 + 0xb0);
  param_1[0x22] = lVar6;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *(undefined4 *)(param_1 + 0x23) = 0;
  return;
}


