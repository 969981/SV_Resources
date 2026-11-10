/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007d5aa4; name: FUN_007d5aa4
 */


void FUN_007d5aa4(long *param_1,undefined1 *param_2,uint param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 uVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  ulong uVar7;
  undefined *puVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  long *plVar18;
  undefined2 uVar19;
  ulong uVar20;
  long lVar21;
  undefined8 *puVar22;
  ulong uVar23;
  char *pcVar24;
  ulong *puVar25;
  undefined1 *puVar27;
  undefined1 *puVar26;
  ushort uVar28;
  ulong uVar29;
  long local_340;
  undefined1 auStack_338 [32];
  ulong local_318;
  undefined2 local_310;
  uint local_304;
  undefined8 local_300;
  undefined4 local_2f8 [8];
  undefined8 local_2d8;
  undefined2 local_2d0;
  undefined1 auStack_278 [16];
  undefined1 auStack_268 [136];
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [136];
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [136];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  
  lVar14 = FUN_007ec50c();
  if (lVar14 == 0) {
    return;
  }
  lVar14 = FUN_007ec50c(param_1);
  lVar15 = FUN_007ec4a8(param_1);
  if (lVar14 != lVar15) {
    return;
  }
  bVar3 = param_2[1];
  plVar1 = (long *)(*(long *)PTR_DAT_047d0860 + 0x10);
  bVar9 = FUN_007ecf6c(plVar1);
  if (bVar3 != bVar9) {
    local_2f8[0] = 0;
    local_300 = 1;
    (**(code **)(*plVar1 + 0x10))(plVar1,&local_300);
    return;
  }
  puVar26 = param_2;
  if (bVar3 != 0) {
    uVar28 = 0;
    puVar27 = param_2;
    do {
      puVar26 = puVar27 + 2;
      uVar2 = *puVar26;
      bVar9 = puVar27[3];
      uVar10 = FUN_007ed1b8(plVar1,uVar2);
      if ((uint)bVar9 != (uVar10 & 0xff)) {
        local_300 = 0;
        FUN_007965ac(local_2f8,param_4);
        local_2d8 = 0;
        local_2d0 = 0;
        FUN_007d6390(param_1,&local_300,3,0,0,uVar2,uVar10);
        return;
      }
      uVar28 = uVar28 + 1;
      puVar27 = puVar26;
    } while (uVar28 < bVar3);
  }
  uVar20 = *(ulong *)(puVar26 + 6);
  uVar10 = *(uint *)(puVar26 + 0xe);
  uVar2 = puVar26[0x12];
  cVar4 = puVar26[0x13];
  memcpy(auStack_80,puVar26 + 0x14,0x20);
  FUN_00796584(auStack_a0);
  cVar5 = puVar26[0x34];
  FUN_0284e338(&local_300);
  if (cVar5 == '\x01') {
    FUN_0078b014(&local_340,&local_300,puVar26 + 0x35,0x12);
    puVar25 = (ulong *)(puVar26 + 0x47);
  }
  else {
    FUN_0078b014(&local_340,&local_300,puVar26 + 0x35,6);
    puVar25 = (ulong *)(puVar26 + 0x3b);
  }
  FUN_007968fc(auStack_a0,&local_300);
  FUN_0284e3d4(&local_300);
  bVar3 = *(byte *)((long)puVar25 + 0xd);
  bVar9 = *(byte *)((long)puVar25 + 0xc);
  uVar23 = (ulong)bVar9;
  uVar29 = *puVar25;
  uVar7 = puVar25[1];
  FUN_018dd988(&local_300);
  FUN_018dd980(&local_300);
  memset(auStack_278,0,0x10);
  FUN_018dd988(auStack_268);
  FUN_018dd980(auStack_268);
  memset(auStack_1e0,0,0x10);
  FUN_018dd988(auStack_1d0);
  FUN_018dd980(auStack_1d0);
  memset(auStack_148,0,0x10);
  FUN_018dd988(auStack_138);
  FUN_018dd980(auStack_138);
  memset(auStack_b0,0,0x10);
  uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 | (uVar29 & 0xff00ff00ff00ff) << 8;
  uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
  pcVar24 = (char *)((long)puVar25 + 0xe);
  if (uVar23 != 0) {
    puVar22 = &local_300;
    uVar16 = uVar23;
    do {
      FUN_007d6608(&local_340,puVar22,pcVar24,((int)param_2 + param_3) - (int)pcVar24,&local_304);
      pcVar24 = pcVar24 + local_304;
      puVar22 = puVar22 + 0x13;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  puVar8 = PTR_DAT_047d0a08;
  lVar14 = *(long *)PTR_DAT_047d0a08 + 0x178;
  uVar16 = FUN_007e5328(lVar14);
  if ((uVar16 != (uVar29 >> 0x20 | uVar29 << 0x20)) ||
     (uVar6 = ((uint)uVar7 & 0xff00ff00) >> 8 | ((uint)uVar7 & 0xff00ff) << 8,
     uVar11 = FUN_007e5330(lVar14), (uVar6 >> 0x10 | uVar6 << 0x10) != (uVar11 & 0xffff)))
  goto LAB_007d5f30;
  uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
  uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
  uVar29 = uVar20 >> 0x20 | uVar20 << 0x20;
  uVar20 = FUN_007e5328(lVar14);
  if (uVar29 == uVar20) goto LAB_007d5f30;
  FUN_007e5304(&local_340,lVar14);
  uVar20 = FUN_007967e8(auStack_a0,&local_340);
  if ((uVar20 & 1) != 0) goto LAB_007d5f30;
  uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
  uVar6 = uVar10 >> 0x10 | uVar10 << 0x10;
  uVar17 = FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
  lVar14 = FUN_007e2bb4(uVar17,uVar29);
  if (((lVar14 == 0) || (uVar6 != *(ushort *)(lVar14 + 0x38))) || (*(char *)(lVar14 + 0x28) == -3))
  {
    iVar12 = FUN_007cdd90(*(undefined8 *)puVar8);
    if (iVar12 == 2) {
LAB_007d5e8c:
      local_340 = 0;
      FUN_007965ac(auStack_338,param_4);
      local_318 = 0;
      local_310 = 0;
      uVar13 = FUN_007ed1b8(plVar1,0x98);
      uVar17 = 5;
    }
    else {
      uVar20 = FUN_0078cdf4(param_1[0x18]);
      if ((uVar20 & 1) != 0) goto LAB_007d5f30;
      uVar20 = (**(code **)(**(long **)(*(long *)puVar8 + 0x18) + 0x128))
                         (*(long **)(*(long *)puVar8 + 0x18),auStack_a0);
      if ((uVar20 & 1) == 0) goto LAB_007d5e8c;
      uVar11 = FUN_007cdca4(*(undefined8 *)puVar8,uVar29);
      if ((uint)*(ushort *)(*(long *)puVar8 + 8) < (uint)bVar3 + (uVar11 & 0xffff)) {
        local_340 = 0;
        FUN_007965ac(auStack_338,param_4);
        local_318 = 0;
        local_310 = 0;
        uVar13 = FUN_007ed1b8(plVar1,0x98);
        uVar17 = 4;
      }
      else {
        if (((short)param_1[0xf2] != -1) &&
           (plVar18 = *(long **)(*(long *)puVar8 + 0x18),
           uVar20 = (**(code **)(*plVar18 + 0x1d0))(plVar18,uVar29), (uVar20 & 1) != 0)) {
          local_304 = 0;
          uVar20 = FUN_007cddd0(auStack_80,&local_304);
          if ((uVar20 & 1) == 0) {
            local_340 = 0;
            FUN_007965ac(auStack_338,param_4);
            uVar10 = local_304;
            local_318 = 0;
            local_310 = 0;
            uVar13 = FUN_007ed1b8(plVar1,0x98);
            uVar17 = 2;
          }
          else {
            lVar15 = FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
            for (lVar21 = *(long *)(lVar15 + 0x20); lVar21 != lVar15 + 0x18;
                lVar21 = *(long *)(lVar21 + 8)) {
              if ((*(ulong *)(*(long *)(lVar21 + 0x10) + 0x30) != uVar29) &&
                 ((uint)*(ushort *)(*(long *)(lVar21 + 0x10) + 0x38) == uVar10 >> 0x10))
              goto LAB_007d6068;
            }
            uVar20 = FUN_007d9b90(param_1 + 0x10d,uVar6);
            if (((uVar20 & 1) == 0) &&
               (uVar20 = FUN_007d6714(param_1 + 0x10d,uVar29,uVar6), (uVar20 & 1) == 0)) {
              uVar20 = (**(code **)(**(long **)(*(long *)puVar8 + 0x18) + 0x1c0))();
              if ((uVar20 & 1) == 0) {
                if ((((lVar14 != 0) && (*(char *)(lVar14 + 0x78) == '\0')) &&
                    (*(ulong *)(lVar14 + 0x30) == uVar29)) && (uVar6 != *(ushort *)(lVar14 + 0x38)))
                {
                  FUN_007dc878(&local_340,param_1[0x19],uVar29,4);
                  FUN_007d44f0(param_1);
                  FUN_007d44f0(param_1);
                  goto LAB_007d5f30;
                }
              }
              else {
                uVar17 = FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
                lVar14 = FUN_007e2bb4(uVar17,uVar29);
                if (((lVar14 != 0) && (*(char *)(lVar14 + 0x78) == '\0')) &&
                   ((*(ulong *)(lVar14 + 0x30) == uVar29 && (uVar6 != *(ushort *)(lVar14 + 0x38)))))
                {
                  local_340 = 0;
                  FUN_007965ac(auStack_338,param_4);
                  uVar10 = local_304;
                  local_318 = 0;
                  local_310 = 0;
                  uVar13 = FUN_007ed1b8(plVar1,0x98);
                  uVar17 = 0xb;
                  goto LAB_007d60a8;
                }
              }
              uVar20 = FUN_007d6964(param_1,uVar29,uVar6,auStack_a0);
              if ((uVar20 & 1) != 0) {
                uVar17 = FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
                lVar14 = FUN_007e2bb4(uVar17,uVar29);
                if (lVar14 == 0) {
                  lVar14 = FUN_007d6b54(param_1,uVar29,uVar6,uVar2,cVar4 != '\0',auStack_a0,0,1,0);
                  if (lVar14 == 0) goto LAB_007d5f30;
                  FUN_007e1ab4(lVar14,auStack_80);
                  *(undefined1 *)(lVar14 + 0x358) = 0;
                  if (bVar9 != 0) {
                    puVar22 = &local_300;
                    do {
                      FUN_007e1bf8(lVar14,puVar22);
                      puVar22 = puVar22 + 0x13;
                      uVar23 = uVar23 - 1;
                    } while (uVar23 != 0);
                  }
                  *(byte *)(lVar14 + 0x359) = bVar3;
                  lVar15 = param_1[0xf2];
                  *(short *)(param_1 + 0xf2) = (short)lVar15 + 1;
                  *(short *)(lVar14 + 0xf0) = (short)lVar15;
                  if (param_1[0x26] == 0) {
                    (**(code **)(*param_1 + 0x60))(param_1,lVar14);
                  }
                  else {
                    FUN_007de9a8(param_1[0x26],lVar14);
                  }
                }
                else if (*(char *)(lVar14 + 0x28) != -3) {
                  local_340 = lVar14;
                  FUN_007965ac(auStack_338,lVar14 + 8);
                  local_318 = *(ulong *)(lVar14 + 0x30);
                  local_310 = *(undefined2 *)(lVar14 + 0x38);
                  uVar19 = *(undefined2 *)((long)param_1 + 0xdc);
                  uVar13 = FUN_007ed1b8(plVar1,0x98);
                  FUN_007d6390(param_1,&local_340,1,uVar19,0,0x98,uVar13);
                }
                if (param_1[0x26] != 0) {
                  lVar15 = FUN_007de31c(param_1[0x26],pcVar24,
                                        param_2 + ((ulong)param_3 - (long)pcVar24),lVar14);
                  if (lVar15 == 0) goto LAB_007d5f30;
                  FUN_007de4fc(param_1[0x26],auStack_a0,pcVar24 + 2,pcVar24[1] + *pcVar24);
                  if (param_1[0x26] != 0) {
                    FUN_007ddf88();
                  }
                }
                if (*(char *)(lVar14 + 0x28) == -3) {
                  local_340 = 0;
                  FUN_007965ac(auStack_338,param_4);
                  local_310 = (undefined2)(uVar10 >> 0x10);
                  local_318 = uVar29;
                  FUN_007d6cbc(param_1,&local_340);
                }
                goto LAB_007d5f30;
              }
              goto LAB_007d6208;
            }
LAB_007d6068:
            local_340 = 0;
            FUN_007965ac(auStack_338,param_4);
            uVar10 = local_304;
            local_318 = 0;
            local_310 = 0;
            uVar13 = FUN_007ed1b8(plVar1,0x98);
            uVar17 = 10;
          }
LAB_007d60a8:
          uVar19 = 0;
          goto LAB_007d5f2c;
        }
LAB_007d6208:
        local_340 = 0;
        FUN_007965ac(auStack_338,param_4);
        local_318 = 0;
        local_310 = 0;
        uVar13 = FUN_007ed1b8(plVar1,0x98);
        uVar17 = 9;
      }
    }
    uVar19 = 0;
    uVar10 = 0;
  }
  else {
    local_340 = lVar14;
    FUN_007965ac(auStack_338,lVar14 + 8);
    local_318 = *(ulong *)(lVar14 + 0x30);
    local_310 = *(undefined2 *)(lVar14 + 0x38);
    uVar19 = *(undefined2 *)((long)param_1 + 0xdc);
    uVar13 = FUN_007ed1b8(plVar1,0x98);
    uVar17 = 1;
    uVar10 = 0;
  }
LAB_007d5f2c:
  FUN_007d6390(param_1,&local_340,uVar17,uVar19,uVar10,0x98,uVar13);
LAB_007d5f30:
  FUN_018dd490(auStack_138);
  FUN_018dd490(auStack_1d0);
  FUN_018dd490(auStack_268);
  FUN_018dd490(&local_300);
  return;
}


