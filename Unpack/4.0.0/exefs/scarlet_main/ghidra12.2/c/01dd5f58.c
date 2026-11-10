/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dd5f58; name: FUN_01dd5f58
 */


void FUN_01dd5f58(long param_1,ushort *param_2,uint param_3)

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
  uint uVar10;
  long lVar11;
  ushort *puVar12;
  
  if (param_3 < 0x21) {
    iVar6 = 0;
    uVar9 = 0x11;
    puVar8 = (ushort *)(param_1 + (ulong)param_3 * 0x22 + 0x40);
    do {
      uVar3 = *param_2;
      *puVar8 = uVar3;
      if (uVar3 == 0) {
        return;
      }
      if (uVar3 == 0x10) {
        puVar12 = param_2 + 1;
        uVar3 = *puVar12;
        uVar1 = uVar3 + 2;
        bVar5 = uVar9 < uVar1;
        uVar9 = uVar9 - uVar1;
        if (bVar5 || uVar9 == 0) {
          *puVar8 = 0;
          return;
        }
        uVar10 = uVar3 + 1;
        uVar2 = uVar10 & 7;
        puVar7 = puVar8 + 1;
        *puVar7 = uVar3;
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
          puVar7 = puVar8;
        }
        if (6 < uVar3) {
          do {
            puVar7[1] = param_2[2];
            puVar7[2] = puVar12[2];
            puVar7[3] = puVar12[3];
            puVar7[4] = puVar12[4];
            puVar7[5] = puVar12[5];
            puVar7[6] = puVar12[6];
            param_2 = puVar12 + 7;
            puVar7[7] = *param_2;
            puVar12 = puVar12 + 8;
            uVar10 = uVar10 - 8;
            puVar7 = puVar7 + 8;
            *puVar7 = *puVar12;
            puVar8 = puVar7;
          } while (uVar10 != 0);
        }
        param_2 = puVar12;
        iVar6 = uVar1 + iVar6;
      }
      else {
        puVar8 = puVar8 + 1;
        param_2 = param_2 + 1;
        iVar6 = iVar6 + 1;
        uVar9 = uVar9 - 1;
      }
    } while (uVar9 != 0);
    if (iVar6 != 0) {
      puVar8[-1] = 0;
    }
  }
  return;
}


