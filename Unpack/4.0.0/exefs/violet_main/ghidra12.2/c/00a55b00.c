/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a55b00; name: FUN_00a55b00
 */


bool FUN_00a55b00(ushort *param_1,ushort *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  ushort *puVar10;
  undefined8 uVar11;
  ushort *puVar12;
  int iVar13;
  long lVar14;
  ushort *puVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  ushort *puVar19;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  
  switch(((long)param_2 - (long)param_1 >> 3) * -0x5555555555555555) {
  case 0:
  case 1:
    break;
  case 2:
    puVar15 = param_2 + -0xc;
    uVar6 = *puVar15;
    lVar16 = *(long *)(*(long *)*param_3 + 0x64d0);
    if (lVar16 != 0) {
      uVar5 = *param_1;
      lVar1 = *(long *)*param_3 + 0x64d0;
      lVar14 = lVar1;
      lVar18 = lVar16;
      do {
        if ((int)(uint)uVar6 <= *(int *)(lVar18 + 0x1c)) {
          lVar14 = lVar18;
        }
        lVar18 = *(long *)(lVar18 + (ulong)(*(int *)(lVar18 + 0x1c) < (int)(uint)uVar6) * 8);
      } while (lVar18 != 0);
      lVar18 = lVar1;
      if ((lVar14 == lVar1) || ((int)(uint)uVar6 < *(int *)(lVar14 + 0x1c))) {
        iVar7 = 0x7fffffff;
      }
      else {
        iVar7 = *(int *)(lVar14 + 0x20);
      }
      do {
        if ((int)(uint)uVar5 <= *(int *)(lVar16 + 0x1c)) {
          lVar18 = lVar16;
        }
        lVar16 = *(long *)(lVar16 + (ulong)(*(int *)(lVar16 + 0x1c) < (int)(uint)uVar5) * 8);
      } while (lVar16 != 0);
      if ((lVar18 == lVar1) || ((int)(uint)uVar5 < *(int *)(lVar18 + 0x1c))) {
        iVar17 = 0x7fffffff;
      }
      else {
        iVar17 = *(int *)(lVar18 + 0x20);
      }
      if (iVar7 < iVar17) {
        uVar2 = *(undefined8 *)param_1;
        uVar4 = *(undefined8 *)(param_1 + 4);
        uVar11 = *(undefined8 *)(param_1 + 8);
        uVar3 = *(undefined8 *)(param_2 + -4);
        uVar8 = *(undefined8 *)puVar15;
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + -8);
        *(undefined8 *)(param_1 + 8) = uVar3;
        *(undefined8 *)param_1 = uVar8;
        *(undefined8 *)(param_2 + -8) = uVar4;
        *(undefined8 *)(param_2 + -4) = uVar11;
        *(undefined8 *)puVar15 = uVar2;
      }
    }
    break;
  case 3:
    FUN_00a55040(param_1,param_1 + 0xc,param_2 + -0xc,param_3);
    break;
  case 4:
    FUN_00a55460(param_1,param_1 + 0xc,param_1 + 0x18,param_2 + -0xc,param_3);
    break;
  case 5:
    FUN_00a55740(param_1,param_1 + 0xc,param_1 + 0x18,param_1 + 0x24,param_2 + -0xc,param_3);
    break;
  default:
    FUN_00a55040(param_1,param_1 + 0xc,param_1 + 0x18,param_3);
    if (param_1 + 0x24 != param_2) {
      iVar7 = 0;
      puVar15 = param_1 + 0x24;
      puVar19 = param_1 + 0x18;
      do {
        puVar10 = puVar15;
        uVar6 = *puVar10;
        lVar16 = *(long *)(*(long *)*param_3 + 0x64d0);
        if (lVar16 != 0) {
          uVar5 = *puVar19;
          lVar1 = *(long *)*param_3 + 0x64d0;
          lVar14 = lVar1;
          lVar18 = lVar16;
          do {
            if ((int)(uint)uVar6 <= *(int *)(lVar18 + 0x1c)) {
              lVar14 = lVar18;
            }
            lVar18 = *(long *)(lVar18 + (ulong)(*(int *)(lVar18 + 0x1c) < (int)(uint)uVar6) * 8);
          } while (lVar18 != 0);
          uVar9 = (uint)uVar6;
          lVar18 = lVar1;
          if ((lVar14 == lVar1) || ((int)uVar9 < *(int *)(lVar14 + 0x1c))) {
            iVar17 = 0x7fffffff;
          }
          else {
            iVar17 = *(int *)(lVar14 + 0x20);
          }
          do {
            if ((int)(uint)uVar5 <= *(int *)(lVar16 + 0x1c)) {
              lVar18 = lVar16;
            }
            lVar16 = *(long *)(lVar16 + (ulong)(*(int *)(lVar16 + 0x1c) < (int)(uint)uVar5) * 8);
          } while (lVar16 != 0);
          if ((lVar18 == lVar1) || ((int)(uint)uVar5 < *(int *)(lVar18 + 0x1c))) {
            iVar13 = 0x7fffffff;
          }
          else {
            iVar13 = *(int *)(lVar18 + 0x20);
          }
          if (iVar17 < iVar13) {
            uVar2 = *(undefined8 *)(puVar10 + 1);
            uVar4 = *(undefined8 *)(puVar10 + 5);
            uStack_38 = (undefined6)((ulong)*(undefined8 *)(puVar10 + 8) >> 0x10);
            uStack_3a = (undefined2)((ulong)uVar4 >> 0x30);
            puVar15 = puVar10;
            do {
              puVar12 = puVar19;
              uVar3 = *(undefined8 *)(puVar12 + 4);
              uVar8 = *(undefined8 *)(puVar12 + 8);
              *(undefined8 *)puVar15 = *(undefined8 *)puVar12;
              *(undefined8 *)(puVar15 + 4) = uVar3;
              *(undefined8 *)(puVar15 + 8) = uVar8;
              if (puVar12 == param_1) {
                puVar12 = param_1;
                break;
              }
              uVar5 = puVar12[-0xc];
              lVar16 = *(long *)(*(long *)*param_3 + 0x64d0);
              if (lVar16 == 0) break;
              lVar1 = *(long *)*param_3 + 0x64d0;
              lVar14 = lVar1;
              lVar18 = lVar16;
              do {
                if ((int)uVar9 <= *(int *)(lVar18 + 0x1c)) {
                  lVar14 = lVar18;
                }
                lVar18 = *(long *)(lVar18 + (ulong)(*(int *)(lVar18 + 0x1c) < (int)uVar9) * 8);
              } while (lVar18 != 0);
              lVar18 = lVar1;
              if ((lVar14 == lVar1) || ((int)uVar9 < *(int *)(lVar14 + 0x1c))) {
                iVar17 = 0x7fffffff;
              }
              else {
                iVar17 = *(int *)(lVar14 + 0x20);
              }
              do {
                if ((int)(uint)uVar5 <= *(int *)(lVar16 + 0x1c)) {
                  lVar18 = lVar16;
                }
                lVar16 = *(long *)(lVar16 + (ulong)(*(int *)(lVar16 + 0x1c) < (int)(uint)uVar5) * 8)
                ;
              } while (lVar16 != 0);
              if ((lVar18 == lVar1) || ((int)(uint)uVar5 < *(int *)(lVar18 + 0x1c))) {
                iVar13 = 0x7fffffff;
              }
              else {
                iVar13 = *(int *)(lVar18 + 0x20);
              }
              puVar19 = puVar12 + -0xc;
              puVar15 = puVar12;
            } while (iVar17 < iVar13);
            *puVar12 = uVar6;
            iVar7 = iVar7 + 1;
            *(ulong *)(puVar12 + 8) = CONCAT62(uStack_38,uStack_3a);
            *(undefined8 *)(puVar12 + 5) = uVar4;
            *(undefined8 *)(puVar12 + 1) = uVar2;
            if (iVar7 == 8) {
              return puVar10 + 0xc == param_2;
            }
          }
        }
        puVar15 = puVar10 + 0xc;
        puVar19 = puVar10;
      } while (puVar10 + 0xc != param_2);
    }
  }
  return true;
}


