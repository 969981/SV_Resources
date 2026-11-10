/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01788284; name: FUN_01788284
 */


void FUN_01788284(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  undefined *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulong local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long *local_38;
  
  lVar3 = *param_2;
  uVar1 = *(ulong *)(lVar3 + 0x1d0);
  uStack_48 = *(undefined8 *)(lVar3 + 0x1d8);
  local_40 = *(undefined8 *)(lVar3 + 0x1e0);
  plVar8 = *(long **)(lVar3 + 0x1e8);
  local_50 = uVar1;
  local_38 = plVar8;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  uVar4 = *(ulong *)(*param_1 + 0x160);
  if (uVar4 != 0) {
    uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      uVar6 = uVar4 - 1 & uVar1;
    }
    else {
      uVar6 = uVar1;
      if (uVar4 <= uVar1) {
        uVar6 = 0;
        if (uVar4 != 0) {
          uVar6 = uVar1 / uVar4;
        }
        uVar6 = uVar1 - uVar6 * uVar4;
      }
    }
    plVar7 = *(long **)(*(long *)(*param_1 + 0x158) + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if (uVar5 < 2) {
        do {
          if (plVar7[1] == uVar1) {
            if (plVar7[2] == uVar1) goto LAB_017883b8;
          }
          else if ((plVar7[1] & uVar4 - 1) != uVar6) break;
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar5 = plVar7[1];
          if (uVar5 == uVar1) {
            if (plVar7[2] == uVar1) goto LAB_017883b8;
          }
          else {
            if (uVar4 <= uVar5) {
              uVar2 = 0;
              if (uVar4 != 0) {
                uVar2 = uVar5 / uVar4;
              }
              uVar5 = uVar5 - uVar2 * uVar4;
            }
            if (uVar5 != uVar6) break;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
LAB_017883f4:
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  return;
LAB_017883b8:
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = PTR_DAT_047dcde8 + 0x10;
  uStack_88 = 0;
  FUN_0178842c(*(undefined8 *)param_1[1],&local_50,&local_90);
  FUN_01185de0(&local_90);
  plVar8 = local_38;
  goto LAB_017883f4;
}


