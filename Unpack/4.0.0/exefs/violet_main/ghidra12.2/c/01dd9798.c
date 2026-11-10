/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dd9798; name: FUN_01dd9798
 */


undefined8 FUN_01dd9798(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  long *local_18;
  
  local_18 = *(long **)(param_1 + 0x30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x58))();
  }
  local_50 = 0xd74bebc3a9958d8b;
  pcStack_48 = "L_icon_item_01/lift_item";
  local_40 = 0x18;
  local_38 = (long *)0x0;
  uVar2 = FUN_01992df4(&local_18,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x60))();
  }
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    plVar8 = *(long **)(param_1 + 0x30);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x58))(plVar8);
    }
    local_50 = 0x449313d95ebfa1dd;
    pcStack_48 = "L_icon_item_01/lifting_item";
    local_40 = 0x1b;
    local_38 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      lVar3 = FUN_00e895f4(plVar8[0x2e],&local_50);
      if (lVar3 != 0) {
        FUN_00dfcea4();
      }
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
      }
      (**(code **)(*plVar8 + 0x60))(plVar8);
    }
    *(undefined1 *)(param_1 + 0x19c) = 1;
    iVar1 = *(int *)(param_1 + 0x1d8);
    iVar6 = *(int *)(param_1 + 0x108);
    iVar7 = 0;
    if (*(int *)(param_1 + 0x1dc) != 0) {
      iVar7 = *(int *)(param_1 + 0x1dc) + -1;
    }
    if (iVar6 == 0) {
      lVar3 = FUN_01195854();
      uVar5 = (uint)*(byte *)(lVar3 + 0x570);
      iVar6 = *(int *)(param_1 + 0x108);
    }
    else if (iVar6 - 1U < 2) {
      uVar5 = *(uint *)(param_1 + 0x2a4);
    }
    else {
      uVar5 = 0xffffffff;
    }
    if (iVar6 == 0) {
      iVar7 = iVar1 + iVar7 * 6;
    }
    else if ((iVar6 != 1) && (iVar6 != 2)) {
      iVar7 = 1;
    }
    FUN_014e89c0(param_1,0,uVar5,iVar7);
    uVar4 = 1;
  }
  return uVar4;
}


