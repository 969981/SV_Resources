/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014ed770; name: FUN_014ed770
 */


int FUN_014ed770(long param_1,ushort *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  ushort *puVar7;
  ushort *puVar8;
  uint uVar9;
  long lVar10;
  ushort *puVar11;
  
  iVar6 = 0;
  if ((param_3 != 0) && (*(char *)(param_1 + 0x54) != '\0')) {
    puVar8 = *(ushort **)(param_1 + 0x30);
    iVar6 = 0;
    do {
      uVar3 = *puVar8;
      *param_2 = uVar3;
      if (uVar3 == 0) {
        return iVar6;
      }
      if (uVar3 == 0x10) {
        puVar11 = puVar8 + 1;
        uVar3 = *puVar11;
        uVar1 = uVar3 + 2;
        bVar5 = param_3 < uVar1;
        param_3 = param_3 - uVar1;
        if (bVar5 || param_3 == 0) {
          *param_2 = 0;
          return iVar6;
        }
        uVar9 = uVar3 + 1;
        uVar2 = uVar9 & 7;
        puVar7 = param_2 + 1;
        *puVar7 = uVar3;
        if (uVar2 != 0) {
          lVar4 = 0;
          do {
            lVar10 = lVar4;
            uVar9 = uVar9 - 1;
            uVar2 = uVar2 - 1;
            *(undefined2 *)((long)param_2 + lVar10 + 4) = *(undefined2 *)((long)puVar8 + lVar10 + 4)
            ;
            lVar4 = lVar10 + 2;
          } while (uVar2 != 0);
          param_2 = (ushort *)((long)param_2 + lVar10 + 4);
          puVar8 = (ushort *)((long)puVar8 + lVar10 + 2);
          puVar11 = puVar8 + 1;
          puVar7 = param_2;
        }
        if (6 < uVar3) {
          do {
            puVar7[1] = puVar8[2];
            puVar7[2] = puVar11[2];
            puVar7[3] = puVar11[3];
            puVar7[4] = puVar11[4];
            puVar7[5] = puVar11[5];
            puVar7[6] = puVar11[6];
            puVar8 = puVar11 + 7;
            puVar7[7] = *puVar8;
            puVar11 = puVar11 + 8;
            uVar9 = uVar9 - 8;
            puVar7 = puVar7 + 8;
            *puVar7 = *puVar11;
            param_2 = puVar7;
          } while (uVar9 != 0);
        }
        puVar8 = puVar11;
        iVar6 = uVar1 + iVar6;
      }
      else {
        param_2 = param_2 + 1;
        puVar8 = puVar8 + 1;
        iVar6 = iVar6 + 1;
        param_3 = param_3 - 1;
      }
    } while (param_3 != 0);
    if (iVar6 != 0) {
      iVar6 = iVar6 + -1;
      param_2[-1] = 0;
    }
  }
  return iVar6;
}


