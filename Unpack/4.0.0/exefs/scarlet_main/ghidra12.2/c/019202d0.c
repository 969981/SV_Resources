/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019202d0; name: FUN_019202d0
 */


uint FUN_019202d0(long param_1,ushort *param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  ushort *puVar9;
  uint uVar10;
  long lVar11;
  ushort *puVar12;
  
  if (*(char *)(param_1 + 0x54) == '\0') {
    return 0;
  }
  uVar7 = (uint)*(ushort *)(param_1 + 0x50);
  if (*(ushort *)(param_1 + 0x50) == 0) {
    uVar6 = 0;
  }
  else {
    puVar8 = *(ushort **)(param_1 + 0x30);
    uVar6 = 0;
    do {
      uVar3 = *param_2;
      *puVar8 = uVar3;
      if (uVar3 == 0) goto LAB_01920408;
      if (uVar3 == 0x10) {
        puVar12 = param_2 + 1;
        uVar3 = *puVar12;
        uVar1 = uVar3 + 2;
        bVar5 = uVar7 < uVar1;
        uVar7 = uVar7 - uVar1;
        if (bVar5 || uVar7 == 0) {
          *puVar8 = 0;
          goto LAB_01920408;
        }
        uVar10 = uVar3 + 1;
        uVar2 = uVar10 & 7;
        puVar9 = puVar8 + 1;
        *puVar9 = uVar3;
        if (uVar2 != 0) {
          lVar4 = 0;
          do {
            lVar11 = lVar4;
            uVar10 = uVar10 - 1;
            uVar2 = uVar2 - 1;
            *(undefined2 *)((long)puVar8 + lVar11 + 4) = *(undefined2 *)((long)param_2 + lVar11 + 4)
            ;
            lVar4 = lVar11 + 2;
          } while (uVar2 != 0);
          puVar8 = (ushort *)((long)puVar8 + lVar11 + 4);
          param_2 = (ushort *)((long)param_2 + lVar11 + 2);
          puVar12 = param_2 + 1;
          puVar9 = puVar8;
        }
        if (6 < uVar3) {
          do {
            puVar9[1] = param_2[2];
            puVar9[2] = puVar12[2];
            puVar9[3] = puVar12[3];
            puVar9[4] = puVar12[4];
            puVar9[5] = puVar12[5];
            puVar9[6] = puVar12[6];
            param_2 = puVar12 + 7;
            puVar9[7] = *param_2;
            puVar12 = puVar12 + 8;
            uVar10 = uVar10 - 8;
            puVar9 = puVar9 + 8;
            *puVar9 = *puVar12;
            puVar8 = puVar9;
          } while (uVar10 != 0);
        }
        param_2 = puVar12;
        uVar6 = uVar1 + uVar6;
      }
      else {
        puVar8 = puVar8 + 1;
        param_2 = param_2 + 1;
        uVar6 = uVar6 + 1;
        uVar7 = uVar7 - 1;
      }
    } while (uVar7 != 0);
    if (uVar6 != 0) {
      uVar6 = uVar6 - 1;
      puVar8[-1] = 0;
    }
  }
LAB_01920408:
  *(short *)(param_1 + 0x52) = (short)uVar6;
  return uVar6 & 0xffff;
}


