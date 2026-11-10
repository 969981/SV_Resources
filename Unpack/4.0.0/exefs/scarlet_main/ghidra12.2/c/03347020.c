/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03347020; name: FUN_03347020
 */


undefined1  [16] FUN_03347020(long param_1,ulong param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  
  plVar1 = (long *)(param_1 + 0x50);
  if (*(int *)(param_1 + 0x58) == 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    puVar4 = PTR_PTR_047d1a50;
    uVar2 = *(uint *)(*(long *)(param_1 + 0x68) + 0xa0);
    if (0 < (int)uVar2) {
      iVar10 = 0;
      uVar9 = 0;
      iVar7 = iVar10;
      if ((param_2 & 1) == 0) {
        do {
          iVar10 = *(int *)(param_1 + 0x20);
          if (1 < iVar10) {
            uVar8 = (int)uVar9 * -0x61c8864f;
            uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
            uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
            while( true ) {
              uVar8 = uVar8 & iVar10 - 1U;
              uVar3 = *(uint *)(*(long *)(param_1 + 0x18) + (long)(int)uVar8 * 4);
              if (uVar3 == 0xffffffff) break;
              if (uVar9 == uVar3) {
                if (((int)uVar8 < iVar10) &&
                   (lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x68) + 0x98) + uVar9 * 8),
                   *(char *)(lVar6 + 0x34) == '\0')) {
                  iVar10 = iVar7 + 1;
                  if ((int)(*(uint *)(param_1 + 0x5c) & 0x7fffffff) <= iVar7) {
                    FUN_033414f4(plVar1,puVar4,(long)iVar10);
                    iVar7 = *(int *)(param_1 + 0x58);
                  }
                  *(long *)(*(long *)(param_1 + 0x50) + (long)iVar7 * 8) = lVar6;
                  *(int *)(param_1 + 0x58) = iVar10;
                  goto LAB_03347194;
                }
                break;
              }
              uVar8 = uVar8 + 1;
            }
          }
          iVar10 = iVar7;
LAB_03347194:
          uVar9 = uVar9 + 1;
          iVar7 = iVar10;
        } while (uVar9 != uVar2);
      }
      else {
        do {
          iVar7 = *(int *)(param_1 + 0x20);
          if (1 < iVar7) {
            uVar8 = (int)uVar9 * -0x61c8864f;
            uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
            uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
            while( true ) {
              uVar8 = uVar8 & iVar7 - 1U;
              uVar3 = *(uint *)(*(long *)(param_1 + 0x18) + (long)(int)uVar8 * 4);
              if (uVar3 == 0xffffffff) break;
              if (uVar9 == uVar3) {
                if ((int)uVar8 < iVar7) {
                  iVar7 = iVar10 + 1;
                  uVar11 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x68) + 0x98) + uVar9 * 8);
                  if ((int)(*(uint *)(param_1 + 0x5c) & 0x7fffffff) <= iVar10) {
                    FUN_033414f4(plVar1,puVar4,(long)iVar7);
                    iVar10 = *(int *)(param_1 + 0x58);
                  }
                  *(undefined8 *)(*(long *)(param_1 + 0x50) + (long)iVar10 * 8) = uVar11;
                  *(int *)(param_1 + 0x58) = iVar7;
                  iVar10 = iVar7;
                }
                break;
              }
              uVar8 = uVar8 + 1;
            }
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 != uVar2);
      }
      if (iVar10 != 0) {
        lVar5 = *plVar1;
        lVar6 = lVar5 + (long)iVar10 * 8;
        goto LAB_033471e8;
      }
    }
    lVar6 = 0;
    lVar5 = 0;
  }
  else {
    lVar5 = *plVar1;
    lVar6 = lVar5 + (long)*(int *)(param_1 + 0x58) * 8;
  }
LAB_033471e8:
  auVar12._8_8_ = lVar6;
  auVar12._0_8_ = lVar5;
  return auVar12;
}


