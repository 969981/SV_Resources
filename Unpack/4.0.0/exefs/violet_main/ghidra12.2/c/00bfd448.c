/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bfd448; name: FUN_00bfd448
 */


void FUN_00bfd448(long *param_1,long *param_2)

{
  byte *pbVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  byte *pbVar16;
  code *pcVar17;
  int iVar18;
  long *plVar19;
  byte local_a8 [16];
  long *local_98;
  long local_90;
  char *local_88;
  undefined8 local_80;
  char local_78 [24];
  
  if (param_1 == param_2) {
    local_90 = CONCAT44(local_90._4_4_,3);
    local_80 = CONCAT44(local_80._4_4_,0x38);
    local_88 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/reflection_ops.cc"
    ;
    local_78[0] = '\0';
    local_78[1] = '\0';
    local_78[2] = '\0';
    local_78[3] = '\0';
    local_78[4] = '\0';
    local_78[5] = '\0';
    local_78[6] = '\0';
    local_78[7] = '\0';
    local_78[8] = '\0';
    local_78[9] = '\0';
    local_78[10] = '\0';
    local_78[0xb] = '\0';
    local_78[0xc] = '\0';
    local_78[0xd] = '\0';
    local_78[0xe] = '\0';
    local_78[0xf] = '\0';
    local_78[0x10] = '\0';
    local_78[0x11] = '\0';
    local_78[0x12] = '\0';
    local_78[0x13] = '\0';
    local_78[0x14] = '\0';
    local_78[0x15] = '\0';
    local_78[0x16] = '\0';
    local_78[0x17] = '\0';
    std::string::append(local_78);
    FUN_00bb0e90(&local_90);
    FUN_00bb0d74(&local_90);
  }
  lVar6 = (**(code **)(*param_1 + 0xb8))(param_1);
  lVar7 = (**(code **)(*param_2 + 0xb8))(param_2);
  if (lVar7 != lVar6) {
    local_90 = CONCAT44(local_90._4_4_,3);
    local_88 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/reflection_ops.cc"
    ;
    local_80 = CONCAT44(local_80._4_4_,0x3b);
    local_78[0] = '\0';
    local_78[1] = '\0';
    local_78[2] = '\0';
    local_78[3] = '\0';
    local_78[4] = '\0';
    local_78[5] = '\0';
    local_78[6] = '\0';
    local_78[7] = '\0';
    local_78[8] = '\0';
    local_78[9] = '\0';
    local_78[10] = '\0';
    local_78[0xb] = '\0';
    local_78[0xc] = '\0';
    local_78[0xd] = '\0';
    local_78[0xe] = '\0';
    local_78[0xf] = '\0';
    local_78[0x10] = '\0';
    local_78[0x11] = '\0';
    local_78[0x12] = '\0';
    local_78[0x13] = '\0';
    local_78[0x14] = '\0';
    local_78[0x15] = '\0';
    local_78[0x16] = '\0';
    local_78[0x17] = '\0';
    std::string::append(local_78);
    std::string::append(local_78);
    std::string::append(local_78);
    pbVar16 = *(byte **)(lVar6 + 8);
    pbVar1 = *(byte **)(pbVar16 + 0x10);
    if ((*pbVar16 & 1) == 0) {
      pbVar1 = pbVar16 + 1;
    }
    std::string::append(local_78,(ulong)pbVar1);
    std::string::append(local_78);
    lVar6 = (**(code **)(*param_2 + 0xb8))(param_2);
    pbVar16 = *(byte **)(lVar6 + 8);
    pbVar1 = *(byte **)(pbVar16 + 0x10);
    if ((*pbVar16 & 1) == 0) {
      pbVar1 = pbVar16 + 1;
    }
    std::string::append(local_78,(ulong)pbVar1);
    std::string::append(local_78);
    FUN_00bb0e90(&local_90);
    FUN_00bb0d74(&local_90);
  }
  plVar8 = (long *)(**(code **)(*param_1 + 0xb0))(param_1);
  plVar9 = (long *)(**(code **)(*param_2 + 0xb0))(param_2);
  local_88 = (char *)0x0;
  local_80 = 0;
  local_90 = 0;
  (**(code **)(*plVar8 + 0x80))(plVar8,param_1,&local_90);
  puVar2 = PTR_DAT_047dad58;
  lVar6 = tpidr_el0;
  if (local_88 != (char *)local_90) {
    uVar12 = 0;
    do {
      lVar7 = *(long *)(local_90 + uVar12 * 8);
      if (*(int *)(lVar7 + 0x40) == 3) {
        iVar5 = (**(code **)(*plVar8 + 0x30))(plVar8,param_1,lVar7);
        if (0 < iVar5) {
          iVar18 = 0;
          do {
            switch(*(undefined4 *)(puVar2 + (ulong)*(uint *)(lVar7 + 0x3c) * 4)) {
            case 1:
              uVar3 = (**(code **)(*plVar8 + 0x150))(plVar8,param_1,lVar7,iVar18);
              pcVar17 = *(code **)(*plVar9 + 0x208);
              goto LAB_00bfd930;
            case 2:
              uVar10 = (**(code **)(*plVar8 + 0x158))(plVar8,param_1,lVar7,iVar18);
              pcVar17 = *(code **)(*plVar9 + 0x210);
              goto LAB_00bfd8bc;
            case 3:
              uVar3 = (**(code **)(*plVar8 + 0x160))(plVar8,param_1,lVar7,iVar18);
              pcVar17 = *(code **)(*plVar9 + 0x218);
              goto LAB_00bfd930;
            case 4:
              uVar10 = (**(code **)(*plVar8 + 0x168))(plVar8,param_1,lVar7,iVar18);
              pcVar17 = *(code **)(*plVar9 + 0x220);
              goto LAB_00bfd8bc;
            case 5:
              (**(code **)(*plVar8 + 0x178))(plVar8,param_1,lVar7,iVar18);
              (**(code **)(*plVar9 + 0x230))(plVar9,param_2,lVar7);
              break;
            case 6:
              (**(code **)(*plVar8 + 0x170))(plVar8,param_1,lVar7,iVar18);
              (**(code **)(*plVar9 + 0x228))(plVar9,param_2,lVar7);
              break;
            case 7:
              uVar3 = (**(code **)(*plVar8 + 0x180))(plVar8,param_1,lVar7,iVar18);
              uVar3 = uVar3 & 1;
              pcVar17 = *(code **)(*plVar9 + 0x238);
LAB_00bfd930:
              (*pcVar17)(plVar9,param_2,lVar7,uVar3);
              break;
            case 8:
              uVar10 = (**(code **)(*plVar8 + 400))(plVar8,param_1,lVar7,iVar18);
              pcVar17 = *(code **)(*plVar9 + 0x248);
LAB_00bfd8bc:
              (*pcVar17)(plVar9,param_2,lVar7,uVar10);
              break;
            case 9:
              (**(code **)(*plVar8 + 0x188))(local_a8,plVar8,param_1,lVar7,iVar18);
              (**(code **)(*plVar9 + 0x240))(plVar9,param_2,lVar7,local_a8);
              plVar13 = local_98;
              if (((local_a8[0] & 1) != 0) && (local_98 != (long *)0x0)) {
                plVar19 = *(long **)(lVar6 + 0x30);
                if (plVar19 == (long *)0x0) {
                  if (((DAT_04859438 & 1) == 0) &&
                     (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
                    DAT_04859430 = DAT_04859418;
                    __cxa_guard_release(&DAT_04859438);
                  }
                  plVar19 = DAT_04859430;
                  *(long **)(lVar6 + 0x30) = DAT_04859430;
                }
                uVar14 = (**(code **)(*plVar19 + 0xf8))(plVar19);
                if (((uVar14 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar19 + 0x18))(plVar19,plVar13,0,8);
                }
                else {
                  FUN_00c48fe8(plVar19,plVar13,0,8);
                }
              }
              break;
            case 10:
              plVar13 = (long *)(**(code **)(*plVar9 + 600))(plVar9,param_2,lVar7,0);
              uVar10 = (**(code **)(*plVar8 + 0x1a0))(plVar8,param_1,lVar7,iVar18);
              (**(code **)(*plVar13 + 0x90))(plVar13,uVar10);
            }
            iVar18 = iVar18 + 1;
          } while (iVar5 != iVar18);
        }
        goto switchD_00bfdaac_default;
      }
      switch(*(undefined4 *)(puVar2 + (ulong)*(uint *)(lVar7 + 0x3c) * 4)) {
      case 1:
        uVar3 = (**(code **)(*plVar8 + 0x88))(plVar8,param_1,lVar7);
        pcVar17 = *(code **)(*plVar9 + 0xe8);
        goto LAB_00bfdc68;
      case 2:
        uVar10 = (**(code **)(*plVar8 + 0x90))(plVar8,param_1,lVar7);
        pcVar17 = *(code **)(*plVar9 + 0xf0);
        goto LAB_00bfdbfc;
      case 3:
        uVar3 = (**(code **)(*plVar8 + 0x98))(plVar8,param_1,lVar7);
        pcVar17 = *(code **)(*plVar9 + 0xf8);
        goto LAB_00bfdc68;
      case 4:
        uVar10 = (**(code **)(*plVar8 + 0xa0))(plVar8,param_1,lVar7);
        pcVar17 = *(code **)(*plVar9 + 0x100);
        goto LAB_00bfdbfc;
      case 5:
        (**(code **)(*plVar8 + 0xb0))(plVar8,param_1,lVar7);
        (**(code **)(*plVar9 + 0x110))(plVar9,param_2,lVar7);
        break;
      case 6:
        (**(code **)(*plVar8 + 0xa8))(plVar8,param_1,lVar7);
        (**(code **)(*plVar9 + 0x108))(plVar9,param_2,lVar7);
        break;
      case 7:
        uVar3 = (**(code **)(*plVar8 + 0xb8))(plVar8,param_1,lVar7);
        uVar3 = uVar3 & 1;
        pcVar17 = *(code **)(*plVar9 + 0x118);
LAB_00bfdc68:
        (*pcVar17)(plVar9,param_2,lVar7,uVar3);
        break;
      case 8:
        uVar10 = (**(code **)(*plVar8 + 200))(plVar8,param_1,lVar7);
        pcVar17 = *(code **)(*plVar9 + 0x128);
LAB_00bfdbfc:
        plVar19 = plVar9;
        plVar13 = param_2;
LAB_00bfdc08:
        (*pcVar17)(plVar19,plVar13,lVar7,uVar10);
        break;
      case 9:
        (**(code **)(*plVar8 + 0xc0))(local_a8,plVar8,param_1,lVar7);
        (**(code **)(*plVar9 + 0x120))(plVar9,param_2,lVar7,local_a8);
        plVar13 = local_98;
        if (((local_a8[0] & 1) == 0) || (local_98 == (long *)0x0)) break;
        plVar19 = *(long **)(lVar6 + 0x30);
        if (plVar19 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar19 = DAT_04859430;
          *(long **)(lVar6 + 0x30) = DAT_04859430;
        }
        uVar14 = (**(code **)(*plVar19 + 0xf8))(plVar19);
        if (((uVar14 & 1) != 0) && (lVar7 = FUN_00c4e600(), 0 < *(int *)(lVar7 + 0x12c8))) {
          FUN_00c48fe8(plVar19,plVar13,0,8);
          break;
        }
        lVar7 = 0;
        pcVar17 = *(code **)(*plVar19 + 0x18);
        uVar10 = 8;
        goto LAB_00bfdc08;
      case 10:
        plVar13 = (long *)(**(code **)(*plVar9 + 0x138))(plVar9,param_2,lVar7,0);
        uVar10 = (**(code **)(*plVar8 + 0xd8))(plVar8,param_1,lVar7,0);
        (**(code **)(*plVar13 + 0x90))(plVar13,uVar10);
      }
switchD_00bfdaac_default:
      uVar12 = uVar12 + 1;
    } while (uVar12 < (ulong)((long)local_88 - local_90 >> 3));
  }
  uVar10 = (**(code **)(*plVar9 + 0x18))(plVar9,param_2);
  uVar11 = (**(code **)(*plVar8 + 0x10))(plVar8,param_1);
  FUN_00bff6d8(uVar10,uVar11);
  lVar7 = local_90;
  if (local_90 != 0) {
    local_88 = (char *)local_90;
    plVar8 = *(long **)(lVar6 + 0x30);
    if (plVar8 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar8 = DAT_04859430;
      *(long **)(lVar6 + 0x30) = DAT_04859430;
    }
    uVar12 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar12 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar7,0,8);
    }
    else {
      FUN_00c48fe8(plVar8,lVar7,0,8);
    }
  }
  return;
}


