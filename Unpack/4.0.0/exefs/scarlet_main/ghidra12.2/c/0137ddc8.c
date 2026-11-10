/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0137ddc8; name: FUN_0137ddc8
 */


void FUN_0137ddc8(long param_1)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(long *)(param_1 + 0x60) != 0) {
    plVar1 = (long *)*(long *)(param_1 + 0x38);
    while (plVar1 != (long *)0x0) {
      plVar6 = *(long **)(param_1 + 0x40);
      plVar7 = (long *)*plVar1;
      uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,plVar1,0x20,4);
        plVar1 = plVar7;
      }
      else {
        FUN_00c48fe8(plVar6,plVar1,0x20,4);
        plVar1 = plVar7;
      }
    }
    uVar2 = *(ulong *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x38) = 0;
    if (uVar2 != 0) {
      uVar3 = uVar2 & 3;
      if (uVar2 - 1 < 3) {
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
        } while ((uVar2 & 0xfffffffffffffffc) != uVar4);
      }
      if (uVar3 != 0) {
        lVar5 = uVar4 << 3;
        do {
          *(undefined8 *)(*(long *)(param_1 + 8) + lVar5) = 0;
          uVar3 = uVar3 - 1;
          lVar5 = lVar5 + 8;
        } while (uVar3 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  return;
}


