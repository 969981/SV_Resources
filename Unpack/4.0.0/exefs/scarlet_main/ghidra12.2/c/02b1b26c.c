/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b1b26c; name: FUN_02b1b26c
 */


void FUN_02b1b26c(undefined8 *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
  lVar9 = *(long *)(param_2 + 0x88);
  if (lVar9 == 0) {
    if (*(long *)(param_2 + 0x50) == 0) {
      return;
    }
    if ((*(byte *)(*(long *)(param_2 + 0x50) + 0x1e8) & 1) == 0) {
      return;
    }
    piVar7 = (int *)FUN_029dae08(*(undefined8 *)(param_2 + 0x50));
  }
  else {
    if (*(long *)(lVar9 + 0x88) == 0) {
      return;
    }
    if ((*(byte *)(*(long *)(lVar9 + 0x88) + 0x1e8) & 1) == 0) {
      return;
    }
    if (*(long *)(lVar9 + 0x88) == 0) {
      return;
    }
    if ((*(byte *)(*(long *)(lVar9 + 0x88) + 0x1e8) & 1) == 0) {
      return;
    }
    puVar6 = (uint *)(**(code **)(**(long **)(lVar9 + 0x88) + 0x70))();
    piVar7 = (int *)((long)puVar6 + (ulong)*puVar6);
  }
  if (piVar7 != (int *)0x0) {
    uVar10 = (ulong)*(ushort *)((long)piVar7 + (4 - (long)*piVar7));
    puVar6 = (uint *)((long)piVar7 + uVar10);
    uVar12 = (ulong)*puVar6;
    uVar2 = *(uint *)((long)puVar6 + uVar12);
    if (uVar2 != 0) {
      lVar1 = uVar12 + uVar10;
      lVar9 = 0;
      do {
        uVar10 = (ulong)*(uint *)((long)piVar7 + lVar9 + lVar1 + 4);
        lVar4 = lVar9 + (uVar10 - (long)*(int *)((long)piVar7 + lVar9 + uVar10 + lVar1 + 4)) + lVar1
        ;
        uVar3 = *(ushort *)((long)piVar7 + lVar4 + 4);
        if (uVar3 < 7) {
          lVar11 = 0;
        }
        else {
          uVar12 = (ulong)*(ushort *)((long)piVar7 + lVar4 + 10);
          lVar11 = 0;
          if (uVar12 != 0) {
            lVar11 = uVar10 + uVar12;
            lVar11 = (long)piVar7 +
                     lVar9 + lVar11 + (ulong)*(uint *)((long)piVar7 + lVar9 + lVar11 + lVar1 + 4) +
                     lVar1 + 4;
          }
        }
        iVar5 = strcmp((char *)(lVar11 + 4),"System/SetTriggerParameter");
        if (iVar5 == 0) {
          if (uVar3 < 9) {
            uVar8 = 0;
          }
          else {
            uVar12 = (ulong)*(ushort *)((long)piVar7 + lVar4 + 0xc);
            uVar8 = 0;
            if (uVar12 != 0) {
              uVar8 = *(undefined4 *)((long)piVar7 + lVar9 + uVar10 + uVar12 + lVar1 + 4);
            }
          }
          *(undefined4 *)*param_1 = uVar8;
        }
        lVar9 = lVar9 + 4;
      } while ((ulong)uVar2 * 4 != lVar9);
    }
  }
  return;
}


