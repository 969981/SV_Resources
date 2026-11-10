/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e8e10; name: FUN_007e8e10
 */


void FUN_007e8e10(long *param_1,undefined8 param_2)

{
  long *plVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  bool bVar5;
  byte bVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  undefined8 *puVar14;
  uint uVar15;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 auStack_a4 [12];
  undefined8 local_98;
  undefined4 local_90;
  uint local_88 [2];
  undefined1 *local_80;
  undefined4 local_78;
  long local_70;
  undefined4 local_68;
  
  bVar5 = (int)param_1[1] != 1;
  if (bVar5) {
    local_70 = 0;
    local_68 = 0;
  }
  else {
    local_70 = (long)param_1 + 0xc;
    local_68 = 0x10;
  }
  local_88[0] = (uint)!bVar5;
  lVar7 = FUN_007eaea0(param_1[9],0);
  if (lVar7 != 0) {
    iVar12 = 0;
    plVar1 = param_1 + 10;
    puVar14 = (undefined8 *)PTR_DAT_047d0860;
    do {
      lVar7 = FUN_007eaea0(param_1[9],iVar12);
      if (*(char *)(lVar7 + 0xc) < '\0') {
        if (*(char *)(lVar7 + 0x648) == '\0') {
          local_90 = 0;
          local_98 = 0x20000000;
          FUN_007eafa0(param_1[9],&local_98);
          local_90 = 0;
          local_98 = 0x20000000;
          FUN_007e8b50(param_1,&local_98,lVar7,0,"<Packet invalid>");
          local_90 = 0;
          local_98 = 0x20000000;
          FUN_007e8b54(param_1,&local_98,lVar7);
          local_90 = 0;
          local_98 = 0x20000000;
          FUN_007eafa0(param_1[9],&local_98);
        }
        else {
          uVar8 = FUN_007971c0(lVar7);
          if ((uVar8 & 1) != 0) {
            plVar9 = (long *)FUN_007f72b0(*puVar14);
            (**(code **)(*plVar9 + 0x20))(&local_98,plVar9,lVar7,0x22);
            iVar11 = (int)local_98;
            local_98 = 0x400000000;
            local_90 = 0;
            FUN_007e8b50(param_1,&local_98,lVar7,0,&DAT_03c886bc);
            if (*(char *)(lVar7 + 0xc) < '\0') {
              memset(auStack_a4,0,0xc);
              if ((int)param_1[1] == 1) {
                plVar9 = (long *)param_1[0x17];
                if (plVar9 == (long *)0x0) {
                  *(undefined1 *)(lVar7 + 0x648) = 0;
                  goto LAB_007e8f10;
                }
                (**(code **)(*plVar9 + 0x18))(&local_98,plVar9,auStack_a4,0xc,lVar7);
                if ((int)local_98 == 0) {
                  local_80 = auStack_a4;
                  local_78 = 0xc;
                  goto LAB_007e9168;
                }
                *(undefined1 *)(lVar7 + 0x648) = 0;
                local_b0 = 0x20000000;
              }
              else {
LAB_007e9168:
                FUN_0079756c(&local_98,lVar7,local_88);
                if ((int)local_98 == 0) goto LAB_007e8f94;
                *(undefined1 *)(lVar7 + 0x648) = 0;
                local_b0 = 0x400000000;
              }
              local_a8 = 0;
              puVar10 = &local_b0;
              goto LAB_007e8f1c;
            }
LAB_007e8f94:
            if (iVar11 == 0) {
              uVar8 = (**(code **)(*param_1 + 0x90))(param_1,lVar7);
              if ((uVar8 & 1) != 0) {
                uVar15 = 0;
                if (*(uint *)(lVar7 + 0x5f8) < 0x5c1) {
                  uVar15 = *(uint *)(lVar7 + 0x5f8);
                }
                bVar13 = 0;
                *(uint *)(lVar7 + 0x5f8) = uVar15;
                if ((*(byte *)(lVar7 + 0x14) + 0x1c <= uVar15) &&
                   (uVar15 - 0x1c != (uint)*(byte *)(lVar7 + 0x14))) {
                  uVar15 = 0;
                  bVar13 = 0;
                  do {
                    FUN_007ed2d0(plVar1,lVar7,uVar15);
                    if (*plVar1 == 0) {
                      if ((char)param_1[0x11] == '\0') {
LAB_007e9218:
                        local_90 = 0;
                        local_98 = 0x20000000;
                        FUN_007e8b54(param_1,&local_98,lVar7);
                        *(undefined1 *)(lVar7 + 0x648) = 0;
                        puVar14 = (undefined8 *)PTR_DAT_047d0860;
                        goto LAB_007e8ec0;
                      }
                      break;
                    }
                    bVar6 = *(byte *)(param_1 + 0xf);
                    iVar11 = 1;
                    if ((bVar6 & 1) != 0) {
                      iVar11 = 2;
                    }
                    if ((bVar6 & 2) != 0) {
                      iVar11 = iVar11 + 2;
                    }
                    if ((bVar6 & 4) != 0) {
                      iVar11 = iVar11 + 4;
                    }
                    if ((bVar6 & 8) != 0) {
                      iVar11 = iVar11 + 8;
                    }
                    uVar3 = *(ushort *)((long)param_1 + 0x7a);
                    lVar4 = param_1[7];
                    bVar6 = (**(code **)(*param_1 + 0x98))(param_1,plVar1);
                    if ((char)lVar4 == '\0') {
                      if ((bVar6 & 1) == 0) goto LAB_007e9218;
                    }
                    else {
                      bVar13 = bVar13 | bVar6;
                    }
                    uVar15 = uVar15 + uVar3 + iVar11;
                    uVar2 = 0;
                    if (*(byte *)(lVar7 + 0x14) + 0x1c <= *(uint *)(lVar7 + 0x5f8)) {
                      uVar2 = (*(uint *)(lVar7 + 0x5f8) - (uint)*(byte *)(lVar7 + 0x14)) - 0x1c;
                    }
                  } while (uVar15 < uVar2);
                }
                bVar5 = (char)param_1[7] == '\0';
                *(byte *)(lVar7 + 0x648) = bVar13 & 1 | bVar5;
                puVar14 = (undefined8 *)PTR_DAT_047d0860;
                if ((bVar13 & 1) != 0 || bVar5) {
                  local_98 = 0x400000000;
                  local_90 = 0;
                  FUN_007e8b54(param_1,&local_98,lVar7);
                  FUN_007e9e14(&local_98,*(undefined8 *)(*puVar14 + 0x90),lVar7,1,
                               *(undefined1 *)(lVar7 + 0x14),0,0);
                }
                goto LAB_007e8ec0;
              }
            }
            else {
              local_98 = 0x400000000;
              local_90 = 0;
              FUN_007e8b54(param_1,&local_98,lVar7);
            }
          }
          *(undefined1 *)(lVar7 + 0x648) = 0;
        }
      }
      else {
        *(undefined1 *)(lVar7 + 0x648) = 0;
        local_90 = 0;
        local_98 = 0x20000000;
        FUN_007e8b50(param_1,&local_98,lVar7,0,"<IsEncrypted() == false>");
LAB_007e8f10:
        local_90 = 0;
        puVar10 = &local_98;
        local_98 = 0x20000000;
LAB_007e8f1c:
        FUN_007e8b54(param_1,puVar10,lVar7);
      }
LAB_007e8ec0:
      iVar12 = iVar12 + 1;
      lVar7 = FUN_007eaea0(param_1[9],iVar12);
    } while (lVar7 != 0);
  }
  FUN_007e927c(param_1,param_2);
  return;
}


