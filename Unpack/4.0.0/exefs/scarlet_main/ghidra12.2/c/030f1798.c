/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030f1798; name: FUN_030f1798
 */


void FUN_030f1798(long param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  
  iVar13 = *(int *)(param_1 + 0x10) + -1;
  if (0 < *(int *)(param_1 + 0x10)) {
    puVar1 = PTR_PTR_047d1a50 + 0x20;
    do {
      lVar10 = (long)iVar13;
      lVar9 = *(long *)(param_1 + 8);
      piVar7 = (int *)(lVar9 + (long)iVar13 * 0x68);
      iVar2 = *piVar7;
      iVar6 = piVar7[0xc];
      iVar4 = iVar6 + -1;
      if (0 < iVar6) {
        lVar14 = (long)(int)param_2[1];
        do {
          puVar8 = (undefined8 *)(*(long *)(lVar9 + lVar10 * 0x68 + 0x28) + (long)iVar4 * 0xc);
          uVar11 = *puVar8;
          uVar3 = *(undefined4 *)(puVar8 + 1);
          iVar6 = (int)lVar14;
          if ((long)((ulong)*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= lVar14) {
            FUN_030f22a8(param_2,puVar1,lVar14 + 1);
            iVar6 = (int)param_2[1];
          }
          puVar8 = (undefined8 *)(*param_2 + (long)iVar6 * 0xc);
          *puVar8 = uVar11;
          *(undefined4 *)(puVar8 + 1) = uVar3;
          *(int *)(param_2 + 1) = (int)lVar14 + 1;
          iVar4 = iVar4 + -1;
          lVar14 = lVar14 + 1;
        } while (-1 < iVar4);
      }
      iVar4 = *(int *)(lVar9 + lVar10 * 0x68 + 0x50);
      uVar5 = iVar4 - 1;
      if (0 < iVar4) {
        do {
          lVar14 = *(long *)(*(long *)(lVar9 + lVar10 * 0x68 + 0x48) +
                             ((long)((ulong)uVar5 << 0x20) >> 0x1c) + 8);
          if (*(int *)(lVar14 + 0x18) == iVar2) {
            iVar4 = *(int *)(lVar14 + 0x48) + -1;
            if (0 < *(int *)(lVar14 + 0x48)) {
              lVar12 = (long)(int)param_2[1];
              do {
                puVar8 = (undefined8 *)(*(long *)(lVar14 + 0x40) + (long)iVar4 * 0xc);
                uVar11 = *puVar8;
                uVar3 = *(undefined4 *)(puVar8 + 1);
                iVar6 = (int)lVar12;
                if ((long)((ulong)*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= lVar12) {
                  FUN_030f22a8(param_2,PTR_PTR_047d1a50 + 0x20,lVar12 + 1);
                  iVar6 = (int)param_2[1];
                }
                puVar8 = (undefined8 *)(*param_2 + (long)iVar6 * 0xc);
                *puVar8 = uVar11;
                *(undefined4 *)(puVar8 + 1) = uVar3;
                *(int *)(param_2 + 1) = (int)lVar12 + 1;
                iVar4 = iVar4 + -1;
                lVar12 = lVar12 + 1;
              } while (-1 < iVar4);
            }
          }
          uVar5 = uVar5 - 1;
        } while (-1 < (int)uVar5);
      }
      iVar13 = iVar13 + -1;
    } while (-1 < iVar13);
  }
  return;
}


