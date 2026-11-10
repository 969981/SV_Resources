/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01078e88; name: FUN_01078e88
 */


void FUN_01078e88(long param_1,long param_2)

{
  long *plVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  memcpy((void *)(param_1 + 8),(void *)(param_2 + 8),0x2e4);
  plVar1 = (long *)(param_1 + 0x2f0);
  if (*(long *)(param_1 + 0x348) != 0) {
    plVar8 = *(long **)(param_1 + 800);
    if (plVar8 != (long *)0x0) {
      plVar10 = *(long **)(param_1 + 0x328);
      plVar9 = (long *)*plVar8;
      uVar7 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if (((uVar7 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar10 + 0x18))(plVar10,plVar8,0x18,4);
      }
      else {
        FUN_00c48fe8(plVar10,plVar8,0x18,4);
      }
      while (plVar9 != (long *)0x0) {
        plVar8 = *(long **)(param_1 + 0x328);
        plVar10 = (long *)*plVar9;
        uVar7 = (**(code **)(*plVar8 + 0xf8))(plVar8);
        if (((uVar7 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
          (**(code **)(*plVar8 + 0x18))(plVar8,plVar9,0x18,4);
          plVar9 = plVar10;
        }
        else {
          FUN_00c48fe8(plVar8,plVar9,0x18,4);
          plVar9 = plVar10;
        }
      }
    }
    uVar7 = *(ulong *)(param_1 + 0x2f8);
    *(undefined8 *)(param_1 + 800) = 0;
    if (uVar7 != 0) {
      uVar4 = uVar7 & 3;
      if (uVar7 - 1 < 3) {
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
        } while ((uVar7 & 0xfffffffffffffffc) != uVar5);
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
    *(undefined8 *)(param_1 + 0x348) = 0;
  }
  for (plVar8 = *(long **)(param_2 + 800); plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
    uVar2 = *(undefined1 *)((long)plVar8 + 0x14);
    puVar3 = (undefined1 *)FUN_01689bc0(plVar1,plVar8 + 2);
    *puVar3 = uVar2;
  }
  return;
}


