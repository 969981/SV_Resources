/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010ffad0; name: FUN_010ffad0
 */


long * FUN_010ffad0(long param_1,long param_2,long param_3)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  byte *pbVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long *plVar9;
  undefined1 *puVar10;
  long *plVar11;
  long lVar12;
  undefined1 *puVar13;
  long *plVar14;
  byte local_140 [256];
  
  puVar13 = &DAT_cbf29ce484222645;
  memset(local_140,0,0x100);
  strcat((char *)local_140,*(char **)(param_2 + 8));
  strcat((char *)local_140,*(char **)(param_3 + 8));
  if (local_140[0] != 0) {
    pbVar5 = (byte *)((ulong)local_140 | 1);
    do {
      puVar13 = (undefined1 *)(((ulong)puVar13 ^ (ulong)local_140[0]) * 0x100000001b3);
      local_140[0] = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (local_140[0] != 0);
  }
  plVar14 = (long *)(param_1 + 0x690);
  lVar12 = *plVar14;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 != lVar12) {
    lVar3 = nn::os::GetCurrentThread();
LAB_010ffb74:
    if (*plVar14 == 0) goto code_r0x010ffb7c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x698));
    do {
      if (*plVar14 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x698));
          while (*plVar14 == 0) {
            cVar1 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar4) {
              *plVar14 = lVar3;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') {
              bVar4 = false;
              goto LAB_010ffb84;
            }
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *plVar14 = lVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    bVar4 = false;
    goto LAB_010ffb84;
  }
  plVar14 = (long *)0x0;
  bVar4 = true;
LAB_010ffb84:
  puVar8 = *(undefined1 **)(param_1 + 0x6b0);
  if (puVar8 != (undefined1 *)0x0) {
    uVar6 = (long)puVar8 - ((ulong)puVar8 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      puVar7 = (undefined1 *)((ulong)(puVar8 + -1) & (ulong)puVar13);
    }
    else {
      puVar7 = puVar13;
      if (puVar8 <= puVar13) {
        uVar2 = 0;
        if (puVar8 != (undefined1 *)0x0) {
          uVar2 = (ulong)puVar13 / (ulong)puVar8;
        }
        puVar7 = puVar13 + -(uVar2 * (long)puVar8);
      }
    }
    plVar9 = *(long **)(*(long *)(param_1 + 0x6a8) + (long)puVar7 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if ((undefined1 *)plVar9[1] == puVar13) {
            if ((undefined1 *)plVar9[2] == puVar13) goto LAB_010ffd00;
          }
          else if ((undefined1 *)((ulong)plVar9[1] & (ulong)(puVar8 + -1)) != puVar7)
          goto LAB_010ffb8c;
          plVar9 = (long *)*plVar9;
          plVar11 = (long *)0x0;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          puVar10 = (undefined1 *)plVar9[1];
          if (puVar10 == puVar13) {
            if ((undefined1 *)plVar9[2] == puVar13) goto LAB_010ffd00;
          }
          else {
            if (puVar8 <= puVar10) {
              uVar6 = 0;
              if (puVar8 != (undefined1 *)0x0) {
                uVar6 = (ulong)puVar10 / (ulong)puVar8;
              }
              puVar10 = puVar10 + -(uVar6 * (long)puVar8);
            }
            if (puVar10 != puVar7) goto LAB_010ffb8c;
          }
          plVar9 = (long *)*plVar9;
          plVar11 = (long *)0x0;
        } while (plVar9 != (long *)0x0);
      }
      goto LAB_010ffb90;
    }
  }
LAB_010ffb8c:
  plVar11 = (long *)0x0;
LAB_010ffb90:
  if (!bVar4) {
    *plVar14 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar14 + 1));
  }
  return plVar11;
code_r0x010ffb7c:
  cVar1 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
  if (bVar4) {
    *plVar14 = lVar3;
    cVar1 = ExclusiveMonitorsStatus();
  }
  bVar4 = false;
  if (cVar1 == '\0') goto LAB_010ffb84;
  goto LAB_010ffb74;
LAB_010ffd00:
  plVar11 = plVar9 + 4;
  goto LAB_010ffb90;
}


