/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f715cc; name: FUN_02f715cc
 */


void FUN_02f715cc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  puVar4 = PTR_DAT_047e48e8;
  *param_1 = (long)&PTR_LAB_04610150;
  param_1[0x19] = (long)(puVar4 + 0x10);
  plVar7 = param_1 + 0x3dc;
  do {
    plVar7 = plVar7 + -1;
    plVar5 = (long *)*plVar7;
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
      plVar1 = plVar5 + 2;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))();
      }
    }
  } while (plVar7 != param_1 + 0x1b);
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
  return;
}


