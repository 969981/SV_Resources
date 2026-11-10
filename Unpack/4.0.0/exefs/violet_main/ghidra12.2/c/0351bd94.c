/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0351bd94; name: FUN_0351bd94
 */


void FUN_0351bd94(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  
  *param_1 = &PTR_LAB_047c7938;
  param_1[3] = &PTR_LAB_047c79c8;
  puVar5 = param_1 + 5;
  *puVar5 = &PTR_FUN_047c79f0;
  lVar6 = param_1[7];
  if (lVar6 != 0) {
    uVar4 = *(uint *)(lVar6 + 0x30);
    if (uVar4 != 0) {
      puVar8 = *(undefined8 **)(lVar6 + 0x28);
      puVar3 = puVar8 + uVar4;
      if ((undefined8 *)*puVar8 != puVar5) {
        lVar9 = (ulong)uVar4 * 8;
        do {
          lVar9 = lVar9 + -8;
          if (lVar9 == 0) {
            puVar8 = puVar3;
            break;
          }
          puVar2 = puVar8 + 1;
          puVar1 = puVar8 + 1;
          puVar8 = puVar2;
        } while ((undefined8 *)*puVar1 != puVar5);
      }
      if (puVar3 != puVar8) {
        if (uVar4 < 2) {
          iVar7 = 0;
        }
        else {
          *puVar8 = puVar3[-1];
          iVar7 = *(int *)(lVar6 + 0x30) + -1;
        }
        *(int *)(lVar6 + 0x30) = iVar7;
      }
    }
  }
  lVar6 = param_1[8];
  if (lVar6 != 0) {
    uVar4 = *(uint *)(lVar6 + 0x30);
    if (uVar4 != 0) {
      puVar8 = *(undefined8 **)(lVar6 + 0x28);
      puVar3 = puVar8 + uVar4;
      if ((undefined8 *)*puVar8 != puVar5) {
        lVar9 = (ulong)uVar4 * 8;
        do {
          lVar9 = lVar9 + -8;
          if (lVar9 == 0) {
            puVar8 = puVar3;
            break;
          }
          puVar2 = puVar8 + 1;
          puVar1 = puVar8 + 1;
          puVar8 = puVar2;
        } while ((undefined8 *)*puVar1 != puVar5);
      }
      if (puVar3 != puVar8) {
        if (uVar4 < 2) {
          iVar7 = 0;
        }
        else {
          *puVar8 = puVar3[-1];
          iVar7 = *(int *)(lVar6 + 0x30) + -1;
        }
        *(int *)(lVar6 + 0x30) = iVar7;
      }
    }
  }
  param_1[6] = 0;
  return;
}


