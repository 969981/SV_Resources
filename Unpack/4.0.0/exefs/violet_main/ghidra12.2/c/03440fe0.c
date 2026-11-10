/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03440fe0; name: FUN_03440fe0
 */


void FUN_03440fe0(long param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  undefined8 *puVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  ulong uVar14;
  
  uVar6 = *(int *)(param_1 + 0x314) - 1;
  iVar8 = -1;
  do {
    iVar5 = iVar8;
    uVar1 = uVar6 + 2;
    uVar6 = uVar6 + 1;
    uVar1 = -1 << (ulong)(uVar1 & 0x1f);
    iVar8 = iVar5 + 1;
  } while ((param_3 & (uVar1 ^ 0xffffffff)) == 0);
  uVar3 = 1 << (ulong)(uVar6 & 0x1f);
  uVar2 = iVar5 + 2;
  uVar14 = (ulong)uVar2;
  if ((((uVar3 & param_3) == 0) || ((param_3 & (-1 << (ulong)(uVar6 & 0x1f) ^ 0xffffffffU)) == 0))
     || (*(long *)(param_1 + 0x300) == 0)) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    puVar9 = (undefined8 *)
             (*(long *)(param_1 + 0x300) + (ulong)(uVar3 + param_2 + (uVar1 & param_3)));
    *puVar9 = 0;
  }
  piVar4 = (int *)FUN_034411e4(param_1,iVar8,puVar9,param_2,param_3);
  if (uVar2 < *(int *)(param_1 + 0x318) - 1U) {
    uVar14 = (ulong)uVar2;
    do {
      uVar6 = 1 << (ulong)(*(int *)(param_1 + 0x314) + (int)uVar14 & 0x1f);
      if (param_3 <= uVar6) break;
      if ((uVar6 & param_3) == 0) {
        if ((piVar4 != (int *)0x0) && ((*(int *)(param_1 + 0x30c) - param_3 & uVar6) != 0)) {
          piVar7 = (int *)(param_1 + uVar14 * 0x18);
          piVar10 = piVar7 + 4;
          piVar13 = *(int **)piVar10;
          if (piVar13 == (int *)0x0) {
            piVar11 = (int *)0x0;
            piVar4[0] = 0;
            piVar4[1] = 0;
LAB_0344118c:
            *(int **)piVar10 = piVar4;
            if (piVar11 == (int *)0x0) {
              *(int **)(param_1 + uVar14 * 0x18 + 8) = piVar4;
            }
            piVar4 = (int *)0x0;
            iVar8 = *piVar7 + 1;
          }
          else {
            if (piVar4 < piVar13) {
              piVar12 = (int *)0x0;
              piVar11 = piVar13;
            }
            else {
              piVar11 = piVar13;
              do {
                piVar12 = piVar11;
                piVar11 = *(int **)piVar12;
                if (piVar11 == (int *)0x0) goto LAB_03441180;
              } while (piVar11 <= piVar4);
            }
            if ((long)piVar11 - (long)piVar4 != (ulong)uVar6) {
LAB_03441180:
              if (piVar12 != (int *)0x0) {
                piVar10 = piVar12;
              }
              *(int **)piVar4 = piVar11;
              goto LAB_0344118c;
            }
            if (piVar11 != piVar13) {
              piVar10 = piVar12;
            }
            *(undefined8 *)piVar10 = *(undefined8 *)piVar11;
            puVar9 = (undefined8 *)(param_1 + uVar14 * 0x18 + 8);
            if ((int *)*puVar9 == piVar11) {
              *puVar9 = piVar12;
            }
            iVar8 = *piVar7 + -1;
          }
          *piVar7 = iVar8;
        }
      }
      else {
        piVar4 = (int *)FUN_034411e4(param_1,uVar14 & 0xffffffff,piVar4,param_2,param_3);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < *(int *)(param_1 + 0x318) - 1);
  }
  if (piVar4 == (int *)0x0) {
    return;
  }
  FUN_0344132c(param_1,uVar14 & 0xffffffff);
  return;
}


