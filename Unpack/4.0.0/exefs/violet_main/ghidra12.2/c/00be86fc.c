/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00be86fc; name: FUN_00be86fc
 */


void FUN_00be86fc(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  byte *pbVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  long lVar18;
  long lVar19;
  undefined4 local_70 [2];
  char *local_68;
  undefined4 local_60;
  char local_58 [24];
  
  if (param_2 == param_3) {
    return;
  }
  plVar6 = (long *)(**(code **)(*param_2 + 0xb0))(param_2);
  if (plVar6 != param_1) {
    local_70[0] = 3;
    local_58[0] = '\0';
    local_58[1] = '\0';
    local_58[2] = '\0';
    local_58[3] = '\0';
    local_58[4] = '\0';
    local_58[5] = '\0';
    local_58[6] = '\0';
    local_58[7] = '\0';
    local_58[8] = '\0';
    local_58[9] = '\0';
    local_58[10] = '\0';
    local_58[0xb] = '\0';
    local_58[0xc] = '\0';
    local_58[0xd] = '\0';
    local_58[0xe] = '\0';
    local_58[0xf] = '\0';
    local_68 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/generated_message_reflection.cc"
    ;
    local_60 = 0x280;
    local_58[0x10] = '\0';
    local_58[0x11] = '\0';
    local_58[0x12] = '\0';
    local_58[0x13] = '\0';
    local_58[0x14] = '\0';
    local_58[0x15] = '\0';
    local_58[0x16] = '\0';
    local_58[0x17] = '\0';
    std::string::append(local_58);
    std::string::append(local_58);
    lVar7 = (**(code **)(*param_2 + 0xb8))(param_2);
    pbVar11 = *(byte **)(lVar7 + 8);
    pbVar2 = *(byte **)(pbVar11 + 0x10);
    if ((*pbVar11 & 1) == 0) {
      pbVar2 = pbVar11 + 1;
    }
    std::string::append(local_58,(ulong)pbVar2);
    std::string::append(local_58);
    pbVar11 = *(byte **)(param_1[1] + 8);
    pbVar2 = *(byte **)(pbVar11 + 0x10);
    if ((*pbVar11 & 1) == 0) {
      pbVar2 = pbVar11 + 1;
    }
    std::string::append(local_58,(ulong)pbVar2);
    std::string::append(local_58);
    FUN_00bb0e90(local_70);
    FUN_00bb0d74(local_70);
  }
  plVar6 = (long *)(**(code **)(*param_3 + 0xb0))(param_3);
  if (plVar6 != param_1) {
    local_70[0] = 3;
    local_58[0] = '\0';
    local_58[1] = '\0';
    local_58[2] = '\0';
    local_58[3] = '\0';
    local_58[4] = '\0';
    local_58[5] = '\0';
    local_58[6] = '\0';
    local_58[7] = '\0';
    local_58[8] = '\0';
    local_58[9] = '\0';
    local_58[10] = '\0';
    local_58[0xb] = '\0';
    local_58[0xc] = '\0';
    local_58[0xd] = '\0';
    local_58[0xe] = '\0';
    local_58[0xf] = '\0';
    local_68 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/generated_message_reflection.cc"
    ;
    local_60 = 0x287;
    local_58[0x10] = '\0';
    local_58[0x11] = '\0';
    local_58[0x12] = '\0';
    local_58[0x13] = '\0';
    local_58[0x14] = '\0';
    local_58[0x15] = '\0';
    local_58[0x16] = '\0';
    local_58[0x17] = '\0';
    std::string::append(local_58);
    std::string::append(local_58);
    lVar7 = (**(code **)(*param_3 + 0xb8))(param_3);
    pbVar11 = *(byte **)(lVar7 + 8);
    pbVar2 = *(byte **)(pbVar11 + 0x10);
    if ((*pbVar11 & 1) == 0) {
      pbVar2 = pbVar11 + 1;
    }
    std::string::append(local_58,(ulong)pbVar2);
    std::string::append(local_58);
    pbVar11 = *(byte **)(param_1[1] + 8);
    pbVar2 = *(byte **)(pbVar11 + 0x10);
    if ((*pbVar11 & 1) == 0) {
      pbVar2 = pbVar11 + 1;
    }
    std::string::append(local_58,(ulong)pbVar2);
    std::string::append(local_58);
    FUN_00bb0e90(local_70);
    FUN_00bb0d74(local_70);
  }
  lVar7 = (long)(int)param_1[7];
  if ((int)param_1[7] != -1) {
    if ((int)param_1[6] == -1) {
      uVar14 = *(ulong *)((long)param_2 + lVar7);
      uVar10 = uVar14 & 0xfffffffffffffffe;
      if ((uVar14 & 1) == 0) {
        uVar15 = uVar10;
      }
      else {
        uVar15 = *(ulong *)(uVar10 + 8);
      }
      uVar13 = *(ulong *)((long)param_3 + lVar7) & 0xfffffffffffffffe;
      if ((*(ulong *)((long)param_3 + lVar7) & 1) != 0) {
        uVar13 = *(ulong *)(uVar13 + 8);
      }
      if (uVar15 != uVar13) {
        if ((uVar14 & 1) != 0) {
          uVar10 = *(ulong *)(uVar10 + 8);
        }
        goto LAB_00be8954;
      }
    }
    else {
      uVar10 = *(ulong *)((long)param_2 + lVar7);
      if (uVar10 != *(ulong *)((long)param_3 + lVar7)) {
LAB_00be8954:
        plVar6 = (long *)(**(code **)(*param_2 + 0x20))(param_2,uVar10);
        (**(code **)(*plVar6 + 0x90))(plVar6,param_2);
        (**(code **)(*param_2 + 0x88))(param_2,param_3);
        (**(code **)(*param_3 + 0x88))(param_3,plVar6);
        iVar5 = (int)param_1[7];
        if (iVar5 == -1) {
          uVar10 = 0;
        }
        else if ((int)param_1[6] == -1) {
          uVar14 = *(ulong *)((long)param_2 + (long)iVar5);
          uVar10 = uVar14 & 0xfffffffffffffffe;
          if ((uVar14 & 1) != 0) {
            uVar10 = *(ulong *)(uVar10 + 8);
          }
        }
        else {
          uVar10 = *(ulong *)((long)param_2 + (long)iVar5);
        }
        if (plVar6 == (long *)0x0) {
          return;
        }
        if (uVar10 == 0) {
          (**(code **)(*plVar6 + 8))(plVar6);
          return;
        }
        return;
      }
    }
  }
  lVar7 = (long)(int)param_1[5];
  if ((int)param_1[5] != -1) {
    iVar3 = *(int *)(param_1[1] + 0x2c);
    iVar5 = iVar3 + 0x3e;
    if (-1 < iVar3 + 0x1f) {
      iVar5 = iVar3 + 0x1f;
    }
    if (0 < iVar3) {
      uVar1 = iVar5 >> 5;
      if ((int)uVar1 < 2) {
        uVar1 = 1;
      }
      if (iVar3 < 0x21) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        puVar16 = (undefined4 *)((long)param_2 + lVar7 + 4);
        puVar17 = (undefined4 *)((long)param_3 + lVar7 + 4);
        do {
          uVar4 = puVar16[-1];
          uVar10 = uVar10 + 2;
          puVar16[-1] = puVar17[-1];
          puVar17[-1] = uVar4;
          uVar4 = *puVar16;
          *puVar16 = *puVar17;
          *puVar17 = uVar4;
          puVar16 = puVar16 + 2;
          puVar17 = puVar17 + 2;
        } while (((ulong)uVar1 & 0x7ffffffe) != uVar10);
      }
      if ((uVar1 & 1) != 0) {
        uVar4 = *(undefined4 *)((long)param_2 + uVar10 * 4 + lVar7);
        *(undefined4 *)((long)param_2 + uVar10 * 4 + lVar7) =
             *(undefined4 *)((long)param_3 + uVar10 * 4 + lVar7);
        *(undefined4 *)((long)param_3 + uVar10 * 4 + lVar7) = uVar4;
      }
    }
  }
  lVar7 = param_1[1];
  if (0 < *(int *)(lVar7 + 0x2c)) {
    lVar18 = 0;
    lVar19 = 0;
    do {
      if (*(long *)(*(long *)(lVar7 + 0x30) + lVar18 + 0x58) == 0) {
        FUN_00be3bb0(param_1,param_2,param_3);
        lVar7 = param_1[1];
      }
      lVar19 = lVar19 + 1;
      lVar18 = lVar18 + 0x90;
    } while (lVar19 < *(int *)(lVar7 + 0x2c));
  }
  if (0 < *(int *)(lVar7 + 0x38)) {
    lVar18 = 0;
    lVar19 = 0;
    do {
      FUN_00be6390(param_1,param_2,param_3,*(long *)(lVar7 + 0x40) + lVar18);
      lVar7 = param_1[1];
      lVar19 = lVar19 + 1;
      lVar18 = lVar18 + 0x30;
    } while (lVar19 < *(int *)(lVar7 + 0x38));
  }
  iVar5 = *(int *)((long)param_1 + 0x34);
  if (iVar5 != -1) {
    FUN_00c266a8((long)param_2 + (long)iVar5,(long)param_3 + (long)iVar5);
  }
  puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x18))(param_1,param_2);
  puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x18))(param_1,param_3);
  uVar12 = *puVar8;
  *puVar8 = *puVar9;
  *puVar9 = uVar12;
  return;
}


