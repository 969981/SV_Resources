/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034f9b24; name: FUN_034f9b24
 */


int FUN_034f9b24(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  int local_60;
  undefined4 local_5c;
  float local_58 [5];
  int local_44;
  
  iVar3 = 1;
  if (((*(byte *)(param_1 + 0x20) >> 1 & 1) != 0) && (*PTR_DAT_047e6980 == '\0')) {
    plVar6 = *(long **)(param_1 + 0x58);
    iVar2 = *(int *)(param_1 + 0x68);
    iVar3 = (**(code **)(*plVar6 + 0x58))(plVar6,local_58);
    if (iVar3 - 0x2dU < 2) {
      uVar1 = (int)local_58[0] + iVar2;
      uVar4 = (**(code **)(*plVar6 + 0x60))(plVar6);
      if (uVar1 < uVar4) {
        iVar3 = 0x3f;
        goto LAB_034f9bbc;
      }
    }
    else if (iVar3 != 0x11) goto LAB_034f9bbc;
    iVar3 = 1;
  }
LAB_034f9bbc:
  if ((*(byte *)(*(long *)(param_1 + 0x18) + 10) >> 6 & 1) != 0) {
    plVar6 = *(long **)(param_1 + 0x58);
    iVar2 = *(int *)(param_1 + 0x68);
    iVar5 = (**(code **)(*plVar6 + 0x58))(plVar6,&local_44);
    local_60 = 0;
    if (iVar5 == 2) {
      local_5c = 2;
    }
    else {
      (**(code **)(*plVar6 + 0x28))(plVar6,local_58);
      uVar1 = local_44 + iVar2;
      local_60 = (int)((float)uVar1 / local_58[0]);
      local_5c = 0x11;
      if (iVar5 != 0x11) {
        uVar4 = (**(code **)(*plVar6 + 0x60))(plVar6);
        local_5c = 0x11;
        if (uVar1 < uVar4) {
          local_5c = 1;
        }
      }
    }
    FUN_034b49fc(*(undefined8 *)PTR_DAT_047e6988,*(undefined4 *)(*(long *)(param_1 + 0x18) + 0x228),
                 param_1,&local_60);
  }
  return iVar3;
}


