/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007da11c; name: FUN_007da11c
 */


undefined8 FUN_007da11c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  short sVar3;
  short sVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  int *piVar14;
  undefined1 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  float fVar19;
  int local_d0 [4];
  int local_c0 [4];
  undefined8 local_b0;
  int local_90 [4];
  undefined4 local_80 [4];
  int local_70 [4];
  undefined4 local_60 [4];
  
  puVar2 = PTR_DAT_047d0a08;
  if ((*(long *)(param_1 + 0x60) != 0) && (*(char *)(*(long *)(param_1 + 0x60) + 0x28) != '\0')) {
    FUN_0078cc00();
    *(undefined8 *)(param_1 + 0x60) = 0;
    PTR_DAT_047d0868[0x3c6] = (char)*(undefined4 *)(param_1 + 0x98);
    *(undefined4 *)(param_1 + 0x98) = 0;
    return 1;
  }
  lVar17 = *(long *)PTR_DAT_047d0a08;
  uVar10 = (**(code **)(**(long **)(lVar17 + 0x18) + 0xe8))();
  if ((uVar10 & 1) == 0) {
    lVar1 = lVar17 + 0x1b8;
    lVar11 = FUN_007e5328(lVar1);
    if (lVar11 == 0) goto LAB_007da224;
    lVar17 = lVar17 + 0x178;
    lVar11 = FUN_007e5328(lVar17);
    lVar12 = FUN_007e5328(lVar1);
    if (lVar11 != lVar12) {
LAB_007da2a8:
      uVar18 = *(undefined8 *)(param_1 + 0x58);
      uVar16 = FUN_007e5328(lVar17);
      uVar5 = FUN_007e5330(lVar17);
      uVar6 = FUN_007e5310(lVar17);
      uVar7 = FUN_007e531c(lVar17);
      FUN_007e5304(&local_b0,lVar17);
      lVar11 = FUN_007d6b54(uVar18,uVar16,uVar5,uVar6,uVar7 & 1,&local_b0,1,0,0);
      if (lVar11 != 0) {
        lVar12 = *(long *)puVar2;
        uVar16 = FUN_007cddf0(lVar12);
        FUN_007e1ab4(lVar11,uVar16);
        FUN_007e1bc4(lVar11,lVar17);
        *(undefined1 *)(lVar11 + 0x358) = 0;
        if (*(char *)(lVar12 + 0x458) != '\0') {
          uVar10 = 0;
          lVar17 = lVar12 + 0x1f8;
          do {
            FUN_007e1bf8(lVar11,lVar17);
            uVar10 = uVar10 + 1;
            lVar17 = lVar17 + 0x98;
          } while (uVar10 < *(byte *)(lVar12 + 0x458));
        }
        if (*(char *)(lVar12 + 0x459) == '\0') {
          uVar15 = 1;
        }
        else {
          uVar15 = *(undefined1 *)(lVar11 + 0x358);
        }
        *(undefined1 *)(lVar11 + 0x359) = uVar15;
        uVar18 = *(undefined8 *)(param_1 + 0x58);
        uVar16 = FUN_007e5328(lVar1);
        uVar5 = FUN_007e5330(lVar1);
        uVar6 = FUN_007e5310(lVar1);
        uVar7 = FUN_007e531c(lVar1);
        FUN_007e5304(&local_b0,lVar1);
        lVar17 = FUN_007d6b54(uVar18,uVar16,uVar5,uVar6,uVar7 & 1,&local_b0,0,0,0);
        if (lVar17 != 0) {
          if (*(char *)(lVar12 + 0x459) == '\0') {
            uVar15 = 1;
          }
          else {
            uVar15 = *(undefined1 *)(lVar17 + 0x358);
          }
          *(undefined1 *)(lVar17 + 0x359) = uVar15;
          FUN_007e1bc4(lVar17,lVar1);
          puVar2 = PTR_DAT_047d0dd8;
          fVar19 = (float)FUN_00807e20(*(undefined8 *)PTR_DAT_047d0dd8,0x10);
          *(short *)(PTR_DAT_047d0868 + 0x434) = (short)(int)fVar19;
          iVar8 = FUN_00807e34(*(undefined8 *)puVar2,0x10);
          iVar9 = FUN_007d356c(*(undefined8 *)(param_1 + 0x58));
          plVar13 = (long *)FUN_0079365c();
          lVar17 = *plVar13;
          local_b0 = 0;
          FUN_007935cc(&local_b0);
          *(ulong *)(param_1 + 0x80) = local_b0 + lVar17 * (iVar9 + iVar8);
          FUN_007e56ec(*(long *)(param_1 + 0x58) + 0x180);
          puVar2 = PTR_FUN_047d1320;
          *(undefined4 *)(param_1 + 0x98) = 2;
          *(char **)(param_1 + 0x40) = "JoinMeshJob::SendJoinRequest";
          *(undefined **)(param_1 + 0x30) = puVar2;
          *(undefined8 *)(param_1 + 0x38) = 0;
          return 0;
        }
        local_80[0] = 0x10408;
        local_b0 = (ulong)local_b0._4_4_ << 0x20;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_80 | 4),(Result *)&local_b0);
        FUN_00cbd7c0(local_d0,local_80);
        if (local_d0[0] != 0) {
          PTR_DAT_047d0868[0x3c6] = (char)*(undefined4 *)(param_1 + 0x98);
          uVar16 = *(undefined8 *)(param_1 + 0x60);
          piVar14 = local_d0;
          goto LAB_007da294;
        }
        goto LAB_007da4ac;
      }
      local_80[0] = 0x10408;
      local_b0 = local_b0 & 0xffffffff00000000;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_80 | 4),(Result *)&local_b0);
      FUN_00cbd7c0(local_c0,local_80);
      if (local_c0[0] == 0) goto LAB_007da4ac;
      PTR_DAT_047d0868[0x3c6] = (char)*(undefined4 *)(param_1 + 0x98);
      uVar16 = *(undefined8 *)(param_1 + 0x60);
      piVar14 = local_c0;
      goto LAB_007da294;
    }
    sVar3 = FUN_007e5330(lVar17);
    sVar4 = FUN_007e5330(lVar1);
    if (sVar3 != sVar4) goto LAB_007da2a8;
    local_80[0] = 0x6479;
    local_b0 = local_b0 & 0xffffffff00000000;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_80 | 4),(Result *)&local_b0);
    FUN_00cbd7c0(local_90,local_80);
    if (local_90[0] != 0) {
      PTR_DAT_047d0868[0x3c6] = (char)*(undefined4 *)(param_1 + 0x98);
      uVar16 = *(undefined8 *)(param_1 + 0x60);
      piVar14 = local_90;
      goto LAB_007da294;
    }
  }
  else {
LAB_007da224:
    local_b0 = 0;
    FUN_007935cc(&local_b0);
    if (local_b0 < *(ulong *)(param_1 + 0x80)) {
      return 5;
    }
    local_80[0] = 0x6479;
    local_b0 = local_b0 & 0xffffffff00000000;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_80 | 4),(Result *)&local_b0);
    FUN_00cbd7c0(local_70,local_80);
    if (local_70[0] != 0) {
      PTR_DAT_047d0868[0x3c6] = (char)*(undefined4 *)(param_1 + 0x98);
      uVar16 = *(undefined8 *)(param_1 + 0x60);
      piVar14 = local_70;
LAB_007da294:
      FUN_00cbd7c0(&local_b0,piVar14);
      FUN_0078cb94(uVar16,&local_b0);
      goto LAB_007da4e0;
    }
  }
LAB_007da4ac:
  uVar16 = *(undefined8 *)(param_1 + 0x60);
  local_60[0] = 0;
  local_b0 = local_b0 & 0xffffffff00000000;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)&local_b0);
  FUN_00cbd7c0(&local_b0,local_60);
  FUN_0078cb28(uVar16,&local_b0);
LAB_007da4e0:
  *(undefined8 *)(param_1 + 0x60) = 0;
  return 1;
}


