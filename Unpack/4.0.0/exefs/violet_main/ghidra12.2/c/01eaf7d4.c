/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eaf7d4; name: FUN_01eaf7d4
 */


uint FUN_01eaf7d4(long param_1,char param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 local_68;
  long local_60 [4];
  undefined4 local_28;
  char local_24 [4];
  
  plVar6 = (long *)(param_1 + 0x38);
  local_24[0] = param_2;
  if ((*plVar6 != 0) && (lVar5 = *(long *)(*plVar6 + 0x10), lVar5 != 0)) {
    uVar4 = FUN_00ea2b08(lVar5 + -0x28);
    if ((uVar4 & 1) != 0) {
      *(byte *)(param_1 + 0x70) = *(byte *)(param_1 + param_2 + 0xacd) ^ 1;
      local_60[0] = FUN_019965ec(plVar6);
      FUN_01eaf920(param_1,(int)param_2,local_60);
      uVar2 = 1;
      goto LAB_01eaf8ac;
    }
  }
  if ((*(long *)(param_1 + 0x50) == 0) ||
     (lVar5 = *(long *)(*(long *)(param_1 + 0x50) + 0x10), lVar5 == 0)) {
    uVar2 = 0;
  }
  else {
    plVar7 = (long *)(lVar5 + -0x28);
    FUN_016947d8(local_60);
    local_28 = 6;
    if (local_60[0] != 0) {
      FUN_01eaf354(&local_68,&local_28,local_60[0] + 8);
      if (local_60[0] != 0) {
        FUN_01943830(&local_68,local_24,local_60[0] + 8);
      }
    }
    uVar3 = FUN_014c27b0(local_60);
    uVar1 = FUN_014c27c8(local_60);
    local_68 = FUN_00dc05e0(plVar6);
    uVar2 = (**(code **)(*plVar7 + 0x68))(plVar7,uVar3,uVar1,&local_68);
    if ((uVar2 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x70) = 2;
    }
    FUN_01694aa8(local_60);
  }
LAB_01eaf8ac:
  return uVar2 & 1;
}


