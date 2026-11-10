/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0308fb68; name: FUN_0308fb68
 */


undefined8 FUN_0308fb68(long param_1,int param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  int iVar9;
  undefined2 *puVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar8 = FUN_0307d71c();
  }
  uVar8 = FUN_03093404(uVar8,param_2);
  puVar7 = PTR_DAT_047e5000;
  puVar6 = PTR_PTR_047d1a50;
  if (*(int *)(param_1 + 0x40) != 0) {
    plVar12 = *(long **)(param_1 + 0x38);
    plVar14 = plVar12 + (long)*(int *)(param_1 + 0x40) * 3;
    do {
      lVar13 = *plVar12;
      if (lVar13 != 0) {
        if ((char)plVar12[2] != '\x01') {
          lVar13 = FUN_03065a74(plVar12);
        }
        if (*(float *)(lVar13 + 0x1c) + 0.001 < *(float *)(lVar13 + 0x18)) {
          iVar3 = *(int *)(lVar13 + 0x58);
          iVar11 = iVar3 + param_2;
          iVar9 = iVar3;
          if ((int)(*(uint *)(lVar13 + 0x5c) & 0x7fffffff) < iVar11) {
            FUN_03078324(lVar13 + 0x50,puVar6,(long)iVar11);
            iVar9 = *(int *)(lVar13 + 0x58);
          }
          uVar5 = iVar11 - iVar9;
          if (uVar5 == 0 || iVar11 < iVar9) {
            if (iVar11 < iVar9) {
              *(int *)(lVar13 + 0x58) = iVar11;
            }
          }
          else {
            *(int *)(lVar13 + 0x58) = iVar11;
            puVar1 = (undefined2 *)(*(long *)(lVar13 + 0x50) + (long)iVar9 * 2);
            uVar4 = *(undefined2 *)puVar7;
            uVar2 = uVar5 & 7;
            if (6 < (uint)((param_2 + -1 + iVar3) - iVar9)) {
              iVar11 = -(uVar5 & 0xfffffff8);
              puVar10 = puVar1;
              do {
                puVar1 = puVar10 + 8;
                *puVar10 = uVar4;
                iVar11 = iVar11 + 8;
                puVar10[1] = uVar4;
                puVar10[2] = uVar4;
                puVar10[3] = uVar4;
                puVar10[4] = uVar4;
                puVar10[5] = uVar4;
                puVar10[6] = uVar4;
                puVar10[7] = uVar4;
                puVar10 = puVar1;
              } while (iVar11 != 0);
            }
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar1 = uVar4;
              puVar1 = puVar1 + 1;
            }
          }
        }
      }
      plVar12 = plVar12 + 3;
    } while (plVar12 != plVar14);
  }
  return uVar8;
}


