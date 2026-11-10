/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0137e6e8; name: FUN_0137e6e8
 */


void FUN_0137e6e8(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  *(undefined1 *)(param_1 + 0x70) = 0;
  if (*(long *)(param_1 + 0x60) != 0) {
    puVar4 = *(undefined8 **)(param_1 + 0x38);
    if (puVar4 != (undefined8 *)0x0) {
      plVar6 = *(long **)(param_1 + 0x40);
      plVar5 = (long *)*puVar4;
      uVar1 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,puVar4,0x20,4);
      }
      else {
        FUN_00c48fe8(plVar6,puVar4,0x20,4);
      }
      if (plVar5 != (long *)0x0) {
        plVar7 = *(long **)(param_1 + 0x40);
        plVar6 = (long *)*plVar5;
        uVar1 = (**(code **)(*plVar7 + 0xf8))(plVar7);
        if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
          (**(code **)(*plVar7 + 0x18))(plVar7,plVar5,0x20,4);
        }
        else {
          FUN_00c48fe8(plVar7,plVar5,0x20,4);
        }
        while (plVar6 != (long *)0x0) {
          plVar5 = *(long **)(param_1 + 0x40);
          plVar7 = (long *)*plVar6;
          uVar1 = (**(code **)(*plVar5 + 0xf8))(plVar5);
          if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
            (**(code **)(*plVar5 + 0x18))(plVar5,plVar6,0x20,4);
            plVar6 = plVar7;
          }
          else {
            FUN_00c48fe8(plVar5,plVar6,0x20,4);
            plVar6 = plVar7;
          }
        }
      }
    }
    lVar2 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x38) = 0;
    if ((((lVar2 != 0) && (**(undefined8 **)(param_1 + 8) = 0, lVar2 != 1)) &&
        (*(undefined8 *)(*(long *)(param_1 + 8) + 8) = 0, lVar2 != 2)) &&
       (*(undefined8 *)(*(long *)(param_1 + 8) + 0x10) = 0, lVar2 != 3)) {
      lVar3 = 3;
      do {
        *(undefined8 *)(*(long *)(param_1 + 8) + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  return;
}


