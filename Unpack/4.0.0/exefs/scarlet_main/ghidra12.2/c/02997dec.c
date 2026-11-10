/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02997dec; name: FUN_02997dec
 */


void FUN_02997dec(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined2 local_38;
  
  local_50[0] = 0x40;
  local_38 = 0x5ff;
  uStack_40 = *(undefined8 *)(param_2 + 0x488);
  local_48 = 0;
  uVar1 = (**(code **)(**(long **)(param_2 + 0x38) + 0x10))();
  local_54 = uVar1;
  uVar2 = (**(code **)(**(long **)(param_2 + 8) + 0x10))(*(long **)(param_2 + 8),uVar1,8);
  local_60 = uVar2;
  (**(code **)**(undefined8 **)(param_2 + 0x38))(*(undefined8 **)(param_2 + 0x38),uVar2);
  FUN_02998144(&local_68,*(undefined8 *)(param_2 + 8),local_50,&local_60,&local_54);
  plVar5 = *(long **)(param_2 + 8);
  uVar3 = (**(code **)(*plVar5 + 0xf8))(plVar5);
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_00c4e600();
    if (0 < *(int *)(lVar4 + 0x12c8)) {
      FUN_00c48fe8(plVar5,uVar2,uVar1,8);
      goto LAB_02997ebc;
    }
  }
  (**(code **)(*plVar5 + 0x18))(plVar5,uVar2,uVar1,8);
LAB_02997ebc:
  *param_1 = local_68;
  return;
}


