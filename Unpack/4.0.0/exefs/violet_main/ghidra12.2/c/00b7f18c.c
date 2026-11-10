/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b7f18c; name: FUN_00b7f18c
 */


void FUN_00b7f18c(string *param_1,long param_2,ulong param_3)

{
  size_t __n;
  char *__src;
  ulong uVar1;
  byte *pbVar2;
  undefined8 uVar3;
  string *psVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  string *psVar12;
  byte *pbVar13;
  long *plVar14;
  ulong local_78 [3];
  ulong local_60;
  char *local_58;
  ulong local_50;
  char local_48 [24];
  
  if (*(char *)(param_2 + 0x80) == '\0') {
    local_48[0x10] = '\0';
    local_48[0x11] = '\0';
    local_48[0x12] = '\0';
    local_48[0x13] = '\0';
    local_48[0x14] = '\0';
    local_48[0x15] = '\0';
    local_48[0x16] = '\0';
    local_48[0x17] = '\0';
    local_60 = CONCAT44(local_60._4_4_,3);
    local_50 = CONCAT44(local_50._4_4_,0x696);
    local_58 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/descriptor.cc"
    ;
    local_48[0] = '\0';
    local_48[1] = '\0';
    local_48[2] = '\0';
    local_48[3] = '\0';
    local_48[4] = '\0';
    local_48[5] = '\0';
    local_48[6] = '\0';
    local_48[7] = '\0';
    local_48[8] = '\0';
    local_48[9] = '\0';
    local_48[10] = '\0';
    local_48[0xb] = '\0';
    local_48[0xc] = '\0';
    local_48[0xd] = '\0';
    local_48[0xe] = '\0';
    local_48[0xf] = '\0';
    std::string::append(local_48);
    std::string::append(local_48);
    FUN_00bb0e90(&local_60);
    FUN_00bb0d74(&local_60);
  }
  switch(*(undefined4 *)(&DAT_03d5c718 + (ulong)*(uint *)(param_2 + 0x3c) * 4)) {
  case 1:
    FUN_00c0ff30(param_1,*(undefined4 *)(param_2 + 0x88));
    break;
  case 2:
    FUN_00c10150(param_1,*(undefined8 *)(param_2 + 0x88));
    break;
  case 3:
    uVar7 = FUN_00c0fca0(*(undefined4 *)(param_2 + 0x88),&local_60);
    goto LAB_00b7f318;
  case 4:
    uVar7 = FUN_00c0fe20(*(undefined8 *)(param_2 + 0x88),&local_60);
LAB_00b7f318:
    FUN_028a8014(param_1,&local_60,uVar7);
    break;
  case 5:
    FUN_00c10360(param_1,*(undefined8 *)(param_2 + 0x88));
    break;
  case 6:
    FUN_00c10540(param_1,*(undefined4 *)(param_2 + 0x88));
    break;
  case 7:
    bVar5 = *(char *)(param_2 + 0x88) != '\0';
    __src = "false";
    if (bVar5) {
      __src = "true";
    }
    __n = 4;
    if (!bVar5) {
      __n = 5;
    }
    *param_1 = SUB41((int)__n << 1,0);
    memcpy(param_1 + 1,__src,__n);
    (param_1 + 1)[__n] = (string)0x0;
    break;
  case 8:
    psVar12 = (string *)**(undefined8 **)(param_2 + 0x88);
    goto LAB_00b7f334;
  case 9:
    if ((param_3 & 1) != 0) {
      pbVar13 = *(byte **)(param_2 + 0x88);
      local_78[1] = 0;
      local_78[2] = 0;
      local_78[0] = 0;
      pbVar2 = *(byte **)(pbVar13 + 0x10);
      bVar5 = (*pbVar13 & 1) == 0;
      if (bVar5) {
        pbVar2 = pbVar13 + 1;
      }
      uVar1 = (ulong)(*pbVar13 >> 1);
      if (!bVar5) {
        uVar1 = *(ulong *)(pbVar13 + 8);
      }
      FUN_00c0fad0(pbVar2,uVar1,local_78);
      puVar8 = (ulong *)std::string::insert((ulong)local_78,(char *)0x0);
      local_58 = (char *)puVar8[1];
      local_50 = puVar8[2];
      local_60 = *puVar8;
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = 0;
      puVar9 = (undefined8 *)std::string::append((char *)&local_60);
      uVar1 = local_50;
      uVar7 = puVar9[1];
      uVar3 = puVar9[2];
      *(undefined8 *)param_1 = *puVar9;
      *(undefined8 *)(param_1 + 8) = uVar7;
      *(undefined8 *)(param_1 + 0x10) = uVar3;
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = 0;
      if (((local_60 & 1) != 0) && (local_50 != 0)) {
        lVar11 = tpidr_el0;
        plVar14 = *(long **)(lVar11 + 0x30);
        if (plVar14 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar14 = DAT_04859430;
          *(long **)(lVar11 + 0x30) = DAT_04859430;
        }
        uVar10 = (**(code **)(*plVar14 + 0xf8))(plVar14);
        if (((uVar10 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
          (**(code **)(*plVar14 + 0x18))(plVar14,uVar1,0,8);
        }
        else {
          FUN_00c48fe8(plVar14,uVar1,0,8);
        }
      }
      uVar1 = local_78[2];
      if ((local_78[0] & 1) == 0) {
        return;
      }
      if (local_78[2] == 0) {
        return;
      }
      lVar11 = tpidr_el0;
      plVar14 = *(long **)(lVar11 + 0x30);
      if (plVar14 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar14 = DAT_04859430;
        *(long **)(lVar11 + 0x30) = DAT_04859430;
      }
      uVar10 = (**(code **)(*plVar14 + 0xf8))(plVar14);
      if (((uVar10 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
        (**(code **)(*plVar14 + 0x18))(plVar14,uVar1,0,8);
        return;
      }
      FUN_00c48fe8(plVar14,uVar1,0,8);
      return;
    }
    psVar12 = *(string **)(param_2 + 0x88);
    if (*(uint *)(param_2 + 0x3c) == 0xc) {
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)param_1 = 0;
      uVar1 = *(ulong *)(psVar12 + 8);
      psVar4 = *(string **)(psVar12 + 0x10);
      if (((byte)*psVar12 & 1) == 0) {
        psVar4 = psVar12 + 1;
        uVar1 = (ulong)((byte)*psVar12 >> 1);
      }
      FUN_00c0fad0(psVar4,uVar1,param_1);
      return;
    }
LAB_00b7f334:
    std::string::string(param_1,psVar12);
    break;
  case 10:
    local_60 = CONCAT44(local_60._4_4_,2);
    local_48[0x10] = '\0';
    local_48[0x11] = '\0';
    local_48[0x12] = '\0';
    local_48[0x13] = '\0';
    local_48[0x14] = '\0';
    local_48[0x15] = '\0';
    local_48[0x16] = '\0';
    local_48[0x17] = '\0';
    local_50 = CONCAT44(local_50._4_4_,0x6bc);
    local_58 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/descriptor.cc"
    ;
    local_48[0] = '\0';
    local_48[1] = '\0';
    local_48[2] = '\0';
    local_48[3] = '\0';
    local_48[4] = '\0';
    local_48[5] = '\0';
    local_48[6] = '\0';
    local_48[7] = '\0';
    local_48[8] = '\0';
    local_48[9] = '\0';
    local_48[10] = '\0';
    local_48[0xb] = '\0';
    local_48[0xc] = '\0';
    local_48[0xd] = '\0';
    local_48[0xe] = '\0';
    local_48[0xf] = '\0';
    std::string::append(local_48);
    FUN_00bb0e90(&local_60);
    FUN_00bb0d74(&local_60);
  default:
    local_60 = CONCAT44(local_60._4_4_,3);
    local_48[0x10] = '\0';
    local_48[0x11] = '\0';
    local_48[0x12] = '\0';
    local_48[0x13] = '\0';
    local_48[0x14] = '\0';
    local_48[0x15] = '\0';
    local_48[0x16] = '\0';
    local_48[0x17] = '\0';
    local_50 = CONCAT44(local_50._4_4_,0x6bf);
    local_58 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/descriptor.cc"
    ;
    local_48[0] = '\0';
    local_48[1] = '\0';
    local_48[2] = '\0';
    local_48[3] = '\0';
    local_48[4] = '\0';
    local_48[5] = '\0';
    local_48[6] = '\0';
    local_48[7] = '\0';
    local_48[8] = '\0';
    local_48[9] = '\0';
    local_48[10] = '\0';
    local_48[0xb] = '\0';
    local_48[0xc] = '\0';
    local_48[0xd] = '\0';
    local_48[0xe] = '\0';
    local_48[0xf] = '\0';
    std::string::append(local_48);
    FUN_00bb0e90(&local_60);
    FUN_00bb0d74(&local_60);
    *(undefined2 *)param_1 = 0;
  }
  return;
}


