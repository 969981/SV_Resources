/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034b74e8; name: FUN_034b74e8
 */


void FUN_034b74e8(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  uint uVar9;
  long *plVar10;
  
  uVar2 = *(uint *)(param_1 + 0x50);
  if (uVar2 != 0) {
    lVar5 = *(long *)(param_1 + 0x48);
    iVar7 = 0;
    uVar9 = uVar2;
    do {
      iVar1 = iVar7 + (uVar9 >> 1);
      plVar10 = *(long **)(lVar5 + (long)iVar1 * 8);
      if (plVar10 == param_2) {
        puVar8 = (undefined8 *)(lVar5 + (long)iVar1 * 8);
        puVar6 = (undefined8 *)((lVar5 + (ulong)uVar2 * 8) - 8);
        if (puVar8 < puVar6) {
          do {
            puVar3 = puVar8 + 1;
            *puVar8 = *puVar3;
            puVar8 = puVar3;
          } while (puVar3 < puVar6);
          uVar2 = *(uint *)(param_1 + 0x50);
        }
        *(uint *)(param_1 + 0x50) = uVar2 - 1;
        if ((int)param_2[9] - 4U < 2) {
          pcVar4 = *(code **)(*(long *)*param_2 + 0x18);
        }
        else {
          if ((int)param_2[9] != 2) break;
          plVar10 = (long *)0x0;
          if (*param_2 != 0) {
            plVar10 = (long *)(*param_2 + -0x38);
          }
          pcVar4 = *(code **)(*plVar10 + 0x30);
        }
        (*pcVar4)();
        break;
      }
      if (((int)plVar10[9] < (int)param_2[9]) ||
         ((plVar10 < param_2 && ((int)plVar10[9] == (int)param_2[9])))) {
        iVar7 = iVar1 + 1;
        uVar9 = uVar9 - 1;
      }
      uVar9 = uVar9 >> 1;
    } while (uVar9 != 0);
  }
  uVar2 = *(uint *)(param_1 + 0x60);
  if (uVar2 != 0) {
    lVar5 = *(long *)(param_1 + 0x58);
    iVar7 = 0;
    uVar9 = uVar2;
    do {
      iVar1 = iVar7 + (uVar9 >> 1);
      plVar10 = *(long **)(lVar5 + (long)iVar1 * 8);
      if (plVar10 == param_2) {
        puVar8 = (undefined8 *)(lVar5 + (long)iVar1 * 8);
        puVar6 = (undefined8 *)((lVar5 + (ulong)uVar2 * 8) - 8);
        if (puVar8 < puVar6) {
          do {
            puVar3 = puVar8 + 1;
            *puVar8 = *puVar3;
            puVar8 = puVar3;
          } while (puVar3 < puVar6);
          uVar2 = *(uint *)(param_1 + 0x60);
        }
        *(uint *)(param_1 + 0x60) = uVar2 - 1;
        return;
      }
      if (((int)plVar10[9] < (int)param_2[9]) ||
         ((plVar10 < param_2 && ((int)plVar10[9] == (int)param_2[9])))) {
        iVar7 = iVar1 + 1;
        uVar9 = uVar9 - 1;
      }
      uVar9 = uVar9 >> 1;
    } while (uVar9 != 0);
  }
  return;
}


