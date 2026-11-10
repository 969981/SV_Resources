/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027d38d8; name: FUN_027d38d8
 */


void FUN_027d38d8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  FUN_01870100();
  *param_1 = &PTR_FUN_045e2bc0;
  param_1[0xb] = 0;
  param_1[4] = &PTR_LAB_045e2c40;
  param_1[5] = &PTR_LAB_045e2c90;
  param_1[10] = 0;
  FUN_027c2138(param_1 + 10,param_2);
  FUN_01cfa5b0(param_1 + 0xc,param_3);
  FUN_01cfa5b0(param_1 + 0x10,param_3 + 0x20);
  FUN_027c2388(param_1 + 0x14,param_3 + 0x40);
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_3 + 0xa8);
  param_1[0x22] = *(undefined8 *)(param_3 + 0xb0);
  lVar4 = *(long *)(param_3 + 0xb8);
  param_1[0x23] = lVar4;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}


