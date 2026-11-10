/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00306170; name: FUN_00306170
 */


void FUN_00306170(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  
  lVar4 = FUN_0049e770(PTR_FUN_047cba38,0x128);
  if (lVar4 != 0) {
    FUN_0034b470(lVar4);
  }
  puVar6 = *(undefined8 **)(param_1 + 0x88);
  if (puVar6 != (undefined8 *)0x0) {
    plVar1 = puVar6 + 1;
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
      (**(code **)*puVar6)(puVar6);
      FUN_0049e790(PTR_LAB_047cba48,puVar6);
    }
  }
  *(long *)(param_1 + 0x88) = lVar4;
  FUN_0034c280(0,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x30),lVar4);
  FUN_00350f10(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x30));
  FUN_0034bc64(*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x60),
               *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x38),0,PTR_LAB_047ccaa0,
               param_1);
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}


