/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c3dcd8; name: FUN_00c3dcd8
 */


uint FUN_00c3dcd8(long param_1)

{
  long lVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  char *pcVar12;
  char *pcVar13;
  ulong uVar14;
  long *plVar15;
  bool bVar16;
  char *pcVar17;
  ulong local_d8;
  undefined8 local_d0;
  long local_c8;
  undefined2 local_c0;
  undefined1 local_be;
  undefined2 local_a8;
  undefined1 local_a6;
  ushort local_90;
  undefined1 local_8e;
  long local_80;
  ulong local_78;
  undefined8 local_70;
  long local_68;
  
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  uVar8 = FUN_00c4059c(param_1,&local_d8);
  if ((uVar8 & 1) != 0) {
    pcVar17 = (char *)((ulong)&local_90 | 2);
    lVar1 = param_1 + 0x28;
    pcVar2 = (char *)(param_1 + 0x32);
    do {
      local_78 = CONCAT53(local_78._3_5_,0x3e02);
      bVar5 = *(byte *)(param_1 + 0x30);
      uVar11 = (ulong)(bVar5 >> 1);
      uVar8 = uVar11;
      if ((bVar5 & 1) != 0) {
        uVar8 = *(ulong *)(param_1 + 0x38);
      }
      if (uVar8 == 1) {
        if ((bVar5 & 1) == 0) {
          if (*(char *)(param_1 + 0x31) == '>') {
            pcVar12 = (char *)((ulong)&local_78 | 2);
            pcVar13 = pcVar2;
            uVar14 = uVar11;
            do {
              uVar14 = uVar14 - 1;
              if (uVar14 == 0) goto LAB_00c3e304;
              cVar3 = *pcVar12;
              cVar4 = *pcVar13;
              pcVar12 = pcVar12 + 1;
              pcVar13 = pcVar13 + 1;
            } while (cVar4 == cVar3);
          }
          local_90 = 0x7d02;
          local_8e = 0;
          if (*(char *)(param_1 + 0x31) == '}') {
            pcVar12 = pcVar17;
            pcVar13 = pcVar2;
            uVar14 = uVar11;
            do {
              uVar14 = uVar14 - 1;
              if (uVar14 == 0) goto LAB_00c3e304;
              cVar3 = *pcVar12;
              cVar4 = *pcVar13;
              pcVar12 = pcVar12 + 1;
              pcVar13 = pcVar13 + 1;
            } while (cVar4 == cVar3);
          }
        }
        else if ((**(char **)(param_1 + 0x40) == '>') || (**(char **)(param_1 + 0x40) == '}')) {
LAB_00c3e304:
          uVar6 = FUN_00c3caf8(param_1,&local_d8);
          goto LAB_00c3e314;
        }
      }
      local_70 = 0;
      local_68 = 0;
      local_78 = 0;
      local_90 = 0x5b02;
      local_8e = 0;
      if (uVar8 == 1) {
        if ((bVar5 & 1) == 0) {
          if (*(char *)(param_1 + 0x31) == '[') {
            pcVar12 = pcVar17;
            pcVar13 = pcVar2;
            do {
              uVar11 = uVar11 - 1;
              if (uVar11 == 0) goto LAB_00c3de60;
              cVar3 = *pcVar12;
              cVar4 = *pcVar13;
              pcVar12 = pcVar12 + 1;
              pcVar13 = pcVar13 + 1;
            } while (cVar4 == cVar3);
          }
          goto LAB_00c3dea4;
        }
        if (**(char **)(param_1 + 0x40) != '[') goto LAB_00c3dea4;
LAB_00c3de60:
        FUN_00c2f698(lVar1);
        uVar8 = FUN_00c3d00c(param_1,&local_78);
        if ((uVar8 & 1) != 0) {
          local_90 = 0x5d02;
          local_8e = 0;
          uVar8 = FUN_00c3caf8(param_1,&local_90);
          lVar10 = local_80;
          if (((local_90 & 1) != 0) && (local_80 != 0)) {
            lVar9 = tpidr_el0;
            plVar15 = *(long **)(lVar9 + 0x30);
            if (plVar15 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar15 = DAT_04859430;
              *(long **)(lVar9 + 0x30) = DAT_04859430;
            }
            uVar11 = (**(code **)(*plVar15 + 0xf8))(plVar15);
            if (((uVar11 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
              (**(code **)(*plVar15 + 0x18))(plVar15,lVar10,0,8);
            }
            else {
              FUN_00c48fe8(plVar15,lVar10,0,8);
            }
          }
          goto joined_r0x00c3deb0;
        }
LAB_00c3e118:
        bVar16 = false;
      }
      else {
LAB_00c3dea4:
        uVar8 = FUN_00c3d340(param_1,&local_78);
joined_r0x00c3deb0:
        if ((uVar8 & 1) == 0) goto LAB_00c3e118;
        local_90 = 0x3a02;
        local_8e = 0;
        bVar5 = *(byte *)(param_1 + 0x30);
        uVar11 = (ulong)(bVar5 >> 1);
        uVar8 = uVar11;
        if ((bVar5 & 1) != 0) {
          uVar8 = *(ulong *)(param_1 + 0x38);
        }
        if (uVar8 == 1) {
          if ((bVar5 & 1) == 0) {
            if (*(char *)(param_1 + 0x31) == ':') {
              pcVar12 = pcVar17;
              pcVar13 = pcVar2;
              do {
                uVar11 = uVar11 - 1;
                if (uVar11 == 0) goto LAB_00c3df24;
                cVar3 = *pcVar12;
                cVar4 = *pcVar13;
                pcVar12 = pcVar12 + 1;
                pcVar13 = pcVar13 + 1;
              } while (cVar4 == cVar3);
            }
            goto LAB_00c3dfc8;
          }
          if (**(char **)(param_1 + 0x40) != ':') goto LAB_00c3dfc8;
LAB_00c3df24:
          FUN_00c2f698(lVar1);
          local_a8 = 0x7b02;
          local_a6 = 0;
          bVar5 = *(byte *)(param_1 + 0x30);
          uVar11 = (ulong)(bVar5 >> 1);
          uVar8 = uVar11;
          if ((bVar5 & 1) != 0) {
            uVar8 = *(ulong *)(param_1 + 0x38);
          }
          if (uVar8 == 1) {
            if ((bVar5 & 1) != 0) {
              if (**(char **)(param_1 + 0x40) != '{') {
LAB_00c3dfb8:
                local_be = 0;
                local_c0 = 0x3c02;
                if (**(char **)(param_1 + 0x40) != '<') goto LAB_00c3e10c;
              }
              goto LAB_00c3dfc8;
            }
            if (*(char *)(param_1 + 0x31) == '{') {
              pcVar12 = (char *)((ulong)&local_a8 | 2);
              pcVar13 = pcVar2;
              uVar8 = uVar11;
              do {
                uVar8 = uVar8 - 1;
                if (uVar8 == 0) goto LAB_00c3dfc8;
                cVar3 = *pcVar12;
                cVar4 = *pcVar13;
                pcVar12 = pcVar12 + 1;
                pcVar13 = pcVar13 + 1;
              } while (cVar4 == cVar3);
              if ((bVar5 & 1) != 0) goto LAB_00c3dfb8;
            }
            local_be = 0;
            local_c0 = 0x3c02;
            if (*(char *)(param_1 + 0x31) == '<') {
              pcVar12 = (char *)((ulong)&local_c0 | 2);
              pcVar13 = pcVar2;
              do {
                uVar11 = uVar11 - 1;
                if (uVar11 == 0) goto LAB_00c3dfc8;
                cVar3 = *pcVar12;
                cVar4 = *pcVar13;
                pcVar12 = pcVar12 + 1;
                pcVar13 = pcVar13 + 1;
              } while (cVar4 == cVar3);
            }
          }
LAB_00c3e10c:
          uVar8 = FUN_00c3d4cc(param_1);
        }
        else {
LAB_00c3dfc8:
          uVar8 = FUN_00c3dcd8(param_1);
        }
        if ((uVar8 & 1) == 0) goto LAB_00c3e118;
        local_90 = 0x3b02;
        local_8e = 0;
        bVar5 = *(byte *)(param_1 + 0x30);
        uVar11 = (ulong)(bVar5 >> 1);
        uVar8 = uVar11;
        if ((bVar5 & 1) != 0) {
          uVar8 = *(ulong *)(param_1 + 0x38);
        }
        if (uVar8 == 1) {
          if ((bVar5 & 1) == 0) {
            if (*(char *)(param_1 + 0x31) == ';') {
              pcVar12 = pcVar17;
              pcVar13 = pcVar2;
              uVar8 = uVar11;
              do {
                uVar8 = uVar8 - 1;
                if (uVar8 == 0) goto LAB_00c3e080;
                cVar3 = *pcVar12;
                cVar4 = *pcVar13;
                pcVar12 = pcVar12 + 1;
                pcVar13 = pcVar13 + 1;
              } while (cVar4 == cVar3);
              if ((bVar5 & 1) != 0) goto LAB_00c3e070;
            }
            local_a6 = 0;
            local_a8 = 0x2c02;
            if (*(char *)(param_1 + 0x31) == ',') {
              pcVar12 = (char *)((ulong)&local_a8 | 2);
              pcVar13 = pcVar2;
              do {
                uVar11 = uVar11 - 1;
                if (uVar11 == 0) goto LAB_00c3e080;
                cVar3 = *pcVar12;
                cVar4 = *pcVar13;
                pcVar12 = pcVar12 + 1;
                pcVar13 = pcVar13 + 1;
              } while (cVar4 == cVar3);
            }
          }
          else {
            if (**(char **)(param_1 + 0x40) != ';') {
LAB_00c3e070:
              local_a6 = 0;
              local_a8 = 0x2c02;
              if (**(char **)(param_1 + 0x40) != ',') goto LAB_00c3e0c8;
            }
LAB_00c3e080:
            FUN_00c2f698(lVar1);
          }
        }
        else {
          local_a8 = 0x2c02;
          local_a6 = 0;
        }
LAB_00c3e0c8:
        bVar16 = true;
      }
      lVar10 = local_68;
      if (((local_78 & 1) != 0) && (local_68 != 0)) {
        lVar9 = tpidr_el0;
        plVar15 = *(long **)(lVar9 + 0x30);
        if (plVar15 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar15 = DAT_04859430;
          *(long **)(lVar9 + 0x30) = DAT_04859430;
        }
        uVar8 = (**(code **)(*plVar15 + 0xf8))(plVar15);
        if (((uVar8 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
          (**(code **)(*plVar15 + 0x18))(plVar15,lVar10,0,8);
        }
        else {
          FUN_00c48fe8(plVar15,lVar10,0,8);
        }
      }
    } while (bVar16);
  }
  uVar6 = 0;
LAB_00c3e314:
  lVar1 = local_c8;
  if (((local_d8 & 1) != 0) && (local_c8 != 0)) {
    lVar10 = tpidr_el0;
    plVar15 = *(long **)(lVar10 + 0x30);
    if (plVar15 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar15 = DAT_04859430;
      *(long **)(lVar10 + 0x30) = DAT_04859430;
    }
    uVar8 = (**(code **)(*plVar15 + 0xf8))(plVar15);
    if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar15 + 0x18))(plVar15,lVar1,0,8);
    }
    else {
      FUN_00c48fe8(plVar15,lVar1,0,8);
    }
  }
  return uVar6 & 1;
}


