/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0342549c; name: FUN_0342549c
 */


void FUN_0342549c(undefined8 param_1,long param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  lVar4 = param_2 + (ulong)param_3 * 0x290;
  lVar3 = *(long *)(lVar4 + 0x108);
  uVar2 = (ulong)param_3;
  if (lVar3 != 0) {
    uVar6 = (ulong)*(uint *)(lVar3 + 0x28);
    if (*(uint *)(lVar3 + 0x28) != 0) {
      plVar7 = *(long **)(lVar3 + 0x20);
      plVar10 = plVar7 + uVar6;
      plVar8 = plVar7;
      do {
        iVar5 = (int)uVar6;
        if (*plVar8 == lVar4 + 0xd0 || *plVar8 == param_2 + uVar2 * 0x290 + 0x110) {
          plVar9 = plVar8;
          if (plVar8 < plVar10 + -1) {
            do {
              plVar7 = plVar9 + 1;
              *plVar9 = *plVar7;
              plVar9 = plVar7;
            } while (plVar7 < plVar10 + -1);
            iVar5 = *(int *)(lVar3 + 0x28);
            plVar7 = *(long **)(lVar3 + 0x20);
          }
          uVar6 = (ulong)(iVar5 - 1U);
          *(uint *)(lVar3 + 0x28) = iVar5 - 1U;
        }
        else {
          plVar8 = plVar8 + 1;
        }
        plVar10 = plVar7 + uVar6;
      } while (plVar10 != plVar8);
    }
    uVar6 = (ulong)*(uint *)(lVar3 + 0x38);
    if (*(uint *)(lVar3 + 0x38) != 0) {
      lVar4 = param_2 + uVar2 * 0x290;
      plVar7 = *(long **)(lVar3 + 0x30);
      plVar10 = plVar7 + uVar6;
      plVar8 = plVar7;
      do {
        iVar5 = (int)uVar6;
        lVar1 = *plVar8;
        if (((lVar1 == lVar4 + 0x2d0 || lVar1 == lVar4 + 0x250) || lVar1 == lVar4 + 0x150) ||
            lVar1 == lVar4 + 0x1d0) {
          plVar9 = plVar8;
          if (plVar8 < plVar10 + -1) {
            do {
              plVar7 = plVar9 + 1;
              *plVar9 = *plVar7;
              plVar9 = plVar7;
            } while (plVar7 < plVar10 + -1);
            iVar5 = *(int *)(lVar3 + 0x38);
            plVar7 = *(long **)(lVar3 + 0x30);
          }
          uVar6 = (ulong)(iVar5 - 1U);
          *(uint *)(lVar3 + 0x38) = iVar5 - 1U;
        }
        else {
          plVar8 = plVar8 + 1;
        }
        plVar10 = plVar7 + uVar6;
      } while (plVar10 != plVar8);
    }
  }
  param_2 = param_2 + uVar2 * 0x290;
  *(undefined4 *)(param_2 + 400) = 0;
  *(undefined1 *)(param_2 + 0x198) = 0;
  *(undefined4 *)(param_2 + 0x1a8) = 0;
  *(undefined1 *)(param_2 + 0x1b0) = 0;
  *(undefined8 *)(param_2 + 0x180) = 0;
  *(undefined4 *)(param_2 + 0x210) = 0;
  *(undefined1 *)(param_2 + 0x218) = 0;
  *(undefined4 *)(param_2 + 0x228) = 0;
  *(undefined1 *)(param_2 + 0x230) = 0;
  *(undefined8 *)(param_2 + 0x200) = 0;
  *(undefined4 *)(param_2 + 0x290) = 0;
  *(undefined1 *)(param_2 + 0x298) = 0;
  *(undefined4 *)(param_2 + 0x2a8) = 0;
  *(undefined1 *)(param_2 + 0x2b0) = 0;
  *(undefined8 *)(param_2 + 0x280) = 0;
  *(undefined4 *)(param_2 + 0x310) = 0;
  *(undefined1 *)(param_2 + 0x318) = 0;
  *(undefined4 *)(param_2 + 0x328) = 0;
  *(undefined1 *)(param_2 + 0x330) = 0;
  *(undefined8 *)(param_2 + 0x300) = 0;
  return;
}


