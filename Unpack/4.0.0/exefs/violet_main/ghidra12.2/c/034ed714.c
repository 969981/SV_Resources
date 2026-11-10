/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034ed714; name: FUN_034ed714
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_034ed714(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  
  puVar2 = DAT_048b0838;
  uVar6 = (ulong)DAT_048b0840;
  if (DAT_048b0840 != 0) {
    puVar9 = DAT_048b0838 + uVar6;
    do {
      uVar3 = *puVar2;
      puVar10 = puVar2;
      uVar5 = (uint)uVar6;
      if (puVar2 < puVar9 + -1) {
        do {
          puVar7 = puVar10 + 1;
          *puVar10 = *puVar7;
          puVar10 = puVar7;
        } while (puVar7 < puVar9 + -1);
        uVar5 = DAT_048b0840;
      }
      DAT_048b0840 = uVar5 - 1;
      FUN_03483f78(uVar3,0);
      uVar6 = (ulong)DAT_048b0840;
      puVar9 = DAT_048b0838 + uVar6;
    } while (puVar2 != puVar9);
  }
  FUN_034ed800();
  puVar1 = PTR_DAT_047e7400;
  lVar8 = *(long *)(PTR_DAT_047e7400 + 8);
  if (lVar8 != 0) {
    lVar4 = lVar8;
    while( true ) {
      lVar11 = *(long *)(lVar4 + 0x60);
      if (lVar8 == lVar4) {
        *(long *)(puVar1 + 8) = lVar11;
      }
      else {
        _DAT_00000060 = lVar11;
      }
      if (*(long *)puVar1 == lVar4) {
        *(undefined8 *)puVar1 = 0;
      }
      FUN_03483f78(lVar4,0);
      if (lVar11 == 0) break;
      lVar8 = *(long *)(puVar1 + 8);
      lVar4 = lVar11;
    }
  }
  return;
}


