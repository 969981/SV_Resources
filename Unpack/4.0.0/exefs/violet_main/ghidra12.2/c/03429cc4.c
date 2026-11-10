/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03429cc4; name: FUN_03429cc4
 */


void FUN_03429cc4(undefined4 *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  long lVar11;
  uint uVar12;
  char *pcVar13;
  
  FUN_034785cc(param_1[4],*(undefined8 *)(*(long *)(param_2 + 8) + 0x78),3,0,0xab,0,0,0);
  puVar4 = PTR_DAT_047e2fd0;
  if (*(long *)(param_1 + 2) != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9);
  }
  *(undefined8 *)(param_1 + 2) = 0;
  *param_1 = 0;
  lVar5 = *(long *)(*(long *)(param_2 + 8) + 0x58);
  if (lVar5 != 0) {
    uVar6 = *(uint *)(lVar5 + 0x38);
    if (uVar6 != 0) {
      uVar2 = param_1[4];
      iVar8 = 0;
      lVar11 = *(long *)(lVar5 + 0x30);
      uVar12 = uVar6;
      do {
        iVar1 = iVar8 + (uVar12 >> 1);
        uVar3 = *(uint *)(lVar11 + (long)iVar1 * 4);
        if (uVar3 == uVar2) {
          puVar9 = (undefined4 *)(lVar11 + (ulong)uVar6 * 4 + -4);
          puVar10 = (undefined4 *)(lVar11 + (long)iVar1 * 4);
          if (puVar10 < puVar9) {
            do {
              puVar7 = puVar10 + 1;
              *puVar10 = *puVar7;
              puVar10 = puVar7;
            } while (puVar7 < puVar9);
            uVar6 = *(uint *)(lVar5 + 0x38);
          }
          *(uint *)(lVar5 + 0x38) = uVar6 - 1;
          break;
        }
        if (uVar3 < uVar2) {
          iVar8 = iVar1 + 1;
        }
        uVar12 = uVar12 - (uVar3 < uVar2) >> 1;
      } while (uVar12 != 0);
    }
  }
  lVar5 = *(long *)(param_1 + 6);
  if (lVar5 != 0) {
    if (param_1[8] != 0) {
      lVar11 = (ulong)(uint)param_1[8] * 0x50;
      pcVar13 = (char *)(lVar5 + 0x48);
      do {
        if ((*(long *)(pcVar13 + -8) != 0) && (*pcVar13 != '\0')) {
          (**(code **)(puVar4 + 0x30))(9);
          *pcVar13 = '\0';
        }
        pcVar13[-8] = '\0';
        pcVar13[-7] = '\0';
        pcVar13[-6] = '\0';
        pcVar13[-5] = '\0';
        pcVar13[-4] = '\0';
        pcVar13[-3] = '\0';
        pcVar13[-2] = '\0';
        pcVar13[-1] = '\0';
        lVar11 = lVar11 + -0x50;
        pcVar13 = pcVar13 + 0x50;
      } while (lVar11 != 0);
      lVar5 = *(long *)(param_1 + 6);
    }
    param_1[8] = 0;
    (**(code **)(puVar4 + 0x30))(9,lVar5);
    *(undefined8 *)(param_1 + 6) = 0;
    param_1[9] = 0;
  }
  return;
}


