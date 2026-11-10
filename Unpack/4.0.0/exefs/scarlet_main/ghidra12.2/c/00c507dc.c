/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c507dc; name: FUN_00c507dc
 */


void FUN_00c507dc(long param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  uint *puVar15;
  
  puVar15 = *(uint **)(param_1 + 0x68);
  puVar5 = *(uint **)(param_1 + 0x70);
  do {
    if (puVar15 == puVar5) {
      puVar6 = *(undefined4 **)(param_1 + 0xa8);
      for (puVar13 = *(undefined4 **)(param_1 + 0xa0); puVar13 != puVar6; puVar13 = puVar13 + 4) {
        uVar2 = *puVar13;
        uVar4 = puVar13[1];
        uVar11 = FUN_00ccbbb0(*(undefined8 *)(*(long *)(*(long *)(puVar13 + 2) + 0x70) + 0x110),
                              *(long *)(puVar13 + 2) + 0x30);
        FUN_00c537f0(param_2,uVar2,uVar4,uVar11);
      }
      return;
    }
    uVar1 = *puVar15;
    uVar3 = puVar15[1];
    pcVar9 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(*(long *)(puVar15 + 2) + 0x70) + 0x110),
                                  *(long *)(puVar15 + 2) + 0x30);
    if ((*pcVar9 != '\0') && (uVar1 != 0)) {
      uVar10 = 1;
      uVar11 = *(undefined8 *)(*(long *)(pcVar9 + 8) + 0x20);
      do {
        if ((uVar10 & uVar1) != 0) {
          if ((int)uVar10 < 8) {
            if (uVar10 == 1) {
              uVar12 = 0;
            }
            else if (uVar10 == 4) {
              uVar12 = 2;
            }
            else {
LAB_00c50854:
              uVar12 = 1;
            }
          }
          else if (uVar10 == 8) {
            uVar12 = 3;
          }
          else if (uVar10 == 0x10) {
            uVar12 = 4;
          }
          else {
            if (uVar10 != 0x20) goto LAB_00c50854;
            uVar12 = 5;
          }
          uVar14 = *(undefined8 *)(param_2 + 0x28);
          uVar7 = (**(code **)PTR_DAT_047e0be8)(uVar11);
          uVar8 = (**(code **)PTR_DAT_047e0bf8)(uVar11);
          (**(code **)PTR_DAT_047e0cc0)(uVar14,uVar12,uVar3,uVar7,uVar8);
        }
        uVar10 = uVar10 * 2;
      } while (uVar10 <= uVar1);
    }
    puVar15 = puVar15 + 4;
  } while( true );
}


