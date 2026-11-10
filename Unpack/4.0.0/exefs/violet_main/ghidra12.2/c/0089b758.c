/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0089b758; name: FUN_0089b758
 */


void FUN_0089b758(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ushort uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  ushort *puVar17;
  ulong uVar18;
  long lVar19;
  
  puVar6 = PTR_DAT_047d2268;
  if (*(short *)(param_3 + 0x78) != 0) {
    uVar18 = 0;
    plVar1 = (long *)(param_2 + 0x28);
    do {
      lVar19 = *(long *)(param_3 + 0x68);
      plVar7 = (long *)(**(code **)PTR_DAT_047d2258)(0x28,4,*(undefined8 *)puVar6);
      if (plVar7 != (long *)0x0) {
        *plVar7 = (long)plVar7;
        plVar7[1] = (long)plVar7;
        plVar7[4] = (long)(plVar7 + 3);
        plVar7[2] = 0;
        plVar7[3] = (long)(plVar7 + 3);
      }
      lVar16 = lVar19 + uVar18 * 0x38;
      FUN_0089c514(plVar7,lVar16,param_2 + 0x38);
      puVar17 = (ushort *)(lVar16 + 0x30);
      uVar10 = *puVar17;
      if (uVar10 != 0) {
        uVar8 = 0;
        do {
          lVar16 = *(long *)(lVar19 + uVar18 * 0x38 + 0x20) + uVar8 * 0x38;
          uVar2 = *(undefined4 *)(lVar16 + 0x24);
          uVar4 = *(undefined4 *)(lVar16 + 0x28);
          uVar3 = *(undefined4 *)(lVar16 + 0x2c);
          uVar5 = *(undefined4 *)(lVar16 + 0x30);
          plVar9 = (long *)plVar7[4];
          if (plVar7 + 3 != plVar9) {
            uVar11 = 0;
            do {
              if ((uVar8 == uVar11) && (iVar14 = (int)plVar9[2], 0 < iVar14)) {
                lVar12 = plVar9[3];
                lVar16 = 0;
                do {
                  lVar13 = lVar16 * 0x10;
                  if (0 < *(int *)(lVar12 + lVar13)) {
                    **(undefined4 **)(lVar12 + lVar13 + 8) = uVar2;
                    lVar12 = plVar9[3];
                    if (1 < *(int *)(lVar12 + lVar13)) {
                      *(undefined4 *)(*(long *)(lVar12 + lVar13 + 8) + 4) = uVar4;
                      lVar12 = plVar9[3];
                      if (2 < *(int *)(lVar12 + lVar13)) {
                        *(undefined4 *)(*(long *)(lVar12 + lVar13 + 8) + 8) = uVar3;
                        lVar12 = plVar9[3];
                        if (3 < *(int *)(lVar12 + lVar13)) {
                          *(undefined4 *)(*(long *)(lVar12 + lVar13 + 8) + 0xc) = uVar5;
                          lVar12 = plVar9[3];
                          if (4 < *(int *)(lVar12 + lVar13)) {
                            lVar15 = 4;
                            do {
                              *(undefined4 *)(*(long *)(lVar12 + lVar13 + 8) + lVar15 * 4) = 0;
                              lVar12 = plVar9[3];
                              lVar15 = lVar15 + 1;
                            } while (lVar15 < *(int *)(lVar12 + lVar13));
                          }
                        }
                      }
                    }
                    iVar14 = (int)plVar9[2];
                  }
                  lVar16 = lVar16 + 1;
                } while (lVar16 < iVar14);
              }
              plVar9 = (long *)plVar9[1];
              uVar11 = uVar11 + 1;
            } while (plVar7 + 3 != plVar9);
            uVar10 = *puVar17;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar10);
      }
      lVar19 = *plVar7;
      uVar18 = uVar18 + 1;
      *plVar7 = *plVar1;
      *(long **)(lVar19 + 8) = plVar1;
      *(long **)(*plVar1 + 8) = plVar7;
      *plVar1 = lVar19;
    } while (uVar18 < *(ushort *)(param_3 + 0x78));
  }
  return;
}


