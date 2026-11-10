/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01077f08; name: FUN_01077f08
 */


void FUN_01077f08(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  plVar1 = (long *)(param_1 + 8);
  if (*(long *)(param_1 + 0x60) != 0) {
    plVar7 = (long *)*(long *)(param_1 + 0x38);
    while (plVar7 != (long *)0x0) {
      plVar8 = *(long **)(param_1 + 0x40);
      plVar9 = (long *)*plVar7;
      uVar2 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar2 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,plVar7,0x20,4);
        plVar7 = plVar9;
      }
      else {
        FUN_00c48fe8(plVar8,plVar7,0x20,4);
        plVar7 = plVar9;
      }
    }
    uVar2 = *(ulong *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x38) = 0;
    if (uVar2 != 0) {
      uVar4 = uVar2 & 3;
      if (uVar2 - 1 < 3) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        do {
          *(undefined8 *)(*plVar1 + uVar5 * 8) = 0;
          *(undefined8 *)(*plVar1 + uVar5 * 8 + 8) = 0;
          *(undefined8 *)(*plVar1 + uVar5 * 8 + 0x10) = 0;
          lVar6 = uVar5 * 8;
          uVar5 = uVar5 + 4;
          *(undefined8 *)(*plVar1 + lVar6 + 0x18) = 0;
        } while ((uVar2 & 0xfffffffffffffffc) != uVar5);
      }
      if (uVar4 != 0) {
        lVar6 = uVar5 << 3;
        do {
          *(undefined8 *)(*plVar1 + lVar6) = 0;
          uVar4 = uVar4 - 1;
          lVar6 = lVar6 + 8;
        } while (uVar4 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  for (plVar7 = *(long **)(param_2 + 0x38); plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
    puVar3 = (undefined8 *)FUN_01078064(plVar1,plVar7 + 2);
    *puVar3 = *(undefined8 *)((long)plVar7 + 0x14);
  }
  return;
}


