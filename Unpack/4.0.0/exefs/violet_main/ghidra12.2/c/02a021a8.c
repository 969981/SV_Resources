/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a021a8; name: FUN_02a021a8
 */


uint FUN_02a021a8(long *param_1,long *param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined4 local_88 [2];
  char *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  char local_70 [32];
  ulong local_50;
  ulong local_48;
  ulong local_40;
  ulong uStack_38;
  
  plVar7 = (long *)(**(code **)(*param_2 + 0xb0))(param_2);
  switch(*(undefined4 *)(PTR_DAT_047dad58 + (ulong)*(uint *)(*param_1 + 0x3c) * 4)) {
  case 1:
    iVar6 = (**(code **)(*plVar7 + 0x88))(plVar7,param_2);
    iVar3 = (**(code **)(*plVar7 + 0x88))(plVar7,param_3,*param_1);
    bVar2 = SBORROW4(iVar6,iVar3);
    bVar1 = iVar6 - iVar3 < 0;
    goto LAB_02a023dc;
  case 2:
    lVar11 = (**(code **)(*plVar7 + 0x90))(plVar7,param_2);
    lVar10 = (**(code **)(*plVar7 + 0x90))(plVar7,param_3,*param_1);
    bVar2 = SBORROW8(lVar11,lVar10);
    bVar1 = lVar11 - lVar10 < 0;
LAB_02a023dc:
    uVar5 = (uint)(bVar1 != bVar2);
    break;
  case 3:
    uVar5 = (**(code **)(*plVar7 + 0x98))(plVar7,param_2);
    uVar4 = (**(code **)(*plVar7 + 0x98))(plVar7,param_3,*param_1);
    bVar1 = uVar4 <= uVar5;
    goto LAB_02a02418;
  case 4:
    uVar8 = (**(code **)(*plVar7 + 0xa0))(plVar7,param_2);
    uVar9 = (**(code **)(*plVar7 + 0xa0))(plVar7,param_3,*param_1);
    bVar1 = uVar9 <= uVar8;
LAB_02a02418:
    uVar5 = (uint)!bVar1;
    break;
  default:
    local_88[0] = 2;
    local_70[0x10] = '\0';
    local_70[0x11] = '\0';
    local_70[0x12] = '\0';
    local_70[0x13] = '\0';
    local_70[0x14] = '\0';
    local_70[0x15] = '\0';
    local_70[0x16] = '\0';
    local_70[0x17] = '\0';
    local_78 = 0x684;
    local_80 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/text_format.cc"
    ;
    local_70[0] = '\0';
    local_70[1] = '\0';
    local_70[2] = '\0';
    local_70[3] = '\0';
    local_70[4] = '\0';
    local_70[5] = '\0';
    local_70[6] = '\0';
    local_70[7] = '\0';
    local_70[8] = '\0';
    local_70[9] = '\0';
    local_70[10] = '\0';
    local_70[0xb] = '\0';
    local_70[0xc] = '\0';
    local_70[0xd] = '\0';
    local_70[0xe] = '\0';
    local_70[0xf] = '\0';
    std::string::append(local_70);
    FUN_00bb0e90(local_88);
    FUN_00bb0d74(local_88);
    uVar5 = 1;
    break;
  case 7:
    uVar4 = (**(code **)(*plVar7 + 0xb8))(plVar7,param_2);
    uVar5 = (**(code **)(*plVar7 + 0xb8))(plVar7,param_3,*param_1);
    uVar5 = uVar5 & (uVar4 ^ 1);
    break;
  case 9:
    (**(code **)(*plVar7 + 0xc0))(local_88,plVar7,param_2);
    (**(code **)(*plVar7 + 0xc0))(local_70 + 0x18,plVar7,param_3,*param_1);
    uStack_38 = (ulong)((byte)local_70[0x18] >> 1);
    local_40 = (ulong)(local_70 + 0x18) | 1;
    if ((local_70[0x18] & 1U) != 0) {
      uStack_38 = local_50;
      local_40 = local_48;
    }
    uVar8 = FUN_028a8144(local_88,&local_40);
    if (((local_70[0x18] & 1U) != 0) && (local_48 != 0)) {
      lVar11 = tpidr_el0;
      plVar7 = *(long **)(lVar11 + 0x30);
      if (plVar7 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar7 = DAT_04859430;
        *(long **)(lVar11 + 0x30) = DAT_04859430;
      }
      uVar9 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar9 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
        (**(code **)(*plVar7 + 0x18))(plVar7,local_48,0,8);
      }
      else {
        FUN_00c48fe8(plVar7,local_48,0,8);
      }
    }
    uVar5 = (uint)((uVar8 & 0xffffffff) >> 0x1f);
    if ((((byte)local_88[0] & 1) != 0) && (lVar11 = CONCAT44(uStack_74,local_78), lVar11 != 0)) {
      lVar10 = tpidr_el0;
      plVar7 = *(long **)(lVar10 + 0x30);
      if (plVar7 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar7 = DAT_04859430;
        *(long **)(lVar10 + 0x30) = DAT_04859430;
      }
      uVar8 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar7 + 0x18))(plVar7,lVar11,0,8);
      }
      else {
        FUN_00c48fe8(plVar7,lVar11,0,8);
      }
    }
  }
  return uVar5 & 1;
}


