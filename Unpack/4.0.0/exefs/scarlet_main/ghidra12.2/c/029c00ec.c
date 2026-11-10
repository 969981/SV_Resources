/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029c00ec; name: FUN_029c00ec
 */


void FUN_029c00ec(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar1 = uVar5 & 3;
    if (uVar5 - 1 < 3) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      do {
        *(undefined8 *)(*param_1 + uVar3 * 8) = 0;
        *(undefined8 *)(*param_1 + uVar3 * 8 + 8) = 0;
        *(undefined8 *)(*param_1 + uVar3 * 8 + 0x10) = 0;
        lVar4 = uVar3 * 8;
        uVar3 = uVar3 + 4;
        *(undefined8 *)(*param_1 + lVar4 + 0x18) = 0;
      } while ((uVar5 & 0xfffffffffffffffc) != uVar3);
    }
    if (uVar1 != 0) {
      lVar4 = uVar3 << 3;
      do {
        *(undefined8 *)(*param_1 + lVar4) = 0;
        uVar1 = uVar1 - 1;
        lVar4 = lVar4 + 8;
      } while (uVar1 != 0);
    }
    plVar8 = (long *)param_1[6];
    param_1[0xb] = 0;
    param_1[6] = 0;
    while (plVar8 != (long *)0x0) {
      if (param_2 == (long *)0x0) {
        plVar6 = (long *)param_1[7];
        plVar7 = (long *)*plVar8;
        uVar5 = (**(code **)(*plVar6 + 0xf8))(plVar6);
        if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
          (**(code **)(*plVar6 + 0x18))(plVar6,plVar8,0x28,8);
        }
        else {
          FUN_00c48fe8(plVar6,plVar8,0x28,8);
        }
        if (plVar7 == (long *)0x0) {
          return;
        }
        plVar6 = (long *)param_1[7];
        plVar8 = (long *)*plVar7;
        uVar5 = (**(code **)(*plVar6 + 0xf8))(plVar6);
        if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
          (**(code **)(*plVar6 + 0x18))(plVar6,plVar7,0x28,8);
        }
        else {
          FUN_00c48fe8(plVar6,plVar7,0x28,8);
        }
        while (plVar8 != (long *)0x0) {
          plVar6 = (long *)param_1[7];
          plVar7 = (long *)*plVar8;
          uVar5 = (**(code **)(*plVar6 + 0xf8))(plVar6);
          if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
            (**(code **)(*plVar6 + 0x18))(plVar6,plVar8,0x28,8);
            plVar8 = plVar7;
          }
          else {
            FUN_00c48fe8(plVar6,plVar8,0x28,8);
            plVar8 = plVar7;
          }
        }
        return;
      }
      plVar8[2] = param_2[2];
      uVar2 = param_2[3];
      lVar4 = *plVar8;
      *(undefined4 *)(plVar8 + 4) = *(undefined4 *)(param_2 + 4);
      plVar8[3] = uVar2;
      FUN_029c0330(param_1,plVar8);
      param_2 = (long *)*param_2;
      plVar8 = (long *)lVar4;
    }
  }
  for (; param_2 != (long *)0x0; param_2 = (long *)*param_2) {
    FUN_029c036c(param_1,param_2 + 2);
  }
  return;
}


