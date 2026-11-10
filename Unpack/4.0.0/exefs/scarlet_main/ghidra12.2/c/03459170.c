/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03459170; name: FUN_03459170
 */


int FUN_03459170(long param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  int *piVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  undefined4 uVar8;
  uint uVar9;
  byte *pbVar10;
  float *pfVar11;
  char cVar12;
  ulong uVar13;
  long lVar14;
  undefined4 local_2e8 [2];
  long *local_2e0;
  undefined8 local_2d8;
  undefined4 *puStack_2d0;
  int *local_2c8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 uStack_2b0;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined8 local_260;
  ulong local_258;
  undefined2 local_250 [2];
  char local_24b;
  undefined1 auStack_240 [112];
  undefined4 local_1d0;
  undefined8 local_1cc;
  undefined8 local_1c4;
  undefined8 local_1bc;
  undefined8 local_1b4;
  undefined4 local_1ac;
  long local_1a8;
  ulong local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined1 auStack_180 [256];
  undefined1 *local_80;
  ulong local_78;
  undefined8 local_70;
  undefined5 uStack_68;
  undefined3 local_63;
  undefined5 uStack_60;
  byte local_58;
  undefined4 local_50;
  uint uStack_4c;
  undefined1 local_48;
  byte local_44 [4];
  
  pbVar10 = *(byte **)(param_1 + 0x20);
  if (pbVar10 != (byte *)0x0) {
    bVar2 = *pbVar10;
    uVar9 = (uint)bVar2;
    if (bVar2 < 2) {
      uVar9 = 1;
    }
    uVar13 = (ulong)uVar9;
    pfVar11 = (float *)(pbVar10 + ((ulong)(bVar2 + 4) & 0x1fc));
    do {
      pbVar10 = pbVar10 + 1;
      if (*pbVar10 == 0x11) {
        if ((*pfVar11 == 0.0) ||
           (lVar14 = *(long *)PTR_DAT_047e7068 * 0x5851f42d4c957f2d + 1,
           *(long *)PTR_DAT_047e7068 = lVar14,
           *pfVar11 < (float)(uint)((ulong)lVar14 >> 0x21) * 4.656613e-08)) {
          return 1;
        }
        break;
      }
      pfVar11 = pfVar11 + 1;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  plVar7 = (long *)FUN_0344ec90(*(undefined8 *)PTR_DAT_047e6f28,*(undefined4 *)(param_1 + 0x30),
                                *(byte *)(param_1 + 0x36) >> 6 & 1);
  if (plVar7 == (long *)0x0) {
    return 0xf;
  }
  local_48 = 0;
  local_50 = FUN_03458770(param_1);
  local_26c = 0;
  local_250[0] = 0xff00;
  local_258 = 0;
  uStack_4c = *(byte *)(param_1 + 0x36) & 0x1f;
  local_78 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_2c8 = (int *)0x0;
  local_80 = (undefined1 *)0x0;
  memset(auStack_240,0,0x70);
  local_1c4 = 0;
  local_1bc = 0;
  local_1b4 = 0;
  local_1cc = 0;
  local_2e0 = plVar7 + 1;
  local_1a0 = local_1a0 & 0xffffffff00000000;
  local_188 = 0;
  local_70 = 0;
  local_1d0 = 0x3f800000;
  local_1ac = 0;
  local_198 = 0;
  uStack_190 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  local_63 = 0;
  local_2e8[0] = 0;
  local_2b4 = *(undefined4 *)(param_2 + 0x30);
  uStack_2b0 = 0;
  local_2c0 = *(undefined8 *)(param_2 + 0x24);
  local_2b8 = *(undefined4 *)(param_2 + 0x2c);
  local_2c8 = *(int **)(param_2 + 0x1c);
  if (local_2c8 == (int *)0x0) {
    cVar12 = '\0';
    bVar5 = false;
  }
  else {
    *local_2c8 = *local_2c8 + 1;
    bVar5 = (char)local_250[0] == -0x70;
    cVar12 = (char)local_250[0];
  }
  uStack_264 = *(undefined4 *)(param_2 + 0x14);
  local_268 = 0;
  puStack_2d0 = &local_50;
  local_58 = *(byte *)(*(long *)(param_2 + 8) + 0x36) >> 5 & 4 | 3;
  local_2d8 = *(undefined8 *)(param_2 + 0x40);
  local_260 = 0;
  local_258 = local_258 & 0xffffffff00000000;
  if ((bVar5) && (local_24b != '\0')) {
    local_44[0] = 1;
    if ((cVar12 == '\0') || (local_2e0 == (long *)0x0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = (undefined4)plVar7[3];
    }
    iVar6 = FUN_034a7e5c(plVar7,local_250,uVar8,local_44,local_2d8,local_2b4);
    if (iVar6 != 1) goto LAB_0345942c;
    local_58 = local_58 & 0xfe | local_44[0];
  }
  iVar6 = FUN_034a9828(plVar7,local_2e8);
  if (iVar6 == 3) {
    iVar6 = 1;
  }
  else if (iVar6 == 1) {
    iVar6 = (**(code **)(*plVar7 + 0x240))(plVar7,local_2e8);
  }
LAB_0345942c:
  (**(code **)(*plVar7 + 0x30))(plVar7);
  puVar3 = PTR_DAT_047e2fd0;
  if (local_1a8 != 0) {
    local_1a0 = local_1a0 & 0xffffffff00000000;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    local_1a8 = 0;
    local_1a0 = local_1a0 & 0xffffffff;
  }
  if (local_80 != (undefined1 *)0x0) {
    local_78 = local_78 & 0xffffffff00000000;
    if (auStack_180 != local_80) {
      (**(code **)(puVar3 + 0x30))(0);
    }
    local_80 = (undefined1 *)0x0;
    local_78 = local_78 & 0xffffffff;
  }
  piVar4 = local_2c8;
  if ((local_2c8 != (int *)0x0) && (iVar1 = *local_2c8, *local_2c8 = iVar1 + -1, iVar1 + -1 == 0)) {
    uVar9 = local_2c8[1];
    if (uVar9 != 0) {
      uVar13 = 0;
      plVar7 = (long *)(local_2c8 + 4);
      do {
        if (*plVar7 != 0) {
          (**(code **)(puVar3 + 0x30))(0);
          uVar9 = piVar4[1];
        }
        uVar13 = uVar13 + 1;
        plVar7 = plVar7 + 4;
      } while (uVar13 < uVar9);
    }
    (**(code **)(puVar3 + 0x30))(0,piVar4);
  }
  return iVar6;
}


