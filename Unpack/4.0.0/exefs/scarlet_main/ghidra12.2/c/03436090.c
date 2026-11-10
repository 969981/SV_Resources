/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03436090; name: FUN_03436090
 */


void FUN_03436090(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar10;
  uVar10 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar10;
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  uVar3 = *(uint *)(param_2 + 0x40);
  uVar8 = (ulong)uVar3;
  if (uVar3 != 0xffffffff) {
    lVar5 = (**(code **)(PTR_DAT_047e2fd0 + 0x18))(0xb,(ulong)(uVar3 + 1) << 5,0x10);
    *(long *)(param_1 + 0x38) = lVar5;
    if (lVar5 == 0) {
      return;
    }
    *(uint *)(param_1 + 0x44) = uVar3 + 1;
  }
  uVar4 = *(uint *)(param_1 + 0x40);
  uVar9 = (ulong)uVar4;
  if (uVar4 <= uVar3) {
    if (*(uint *)(param_1 + 0x44) < uVar3) {
      uVar1 = *(uint *)(param_1 + 0x44) + (uVar3 - uVar4);
      lVar5 = (**(code **)(PTR_DAT_047e2fd0 + 0x28))
                        (0xb,*(undefined8 *)(param_1 + 0x38),(ulong)uVar1 << 5,0x10);
      if (lVar5 == 0) goto LAB_034361b8;
      *(long *)(param_1 + 0x38) = lVar5;
      *(uint *)(param_1 + 0x44) = uVar1;
    }
    if (uVar4 < uVar3) {
      uVar6 = ~uVar9;
      if ((uVar3 - uVar4 & 1) != 0) {
        if (*(long *)(param_1 + 0x38) != 0) {
          lVar5 = *(long *)(param_1 + 0x38) + uVar9 * 0x20;
          *(undefined8 *)(lVar5 + 0x10) = 0;
          *(undefined8 *)(lVar5 + 0x18) = 0;
        }
        uVar9 = uVar9 + 1;
      }
      if (uVar6 + uVar8 != 0) {
        lVar7 = uVar8 - uVar9;
        lVar5 = uVar9 << 5;
        do {
          if (*(long *)(param_1 + 0x38) != 0) {
            lVar2 = *(long *)(param_1 + 0x38) + lVar5;
            *(undefined8 *)(lVar2 + 0x10) = 0;
            *(undefined8 *)(lVar2 + 0x18) = 0;
          }
          if (*(long *)(param_1 + 0x38) != 0) {
            lVar2 = *(long *)(param_1 + 0x38) + lVar5;
            *(undefined8 *)(lVar2 + 0x30) = 0;
            *(undefined8 *)(lVar2 + 0x38) = 0;
          }
          lVar7 = lVar7 + -2;
          lVar5 = lVar5 + 0x40;
        } while (lVar7 != 0);
      }
    }
  }
  *(uint *)(param_1 + 0x40) = uVar3;
LAB_034361b8:
  memcpy(*(void **)(param_1 + 0x38),*(void **)(param_2 + 0x38),uVar8 << 5);
  return;
}


