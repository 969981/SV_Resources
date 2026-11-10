/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0184c590; name: FUN_0184c590
 */


void FUN_0184c590(long *param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long *local_b0;
  long local_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  long local_88;
  long *plStack_80;
  long *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long *local_48;
  
  uVar2 = (**(code **)(*param_1 + 0x138))();
  FUN_0184c9b0(&local_60,uVar2,param_2);
  local_b0 = (long *)*param_3;
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x18))();
  }
  local_a8 = param_3[1];
  local_a0 = (long *)param_3[2];
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x18))();
  }
  FUN_00e3c378(&local_98,param_3 + 3);
  FUN_0184c838(local_60 + 0x10,&local_b0);
  plVar7 = local_98;
  if (local_98 != (long *)0x0) {
    plVar6 = local_90;
    if (local_90 == local_98) {
      plVar6 = local_98;
    }
    else {
      do {
        plVar6 = plVar6 + -1;
        if ((long *)*plVar6 != (long *)0x0) {
          (**(code **)(*(long *)*plVar6 + 0x20))();
        }
      } while (plVar7 != plVar6);
      plVar6 = local_98;
    }
    local_90 = plVar7;
    uVar3 = (**(code **)(*plStack_80 + 0xf8))(plStack_80);
    if ((uVar3 & 1) != 0) {
      lVar4 = FUN_00c4e600();
      if (0 < *(int *)(lVar4 + 0x12c8)) {
        FUN_00c48fe8(plStack_80,plVar6,local_88 - (long)plVar6,8);
        goto LAB_0184c69c;
      }
    }
    (**(code **)(*plStack_80 + 0x18))(plStack_80,plVar6,local_88 - (long)plVar6,8);
  }
LAB_0184c69c:
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  plVar7 = (long *)*param_4;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  uVar1 = *(undefined4 *)(param_4 + 1);
  pcVar5 = (code *)local_60[0x21];
  if (pcVar5 != (code *)0x0) {
    local_60[0x22] = 0;
    local_60[0x23] = 0;
    local_60[0x20] = 0;
    local_60[0x21] = 0;
    (*pcVar5)(local_60 + 0x24);
  }
  *(undefined4 *)(local_60 + 0x25) = uVar1;
  local_60[0x20] = (long)&LAB_021eb770;
  local_60[0x21] = (long)&LAB_02b6f144;
  pcVar5 = (code *)local_60[0x31];
  local_60[0x22] = (long)&LAB_02b6f15c;
  local_60[0x23] = (long)&LAB_02b6f19c;
  local_60[0x24] = (long)plVar7;
  if (pcVar5 != (code *)0x0) {
    local_60[0x32] = 0;
    local_60[0x33] = 0;
    local_60[0x30] = 0;
    local_60[0x31] = 0;
    (*pcVar5)(local_60 + 0x34);
  }
  *(undefined1 *)(local_60 + 0x34) = 0;
  local_60[0x30] = (long)&LAB_02b6f1b4;
  local_60[0x31] = (long)&LAB_02b6f1b8;
  pcVar5 = (code *)local_60[0x41];
  local_60[0x32] = (long)&LAB_02b6f1bc;
  local_60[0x33] = (long)&LAB_02b6f1c8;
  if (pcVar5 != (code *)0x0) {
    local_60[0x43] = 0;
    local_60[0x42] = 0;
    local_60[0x41] = 0;
    local_60[0x40] = 0;
    (*pcVar5)(local_60 + 0x44);
  }
  pcVar5 = (code *)local_60[0x51];
  if (pcVar5 != (code *)0x0) {
    local_60[0x53] = 0;
    local_60[0x52] = 0;
    local_60[0x51] = 0;
    local_60[0x50] = 0;
    (*pcVar5)(local_60 + 0x54);
  }
  local_b0 = local_60;
  local_a8 = local_58;
  local_a0 = (long *)uStack_50;
  local_98 = local_48;
  FUN_00e767a8(param_1,&local_b0);
  FUN_0184c8f0(&local_b0);
  return;
}


