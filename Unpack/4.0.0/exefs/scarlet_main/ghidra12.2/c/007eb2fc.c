/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007eb2fc; name: FUN_007eb2fc
 */


void FUN_007eb2fc(long *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  ulong local_1a0;
  ulong local_198;
  undefined4 local_190;
  undefined1 auStack_184 [4];
  undefined4 local_180 [2];
  int local_178 [2];
  int local_170 [2];
  ulong *local_168;
  undefined4 local_160;
  long local_158;
  undefined4 local_150;
  ulong local_70 [2];
  
  if ((int)param_1[0xdf] == 0) {
    FUN_007eb888(&local_1a0);
    if ((int)local_1a0 != 0) {
      sprintf((char *)local_170,"%08x");
    }
    FUN_007ec190(local_178,(long)param_1 + 0x70c,&local_1a0,param_2);
    if (local_178[0] != 0) {
      sprintf((char *)local_170,"%08x");
      local_180[0] = 0x8000000;
      lVar8 = (**(code **)(*param_1 + 0x78))(param_1,local_180,local_178,0,0);
      if (lVar8 != 0) {
        if ((int)param_1[0xdf] == 0) {
          local_70[0] = CONCAT44(local_70[0]._4_4_,0x10408);
        }
        else {
          FUN_007edc00(param_1 + 9,auStack_184);
          local_70[0] = local_70[0] & 0xffffffff00000000;
        }
        local_198 = local_198 & 0xffffffff00000000;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)&local_198);
        FUN_00cbd7c0(&local_198,local_70);
        FUN_007ec190(local_70,(long)param_1 + 0x70c,local_178,param_2);
      }
    }
    if ((int)param_1[1] == 1) {
      local_158 = (long)param_1 + 0xc;
      local_150 = 0x10;
      local_170[0] = 1;
    }
    else if ((int)param_1[1] == 0) {
      local_170[0] = 0;
    }
    lVar8 = FUN_007eae4c(param_1[8],0);
    puVar5 = PTR_DAT_047d0860;
    lVar9 = param_1[8];
    if (lVar8 != 0) {
      iVar12 = 1;
      do {
        iVar3 = iVar12 + -1;
        lVar8 = FUN_007eae4c(lVar9,iVar3);
        if (*(char *)(lVar8 + 0x648) != '\0') {
          local_198 = local_198 & 0xffffffffffff0000;
          local_1a0 = local_1a0 & 0xffffffffffff0000;
          plVar10 = (long *)FUN_007f72c8(*(undefined8 *)puVar5);
          uVar11 = FUN_007eae4c(param_1[8],iVar3);
          (**(code **)(*plVar10 + 0x20))(plVar10,uVar11,&local_198,&local_1a0);
          lVar8 = FUN_007eae4c(param_1[8],iVar3);
          cVar2 = *(char *)(lVar8 + 0x622);
          lVar8 = FUN_007eae4c(param_1[8],iVar3);
          iVar13 = 0;
          if (*(byte *)(lVar8 + 0x14) + 0x1c <= *(uint *)(lVar8 + 0x5f8)) {
            iVar13 = (*(uint *)(lVar8 + 0x5f8) - (uint)*(byte *)(lVar8 + 0x14)) + -0x1c;
          }
          if (cVar2 == '\0') {
            uVar6 = FUN_0078db64(local_170[0]);
            uVar4 = 0;
            if (uVar6 != 0) {
              uVar4 = ((iVar13 + uVar6) - 1) / uVar6;
            }
            iVar13 = uVar4 * uVar6;
          }
          lVar8 = FUN_007eae4c(param_1[8],iVar3);
          iVar1 = 0;
          if (*(byte *)(lVar8 + 0x14) + 0x1c <= *(uint *)(lVar8 + 0x5f8)) {
            iVar1 = ((uint)*(byte *)(lVar8 + 0x14) - *(uint *)(lVar8 + 0x5f8)) + 0x1c;
          }
          iVar1 = iVar1 + iVar13;
          plVar10 = (long *)FUN_007f72c8(*(undefined8 *)puVar5);
          uVar11 = FUN_007eae4c(param_1[8],iVar3);
          uVar7 = (**(code **)(*plVar10 + 0x28))(plVar10,uVar11);
          if ((uint)(ushort)local_198 + (uint)(ushort)local_1a0 != 0) {
            uVar14 = *(undefined8 *)(*(long *)puVar5 + 0x78);
            uVar11 = FUN_007eae4c(param_1[8],iVar3);
            FUN_007e9e14(local_70,uVar14,uVar11,(uint)(ushort)local_1a0 + (uint)(ushort)local_198,
                         uVar7,iVar1,1);
          }
          if ((ushort)local_198 != 0) {
            uVar14 = *(undefined8 *)(*(long *)puVar5 + 0x80);
            uVar11 = FUN_007eae4c(param_1[8],iVar3);
            FUN_007e9e14(local_70,uVar14,uVar11,local_198 & 0xffff,uVar7,iVar1,1);
          }
          if ((ushort)local_1a0 != 0) {
            uVar14 = *(undefined8 *)(*(long *)puVar5 + 0x88);
            uVar11 = FUN_007eae4c(param_1[8],iVar3);
            FUN_007e9e14(local_70,uVar14,uVar11,local_1a0 & 0xffff,uVar7,iVar1,1);
          }
          if ((local_170[0] != 0) &&
             (lVar8 = FUN_007eae4c(param_1[8],iVar3), *(char *)(lVar8 + 0x622) == '\0')) {
            local_70[0] = 0;
            FUN_007935cc(local_70);
            local_1a0 = local_70[0];
            memcpy(&local_198,&local_1a0,8);
            if (((int)param_1[1] == 1) && (param_1[0xe0] != 0)) {
              param_1[0xe3] = param_1[0xe3] + 1;
              lVar8 = FUN_007eae4c(param_1[8],iVar3);
              FUN_00793890(lVar8 + 0x15,param_1[0xe3]);
              plVar10 = (long *)param_1[0xe0];
              uVar11 = FUN_007eae4c(param_1[8],iVar3);
              (**(code **)(*plVar10 + 0x18))(local_70,plVar10,&local_198,0xc,uVar11);
            }
            local_160 = 0xc;
            local_168 = &local_198;
            uVar11 = FUN_007eae4c(param_1[8],iVar3);
            FUN_007973ec(local_70,uVar11,local_170);
            if ((int)local_70[0] != 0) {
              return;
            }
          }
          plVar10 = (long *)FUN_007f72c8(*(undefined8 *)puVar5);
          uVar11 = FUN_007eae4c(param_1[8],iVar3);
          (**(code **)(*plVar10 + 0x30))(local_70,plVar10,uVar11);
          if ((int)local_70[0] != 0) {
            lVar8 = FUN_007eae4c(param_1[8],iVar3);
            *(undefined1 *)(lVar8 + 0x648) = 0;
          }
          FUN_007eae4c(param_1[8],iVar3);
          FUN_00796d24();
          local_198 = 0x400000000;
          local_190 = 0;
          uVar11 = FUN_007eae4c(param_1[8],iVar3);
          FUN_007e8b50(param_1,&local_198,uVar11,1,&DAT_03c886bc);
        }
        lVar8 = FUN_007eae4c(param_1[8],iVar12);
        lVar9 = param_1[8];
        iVar12 = iVar12 + 1;
      } while (lVar8 != 0);
    }
    FUN_007eae94();
    *(undefined2 *)(param_1 + 0x81) = 0;
    *(undefined1 *)(param_1 + 9) = 0;
    param_1[10] = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    param_1[0xf] = 0;
    *(undefined1 *)(param_1 + 0x13) = 0;
    param_1[0x14] = 0;
    *(undefined1 *)(param_1 + 0x18) = 0;
    param_1[0x19] = 0;
    *(undefined1 *)(param_1 + 0x1d) = 0;
    param_1[0x1e] = 0;
    *(undefined1 *)(param_1 + 0x22) = 0;
    param_1[0x23] = 0;
    *(undefined1 *)(param_1 + 0x27) = 0;
    param_1[0x28] = 0;
    *(undefined1 *)(param_1 + 0x2c) = 0;
    param_1[0x2d] = 0;
    *(undefined1 *)(param_1 + 0x31) = 0;
    param_1[0x32] = 0;
    *(undefined1 *)(param_1 + 0x36) = 0;
    param_1[0x37] = 0;
    *(undefined1 *)(param_1 + 0x3b) = 0;
    param_1[0x3c] = 0;
    *(undefined1 *)(param_1 + 0x40) = 0;
    param_1[0x41] = 0;
    *(undefined1 *)(param_1 + 0x45) = 0;
    param_1[0x46] = 0;
    *(undefined1 *)(param_1 + 0x4a) = 0;
    param_1[0x4b] = 0;
    *(undefined1 *)(param_1 + 0x4f) = 0;
    param_1[0x50] = 0;
    *(undefined1 *)(param_1 + 0x54) = 0;
    param_1[0x55] = 0;
    *(undefined1 *)(param_1 + 0x59) = 0;
    param_1[0x5a] = 0;
    *(undefined1 *)(param_1 + 0x5e) = 0;
    param_1[0x5f] = 0;
    *(undefined1 *)(param_1 + 99) = 0;
    param_1[100] = 0;
    *(undefined1 *)(param_1 + 0x68) = 0;
    param_1[0x69] = 0;
    *(undefined1 *)(param_1 + 0x6d) = 0;
    param_1[0x6e] = 0;
    *(undefined1 *)(param_1 + 0x72) = 0;
    param_1[0x73] = 0;
    *(undefined1 *)(param_1 + 0x77) = 0;
    param_1[0x78] = 0;
    *(undefined1 *)(param_1 + 0x7c) = 0;
    param_1[0x7d] = 0;
  }
  return;
}


