/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003404d4; name: FUN_003404d4
 */


void FUN_003404d4(long *param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  
  *param_1 = (long)(PTR_DAT_047ccd50 + 0x10);
  FUN_00344e5c(param_1 + 0x1a);
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 0xd);
  }
  else {
    FUN_0049e790(PTR_LAB_047cba48,param_1[0x11]);
    bVar2 = *(byte *)(param_1 + 0xd);
  }
  if ((bVar2 & 1) == 0) {
    puVar6 = (undefined8 *)param_1[0xc];
  }
  else {
    FUN_0049e790(PTR_LAB_047cba48,param_1[0xf]);
    puVar6 = (undefined8 *)param_1[0xc];
  }
  if (puVar6 != (undefined8 *)0x0) {
    plVar1 = puVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)*puVar6)(puVar6);
      FUN_0049e790(PTR_LAB_047cba48,puVar6);
    }
  }
                    /* try { // try from 0034055c to 0034055f has its CatchHandler @ 00340594 */
  FUN_0038db20(param_1 + 8);
  FUN_00346000(param_1);
  return;
}


