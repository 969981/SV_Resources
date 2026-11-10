/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00128ad0; name: FUN_00128ad0
 */


void FUN_00128ad0(undefined8 *param_1,long param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  byte *pbVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong local_70;
  byte local_67 [7];
  
  if (((*(int *)(param_1 + 3) == 0) && (lVar15 = *(long *)(param_2 + 0x70), lVar15 != param_3)) &&
     (lVar15 != 0)) {
    if (*(char *)(lVar15 + 8) == '\x04') {
      uVar6 = (ulong)*(byte *)(lVar15 + 0xb);
    }
    else {
      uVar6 = *(ulong *)(lVar15 + 0x10);
    }
    uVar14 = uVar6 + 1;
    lVar8 = 0;
    do {
      lVar10 = lVar8;
      local_67[lVar10] = (byte)uVar14 & 0x7f;
      uVar14 = uVar14 >> 7;
      lVar8 = lVar10 + -1;
    } while (uVar14 != 0);
    local_67[0] = local_67[0] | 0x80;
    iVar1 = *(int *)((long)param_1 + 0x1c);
    if (iVar1 != 0) goto LAB_00128b90;
    iVar1 = (*(code *)param_1[1])(*param_1,local_67 + lVar10,-(lVar10 + -1),param_1[2]);
    *(int *)((long)param_1 + 0x1c) = iVar1;
    if ((uVar6 == 0) || (iVar1 != 0)) goto LAB_00128b90;
    uVar3 = *param_1;
    pcVar9 = (code *)param_1[1];
    pbVar5 = (byte *)(lVar15 + 0x18);
    uVar7 = param_1[2];
  }
  else {
    local_67[0] = 0x80;
    iVar1 = *(int *)((long)param_1 + 0x1c);
    if (iVar1 != 0) goto LAB_00128b90;
    pbVar5 = local_67;
    uVar7 = param_1[2];
    uVar3 = *param_1;
    pcVar9 = (code *)param_1[1];
    uVar6 = 1;
  }
  iVar1 = (*pcVar9)(uVar3,pbVar5,uVar6,uVar7);
  *(int *)((long)param_1 + 0x1c) = iVar1;
LAB_00128b90:
  uVar6 = (ulong)*(int *)(param_2 + 0x2c);
  lVar15 = 0;
  do {
    lVar8 = lVar15;
    local_67[lVar8] = (byte)uVar6 & 0x7f;
    uVar6 = uVar6 >> 7;
    lVar15 = lVar8 + -1;
  } while (uVar6 != 0);
  local_67[0] = local_67[0] | 0x80;
  if (iVar1 == 0) {
    iVar1 = (*(code *)param_1[1])(*param_1,local_67 + lVar8,-(lVar8 + -1),param_1[2]);
    *(int *)((long)param_1 + 0x1c) = iVar1;
  }
  uVar6 = (ulong)*(int *)(param_2 + 0x30);
  lVar15 = 0;
  do {
    lVar8 = lVar15;
    local_67[lVar8] = (byte)uVar6 & 0x7f;
    uVar6 = uVar6 >> 7;
    lVar15 = lVar8 + -1;
  } while (uVar6 != 0);
  local_67[0] = local_67[0] | 0x80;
  if (iVar1 == 0) {
    iVar1 = (*(code *)param_1[1])(*param_1,local_67 + lVar8,-(lVar8 + -1),param_1[2]);
    *(int *)((long)param_1 + 0x1c) = iVar1;
    local_70._0_1_ = *(undefined1 *)(param_2 + 10);
  }
  else {
    local_70._0_1_ = *(undefined1 *)(param_2 + 10);
  }
  if (iVar1 == 0) {
    iVar1 = (*(code *)param_1[1])(*param_1,&local_70,1,param_1[2]);
    *(int *)((long)param_1 + 0x1c) = iVar1;
    local_70._0_1_ = *(undefined1 *)(param_2 + 0xb);
  }
  else {
    local_70._0_1_ = *(undefined1 *)(param_2 + 0xb);
  }
  if (iVar1 == 0) {
    iVar1 = (*(code *)param_1[1])(*param_1,&local_70,1,param_1[2]);
    *(int *)((long)param_1 + 0x1c) = iVar1;
    local_70 = CONCAT71(local_70._1_7_,*(undefined1 *)(param_2 + 0xc));
  }
  else {
    local_70 = CONCAT71(local_70._1_7_,*(undefined1 *)(param_2 + 0xc));
  }
  if (iVar1 == 0) {
    iVar1 = (*(code *)param_1[1])(*param_1,&local_70,1,param_1[2]);
    *(int *)((long)param_1 + 0x1c) = iVar1;
  }
  uVar6 = (ulong)*(int *)(param_2 + 0x18);
  lVar15 = 0;
  do {
    lVar8 = lVar15;
    local_67[lVar8] = (byte)uVar6 & 0x7f;
    uVar6 = uVar6 >> 7;
    lVar15 = lVar8 + -1;
  } while (uVar6 != 0);
  local_67[0] = local_67[0] | 0x80;
  if (iVar1 == 0) {
    iVar1 = (*(code *)param_1[1])(*param_1,local_67 + lVar8,-(lVar8 + -1),param_1[2]);
    *(int *)((long)param_1 + 0x1c) = iVar1;
    if ((iVar1 == 0) && (*(int *)(param_2 + 0x18) != 0)) {
      iVar1 = (*(code *)param_1[1])
                        (*param_1,*(undefined8 *)(param_2 + 0x40),
                         (long)*(int *)(param_2 + 0x18) << 2,param_1[2]);
      *(int *)((long)param_1 + 0x1c) = iVar1;
    }
  }
  uVar11 = *(uint *)(param_2 + 0x14);
  uVar6 = (ulong)(int)uVar11;
  lVar15 = 0;
  do {
    lVar8 = lVar15;
    local_67[lVar8] = (byte)uVar6 & 0x7f;
    uVar6 = uVar6 >> 7;
    lVar15 = lVar8 + -1;
  } while (uVar6 != 0);
  local_67[0] = local_67[0] | 0x80;
  if (iVar1 == 0) {
    iVar1 = (*(code *)param_1[1])(*param_1,local_67 + lVar8,-(lVar8 + -1),param_1[2]);
    *(int *)((long)param_1 + 0x1c) = iVar1;
  }
  if (0 < (int)uVar11) {
    uVar6 = 0;
    do {
      puVar4 = (ulong *)(*(long *)(param_2 + 0x38) + uVar6 * 0x10);
      uVar14 = puVar4[1];
      local_70 = CONCAT71(local_70._1_7_,(byte)uVar14) & 0xffffffffffffff3f;
      if (iVar1 == 0) {
        iVar1 = (*(code *)param_1[1])(*param_1,&local_70,1,param_1[2]);
        *(int *)((long)param_1 + 0x1c) = iVar1;
      }
      switch((byte)uVar14 & 0x3f) {
      case 3:
      case 0x13:
        local_70 = *puVar4;
        if (iVar1 == 0) {
          uVar3 = *param_1;
          pcVar9 = (code *)param_1[1];
          uVar7 = param_1[2];
          uVar13 = 8;
          puVar4 = &local_70;
          goto LAB_00128d48;
        }
        break;
      case 4:
      case 0x14:
        uVar14 = *puVar4;
        if (uVar14 == 0) {
          local_67[0] = 0x80;
          if (iVar1 == 0) {
            uVar3 = *param_1;
            pcVar9 = (code *)param_1[1];
            uVar7 = param_1[2];
            uVar13 = 1;
            puVar4 = (ulong *)local_67;
            goto LAB_00128d48;
          }
        }
        else {
          if (*(char *)(uVar14 + 8) == '\x04') {
            uVar13 = (ulong)*(byte *)(uVar14 + 0xb);
          }
          else {
            uVar13 = *(ulong *)(uVar14 + 0x10);
          }
          uVar12 = uVar13 + 1;
          lVar15 = 0;
          do {
            lVar8 = lVar15;
            local_67[lVar8] = (byte)uVar12 & 0x7f;
            uVar12 = uVar12 >> 7;
            lVar15 = lVar8 + -1;
          } while (uVar12 != 0);
          local_67[0] = local_67[0] | 0x80;
          if (iVar1 == 0) {
            iVar1 = (*(code *)param_1[1])(*param_1,local_67 + lVar8,-(lVar8 + -1),param_1[2]);
            *(int *)((long)param_1 + 0x1c) = iVar1;
          }
          if ((uVar13 != 0) && (iVar1 == 0)) {
            uVar3 = *param_1;
            pcVar9 = (code *)param_1[1];
            uVar7 = param_1[2];
            puVar4 = (ulong *)(uVar14 + 0x18);
LAB_00128d48:
            iVar1 = (*pcVar9)(uVar3,puVar4,uVar13,uVar7);
            *(int *)((long)param_1 + 0x1c) = iVar1;
          }
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar11);
  }
  uVar11 = *(uint *)(param_2 + 0x10);
  uVar6 = (ulong)(int)uVar11;
  lVar15 = 0;
  do {
    lVar8 = lVar15;
    local_67[lVar8] = (byte)uVar6 & 0x7f;
    uVar6 = uVar6 >> 7;
    lVar15 = lVar8 + -1;
  } while (uVar6 != 0);
  local_67[0] = local_67[0] | 0x80;
  if (iVar1 == 0) {
    iVar1 = (*(code *)param_1[1])(*param_1,local_67 + lVar8,-(lVar8 + -1),param_1[2]);
    *(int *)((long)param_1 + 0x1c) = iVar1;
  }
  if (0 < (int)uVar11) {
    lVar15 = 0;
    do {
      lVar8 = *(long *)(param_2 + 0x50);
      if (iVar1 == 0) {
        local_70._0_1_ = *(undefined1 *)(lVar8 + lVar15 + 8);
        iVar1 = (*(code *)param_1[1])(*param_1,&local_70,1,param_1[2]);
        *(int *)((long)param_1 + 0x1c) = iVar1;
        lVar8 = *(long *)(param_2 + 0x50);
        local_70._0_1_ = *(undefined1 *)(lVar8 + lVar15 + 9);
        if (iVar1 != 0) goto LAB_00128efc;
LAB_00128f3c:
        iVar1 = (*(code *)param_1[1])(*param_1,&local_70,1,param_1[2]);
        *(int *)((long)param_1 + 0x1c) = iVar1;
        local_70 = CONCAT71(local_70._1_7_,*(undefined1 *)(*(long *)(param_2 + 0x50) + lVar15 + 10))
        ;
      }
      else {
        local_70._0_1_ = *(undefined1 *)(lVar8 + lVar15 + 9);
        if (iVar1 == 0) goto LAB_00128f3c;
LAB_00128efc:
        local_70 = CONCAT71(local_70._1_7_,*(undefined1 *)(lVar8 + lVar15 + 10));
      }
      if (iVar1 == 0) {
        iVar1 = (*(code *)param_1[1])(*param_1,&local_70,1,param_1[2]);
        *(int *)((long)param_1 + 0x1c) = iVar1;
      }
      lVar15 = lVar15 + 0x10;
    } while ((ulong)uVar11 * 0x10 != lVar15);
  }
  uVar11 = *(uint *)(param_2 + 0x20);
  uVar6 = (ulong)(int)uVar11;
  lVar15 = 0;
  do {
    lVar8 = lVar15;
    local_67[lVar8] = (byte)uVar6 & 0x7f;
    uVar6 = uVar6 >> 7;
    lVar15 = lVar8 + -1;
  } while (uVar6 != 0);
  local_67[0] = local_67[0] | 0x80;
  if (iVar1 == 0) {
    uVar2 = (*(code *)param_1[1])(*param_1,local_67 + lVar8,-(lVar8 + -1),param_1[2]);
    *(undefined4 *)((long)param_1 + 0x1c) = uVar2;
  }
  if (0 < (int)uVar11) {
    lVar15 = 0;
    do {
      FUN_00128ad0(param_1,*(undefined8 *)(*(long *)(param_2 + 0x48) + lVar15),
                   *(undefined8 *)(param_2 + 0x70));
      lVar15 = lVar15 + 8;
    } while ((ulong)uVar11 * 8 != lVar15);
  }
  if (*(int *)(param_1 + 3) == 0) {
    uVar6 = (ulong)*(int *)(param_2 + 0x1c);
  }
  else {
    uVar6 = 0;
  }
  lVar15 = 0;
  uVar14 = uVar6;
  do {
    lVar8 = lVar15;
    local_67[lVar8] = (byte)uVar14 & 0x7f;
    uVar14 = uVar14 >> 7;
    lVar15 = lVar8 + -1;
  } while (uVar14 != 0);
  local_67[0] = local_67[0] | 0x80;
  iVar1 = *(int *)((long)param_1 + 0x1c);
  if (iVar1 == 0) {
    iVar1 = (*(code *)param_1[1])(*param_1,local_67 + lVar8,-(lVar8 + -1),param_1[2]);
    *(int *)((long)param_1 + 0x1c) = iVar1;
    if ((uVar6 != 0) && (iVar1 == 0)) {
      iVar1 = (*(code *)param_1[1])(*param_1,*(undefined8 *)(param_2 + 0x58),uVar6,param_1[2]);
      *(int *)((long)param_1 + 0x1c) = iVar1;
    }
  }
  if (*(int *)(param_1 + 3) == 0) {
    uVar11 = *(uint *)(param_2 + 0x28);
  }
  else {
    uVar11 = 0;
  }
  uVar6 = (ulong)(int)uVar11;
  lVar15 = 0;
  do {
    lVar8 = lVar15;
    local_67[lVar8] = (byte)uVar6 & 0x7f;
    uVar6 = uVar6 >> 7;
    lVar15 = lVar8 + -1;
  } while (uVar6 != 0);
  local_67[0] = local_67[0] | 0x80;
  if (iVar1 == 0) {
    iVar1 = (*(code *)param_1[1])(*param_1,local_67 + lVar8,-(lVar8 + -1),param_1[2]);
    *(int *)((long)param_1 + 0x1c) = iVar1;
  }
  if (0 < (int)uVar11) {
    uVar6 = 0;
    do {
      lVar8 = *(long *)(param_2 + 0x60);
      uVar14 = (ulong)*(int *)(lVar8 + uVar6 * 8);
      lVar15 = 0;
      do {
        lVar10 = lVar15;
        local_67[lVar10] = (byte)uVar14 & 0x7f;
        uVar14 = uVar14 >> 7;
        lVar15 = lVar10 + -1;
      } while (uVar14 != 0);
      local_67[0] = local_67[0] | 0x80;
      if (iVar1 == 0) {
        iVar1 = (*(code *)param_1[1])(*param_1,local_67 + lVar10,-(lVar10 + -1),param_1[2]);
        *(int *)((long)param_1 + 0x1c) = iVar1;
        lVar8 = *(long *)(param_2 + 0x60);
      }
      uVar14 = (ulong)*(int *)(lVar8 + uVar6 * 8 + 4);
      lVar15 = 0;
      do {
        lVar8 = lVar15;
        local_67[lVar8] = (byte)uVar14 & 0x7f;
        uVar14 = uVar14 >> 7;
        lVar15 = lVar8 + -1;
      } while (uVar14 != 0);
      local_67[0] = local_67[0] | 0x80;
      if (iVar1 == 0) {
        iVar1 = (*(code *)param_1[1])(*param_1,local_67 + lVar8,-(lVar8 + -1),param_1[2]);
        *(int *)((long)param_1 + 0x1c) = iVar1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar11);
  }
  if (*(int *)(param_1 + 3) == 0) {
    uVar11 = *(uint *)(param_2 + 0x24);
  }
  else {
    uVar11 = 0;
  }
  uVar6 = (ulong)(int)uVar11;
  lVar15 = 0;
  do {
    lVar8 = lVar15;
    local_67[lVar8] = (byte)uVar6 & 0x7f;
    uVar6 = uVar6 >> 7;
    lVar15 = lVar8 + -1;
  } while (uVar6 != 0);
  local_67[0] = local_67[0] | 0x80;
  if (iVar1 == 0) {
    iVar1 = (*(code *)param_1[1])(*param_1,local_67 + lVar8,-(lVar8 + -1),param_1[2]);
    *(int *)((long)param_1 + 0x1c) = iVar1;
  }
  if (0 < (int)uVar11) {
    uVar6 = 0;
    do {
      lVar15 = *(long *)(*(long *)(param_2 + 0x68) + uVar6 * 0x10);
      if (lVar15 == 0) {
        local_67[0] = 0x80;
        if (iVar1 == 0) {
          uVar3 = *param_1;
          pcVar9 = (code *)param_1[1];
          uVar7 = param_1[2];
          uVar14 = 1;
          pbVar5 = local_67;
LAB_001293a8:
          iVar1 = (*pcVar9)(uVar3,pbVar5,uVar14,uVar7);
          *(int *)((long)param_1 + 0x1c) = iVar1;
        }
      }
      else {
        if (*(char *)(lVar15 + 8) == '\x04') {
          uVar14 = (ulong)*(byte *)(lVar15 + 0xb);
        }
        else {
          uVar14 = *(ulong *)(lVar15 + 0x10);
        }
        uVar13 = uVar14 + 1;
        lVar8 = 0;
        do {
          lVar10 = lVar8;
          local_67[lVar10] = (byte)uVar13 & 0x7f;
          uVar13 = uVar13 >> 7;
          lVar8 = lVar10 + -1;
        } while (uVar13 != 0);
        local_67[0] = local_67[0] | 0x80;
        if (iVar1 == 0) {
          iVar1 = (*(code *)param_1[1])(*param_1,local_67 + lVar10,-(lVar10 + -1),param_1[2]);
          *(int *)((long)param_1 + 0x1c) = iVar1;
          if ((uVar14 != 0) && (iVar1 == 0)) {
            uVar3 = *param_1;
            pcVar9 = (code *)param_1[1];
            uVar7 = param_1[2];
            pbVar5 = (byte *)(lVar15 + 0x18);
            goto LAB_001293a8;
          }
        }
      }
      lVar8 = *(long *)(param_2 + 0x68);
      uVar14 = (ulong)*(int *)(lVar8 + uVar6 * 0x10 + 8);
      lVar15 = 0;
      do {
        lVar10 = lVar15;
        local_67[lVar10] = (byte)uVar14 & 0x7f;
        uVar14 = uVar14 >> 7;
        lVar15 = lVar10 + -1;
      } while (uVar14 != 0);
      local_67[0] = local_67[0] | 0x80;
      if (iVar1 == 0) {
        iVar1 = (*(code *)param_1[1])(*param_1,local_67 + lVar10,-(lVar10 + -1),param_1[2]);
        *(int *)((long)param_1 + 0x1c) = iVar1;
        lVar8 = *(long *)(param_2 + 0x68);
      }
      uVar14 = (ulong)*(int *)(lVar8 + uVar6 * 0x10 + 0xc);
      lVar15 = 0;
      do {
        lVar8 = lVar15;
        local_67[lVar8] = (byte)uVar14 & 0x7f;
        uVar14 = uVar14 >> 7;
        lVar15 = lVar8 + -1;
      } while (uVar14 != 0);
      local_67[0] = local_67[0] | 0x80;
      if (iVar1 == 0) {
        iVar1 = (*(code *)param_1[1])(*param_1,local_67 + lVar8,-(lVar8 + -1),param_1[2]);
        *(int *)((long)param_1 + 0x1c) = iVar1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar11);
  }
  if (*(int *)(param_1 + 3) == 0) {
    uVar11 = *(uint *)(param_2 + 0x10);
  }
  else {
    uVar11 = 0;
  }
  uVar6 = (ulong)(int)uVar11;
  lVar15 = 0;
  do {
    lVar8 = lVar15;
    local_67[lVar8] = (byte)uVar6 & 0x7f;
    uVar6 = uVar6 >> 7;
    lVar15 = lVar8 + -1;
  } while (uVar6 != 0);
  local_67[0] = local_67[0] | 0x80;
  if (iVar1 == 0) {
    iVar1 = (*(code *)param_1[1])(*param_1,local_67 + lVar8,-(lVar8 + -1),param_1[2]);
    *(int *)((long)param_1 + 0x1c) = iVar1;
  }
  if (0 < (int)uVar11) {
    uVar6 = 0;
    do {
      lVar15 = *(long *)(*(long *)(param_2 + 0x50) + uVar6 * 0x10);
      if (lVar15 == 0) {
        local_67[0] = 0x80;
        if (iVar1 == 0) {
          uVar3 = *param_1;
          pcVar9 = (code *)param_1[1];
          uVar7 = param_1[2];
          uVar14 = 1;
          pbVar5 = local_67;
LAB_001294e4:
          iVar1 = (*pcVar9)(uVar3,pbVar5,uVar14,uVar7);
          *(int *)((long)param_1 + 0x1c) = iVar1;
        }
      }
      else {
        if (*(char *)(lVar15 + 8) == '\x04') {
          uVar14 = (ulong)*(byte *)(lVar15 + 0xb);
        }
        else {
          uVar14 = *(ulong *)(lVar15 + 0x10);
        }
        uVar13 = uVar14 + 1;
        lVar8 = 0;
        do {
          lVar10 = lVar8;
          local_67[lVar10] = (byte)uVar13 & 0x7f;
          uVar13 = uVar13 >> 7;
          lVar8 = lVar10 + -1;
        } while (uVar13 != 0);
        local_67[0] = local_67[0] | 0x80;
        if (iVar1 == 0) {
          iVar1 = (*(code *)param_1[1])(*param_1,local_67 + lVar10,-(lVar10 + -1),param_1[2]);
          *(int *)((long)param_1 + 0x1c) = iVar1;
          if ((uVar14 != 0) && (iVar1 == 0)) {
            uVar3 = *param_1;
            pcVar9 = (code *)param_1[1];
            uVar7 = param_1[2];
            pbVar5 = (byte *)(lVar15 + 0x18);
            goto LAB_001294e4;
          }
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar11);
  }
  return;
}


