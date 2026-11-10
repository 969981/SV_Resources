/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014616f0; name: FUN_014616f0
 */


undefined4 FUN_014616f0(long param_1,uint param_2,int param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  uint *puVar9;
  int *piVar10;
  ulong uVar11;
  ulong uVar12;
  
  if ((int)param_2 < 0xe) {
    piVar8 = (int *)(param_1 + (ulong)param_2 * 4 + 0xa8);
    if (*piVar8 == 0) {
      return 0;
    }
    uVar12 = (ulong)param_2;
    lVar2 = param_1 + uVar12 * 4;
    puVar9 = (uint *)(lVar2 + 0x70);
    uVar4 = *puVar9;
    if (uVar4 != 0) {
      piVar10 = (int *)(param_1 + uVar12 * 0x2c + 0xe0);
      uVar11 = (ulong)uVar4;
      while (*piVar10 != param_3) {
        uVar11 = uVar11 - 1;
        piVar10 = piVar10 + 1;
        if (uVar11 == 0) {
          return 0;
        }
      }
      uVar11 = 0;
      piVar10 = (int *)(param_1 + uVar12 * 0x2c + 0xe0);
      while (*piVar10 != param_3) {
        uVar11 = uVar11 + 1;
        piVar10 = piVar10 + 1;
        if (uVar4 == uVar11) {
          return 0;
        }
      }
      if ((uint)uVar11 < 10) {
        uVar6 = uVar11;
        if ((uVar11 & 1) != 0) {
          uVar6 = uVar11 + 1;
          *piVar10 = piVar10[1];
        }
        if (uVar11 == 9) {
          uVar11 = 10;
        }
        else {
          lVar7 = uVar6 << 2;
          uVar11 = 10;
          do {
            puVar3 = (undefined4 *)(param_1 + uVar12 * 0x2c + 0xe0 + lVar7);
            lVar7 = lVar7 + 8;
            *puVar3 = puVar3[1];
            puVar3[1] = puVar3[2];
          } while (lVar7 != 0x28);
        }
      }
      lVar7 = param_1 + 8 + uVar12 * 0x10;
      puVar1 = (undefined8 *)(lVar7 + 0x340);
      *(undefined4 *)(param_1 + 8 + uVar12 * 0x2c + (uVar11 & 0xffffffff) * 4 + 0xd8) = 0;
      *puVar9 = uVar4 - 1;
      if (uVar4 - 1 == 0) {
        *puVar1 = 0;
        *(undefined8 *)(lVar7 + 0x348) = 0;
        *(undefined4 *)(lVar2 + 0x38) = 0;
        param_1 = param_1 + uVar12 * 0x2c;
        *puVar9 = 0;
        *piVar8 = 0;
        *(undefined4 *)(param_1 + 0x108) = 0;
        *(undefined8 *)(param_1 + 0xe0) = 0;
        *(undefined8 *)(param_1 + 0xf8) = 0;
        *(undefined8 *)(param_1 + 0x100) = 0;
        *(undefined8 *)(param_1 + 0xe8) = 0;
        *(undefined8 *)(param_1 + 0xf0) = 0;
        return 1;
      }
      iVar5 = FUN_0194a110(puVar1);
      if (iVar5 == param_3) {
        FUN_029787a0(puVar1,*(undefined4 *)(param_1 + uVar12 * 0x2c + 0xe0));
      }
    }
  }
  return 0;
}


