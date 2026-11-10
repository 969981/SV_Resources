/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0032bb38; name: FUN_0032bb38
 */


void FUN_0032bb38(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar4 = PTR_DAT_047ccc18;
  puVar7 = *(undefined8 **)PTR_DAT_047ccc18;
  if ((puVar7 == (undefined8 *)0x0) || (puVar6 = (undefined8 *)*puVar7, puVar6 == (undefined8 *)0x0)
     ) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
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
    *puVar7 = 0;
    puVar7 = *(undefined8 **)puVar4;
  }
  else {
    *puVar7 = 0;
    puVar7 = *(undefined8 **)puVar4;
  }
  if (puVar7 == (undefined8 *)0x0) {
    return;
  }
  puVar6 = (undefined8 *)*puVar7;
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
  FUN_0049e790(PTR_LAB_047cba48,puVar7);
  return;
}


