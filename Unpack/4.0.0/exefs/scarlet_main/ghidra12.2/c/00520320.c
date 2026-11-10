/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00520320; name: FUN_00520320
 */


void FUN_00520320(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  
  puVar3 = PTR_DAT_047cdbe0;
  do {
    lVar4 = *(long *)puVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar2) {
      *(long *)puVar3 = lVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  param_1[4] = lVar4;
  param_1[1] = 0;
  *param_1 = 0;
  puVar5 = (undefined8 *)param_1[3];
  if (puVar5 == (undefined8 *)0x0) {
    param_1[2] = 0;
    return;
  }
  lVar6 = param_1[8];
  *puVar5 = 0;
  puVar5[1] = 0x60;
  puVar5[2] = lVar6;
  puVar7 = puVar5 + 3;
  *puVar7 = param_1;
  lVar4 = tpidr_el0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  puVar5[4] = (undefined8 *)(lVar4 + 0x10);
  puVar5[5] = puVar5;
  puVar5[8] = puVar5 + 0xc;
  puVar5[9] = (long)puVar5 + lVar6;
  puVar5[6] = 0;
  puVar5[7] = 0;
  *param_1 = puVar7;
  param_1[2] = param_1[8];
  *(undefined8 *)(lVar4 + 0x10) = param_1[4];
  *(undefined8 **)(lVar4 + 0x18) = puVar7;
  param_1[1] = puVar7;
  return;
}


