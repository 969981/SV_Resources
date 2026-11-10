/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00128690; name: FUN_00128690
 */


void FUN_00128690(long param_1)

{
  ulong *puVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  undefined4 uVar6;
  byte bVar7;
  ushort uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ushort uVar13;
  int iVar14;
  
  lVar12 = *(long *)(param_1 + 0x20);
  lVar2 = param_1 + 0x60;
  if (lVar12 != lVar2) {
    do {
      while (uVar8 = *(ushort *)(lVar12 + 0x3e), (uVar8 >> 1 & 1) != 0) {
        if ((uVar8 >> 9 & 1) == 0) {
          if ((uVar8 >> 4 & 1) == 0) {
            uVar13 = 1;
            uVar11 = *(ulong *)(param_1 + 0x10);
            lVar10 = lVar12;
            if (*(ulong *)(lVar12 + 8) < uVar11) {
LAB_00128768:
              *(ulong *)(lVar10 + 8) = uVar11;
            }
          }
          else {
            uVar13 = uVar8 >> 10 & 7;
            if (uVar13 == 0) {
              uVar13 = 1;
            }
            else {
              iVar14 = *(int *)(lVar12 + 0x38);
              *(byte *)(param_1 + 0xb) = (byte)uVar8 & 1;
              FUN_001299c0(param_1,*(long *)(param_1 + 0x30) + (long)iVar14,uVar13,1);
              plVar3 = (long *)(*(long *)(param_1 + 0x30) + (long)*(int *)(lVar12 + 0x38));
              if (uVar13 == 0) {
                bVar7 = 0;
              }
              else if (uVar13 == 5) {
                lVar10 = FUN_0013be00(param_1,"error in error handling",0x17);
                *plVar3 = lVar10;
                bVar7 = *(byte *)(lVar10 + 8) | 0x40;
              }
              else if (uVar13 == 4) {
                lVar10 = *(long *)(*(long *)(param_1 + 0x18) + 0x110);
                *plVar3 = lVar10;
                bVar7 = *(byte *)(lVar10 + 8) | 0x40;
              }
              else {
                lVar10 = *(long *)(param_1 + 0x10);
                *plVar3 = *(long *)(lVar10 + -0x10);
                bVar7 = *(byte *)(lVar10 + -8);
              }
              *(byte *)(plVar3 + 1) = bVar7;
              lVar10 = *(long *)(param_1 + 0x20);
              *(long **)(param_1 + 0x10) = plVar3 + 2;
              plVar3 = plVar3 + 2;
              while (plVar5 = plVar3, lVar10 != 0) {
                puVar1 = (ulong *)(lVar10 + 8);
                lVar10 = *(long *)(lVar10 + 0x10);
                plVar3 = (long *)*puVar1;
                if ((long *)*puVar1 <= plVar5) {
                  plVar3 = plVar5;
                }
              }
              iVar9 = (int)((ulong)((long)plVar5 - *(long *)(param_1 + 0x30)) >> 4);
              iVar14 = 0x14;
              if (0x13 < iVar9) {
                iVar14 = iVar9 + 1;
              }
              iVar4 = iVar14 * 3;
              iVar9 = 1000000;
              if (iVar4 < 0xf4241 || iVar14 < 0x7a121) {
                iVar9 = iVar14 * 2;
              }
              if (iVar14 < 0xf4241) {
                iVar14 = 1000000;
                if (iVar4 < 0xf4241) {
                  iVar14 = iVar4;
                }
                if (iVar14 < (int)((ulong)(*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x30)) >>
                                  4)) {
                  FUN_00126ce0(param_1,iVar9,0);
                }
              }
              FUN_0013af50(param_1);
              uVar8 = *(ushort *)(lVar12 + 0x3e) & 0xe3ff;
              *(ushort *)(lVar12 + 0x3e) = uVar8;
            }
            *(ushort *)(lVar12 + 0x3e) = uVar8 & 0xffef;
            *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(lVar12 + 0x28);
            lVar10 = *(long *)(param_1 + 0x20);
            uVar11 = *(ulong *)(param_1 + 0x10);
            if (*(ulong *)(lVar10 + 8) < uVar11) goto LAB_00128768;
          }
          uVar6 = (**(code **)(lVar12 + 0x20))(param_1,uVar13,*(undefined8 *)(lVar12 + 0x30));
        }
        else {
          uVar6 = *(undefined4 *)(lVar12 + 0x38);
        }
        FUN_00127330(param_1,lVar12,uVar6);
        lVar12 = *(long *)(param_1 + 0x20);
        if (lVar12 == lVar2) {
          return;
        }
      }
      FUN_00141030(param_1);
      FUN_00141150(param_1,lVar12);
      lVar12 = *(long *)(param_1 + 0x20);
    } while (lVar12 != lVar2);
  }
  return;
}


