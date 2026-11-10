/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03518b44; name: FUN_03518b44
 */


void FUN_03518b44(int param_1,long *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  puVar6 = PTR_DAT_047e2fe8;
  uVar3 = *(undefined4 *)(*param_2 + 0xc);
  lVar7 = FUN_01065210(*(undefined8 *)PTR_DAT_047e2fe8,7,0x10);
  *(int *)(lVar7 + 4) = param_1;
  *(undefined4 *)(lVar7 + 8) = uVar3;
  *(undefined4 *)(lVar7 + 0xc) = 0x10000;
  piVar1 = (int *)(*(long *)puVar6 + 0x9c);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = *piVar1 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *(byte *)(*param_2 + 0x10) = *(byte *)(*param_2 + 0x10) | 1;
  *(byte *)(*param_2 + 0x10) = *(byte *)(*param_2 + 0x10) & 0xfd;
  plVar9 = (long *)*param_2;
  puVar6 = PTR_DAT_047e2fd0;
  while (PTR_DAT_047e2fd0 = puVar6, plVar9 != (long *)0x0) {
    if ((int)plVar9[1] == param_1) {
      *(byte *)(plVar9 + 2) = *(byte *)(plVar9 + 2) | 1;
      plVar9 = (long *)*param_2;
    }
    plVar9 = (long *)*plVar9;
    *param_2 = (long)plVar9;
    puVar6 = PTR_DAT_047e2fd0;
  }
  if (DAT_048d2048 != (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
    puVar8 = DAT_048d2048;
    do {
      puVar11 = (undefined8 *)*puVar8;
      if ((*(byte *)(puVar8 + 2) >> 1 & 1) == 0) {
        puVar2 = &DAT_048d2048;
        if (DAT_048d2048 != puVar8) {
          puVar2 = puVar10;
        }
        *puVar2 = puVar11;
        if (DAT_048d2050 == puVar8) {
          DAT_048d2050 = puVar10;
        }
        if ((puVar8 < DAT_048d2060) || (DAT_048d2060 + (ulong)DAT_048d2068 * 3 <= puVar8)) {
          (**(code **)(puVar6 + 0x30))(0);
        }
        else {
          *puVar8 = DAT_048d2058;
          DAT_048d2058 = puVar8;
        }
        DAT_048d206c = DAT_048d206c + -1;
      }
      else {
        puVar10 = puVar8;
      }
      puVar8 = puVar11;
    } while (puVar11 != (undefined8 *)0x0);
  }
  return;
}


