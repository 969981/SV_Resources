/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c2ba20; name: FUN_00c2ba20
 */


uint FUN_00c2ba20(ulong *param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  code *pcVar9;
  int iVar10;
  long *plVar11;
  ulong *puVar12;
  ulong uVar13;
  byte *pbVar14;
  long lVar15;
  undefined4 local_80 [2];
  char *local_78;
  undefined4 local_70;
  char local_68 [24];
  
  if (*(char *)((long)param_1 + 9) == '\0') {
    if ((*(byte *)((long)param_1 + 10) & 1) != 0) {
      return 0;
    }
    uVar6 = param_2 << 3;
    iVar4 = 4;
    if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
      iVar4 = 5;
    }
    iVar7 = 3;
    if (0x1fffff < uVar6) {
      iVar7 = iVar4;
    }
    iVar4 = 2;
    if (0x3fff < uVar6) {
      iVar4 = iVar7;
    }
    iVar7 = 1;
    if (0x7f < uVar6) {
      iVar7 = iVar4;
    }
    uVar6 = iVar7 << ((char)param_1[1] == '\n');
    switch((char)param_1[1]) {
    case '\x01':
    case '\x06':
    case '\x10':
      return uVar6 + 8;
    case '\x02':
    case '\a':
    case '\x0f':
      return uVar6 + 4;
    case '\x03':
    case '\x04':
      uVar8 = *param_1;
      goto LAB_00c2c7c8;
    case '\x05':
    case '\x0e':
      uVar5 = (uint)*param_1;
      if ((int)uVar5 < 0) {
        iVar4 = 10;
        goto LAB_00c2c8a0;
      }
      break;
    case '\b':
      return uVar6 + 1;
    case '\t':
    case '\f':
      bVar2 = *(byte *)*param_1;
      uVar5 = (uint)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar5 = *(uint *)((byte *)*param_1 + 8);
      }
      iVar4 = 4;
      if (uVar5 >> 0x1c != 0) {
        iVar4 = 5;
      }
      iVar7 = 3;
      if (0x1fffff < uVar5) {
        iVar7 = iVar4;
      }
      iVar4 = 2;
      if (0x3fff < uVar5) {
        iVar4 = iVar7;
      }
      iVar7 = uVar6 + uVar5;
      iVar10 = 1;
      if (0x7f < uVar5) {
        iVar10 = iVar4;
      }
      goto LAB_00c2c12c;
    case '\n':
      iVar4 = (**(code **)(*(long *)*param_1 + 0x60))();
      return iVar4 + uVar6;
    case '\v':
      if ((*(byte *)((long)param_1 + 10) >> 4 & 1) == 0) {
        pcVar9 = *(code **)(*(long *)*param_1 + 0x60);
      }
      else {
        pcVar9 = *(code **)(*(long *)*param_1 + 0x50);
      }
      uVar8 = (*pcVar9)();
      iVar4 = 4;
      if ((uVar8 >> 0x1c & 0xf) != 0) {
        iVar4 = 5;
      }
      uVar5 = (uint)uVar8;
      iVar7 = 3;
      if (0x1fffff < uVar5) {
        iVar7 = iVar4;
      }
      iVar4 = 2;
      if (0x3fff < uVar5) {
        iVar4 = iVar7;
      }
      iVar7 = 1;
      if (0x7f < uVar5) {
        iVar7 = iVar4;
      }
      return uVar5 + uVar6 + iVar7;
    case '\r':
      uVar5 = (uint)*param_1;
      break;
    case '\x11':
      uVar5 = (uint)*param_1 << 1 ^ (int)(uint)*param_1 >> 0x1f;
      break;
    case '\x12':
      uVar8 = *param_1 << 1 ^ (long)*param_1 >> 0x3f;
LAB_00c2c7c8:
      if (uVar8 >> 0x23 != 0) {
        if (uVar8 >> 0x2a == 0) {
          iVar4 = 6;
        }
        else if (uVar8 >> 0x31 == 0) {
          iVar4 = 7;
        }
        else if (uVar8 >> 0x38 == 0) {
          iVar4 = 8;
        }
        else {
          iVar4 = 9;
          if ((long)uVar8 < 0) {
            iVar4 = 10;
          }
        }
        goto LAB_00c2c8a0;
      }
      if (0x7f < uVar8) {
        if (0x3fff < uVar8) {
          if (0x1fffff < uVar8) {
            bVar3 = uVar8 >> 0x1c == 0;
            goto LAB_00c2c888;
          }
          goto LAB_00c2c868;
        }
        goto LAB_00c2c7f8;
      }
      goto LAB_00c2c7d8;
    default:
      return uVar6;
    }
    if (uVar5 < 0x80) {
LAB_00c2c7d8:
      iVar4 = 1;
    }
    else if (uVar5 < 0x4000) {
LAB_00c2c7f8:
      iVar4 = 2;
    }
    else if (uVar5 < 0x200000) {
LAB_00c2c868:
      iVar4 = 3;
    }
    else {
      bVar3 = uVar5 >> 0x1c == 0;
LAB_00c2c888:
      iVar4 = 4;
      if (!bVar3) {
        iVar4 = 5;
      }
    }
LAB_00c2c8a0:
    return iVar4 + uVar6;
  }
  if (*(char *)((long)param_1 + 0xb) != '\0') {
    switch((byte)param_1[1]) {
    case 1:
    case 6:
    case 0x10:
      uVar6 = *(int *)*param_1 << 3;
      break;
    case 2:
    case 7:
    case 0xf:
      uVar6 = *(int *)*param_1 << 2;
      break;
    case 3:
      uVar6 = *(uint *)*param_1;
      uVar8 = (ulong)uVar6;
      if ((int)uVar6 < 1) goto switchD_00c2ba74_default;
      puVar12 = *(ulong **)((uint *)*param_1 + 2);
      uVar6 = 0;
      do {
        puVar12 = puVar12 + 1;
        uVar13 = *puVar12;
        if (uVar13 >> 0x23 == 0) {
          if (uVar13 < 0x80) {
            iVar4 = 1;
          }
          else if (uVar13 < 0x4000) {
            iVar4 = 2;
          }
          else {
            iVar7 = 4;
            if (uVar13 >> 0x1c != 0) {
              iVar7 = 5;
            }
            iVar4 = 3;
            if (0x1fffff < uVar13) {
              iVar4 = iVar7;
            }
          }
        }
        else if (uVar13 >> 0x2a == 0) {
          iVar4 = 6;
        }
        else {
          iVar4 = 9;
          if ((long)uVar13 < 0) {
            iVar4 = 10;
          }
          iVar7 = 8;
          if (uVar13 >> 0x38 != 0) {
            iVar7 = iVar4;
          }
          iVar4 = 7;
          if (uVar13 >> 0x31 != 0) {
            iVar4 = iVar7;
          }
        }
        uVar6 = iVar4 + uVar6;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
      break;
    case 4:
      uVar6 = *(uint *)*param_1;
      uVar8 = (ulong)uVar6;
      if ((int)uVar6 < 1) goto switchD_00c2ba74_default;
      puVar12 = *(ulong **)((uint *)*param_1 + 2);
      uVar6 = 0;
      do {
        puVar12 = puVar12 + 1;
        uVar13 = *puVar12;
        if (uVar13 >> 0x23 == 0) {
          if (uVar13 < 0x80) {
            iVar4 = 1;
          }
          else if (uVar13 < 0x4000) {
            iVar4 = 2;
          }
          else {
            iVar7 = 4;
            if (uVar13 >> 0x1c != 0) {
              iVar7 = 5;
            }
            iVar4 = 3;
            if (0x1fffff < uVar13) {
              iVar4 = iVar7;
            }
          }
        }
        else if (uVar13 >> 0x2a == 0) {
          iVar4 = 6;
        }
        else {
          iVar4 = 9;
          if ((long)uVar13 < 0) {
            iVar4 = 10;
          }
          iVar7 = 8;
          if (uVar13 >> 0x38 != 0) {
            iVar7 = iVar4;
          }
          iVar4 = 7;
          if (uVar13 >> 0x31 != 0) {
            iVar4 = iVar7;
          }
        }
        uVar6 = iVar4 + uVar6;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
      break;
    case 5:
      uVar5 = *(uint *)*param_1;
      if ((int)uVar5 < 1) goto switchD_00c2ba74_default;
      uVar8 = 0;
      uVar6 = 0;
      do {
        uVar1 = *(uint *)(*(long *)((uint *)*param_1 + 2) + 8 + uVar8 * 4);
        if ((int)uVar1 < 0) {
          iVar4 = 10;
        }
        else if (uVar1 < 0x80) {
          iVar4 = 1;
        }
        else if (uVar1 < 0x4000) {
          iVar4 = 2;
        }
        else {
          iVar7 = 4;
          if (uVar1 >> 0x1c != 0) {
            iVar7 = 5;
          }
          iVar4 = 3;
          if (0x1fffff < uVar1) {
            iVar4 = iVar7;
          }
        }
        uVar8 = uVar8 + 1;
        uVar6 = iVar4 + uVar6;
      } while (uVar8 < uVar5);
      break;
    case 8:
      uVar6 = *(uint *)*param_1;
      break;
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      local_80[0] = 3;
      local_68[0x10] = '\0';
      local_68[0x11] = '\0';
      local_68[0x12] = '\0';
      local_68[0x13] = '\0';
      local_68[0x14] = '\0';
      local_68[0x15] = '\0';
      local_68[0x16] = '\0';
      local_68[0x17] = '\0';
      local_70 = 0x62e;
      local_78 = 
      "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/extension_set.cc"
      ;
      local_68[0] = '\0';
      local_68[1] = '\0';
      local_68[2] = '\0';
      local_68[3] = '\0';
      local_68[4] = '\0';
      local_68[5] = '\0';
      local_68[6] = '\0';
      local_68[7] = '\0';
      local_68[8] = '\0';
      local_68[9] = '\0';
      local_68[10] = '\0';
      local_68[0xb] = '\0';
      local_68[0xc] = '\0';
      local_68[0xd] = '\0';
      local_68[0xe] = '\0';
      local_68[0xf] = '\0';
      std::string::append(local_68);
      FUN_00bb0e90(local_80);
      FUN_00bb0d74(local_80);
    default:
switchD_00c2ba74_default:
      *(uint *)((long)param_1 + 0xc) = 0;
      return 0;
    case 0xd:
      uVar5 = *(uint *)*param_1;
      if ((int)uVar5 < 1) goto switchD_00c2ba74_default;
      uVar8 = 0;
      uVar6 = 0;
      do {
        uVar1 = *(uint *)(*(long *)((uint *)*param_1 + 2) + 8 + uVar8 * 4);
        if (uVar1 < 0x80) {
          iVar7 = 1;
        }
        else if (uVar1 < 0x4000) {
          iVar7 = 2;
        }
        else {
          iVar4 = 4;
          if (uVar1 >> 0x1c != 0) {
            iVar4 = 5;
          }
          iVar7 = 3;
          if (0x1fffff < uVar1) {
            iVar7 = iVar4;
          }
        }
        uVar8 = uVar8 + 1;
        uVar6 = iVar7 + uVar6;
      } while (uVar8 < uVar5);
      break;
    case 0xe:
      uVar5 = *(uint *)*param_1;
      if ((int)uVar5 < 1) goto switchD_00c2ba74_default;
      uVar8 = 0;
      uVar6 = 0;
      do {
        uVar1 = *(uint *)(*(long *)((uint *)*param_1 + 2) + 8 + uVar8 * 4);
        if ((int)uVar1 < 0) {
          iVar4 = 10;
        }
        else if (uVar1 < 0x80) {
          iVar4 = 1;
        }
        else if (uVar1 < 0x4000) {
          iVar4 = 2;
        }
        else {
          iVar7 = 4;
          if (uVar1 >> 0x1c != 0) {
            iVar7 = 5;
          }
          iVar4 = 3;
          if (0x1fffff < uVar1) {
            iVar4 = iVar7;
          }
        }
        uVar8 = uVar8 + 1;
        uVar6 = iVar4 + uVar6;
      } while (uVar8 < uVar5);
      break;
    case 0x11:
      uVar5 = *(uint *)*param_1;
      if ((int)uVar5 < 1) goto switchD_00c2ba74_default;
      uVar8 = 0;
      uVar6 = 0;
      do {
        iVar4 = *(int *)(*(long *)((uint *)*param_1 + 2) + 8 + uVar8 * 4);
        uVar1 = iVar4 << 1 ^ iVar4 >> 0x1f;
        if (uVar1 < 0x80) {
          iVar4 = 1;
        }
        else if (uVar1 < 0x4000) {
          iVar4 = 2;
        }
        else if (uVar1 < 0x200000) {
          iVar4 = 3;
        }
        else {
          iVar4 = 4;
          if (uVar1 >> 0x1c != 0) {
            iVar4 = 5;
          }
        }
        uVar8 = uVar8 + 1;
        uVar6 = iVar4 + uVar6;
      } while (uVar8 < uVar5);
      break;
    case 0x12:
      uVar6 = *(uint *)*param_1;
      uVar8 = (ulong)uVar6;
      if ((int)uVar6 < 1) goto switchD_00c2ba74_default;
      plVar11 = *(long **)((uint *)*param_1 + 2);
      uVar6 = 0;
      do {
        plVar11 = plVar11 + 1;
        uVar13 = *plVar11 << 1 ^ *plVar11 >> 0x3f;
        if (uVar13 >> 0x23 == 0) {
          if (uVar13 < 0x80) {
            iVar4 = 1;
          }
          else if (uVar13 < 0x4000) {
            iVar4 = 2;
          }
          else if (uVar13 < 0x200000) {
            iVar4 = 3;
          }
          else {
            iVar4 = 4;
            if (uVar13 >> 0x1c != 0) {
              iVar4 = 5;
            }
          }
        }
        else if (uVar13 >> 0x2a == 0) {
          iVar4 = 6;
        }
        else if (uVar13 >> 0x31 == 0) {
          iVar4 = 7;
        }
        else if (uVar13 >> 0x38 == 0) {
          iVar4 = 8;
        }
        else {
          iVar4 = 9;
          if ((long)uVar13 < 0) {
            iVar4 = 10;
          }
        }
        uVar6 = iVar4 + uVar6;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    *(uint *)((long)param_1 + 0xc) = uVar6;
    if ((int)uVar6 < 1) {
      return uVar6;
    }
    if (uVar6 < 0x80) {
      iVar7 = 1;
    }
    else if (uVar6 < 0x4000) {
      iVar7 = 2;
    }
    else if (uVar6 < 0x200000) {
      iVar7 = 3;
    }
    else {
      iVar7 = 4;
      if (uVar6 >> 0x1c != 0) {
        iVar7 = 5;
      }
    }
    uVar5 = param_2 << 3 | 2;
    iVar7 = iVar7 + uVar6;
    if (uVar5 < 0x80) {
      iVar10 = 1;
    }
    else if (uVar5 < 0x4000) {
      iVar10 = 2;
    }
    else if (uVar5 < 0x200000) {
      iVar10 = 3;
    }
    else {
      iVar10 = 4;
      if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
        iVar10 = 5;
      }
    }
LAB_00c2c12c:
    return iVar7 + iVar10;
  }
  uVar6 = param_2 << 3;
  iVar4 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    iVar4 = 5;
  }
  iVar7 = 3;
  if (0x1fffff < uVar6) {
    iVar7 = iVar4;
  }
  iVar4 = 2;
  if (0x3fff < uVar6) {
    iVar4 = iVar7;
  }
  iVar7 = 1;
  if (0x7f < uVar6) {
    iVar7 = iVar4;
  }
  uVar6 = (uint)(byte)param_1[1];
  if (0x11 < uVar6 - 1) {
    return 0;
  }
  iVar7 = iVar7 << (uVar6 == 10);
  switch(uVar6) {
  default:
    iVar7 = iVar7 + 8;
    goto LAB_00c2c32c;
  case 2:
  case 7:
  case 0xf:
    iVar7 = iVar7 + 4;
    goto LAB_00c2c32c;
  case 3:
    uVar5 = *(uint *)*param_1;
    uVar8 = (ulong)uVar5;
    uVar6 = uVar5 * iVar7;
    if (0 < (int)uVar5) {
      puVar12 = *(ulong **)((uint *)*param_1 + 2);
      do {
        puVar12 = puVar12 + 1;
        uVar13 = *puVar12;
        if (uVar13 >> 0x23 == 0) {
          if (uVar13 < 0x80) {
            iVar4 = 1;
          }
          else if (uVar13 < 0x4000) {
            iVar4 = 2;
          }
          else {
            iVar7 = 4;
            if (uVar13 >> 0x1c != 0) {
              iVar7 = 5;
            }
            iVar4 = 3;
            if (0x1fffff < uVar13) {
              iVar4 = iVar7;
            }
          }
        }
        else if (uVar13 >> 0x2a == 0) {
          iVar4 = 6;
        }
        else {
          iVar4 = 9;
          if ((long)uVar13 < 0) {
            iVar4 = 10;
          }
          iVar7 = 8;
          if (uVar13 >> 0x38 != 0) {
            iVar7 = iVar4;
          }
          iVar4 = 7;
          if (uVar13 >> 0x31 != 0) {
            iVar4 = iVar7;
          }
        }
        uVar6 = iVar4 + uVar6;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    break;
  case 4:
    uVar5 = *(uint *)*param_1;
    uVar8 = (ulong)uVar5;
    uVar6 = uVar5 * iVar7;
    if (0 < (int)uVar5) {
      puVar12 = *(ulong **)((uint *)*param_1 + 2);
      do {
        puVar12 = puVar12 + 1;
        uVar13 = *puVar12;
        if (uVar13 >> 0x23 == 0) {
          if (uVar13 < 0x80) {
            iVar4 = 1;
          }
          else if (uVar13 < 0x4000) {
            iVar4 = 2;
          }
          else {
            iVar7 = 4;
            if (uVar13 >> 0x1c != 0) {
              iVar7 = 5;
            }
            iVar4 = 3;
            if (0x1fffff < uVar13) {
              iVar4 = iVar7;
            }
          }
        }
        else if (uVar13 >> 0x2a == 0) {
          iVar4 = 6;
        }
        else {
          iVar4 = 9;
          if ((long)uVar13 < 0) {
            iVar4 = 10;
          }
          iVar7 = 8;
          if (uVar13 >> 0x38 != 0) {
            iVar7 = iVar4;
          }
          iVar4 = 7;
          if (uVar13 >> 0x31 != 0) {
            iVar4 = iVar7;
          }
        }
        uVar6 = iVar4 + uVar6;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    break;
  case 5:
    uVar5 = *(uint *)*param_1;
    uVar6 = uVar5 * iVar7;
    if (0 < (int)uVar5) {
      uVar8 = 0;
      do {
        uVar1 = *(uint *)(*(long *)((uint *)*param_1 + 2) + 8 + uVar8 * 4);
        if ((int)uVar1 < 0) {
          iVar4 = 10;
        }
        else if (uVar1 < 0x80) {
          iVar4 = 1;
        }
        else if (uVar1 < 0x4000) {
          iVar4 = 2;
        }
        else {
          iVar7 = 4;
          if (uVar1 >> 0x1c != 0) {
            iVar7 = 5;
          }
          iVar4 = 3;
          if (0x1fffff < uVar1) {
            iVar4 = iVar7;
          }
        }
        uVar8 = uVar8 + 1;
        uVar6 = iVar4 + uVar6;
      } while (uVar8 < uVar5);
    }
    break;
  case 8:
    iVar7 = iVar7 + 1;
LAB_00c2c32c:
    uVar6 = *(int *)*param_1 * iVar7;
    break;
  case 9:
    uVar5 = *(uint *)(*param_1 + 8);
    uVar6 = uVar5 * iVar7;
    if (0 < (int)uVar5) {
      uVar8 = 0;
      do {
        pbVar14 = *(byte **)(*(long *)(*param_1 + 0x10) + 8 + uVar8 * 8);
        uVar8 = uVar8 + 1;
        bVar2 = *pbVar14;
        uVar1 = (uint)(bVar2 >> 1);
        if ((bVar2 & 1) != 0) {
          uVar1 = *(uint *)(pbVar14 + 8);
        }
        iVar4 = 4;
        if (uVar1 >> 0x1c != 0) {
          iVar4 = 5;
        }
        iVar7 = 3;
        if (0x1fffff < uVar1) {
          iVar7 = iVar4;
        }
        iVar4 = 2;
        if (0x3fff < uVar1) {
          iVar4 = iVar7;
        }
        iVar7 = 1;
        if (0x7f < uVar1) {
          iVar7 = iVar4;
        }
        uVar6 = uVar6 + uVar1 + iVar7;
      } while (uVar8 < uVar5);
    }
    break;
  case 10:
    uVar8 = *param_1;
    uVar6 = *(int *)(uVar8 + 8) * iVar7;
    if (0 < *(int *)(uVar8 + 8)) {
      lVar15 = 0;
      do {
        iVar4 = (**(code **)(**(long **)(*(long *)(uVar8 + 0x10) + lVar15 * 8 + 8) + 0x60))();
        uVar8 = *param_1;
        lVar15 = lVar15 + 1;
        uVar6 = iVar4 + uVar6;
      } while (lVar15 < *(int *)(uVar8 + 8));
    }
    break;
  case 0xb:
    uVar8 = *param_1;
    uVar6 = *(int *)(uVar8 + 8) * iVar7;
    if (0 < *(int *)(uVar8 + 8)) {
      lVar15 = 0;
      do {
        uVar8 = (**(code **)(**(long **)(*(long *)(uVar8 + 0x10) + lVar15 * 8 + 8) + 0x60))();
        iVar4 = 4;
        if ((uVar8 >> 0x1c & 0xf) != 0) {
          iVar4 = 5;
        }
        uVar5 = (uint)uVar8;
        iVar7 = 3;
        if (0x1fffff < uVar5) {
          iVar7 = iVar4;
        }
        iVar4 = 2;
        if (0x3fff < uVar5) {
          iVar4 = iVar7;
        }
        iVar7 = 1;
        if (0x7f < uVar5) {
          iVar7 = iVar4;
        }
        uVar6 = uVar5 + uVar6 + iVar7;
        uVar8 = *param_1;
        lVar15 = lVar15 + 1;
      } while (lVar15 < *(int *)(uVar8 + 8));
    }
    break;
  case 0xc:
    uVar5 = *(uint *)(*param_1 + 8);
    uVar6 = uVar5 * iVar7;
    if (0 < (int)uVar5) {
      uVar8 = 0;
      do {
        pbVar14 = *(byte **)(*(long *)(*param_1 + 0x10) + 8 + uVar8 * 8);
        uVar8 = uVar8 + 1;
        bVar2 = *pbVar14;
        uVar1 = (uint)(bVar2 >> 1);
        if ((bVar2 & 1) != 0) {
          uVar1 = *(uint *)(pbVar14 + 8);
        }
        iVar4 = 4;
        if (uVar1 >> 0x1c != 0) {
          iVar4 = 5;
        }
        iVar7 = 3;
        if (0x1fffff < uVar1) {
          iVar7 = iVar4;
        }
        iVar4 = 2;
        if (0x3fff < uVar1) {
          iVar4 = iVar7;
        }
        iVar7 = 1;
        if (0x7f < uVar1) {
          iVar7 = iVar4;
        }
        uVar6 = uVar6 + uVar1 + iVar7;
      } while (uVar8 < uVar5);
    }
    break;
  case 0xd:
    uVar5 = *(uint *)*param_1;
    uVar6 = uVar5 * iVar7;
    if (0 < (int)uVar5) {
      uVar8 = 0;
      do {
        uVar1 = *(uint *)(*(long *)((uint *)*param_1 + 2) + 8 + uVar8 * 4);
        if (uVar1 < 0x80) {
          iVar7 = 1;
        }
        else if (uVar1 < 0x4000) {
          iVar7 = 2;
        }
        else {
          iVar4 = 4;
          if (uVar1 >> 0x1c != 0) {
            iVar4 = 5;
          }
          iVar7 = 3;
          if (0x1fffff < uVar1) {
            iVar7 = iVar4;
          }
        }
        uVar8 = uVar8 + 1;
        uVar6 = iVar7 + uVar6;
      } while (uVar8 < uVar5);
    }
    break;
  case 0xe:
    uVar5 = *(uint *)*param_1;
    uVar6 = uVar5 * iVar7;
    if (0 < (int)uVar5) {
      uVar8 = 0;
      do {
        uVar1 = *(uint *)(*(long *)((uint *)*param_1 + 2) + 8 + uVar8 * 4);
        if ((int)uVar1 < 0) {
          iVar4 = 10;
        }
        else if (uVar1 < 0x80) {
          iVar4 = 1;
        }
        else if (uVar1 < 0x4000) {
          iVar4 = 2;
        }
        else {
          iVar7 = 4;
          if (uVar1 >> 0x1c != 0) {
            iVar7 = 5;
          }
          iVar4 = 3;
          if (0x1fffff < uVar1) {
            iVar4 = iVar7;
          }
        }
        uVar8 = uVar8 + 1;
        uVar6 = iVar4 + uVar6;
      } while (uVar8 < uVar5);
    }
    break;
  case 0x11:
    uVar5 = *(uint *)*param_1;
    uVar6 = uVar5 * iVar7;
    if (0 < (int)uVar5) {
      uVar8 = 0;
      do {
        iVar4 = *(int *)(*(long *)((uint *)*param_1 + 2) + 8 + uVar8 * 4);
        uVar1 = iVar4 << 1 ^ iVar4 >> 0x1f;
        if (uVar1 < 0x80) {
          iVar4 = 1;
        }
        else if (uVar1 < 0x4000) {
          iVar4 = 2;
        }
        else if (uVar1 < 0x200000) {
          iVar4 = 3;
        }
        else {
          iVar4 = 4;
          if (uVar1 >> 0x1c != 0) {
            iVar4 = 5;
          }
        }
        uVar8 = uVar8 + 1;
        uVar6 = iVar4 + uVar6;
      } while (uVar8 < uVar5);
    }
    break;
  case 0x12:
    uVar5 = *(uint *)*param_1;
    uVar8 = (ulong)uVar5;
    uVar6 = uVar5 * iVar7;
    if (0 < (int)uVar5) {
      plVar11 = *(long **)((uint *)*param_1 + 2);
      do {
        plVar11 = plVar11 + 1;
        uVar13 = *plVar11 << 1 ^ *plVar11 >> 0x3f;
        if (uVar13 >> 0x23 == 0) {
          if (uVar13 < 0x80) {
            iVar4 = 1;
          }
          else if (uVar13 < 0x4000) {
            iVar4 = 2;
          }
          else if (uVar13 < 0x200000) {
            iVar4 = 3;
          }
          else {
            iVar4 = 4;
            if (uVar13 >> 0x1c != 0) {
              iVar4 = 5;
            }
          }
        }
        else if (uVar13 >> 0x2a == 0) {
          iVar4 = 6;
        }
        else if (uVar13 >> 0x31 == 0) {
          iVar4 = 7;
        }
        else if (uVar13 >> 0x38 == 0) {
          iVar4 = 8;
        }
        else {
          iVar4 = 9;
          if ((long)uVar13 < 0) {
            iVar4 = 10;
          }
        }
        uVar6 = iVar4 + uVar6;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  return uVar6;
}


