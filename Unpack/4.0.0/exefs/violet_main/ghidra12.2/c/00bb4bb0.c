/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bb4bb0; name: FUN_00bb4bb0
 */


undefined8 FUN_00bb4bb0(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  string *psVar6;
  string *psVar7;
  long *plVar8;
  byte *pbVar9;
  byte *pbVar10;
  bool bVar11;
  long *plVar12;
  long *plVar13;
  ulong local_128;
  char *local_120;
  long local_118;
  int local_110 [6];
  ulong local_f8;
  undefined8 uStack_f0;
  long local_e8;
  ulong local_e0;
  ulong uStack_d8;
  string local_d0 [8];
  ulong local_c8;
  ulong local_c0;
  int local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_51;
  
  psVar6 = *(string **)(param_2 + 0x30);
  if (((byte)*psVar6 & 1) == 0) {
    if ((byte)*psVar6 < 2) {
      return 1;
    }
    psVar7 = psVar6 + 1;
  }
  else {
    if (*(long *)(psVar6 + 8) == 0) {
      return 1;
    }
    psVar7 = *(string **)(psVar6 + 0x10);
  }
  if (*psVar7 == (string)0x2e) {
    std::string::string((string *)&local_f8,psVar6,1,0xffffffffffffffff,(allocator *)psVar6);
    local_120 = (char *)uStack_f0;
    local_128 = local_f8;
    local_f8 = 0;
    uStack_f0 = 0;
    local_118 = local_e8;
    local_e8 = 0;
    local_110[0] = *(undefined4 *)(param_2 + 0x20);
    std::string::string(local_d0,(string *)&local_128);
    local_b8 = local_110[0];
    plVar12 = (long *)(param_1 + 0x38);
    plVar13 = (long *)*plVar12;
    local_b0 = param_3;
    uStack_a8 = param_4;
    if (plVar13 != (long *)0x0) {
      plVar12 = (long *)(param_1 + 0x38);
      do {
        pbVar10 = (byte *)(plVar13 + 4);
        uStack_d8 = plVar13[5];
        local_e0 = plVar13[6];
        if ((*pbVar10 & 1) == 0) {
          local_e0 = (long)plVar13 + 0x21;
          uStack_d8 = (ulong)(*pbVar10 >> 1);
        }
        iVar1 = FUN_028a8144(local_d0,&local_e0);
        if (iVar1 < 0) {
LAB_00bb4ce0:
          plVar8 = (long *)*plVar13;
          plVar12 = plVar13;
          if (plVar8 == (long *)0x0) {
            goto LAB_00bb4d7c;
          }
        }
        else {
          uStack_d8 = (ulong)((byte)local_d0[0] >> 1);
          local_e0 = (ulong)local_d0 | 1;
          if (((byte)local_d0[0] & 1) != 0) {
            uStack_d8 = local_c8;
            local_e0 = local_c0;
          }
          iVar1 = FUN_028a8144(pbVar10,&local_e0);
          if ((-1 < iVar1) && (local_b8 < (int)plVar13[7])) goto LAB_00bb4ce0;
          uStack_d8 = (ulong)((byte)local_d0[0] >> 1);
          local_e0 = (ulong)local_d0 | 1;
          if (((byte)local_d0[0] & 1) != 0) {
            uStack_d8 = local_c8;
            local_e0 = local_c0;
          }
          iVar1 = FUN_028a8144(pbVar10,&local_e0);
          if (-1 < iVar1) {
            local_e0 = (long)plVar13 + 0x21;
            uStack_d8 = (ulong)(*(byte *)(plVar13 + 4) >> 1);
            if ((*(byte *)(plVar13 + 4) & 1) != 0) {
              local_e0 = plVar13[6];
              uStack_d8 = plVar13[5];
            }
            iVar1 = FUN_028a8144(local_d0,&local_e0);
            if ((iVar1 < 0) || (local_b8 <= (int)plVar13[7])) goto LAB_00bb4d7c;
          }
          plVar12 = plVar13 + 1;
          plVar8 = (long *)*plVar12;
          if (plVar8 == (long *)0x0) goto LAB_00bb4d7c;
        }
        plVar13 = plVar8;
      } while( true );
    }
    plVar13 = plVar12;
LAB_00bb4d7c:
    if (*plVar12 == 0) {
      lVar4 = tpidr_el0;
      plVar8 = *(long **)(lVar4 + 0x30);
      if (plVar8 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar8 = DAT_04859430;
        *(long **)(lVar4 + 0x30) = DAT_04859430;
      }
      puVar2 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x50,8);
      std::string::string((string *)(puVar2 + 4),local_d0);
      *(int *)(puVar2 + 7) = local_b8;
      puVar2[2] = plVar13;
      puVar2[8] = local_b0;
      puVar2[9] = uStack_a8;
      *puVar2 = 0;
      puVar2[1] = 0;
      *plVar12 = (long)puVar2;
      if (**(long **)(param_1 + 0x30) != 0) {
        *(long *)(param_1 + 0x30) = **(long **)(param_1 + 0x30);
        puVar2 = (undefined8 *)*plVar12;
      }
      FUN_010108e0(*(undefined8 *)(param_1 + 0x38),puVar2);
      bVar11 = true;
      *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
    }
    else {
      bVar11 = false;
    }
    if ((((byte)local_d0[0] & 1) != 0) && (local_c0 != 0)) {
      lVar4 = tpidr_el0;
      plVar12 = *(long **)(lVar4 + 0x30);
      if (plVar12 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar12 = DAT_04859430;
        *(long **)(lVar4 + 0x30) = DAT_04859430;
      }
      uVar3 = (**(code **)(*plVar12 + 0xf8))(plVar12);
      if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar12 + 0x18))(plVar12,local_c0,0,8);
      }
      else {
        FUN_00c48fe8(plVar12,local_c0,0,8);
      }
    }
    lVar4 = local_118;
    if (((local_128 & 1) != 0) && (local_118 != 0)) {
      lVar5 = tpidr_el0;
      plVar12 = *(long **)(lVar5 + 0x30);
      if (plVar12 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar12 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      uVar3 = (**(code **)(*plVar12 + 0xf8))(plVar12);
      if (((uVar3 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar12 + 0x18))(plVar12,lVar4,0,8);
      }
      else {
        FUN_00c48fe8(plVar12,lVar4,0,8);
      }
    }
    lVar4 = local_e8;
    if (((local_f8 & 1) != 0) && (local_e8 != 0)) {
      lVar5 = tpidr_el0;
      plVar12 = *(long **)(lVar5 + 0x30);
      if (plVar12 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar12 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      uVar3 = (**(code **)(*plVar12 + 0xf8))(plVar12);
      if (((uVar3 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar12 + 0x18))(plVar12,lVar4,0,8);
      }
      else {
        FUN_00c48fe8(plVar12,lVar4,0,8);
      }
    }
    if (!bVar11) {
      local_110[4] = 0;
      local_110[5] = 0;
      local_128 = CONCAT44(local_128._4_4_,2);
      local_118 = CONCAT44(local_118._4_4_,0xa1);
      local_120 = 
      "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/descriptor_database.cc"
      ;
      local_110[0] = 0;
      local_110[1] = 0;
      local_110[2] = 0;
      local_110[3] = 0;
      std::string::append((char *)local_110);
      pbVar9 = *(byte **)(param_2 + 0x30);
      pbVar10 = *(byte **)(pbVar9 + 0x10);
      if ((*pbVar9 & 1) == 0) {
        pbVar10 = pbVar9 + 1;
      }
      std::string::append((char *)local_110,(ulong)pbVar10);
      std::string::append((char *)local_110);
      pbVar9 = *(byte **)(param_2 + 0x18);
      pbVar10 = *(byte **)(pbVar9 + 0x10);
      if ((*pbVar9 & 1) == 0) {
        pbVar10 = pbVar9 + 1;
      }
      std::string::append((char *)local_110,(ulong)pbVar10);
      std::string::append((char *)local_110);
      snprintf((char *)local_d0,0x80,"%d",(ulong)*(uint *)(param_2 + 0x20));
      local_51 = 0;
      std::string::append((char *)local_110);
      std::string::append((char *)local_110);
      FUN_00bb0e90(&local_128);
      FUN_00bb0d74(&local_128);
      return 0;
    }
  }
  return 1;
}


