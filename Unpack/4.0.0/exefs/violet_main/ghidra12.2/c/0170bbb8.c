/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0170bbb8; name: FUN_0170bbb8
 */


void FUN_0170bbb8(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 auStack_48 [24];
  
  local_70 = *(undefined8 *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x48);
  if (lVar4 == 0) {
    FUN_00d8a020(&local_68,local_70,&local_70);
    lVar4 = local_68;
    local_68 = 0;
    lVar5 = *(long *)(param_1 + 0x48);
    *(long *)(param_1 + 0x48) = lVar4;
    if (lVar5 == 0) {
      *(undefined8 *)(param_1 + 0x58) = uStack_58;
      *(undefined8 *)(param_1 + 0x60) = local_50;
      *(undefined8 *)(param_1 + 0x50) = local_60;
    }
    else {
      FUN_00c4e5a0(auStack_48,0);
      FUN_00eeabac(lVar5);
      plVar1 = *(long **)(param_1 + 0x50);
      uVar2 = *(undefined8 *)(param_1 + 0x58);
      uVar7 = *(undefined8 *)(param_1 + 0x60);
      uVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1);
      if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,uVar2,uVar7);
      }
      else {
        FUN_00c48fe8(plVar1,lVar5,uVar2,uVar7);
      }
      FUN_00c4e70c(auStack_48);
      *(undefined8 *)(param_1 + 0x50) = local_60;
      lVar4 = *(long *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x58) = uStack_58;
      *(undefined8 *)(param_1 + 0x60) = local_50;
    }
    if (lVar4 == 0) goto LAB_0170bc08;
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (*(long *)(lVar4 + 0x90) == *(long *)(lVar4 + 0x88)) {
    if (bVar6) {
      return;
    }
  }
  else {
    *(long *)(lVar4 + 0x90) = *(long *)(lVar4 + 0x88);
  }
LAB_0170bc08:
  lVar4 = *(long *)(param_1 + 0x208);
  lVar5 = *(long *)(param_1 + 0x210);
  if (((lVar4 != lVar5) && (*(undefined1 *)(lVar4 + 0x10) = 1, lVar4 + 0x18 != lVar5)) &&
     (*(undefined1 *)(lVar4 + 0x28) = 1, lVar4 + 0x30 != lVar5)) {
    *(undefined1 *)(lVar4 + 0x40) = 1;
    for (lVar4 = lVar4 + 0x48; lVar4 != lVar5; lVar4 = lVar4 + 0x18) {
      *(undefined1 *)(lVar4 + 0x10) = 1;
    }
  }
  return;
}


