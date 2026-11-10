/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f9208c; name: FUN_00f9208c
 */


void FUN_00f9208c(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined1 *local_50;
  undefined1 *local_48;
  long local_40;
  long *plStack_38;
  
  lVar3 = *param_1;
  if ((ulong)((param_1[2] - lVar3 >> 3) * -0x3333333333333333) < param_2) {
    lVar5 = param_1[1];
    plVar7 = param_1 + 3;
    local_40 = 0;
    plStack_38 = plVar7;
    lVar1 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 * 0x28,8);
    if (lVar1 == 0) {
      (**(code **)(*(long *)*plVar7 + 0xe8))((long *)*plVar7);
    }
    local_50 = (undefined1 *)(lVar1 + (lVar5 - lVar3 >> 3) * 8);
    local_40 = lVar1 + param_2 * 0x28;
    local_48 = local_50;
    FUN_00f92240(plVar7,*param_1,param_1[1],&local_50);
    puVar6 = (undefined1 *)*param_1;
    puVar4 = (undefined1 *)param_1[1];
    *param_1 = (long)local_50;
    param_1[1] = (long)local_48;
    lVar3 = param_1[2];
    param_1[2] = local_40;
    local_48 = puVar4;
    local_50 = puVar6;
    local_40 = lVar3;
    if (puVar4 != puVar6) {
      do {
        puVar4 = local_48 + -0x28;
        if (local_48[-0x28] != '\0') {
          plVar7 = (long *)(local_48 + -8);
          local_48 = puVar4;
          if ((long *)*plVar7 != (long *)0x0) {
            (**(code **)(*(long *)*plVar7 + 0x20))();
          }
          *puVar4 = 0;
          puVar4 = local_48;
        }
        local_48 = puVar4;
      } while (local_48 != puVar6);
    }
    if (puVar6 != (undefined1 *)0x0) {
      lVar3 = local_40 - (long)puVar6;
      plVar7 = (long *)*plStack_38;
      uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar2 & 1) != 0) && (lVar1 = FUN_00c4e600(), 0 < *(int *)(lVar1 + 0x12c8))) {
        FUN_00c48fe8(plVar7,puVar6,lVar3,8);
        return;
      }
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar6,lVar3,8);
    }
  }
  return;
}


