/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01078cb8; name: FUN_01078cb8
 */


void FUN_01078cb8(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    plVar8 = *(long **)(param_1 + 0x38);
    if (plVar8 != (long *)0x0) {
      plVar9 = *(long **)(param_1 + 0x40);
      plVar7 = (long *)*plVar8;
      uVar6 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar6 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,plVar8,0x28,4);
      }
      else {
        FUN_00c48fe8(plVar9,plVar8,0x28,4);
      }
      while (plVar7 != (long *)0x0) {
        plVar8 = *(long **)(param_1 + 0x40);
        plVar9 = (long *)*plVar7;
        uVar6 = (**(code **)(*plVar8 + 0xf8))(plVar8);
        if (((uVar6 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
          (**(code **)(*plVar8 + 0x18))(plVar8,plVar7,0x28,4);
          plVar7 = plVar9;
        }
        else {
          FUN_00c48fe8(plVar8,plVar7,0x28,4);
          plVar7 = plVar9;
        }
      }
    }
    uVar6 = *(ulong *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x38) = 0;
    if (uVar6 != 0) {
      uVar2 = uVar6 & 3;
      if (uVar6 - 1 < 3) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          *(undefined8 *)(*(long *)(param_1 + 8) + uVar4 * 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 8) + uVar4 * 8 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 8) + uVar4 * 8 + 0x10) = 0;
          lVar5 = uVar4 * 8;
          uVar4 = uVar4 + 4;
          *(undefined8 *)(*(long *)(param_1 + 8) + lVar5 + 0x18) = 0;
        } while ((uVar6 & 0xfffffffffffffffc) != uVar4);
      }
      if (uVar2 != 0) {
        lVar5 = uVar4 << 3;
        do {
          *(undefined8 *)(*(long *)(param_1 + 8) + lVar5) = 0;
          uVar2 = uVar2 - 1;
          lVar5 = lVar5 + 8;
        } while (uVar2 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  plVar8 = *(long **)(param_1 + 0x38);
  if (plVar8 != (long *)0x0) {
    do {
      puVar1 = (undefined8 *)FUN_010807f8(param_1 + 8,plVar8 + 2);
      uVar3 = *(undefined8 *)((long)plVar8 + 0x1c);
      *puVar1 = *(undefined8 *)((long)plVar8 + 0x14);
      puVar1[1] = uVar3;
      plVar8 = (long *)*plVar8;
    } while (plVar8 != (long *)0x0);
  }
  return;
}


