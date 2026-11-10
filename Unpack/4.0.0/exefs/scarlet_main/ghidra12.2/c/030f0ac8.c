/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030f0ac8; name: FUN_030f0ac8
 */


void FUN_030f0ac8(long param_1,undefined8 *param_2)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  int local_a8 [2];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  local_a0 = *(undefined4 *)(param_1 + 0x94);
  uStack_9c = *(undefined4 *)(param_1 + 0x90);
  uStack_88 = *(undefined8 *)(param_1 + 0x48);
  local_90 = *(undefined8 *)(param_1 + 0x40);
  local_80 = param_1 + 0x50;
  uStack_78 = *(undefined8 *)(param_1 + 0x88);
  local_70 = *(undefined4 *)(param_1 + 0x9c);
  if (*(int *)(param_2 + 1) != 0) {
    piVar8 = (int *)*param_2;
    piVar1 = piVar8 + *(int *)(param_2 + 1);
    do {
      iVar3 = *piVar8;
      lVar11 = *(long *)(*(long *)(param_1 + 0x18) + 0x38) + (long)iVar3 * 0x100;
      iVar4 = *(int *)(lVar11 + 0xb8);
      if (iVar4 != 0) {
        lVar12 = (long)iVar4 << 3;
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 4);
        lVar11 = *(long *)(*(long *)(param_1 + 0x18) + 0x48);
        do {
          lVar9 = *(long *)(lVar11 + (long)*piVar10 * 0x18);
          local_a8[0] = *(int *)(lVar9 + 0x18);
          lVar2 = (long)local_a8[0];
          iVar4 = *(int *)(lVar9 + 0x1c);
          if (iVar3 == iVar4) {
            lVar5 = FUN_030f0c00(param_2,local_a8);
            if (lVar5 == 0) {
              uVar6 = 0;
              uVar7 = 0xffffffff;
            }
            else {
              uVar7 = *(uint *)(lVar5 + 4);
              uVar6 = ((int)lVar5 - (int)param_2[2]) * 0x20000000;
            }
            if ((int)(uVar7 | uVar6) < 0) goto LAB_030f0bac;
          }
          else {
LAB_030f0bac:
            FUN_030df500(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2 * 8),
                         *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 8),lVar9,
                         &local_a0);
          }
          lVar12 = lVar12 + -8;
          piVar10 = piVar10 + 2;
        } while (lVar12 != 0);
      }
      piVar8 = piVar8 + 1;
    } while (piVar8 != piVar1);
  }
  return;
}


