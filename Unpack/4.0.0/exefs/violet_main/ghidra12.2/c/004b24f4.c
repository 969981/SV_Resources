/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004b24f4; name: FUN_004b24f4
 */


void FUN_004b24f4(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if (*(long *)(param_2 + 0x88) == 0) {
    uVar1 = FUN_004db400();
    *(undefined8 *)(param_2 + 0x88) = uVar1;
    iVar2 = *(int *)(param_2 + 0x2c);
  }
  else {
    iVar2 = *(int *)(param_2 + 0x2c);
  }
  if (0 < iVar2) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      FUN_004b8014(param_1,*(long *)(param_2 + 0x68) + lVar3,
                   *(undefined8 *)(*(long *)(param_3 + 0x40) + lVar4 * 8 + 8));
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x90;
    } while (lVar4 < *(int *)(param_2 + 0x2c));
  }
  if (0 < *(int *)(param_2 + 0x38)) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      FUN_004b89a8(param_1,*(long *)(param_2 + 0x80) + lVar3,
                   *(undefined8 *)(*(long *)(param_3 + 0x88) + lVar4 * 8 + 8));
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x98;
    } while (lVar4 < *(int *)(param_2 + 0x38));
  }
  if (0 < *(int *)(param_2 + 0x30)) {
    lVar4 = 0;
    do {
      lVar3 = *(long *)(param_2 + 0x70);
      plVar5 = (long *)(lVar3 + lVar4 * 0x50 + 0x20);
      if (*plVar5 == 0) {
        lVar9 = FUN_004df294();
        *plVar5 = lVar9;
        piVar6 = (int *)(lVar3 + lVar4 * 0x50 + 0x2c);
        iVar2 = *piVar6;
      }
      else {
        piVar6 = (int *)(lVar3 + lVar4 * 0x50 + 0x2c);
        iVar2 = *piVar6;
      }
      if (0 < iVar2) {
        lVar9 = 0;
        lVar8 = 0x20;
        do {
          lVar7 = *(long *)(lVar3 + lVar4 * 0x50 + 0x30);
          if (*(long *)(lVar7 + lVar8) == 0) {
            uVar1 = FUN_004dfc94();
            *(undefined8 *)(lVar7 + lVar8) = uVar1;
            iVar2 = *piVar6;
          }
          lVar9 = lVar9 + 1;
          lVar8 = lVar8 + 0x28;
        } while (lVar9 < iVar2);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_2 + 0x30));
  }
  if (0 < *(int *)(param_2 + 0x34)) {
    lVar4 = 0;
    do {
      lVar9 = *(long *)(param_2 + 0x78);
      lVar3 = *(long *)(*(long *)(param_3 + 0x70) + lVar4 * 8 + 8);
      plVar5 = (long *)(lVar9 + lVar4 * 0x30 + 0x18);
      if (*plVar5 == 0) {
        lVar8 = FUN_004e05c8();
        *plVar5 = lVar8;
        piVar6 = (int *)(lVar9 + lVar4 * 0x30 + 0x28);
        iVar2 = *piVar6;
      }
      else {
        piVar6 = (int *)(lVar9 + lVar4 * 0x30 + 0x28);
        iVar2 = *piVar6;
      }
      if (0 < iVar2) {
        lVar7 = 0;
        lVar8 = 0;
        do {
          FUN_004b9fe0(param_1,*(long *)(lVar9 + lVar4 * 0x30 + 0x20) + lVar7,
                       *(undefined8 *)(*(long *)(lVar3 + 0x28) + lVar8 * 8 + 8));
          lVar8 = lVar8 + 1;
          lVar7 = lVar7 + 0x68;
        } while (lVar8 < *piVar6);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_2 + 0x34));
  }
  return;
}


