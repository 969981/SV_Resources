/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c3d4cc; name: FUN_00c3d4cc
 */


undefined8 FUN_00c3d4cc(long param_1)

{
  byte *pbVar1;
  string sVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  bool bVar6;
  byte *pbVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  char *pcVar11;
  ulong uVar12;
  char *pcVar13;
  char *pcVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  undefined2 local_90;
  undefined1 local_8e;
  long local_80;
  ushort local_78;
  undefined1 local_76;
  ulong local_70;
  byte *local_68;
  
  iVar8 = *(int *)(param_1 + 0x28);
  if (iVar8 == 5) {
    do {
      FUN_00c2f698(param_1 + 0x28);
    } while (*(int *)(param_1 + 0x28) == 5);
    return 1;
  }
  local_78 = 0x5b02;
  local_76 = 0;
  sVar2 = *(string *)(param_1 + 0x30);
  uVar12 = (ulong)((byte)sVar2 >> 1);
  uVar9 = uVar12;
  if (((byte)sVar2 & 1) != 0) {
    uVar9 = *(ulong *)(param_1 + 0x38);
  }
  lVar16 = param_1 + 0x28;
  if (uVar9 == 1) {
    if (((byte)sVar2 & 1) == 0) {
      if (*(char *)(param_1 + 0x31) == '[') {
        pcVar14 = (char *)(param_1 + 0x32);
        pcVar11 = (char *)((ulong)&local_78 | 2);
        uVar15 = uVar12;
        do {
          uVar15 = uVar15 - 1;
          if (uVar15 == 0) goto LAB_00c3d594;
          cVar3 = *pcVar11;
          cVar4 = *pcVar14;
          pcVar14 = pcVar14 + 1;
          pcVar11 = pcVar11 + 1;
        } while (cVar4 == cVar3);
      }
    }
    else if (**(char **)(param_1 + 0x40) == '[') {
LAB_00c3d594:
      FUN_00c2f698(lVar16);
      pcVar14 = (char *)(param_1 + 0x32);
      do {
        local_78 = 0x7b02;
        local_76 = 0;
        bVar5 = *(byte *)(param_1 + 0x30);
        uVar12 = (ulong)(bVar5 >> 1);
        uVar9 = uVar12;
        if ((bVar5 & 1) != 0) {
          uVar9 = *(ulong *)(param_1 + 0x38);
        }
        if (uVar9 == 1) {
          if ((bVar5 & 1) == 0) {
            if (*(char *)(param_1 + 0x31) == '{') {
              pcVar11 = (char *)((ulong)&local_78 | 2);
              pcVar13 = pcVar14;
              uVar9 = uVar12;
              do {
                uVar9 = uVar9 - 1;
                if (uVar9 == 0) goto LAB_00c3d684;
                cVar3 = *pcVar11;
                cVar4 = *pcVar13;
                pcVar11 = pcVar11 + 1;
                pcVar13 = pcVar13 + 1;
              } while (cVar4 == cVar3);
            }
            local_90 = 0x3c02;
            local_8e = 0;
            if (*(char *)(param_1 + 0x31) == '<') {
              pcVar11 = (char *)((ulong)&local_90 | 2);
              pcVar13 = pcVar14;
              do {
                uVar12 = uVar12 - 1;
                if (uVar12 == 0) goto LAB_00c3d684;
                cVar3 = *pcVar11;
                cVar4 = *pcVar13;
                pcVar11 = pcVar11 + 1;
                pcVar13 = pcVar13 + 1;
              } while (cVar4 == cVar3);
            }
            goto LAB_00c3d65c;
          }
          if ((**(char **)(param_1 + 0x40) != '{') && (**(char **)(param_1 + 0x40) != '<'))
          goto LAB_00c3d65c;
LAB_00c3d684:
          uVar9 = FUN_00c3dcd8(param_1);
        }
        else {
          local_90 = 0x3c02;
          local_8e = 0;
LAB_00c3d65c:
          uVar9 = FUN_00c3d4cc(param_1);
        }
        if ((uVar9 & 1) == 0) {
          return 0;
        }
        local_78 = 0x5d02;
        local_76 = 0;
        bVar5 = *(byte *)(param_1 + 0x30);
        uVar12 = (ulong)(bVar5 >> 1);
        uVar9 = uVar12;
        if ((bVar5 & 1) != 0) {
          uVar9 = *(ulong *)(param_1 + 0x38);
        }
        if (uVar9 == 1) {
          if ((bVar5 & 1) == 0) {
            if (*(char *)(param_1 + 0x31) == ']') {
              pcVar11 = (char *)((ulong)&local_78 | 2);
              pcVar13 = pcVar14;
              do {
                uVar12 = uVar12 - 1;
                if (uVar12 == 0) goto LAB_00c3d89c;
                cVar3 = *pcVar11;
                cVar4 = *pcVar13;
                pcVar11 = pcVar11 + 1;
                pcVar13 = pcVar13 + 1;
              } while (cVar4 == cVar3);
            }
          }
          else if (**(char **)(param_1 + 0x40) == ']') goto LAB_00c3d89c;
        }
        local_78 = 0x2c02;
        local_76 = 0;
        uVar9 = FUN_00c3caf8(param_1,&local_78);
        pbVar1 = local_68;
        if (((local_78 & 1) != 0) && (local_68 != (byte *)0x0)) {
          lVar10 = tpidr_el0;
          plVar17 = *(long **)(lVar10 + 0x30);
          if (plVar17 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar17 = DAT_04859430;
            *(long **)(lVar10 + 0x30) = DAT_04859430;
          }
          uVar12 = (**(code **)(*plVar17 + 0xf8))(plVar17);
          if (((uVar12 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
            (**(code **)(*plVar17 + 0x18))(plVar17,pbVar1,0,8);
          }
          else {
            FUN_00c48fe8(plVar17,pbVar1,0,8);
          }
        }
        if ((uVar9 & 1) == 0) {
          return 0;
        }
      } while( true );
    }
  }
  local_76 = 0;
  local_78 = 0x2d02;
  if (uVar9 == 1) {
    if (((byte)sVar2 & 1) == 0) {
      if (*(char *)(param_1 + 0x31) == '-') {
        pcVar14 = (char *)(param_1 + 0x32);
        pcVar11 = (char *)((ulong)&local_78 | 2);
        do {
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) goto LAB_00c3d878;
          cVar3 = *pcVar11;
          cVar4 = *pcVar14;
          pcVar14 = pcVar14 + 1;
          pcVar11 = pcVar11 + 1;
        } while (cVar4 == cVar3);
      }
      goto LAB_00c3d88c;
    }
    if (**(char **)(param_1 + 0x40) != '-') goto LAB_00c3d88c;
LAB_00c3d878:
    FUN_00c2f698(lVar16);
    iVar8 = *(int *)(param_1 + 0x28);
    bVar6 = true;
  }
  else {
LAB_00c3d88c:
    bVar6 = false;
  }
  if (iVar8 - 3U < 2) goto LAB_00c3d89c;
  if (iVar8 != 2) {
    return 0;
  }
  if (!bVar6) goto LAB_00c3d89c;
  std::string::string((string *)&local_78,(string *)(param_1 + 0x30));
  pbVar7 = (byte *)((ulong)&local_78 | 1);
  pbVar1 = (byte *)((ulong)&local_78 | 1) + ((byte)local_78._0_1_ >> 1);
  if ((local_78 & 1) != 0) {
    pbVar7 = local_68;
    pbVar1 = local_68 + local_70;
  }
  for (; pbVar7 != pbVar1; pbVar7 = pbVar7 + 1) {
    if (*pbVar7 - 0x41 < 0x1a) {
      *pbVar7 = *pbVar7 + 0x20;
    }
  }
  uVar12 = (ulong)((byte)local_78._0_1_ >> 1);
  uVar9 = uVar12;
  if ((local_78 & 1) != 0) {
    uVar9 = local_70;
  }
  if (uVar9 == 3) {
    iVar8 = std::string::compare((ulong)&local_78,0,(char *)0xffffffffffffffff,0x3be063e);
    if (iVar8 != 0) {
      uVar12 = (ulong)((byte)local_78._0_1_ >> 1);
      goto LAB_00c3d988;
    }
  }
  else {
LAB_00c3d988:
    uVar9 = uVar12;
    if (((byte)local_78._0_1_ & 1) != 0) {
      uVar9 = local_70;
    }
    sVar2 = local_78._0_1_;
    if (uVar9 == 8) {
      iVar8 = std::string::compare((ulong)&local_78,0,(char *)0xffffffffffffffff,0x3c8bb31);
      if (iVar8 == 0) goto LAB_00c3da34;
      uVar12 = (ulong)((byte)local_78._0_1_ >> 1);
      sVar2 = local_78._0_1_;
    }
    if (((byte)sVar2 & 1) != 0) {
      uVar12 = local_70;
    }
    if ((uVar12 != 3) ||
       (iVar8 = std::string::compare((ulong)&local_78,0,(char *)0xffffffffffffffff,0x3c475d9),
       iVar8 != 0)) {
      std::operator+("Invalid float number: ",(string *)&local_78);
      FUN_00c340d8(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),&local_90
                  );
      if ((((byte)local_90 & 1) != 0) && (local_80 != 0)) {
        lVar16 = tpidr_el0;
        plVar17 = *(long **)(lVar16 + 0x30);
        if (plVar17 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar17 = DAT_04859430;
          *(long **)(lVar16 + 0x30) = DAT_04859430;
        }
        uVar9 = (**(code **)(*plVar17 + 0xf8))(plVar17);
        if (((uVar9 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
          (**(code **)(*plVar17 + 0x18))(plVar17,local_80,0,8);
        }
        else {
          FUN_00c48fe8(plVar17,local_80,0,8);
        }
      }
      if (((local_78 & 1) != 0) && (local_68 != (byte *)0x0)) {
        lVar16 = tpidr_el0;
        plVar17 = *(long **)(lVar16 + 0x30);
        if (plVar17 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar17 = DAT_04859430;
          *(long **)(lVar16 + 0x30) = DAT_04859430;
        }
        uVar9 = (**(code **)(*plVar17 + 0xf8))(plVar17);
        if (((uVar9 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
          (**(code **)(*plVar17 + 0x18))(plVar17,local_68,0,8);
        }
        else {
          FUN_00c48fe8(plVar17,local_68,0,8);
        }
      }
      return 0;
    }
  }
LAB_00c3da34:
  if (((local_78 & 1) != 0) && (local_68 != (byte *)0x0)) {
    lVar10 = tpidr_el0;
    plVar17 = *(long **)(lVar10 + 0x30);
    if (plVar17 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar17 = DAT_04859430;
      *(long **)(lVar10 + 0x30) = DAT_04859430;
    }
    uVar9 = (**(code **)(*plVar17 + 0xf8))(plVar17);
    if (((uVar9 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar17 + 0x18))(plVar17,local_68,0,8);
    }
    else {
      FUN_00c48fe8(plVar17,local_68,0,8);
    }
  }
LAB_00c3d89c:
  FUN_00c2f698(lVar16);
  return 1;
}


