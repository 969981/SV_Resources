/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034789a0; name: FUN_034789a0
 */


undefined8
FUN_034789a0(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
            undefined8 param_5,undefined1 *param_6)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  undefined1 uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  long local_40;
  ulong local_38;
  undefined8 local_30;
  uint local_28;
  
  local_28 = 0;
  local_38 = 0;
  local_30 = 0;
  local_40 = 0;
  FUN_03478b6c(param_1,*(undefined8 *)(param_1 + 8),param_2,param_3,&local_40,param_4);
  uVar2 = local_38 & 0xffffffff;
  if ((uint)local_38 == 0) {
    *param_6 = 4;
  }
  else if ((uint)local_30 == 0) {
    lVar6 = *(long *)PTR_DAT_047e7068 * 0x5851f42d4c957f2d + 1;
    *(long *)PTR_DAT_047e7068 = lVar6;
    uVar3 = (uint)((ulong)lVar6 >> 0x21);
    if ((uint)local_38 < local_30._4_4_ || (uint)local_38 - local_30._4_4_ == 0) {
      uVar7 = 0;
      if (local_30._4_4_ != 0) {
        uVar7 = uVar3 / local_30._4_4_;
      }
      lVar6 = 0;
      iVar5 = uVar3 - uVar7 * local_30._4_4_;
      do {
        if (*(short *)(*(long *)(local_40 + lVar6) + 8) == 0) {
          if (iVar5 == 0) {
            uVar4 = 3;
            uVar3 = local_30._4_4_;
            goto LAB_03478b5c;
          }
          iVar5 = iVar5 + -1;
        }
        lVar6 = lVar6 + 8;
      } while (uVar2 * 8 != lVar6);
    }
    else {
      uVar7 = 0;
      if (local_28 != 0) {
        uVar7 = uVar3 / local_28;
      }
      lVar6 = 0;
      uVar3 = uVar3 - uVar7 * local_28;
      do {
        uVar7 = (uint)*(ushort *)(*(long *)(local_40 + lVar6) + 8);
        bVar1 = uVar3 < uVar7;
        uVar3 = uVar3 - uVar7;
        if (bVar1) {
          *param_6 = 2;
          *(uint *)(param_6 + 4) = (uint)local_38 - local_30._4_4_;
          *(uint *)(param_6 + 8) = (uint)local_38;
          uVar8 = *(undefined8 *)(local_40 + lVar6);
          goto LAB_03478a60;
        }
        lVar6 = lVar6 + 8;
      } while (uVar2 * 8 != lVar6);
    }
  }
  else {
    lVar6 = *(long *)PTR_DAT_047e7068 * 0x5851f42d4c957f2d + 1;
    *(long *)PTR_DAT_047e7068 = lVar6;
    uVar3 = 0;
    uVar7 = (uint)((ulong)lVar6 >> 0x21);
    if ((uint)local_30 != 0) {
      uVar3 = uVar7 / (uint)local_30;
    }
    lVar6 = 0;
    iVar5 = uVar7 - uVar3 * (uint)local_30;
    do {
      if (*(short *)(*(long *)(local_40 + lVar6) + 8) == 100) {
        if (iVar5 == 0) {
          uVar4 = 1;
          uVar3 = (uint)local_30;
LAB_03478b5c:
          *param_6 = uVar4;
          *(uint *)(param_6 + 4) = uVar3;
          *(uint *)(param_6 + 8) = (uint)local_38;
          uVar8 = *(undefined8 *)(local_40 + lVar6);
          goto LAB_03478a60;
        }
        iVar5 = iVar5 + -1;
      }
      lVar6 = lVar6 + 8;
    } while (uVar2 * 8 != lVar6);
  }
  uVar8 = 0;
LAB_03478a60:
  if (local_40 != 0) {
    local_38 = local_38 & 0xffffffff00000000;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
  }
  return uVar8;
}


