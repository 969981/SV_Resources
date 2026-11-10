/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034e4b94; name: FUN_034e4b94
 */


void FUN_034e4b94(long *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  uint *puVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  long lVar12;
  uint uVar13;
  undefined8 *puVar14;
  
  uVar5 = *(uint *)(param_1 + 4);
  if (uVar5 != 0) {
    uVar13 = 0;
    if (uVar5 != 0) {
      uVar13 = (uint)param_2 / uVar5;
    }
    puVar10 = (ulong *)(param_1[3] + (ulong)((uint)param_2 - uVar13 * uVar5) * 8);
    plVar6 = (long *)*puVar10;
    if (plVar6 != (long *)0x0) {
      plVar3 = plVar6;
      do {
        if (*plVar3 == param_2) {
          if (0 < (int)param_1[0x38]) {
            *(undefined1 *)((long)plVar3 + 0x14) = 0;
            return;
          }
          if (*plVar6 != param_2) goto LAB_034e4bf4;
          goto LAB_034e4c10;
        }
        plVar3 = (long *)plVar3[1];
      } while (plVar3 != (long *)0x0);
    }
  }
  return;
  while (*plVar6 != param_2) {
LAB_034e4bf4:
    plVar7 = plVar6;
    plVar6 = (long *)plVar7[1];
    if (plVar6 == (long *)0x0) goto LAB_034e4c24;
  }
  puVar10 = (ulong *)(plVar7 + 1);
LAB_034e4c10:
  *puVar10 = plVar6[1];
  *(int *)(param_1 + 5) = (int)param_1[5] + -1;
LAB_034e4c24:
  uVar5 = *(uint *)(param_1 + 1);
  if (uVar5 != 0) {
    uVar13 = *(uint *)(plVar3 + 2);
    uVar2 = 0;
    if (uVar5 != 0) {
      uVar2 = uVar13 / uVar5;
    }
    for (puVar4 = *(uint **)(*param_1 + (ulong)(uVar13 - uVar2 * uVar5) * 8); puVar4 != (uint *)0x0;
        puVar4 = *(uint **)(puVar4 + 2)) {
      if (*puVar4 == uVar13) {
        uVar5 = puVar4[0xc];
        if (uVar5 != 0) {
          lVar12 = *(long *)(puVar4 + 10);
          iVar9 = 0;
          uVar13 = uVar5;
          goto LAB_034e4c70;
        }
        break;
      }
    }
  }
  goto LAB_034e4cd4;
  while( true ) {
    if (plVar6 < plVar3) {
      iVar9 = iVar1 + 1;
    }
    uVar13 = uVar13 - (plVar6 < plVar3) >> 1;
    if (uVar13 == 0) break;
LAB_034e4c70:
    iVar1 = iVar9 + (uVar13 >> 1);
    plVar6 = *(long **)(lVar12 + (long)iVar1 * 8);
    if (plVar6 == plVar3) {
      puVar11 = (undefined8 *)((lVar12 + (ulong)uVar5 * 8) - 8);
      puVar14 = (undefined8 *)(lVar12 + (long)iVar1 * 8);
      if (puVar14 < puVar11) {
        do {
          puVar8 = puVar14 + 1;
          *puVar14 = *puVar8;
          puVar14 = puVar8;
        } while (puVar8 < puVar11);
        uVar5 = puVar4[0xc];
      }
      puVar4[0xc] = uVar5 - 1;
      break;
    }
  }
LAB_034e4cd4:
                    /* WARNING: Could not recover jumptable at 0x034e4ce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_DAT_047e2fd0 + 0x30))(2);
  return;
}


