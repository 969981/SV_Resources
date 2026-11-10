/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 035187ac; name: FUN_035187ac
 */


void FUN_035187ac(long *param_1)

{
  int *piVar1;
  byte bVar2;
  long *plVar3;
  undefined4 uVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  
  for (plVar12 = DAT_048d2048; (plVar12 != (long *)0x0 && (plVar12 + 1 != param_1));
      plVar12 = (long *)*plVar12) {
  }
  bVar5 = *(byte *)(plVar12 + 2);
  bVar2 = bVar5 & 0xfd;
  *(byte *)(plVar12 + 2) = bVar2;
  if ((bVar5 & 1) == 0) {
    *(byte *)(plVar12 + 2) = bVar2 | 1;
    puVar9 = PTR_DAT_047e2fe8;
    lVar8 = plVar12[1];
    uVar4 = *(undefined4 *)((long)plVar12 + 0xc);
    lVar10 = FUN_01065210(*(undefined8 *)PTR_DAT_047e2fe8,7,0x10);
    *(int *)(lVar10 + 4) = (int)lVar8;
    *(undefined4 *)(lVar10 + 8) = uVar4;
    *(undefined4 *)(lVar10 + 0xc) = 0x10000;
    piVar1 = (int *)(*(long *)puVar9 + 0x9c);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    for (plVar12 = (long *)*plVar12; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
      if (*(int *)(plVar12 + 1) == (int)lVar8) {
        *(byte *)(plVar12 + 2) = *(byte *)(plVar12 + 2) | 1;
      }
    }
  }
  puVar9 = PTR_DAT_047e2fd0;
  if (DAT_048d2048 != (long *)0x0) {
    plVar11 = (long *)0x0;
    plVar12 = DAT_048d2048;
    do {
      plVar13 = (long *)*plVar12;
      if ((*(byte *)(plVar12 + 2) >> 1 & 1) == 0) {
        plVar3 = (long *)&DAT_048d2048;
        if (DAT_048d2048 != plVar12) {
          plVar3 = plVar11;
        }
        *plVar3 = (long)plVar13;
        if (DAT_048d2050 == plVar12) {
          DAT_048d2050 = plVar11;
        }
        if ((plVar12 < DAT_048d2060) || (DAT_048d2060 + (ulong)DAT_048d2068 * 3 <= plVar12)) {
          (**(code **)(puVar9 + 0x30))(0);
        }
        else {
          *plVar12 = (long)DAT_048d2058;
          DAT_048d2058 = plVar12;
        }
        DAT_048d206c = DAT_048d206c + -1;
      }
      else {
        plVar11 = plVar12;
      }
      plVar12 = plVar13;
    } while (plVar13 != (long *)0x0);
  }
  return;
}


