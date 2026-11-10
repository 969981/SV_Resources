/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0032ba4c; name: FUN_0032ba4c
 */


void FUN_0032ba4c(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  plVar4 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x40);
  if (plVar4 == (long *)0x0) {
    puVar5 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,8);
    if (puVar5 == (undefined8 *)0x0) {
      *(undefined8 *)PTR_DAT_047ccc18 = 0;
      return;
    }
  }
  else {
    *plVar4 = (long)(PTR_DAT_047ccc08 + 0x10);
    plVar4[1] = 1;
    auVar7 = FUN_003427c0(PTR_PTR_047ccc10);
    *(undefined1 (*) [16])(plVar4 + 2) = auVar7;
    FUN_0038db00(plVar4 + 4);
    puVar5 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,8);
    if (puVar5 == (undefined8 *)0x0) {
      *(undefined8 *)PTR_DAT_047ccc18 = 0;
      plVar1 = plVar4 + 1;
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
        (**(code **)*plVar4)(plVar4);
        FUN_0049e790(PTR_LAB_047cba48,plVar4);
        return;
      }
      return;
    }
  }
  *puVar5 = plVar4;
  *(undefined8 **)PTR_DAT_047ccc18 = puVar5;
  return;
}


