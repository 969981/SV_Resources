/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029815cc; name: FUN_029815cc
 */


uint FUN_029815cc(long param_1,long *param_2,long *param_3,undefined2 *param_4,undefined8 param_5,
                 undefined8 param_6,undefined4 param_7,uint param_8)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  ushort local_54 [2];
  
  uVar1 = FUN_0294fbf0(param_7);
  if ((param_8 & 1) != 0) {
    uVar2 = FUN_02981930(param_1,param_3,param_4,uVar1);
    FUN_02981128(param_5,param_3,uVar2,1);
    return uVar2;
  }
  local_54[0] = (**(code **)(*param_3 + 0x108))(param_3);
  uVar6 = FUN_01242e68(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_3);
  if ((uVar6 & 1) == 0) {
    uVar2 = (uint)*(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x498);
    if ((uVar2 >> 10 & 1) == 0) {
      if ((uVar2 >> 0xb & 1) != 0) {
        uVar6 = (**(code **)(*param_3 + 0x78))(param_3);
        if ((uVar6 & 1) == 0) goto LAB_0298174c;
        uVar2 = (uint)*(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x498);
      }
      if (((uVar2 >> 0xc & 1) == 0) && ((uVar2 >> 0x1c & 1) == 0)) {
        if ((uVar2 >> 0x11 & 1) != 0) {
          plVar7 = (long *)(**(code **)param_3[5])(param_3 + 5);
          if (((*PTR_DAT_047d3f00 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar5 != 0)) {
            uVar8 = FUN_01b07aa4();
            *(undefined8 *)PTR_DAT_047d3f08 = uVar8;
            __cxa_guard_release(PTR_DAT_047d3f00);
          }
          for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
            if (plVar7 == (long *)PTR_DAT_047d3f08) {
              if (*(char *)((long)param_3 + 0x714) != '\0') goto LAB_0298174c;
              break;
            }
          }
        }
        goto LAB_02981668;
      }
    }
LAB_0298174c:
    lVar9 = *(long *)(param_1 + 0x20);
    uVar4 = (**(code **)(*param_2 + 0x98))(param_2);
    uVar8 = *(undefined8 *)(lVar9 + 0x18);
    uVar3 = (**(code **)(*param_3 + 0x98))(param_3);
    FUN_0167ebc0(uVar8,0xcb,uVar4,0x4a,uVar3,0xffff0000);
  }
  else {
LAB_02981668:
    uVar6 = FUN_0292f0c8(*(undefined8 *)(param_1 + 0x38),param_2,param_3,param_4);
    if ((uVar6 & 1) == 0) {
      uVar2 = FUN_0293355c(*(undefined8 *)(param_1 + 0x38),param_2,param_3,1,local_54);
      if ((uVar2 & 0xff) == 0) {
        FUN_029819e0(param_1,param_3,param_2,param_4,uVar1);
      }
      else {
        FUN_02981aa8(param_1,param_3,param_2,param_4,uVar1,uVar2,local_54[0]);
      }
      goto LAB_029817c0;
    }
  }
  local_54[0] = 0;
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = (**(code **)(*param_3 + 0x98))(param_3);
  FUN_029819c0(uVar8,uVar4,uVar1,*param_4);
LAB_029817c0:
  FUN_02981128(param_6,param_3,local_54[0],0);
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  uVar1 = FUN_018d31e0(param_1,uVar1);
  FUN_02981b54(param_1,uVar1,param_2,param_3,param_4,local_54[0]);
  return (uint)local_54[0];
}


