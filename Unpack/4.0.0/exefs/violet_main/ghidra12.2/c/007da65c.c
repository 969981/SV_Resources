/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007da65c; name: FUN_007da65c
 */


undefined8 FUN_007da65c(long param_1)

{
  undefined *puVar1;
  short sVar2;
  short sVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  int *piVar10;
  long lVar11;
  undefined8 uVar12;
  int local_130 [4];
  int local_120 [4];
  int local_110 [4];
  int local_100 [4];
  int local_f0 [4];
  int local_e0 [4];
  undefined4 local_d0 [4];
  int local_c0 [4];
  int local_b0 [4];
  undefined1 auStack_a0 [64];
  undefined4 local_60 [4];
  undefined8 local_50;
  
  puVar1 = PTR_DAT_047d0a08;
  piVar10 = local_130;
  if ((*(long *)(param_1 + 0x60) != 0) && (*(char *)(*(long *)(param_1 + 0x60) + 0x28) != '\0')) {
    FUN_0078cc00();
    *(undefined8 *)(param_1 + 0x60) = 0;
    PTR_DAT_047d0868[0x3c6] = (char)*(undefined4 *)(param_1 + 0x98);
    *(undefined4 *)(param_1 + 0x98) = 0;
    return 1;
  }
  lVar7 = *(long *)PTR_DAT_047d0a08 + 0x178;
  FUN_007e5190(auStack_a0);
  local_b0[0] = 0;
  local_50 = (ulong)local_50._4_4_ << 0x20;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_b0 | 4),(Result *)&local_50);
  uVar4 = (**(code **)(**(long **)(*(long *)puVar1 + 0x18) + 0x110))();
  if ((uVar4 & 1) == 0) {
    local_50 = CONCAT44(local_50._4_4_,0x10408);
    local_60[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)&local_50 | 4),(Result *)local_60);
  }
  else {
    (**(code **)(**(long **)(*(long *)puVar1 + 0x18) + 0x108))
              (&local_50,*(long **)(*(long *)puVar1 + 0x18),auStack_a0);
  }
  FUN_018ff39c(local_b0,&local_50);
  if (local_b0[0] == 0) {
    lVar5 = FUN_007e5328(lVar7);
    lVar6 = FUN_007e5328(auStack_a0);
    if (lVar5 != lVar6) goto LAB_007da7cc;
    sVar2 = FUN_007e5330(lVar7);
    sVar3 = FUN_007e5330(auStack_a0);
    if (sVar2 != sVar3) goto LAB_007da7cc;
    local_d0[0] = 0x6479;
    local_50 = local_50 & 0xffffffff00000000;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_d0 | 4),(Result *)&local_50);
    FUN_00cbd7c0(local_c0,local_d0);
    if (local_c0[0] == 0) goto LAB_007daad4;
    PTR_DAT_047d0868[0x3c6] = (char)*(undefined4 *)(param_1 + 0x98);
    uVar12 = *(undefined8 *)(param_1 + 0x60);
    piVar10 = local_c0;
LAB_007da860:
    FUN_00cbd7c0(&local_50,piVar10);
    FUN_0078cb94(uVar12,&local_50);
  }
  else {
LAB_007da7cc:
    if (*(int *)(param_1 + 0x9c) != 0) {
      FUN_00cbd7c0(local_e0);
      if (local_e0[0] == 0) goto LAB_007daad4;
      PTR_DAT_047d0868[0x3c6] = (char)*(undefined4 *)(param_1 + 0x98);
      uVar12 = *(undefined8 *)(param_1 + 0x60);
      piVar10 = local_e0;
      goto LAB_007da860;
    }
    if (*(int *)(*(long *)(param_1 + 0x58) + 0x784) != 0) {
      local_d0[0] = 0x8c52;
      local_50 = local_50 & 0xffffffff00000000;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_d0 | 4),(Result *)&local_50);
      FUN_00cbd7c0(local_f0,local_d0);
      if (local_f0[0] == 0) goto LAB_007daad4;
      PTR_DAT_047d0868[0x3c6] = (char)*(undefined4 *)(param_1 + 0x98);
      uVar12 = *(undefined8 *)(param_1 + 0x60);
      piVar10 = local_f0;
      goto LAB_007da860;
    }
    local_50 = 0;
    FUN_007935cc(&local_50);
    if (local_50 < *(ulong *)(param_1 + 0x80)) {
      if (local_b0[0] == 0) {
        lVar11 = *(long *)puVar1;
        lVar5 = FUN_007e5328(lVar11 + 0x1b8);
        lVar6 = FUN_007e5328(lVar7);
        if (lVar5 == lVar6) {
          local_d0[0] = 0x647d;
          local_50 = local_50 & 0xffffffff00000000;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)local_d0 | 4),(Result *)&local_50);
          FUN_00cbd7c0(local_120,local_d0);
          if (local_120[0] == 0) goto LAB_007daad4;
          PTR_DAT_047d0868[0x3c6] = (char)*(undefined4 *)(param_1 + 0x98);
          uVar12 = *(undefined8 *)(param_1 + 0x60);
          piVar10 = local_120;
          goto LAB_007da860;
        }
        sVar2 = FUN_007e5330(lVar11 + 0x1b8);
        sVar3 = FUN_007e5330(lVar7);
        if (sVar2 == sVar3) {
          (**(code **)(**(long **)(*(long *)puVar1 + 0x18) + 0x1b0))();
        }
        lVar7 = FUN_007e5328(auStack_a0);
        if (lVar7 != 0) {
          uVar12 = FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
          uVar8 = FUN_007e5328(auStack_a0);
          lVar7 = FUN_007e2bb4(uVar12,uVar8);
          if ((lVar7 == 0) && (uVar4 = FUN_007dab34(param_1,auStack_a0), (uVar4 & 1) == 0)) {
            local_d0[0] = 0x10408;
            local_50 = local_50 & 0xffffffff00000000;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)local_d0 | 4),(Result *)&local_50);
            FUN_00cbd7c0(local_130,local_d0);
            if (local_130[0] == 0) goto LAB_007daad4;
            PTR_DAT_047d0868[0x3c6] = (char)*(undefined4 *)(param_1 + 0x98);
            uVar12 = *(undefined8 *)(param_1 + 0x60);
            goto LAB_007da860;
          }
        }
        FUN_007d55dc(*(undefined8 *)(param_1 + 0x58));
        plVar9 = (long *)FUN_0079365c();
        lVar7 = *plVar9;
        local_50 = 0;
        FUN_007935cc(&local_50);
        *(undefined4 *)(param_1 + 0x98) = 3;
        *(ulong *)(param_1 + 0x88) = local_50 + lVar7 * 500;
        *(undefined **)(param_1 + 0x30) = PTR_FUN_047d1328;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(char **)(param_1 + 0x40) = "JoinMeshJob::WaitJoinResponse";
      }
      uVar12 = 5;
      goto LAB_007dab10;
    }
    uVar4 = FUN_007d46b0(*(undefined8 *)(param_1 + 0x58));
    puVar1 = PTR_DAT_047d0868;
    PTR_DAT_047d0868[0x436] = 0;
    if ((uVar4 & 1) == 0) {
      local_d0[0] = 0x6475;
      local_50 = (ulong)local_50._4_4_ << 0x20;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_d0 | 4),(Result *)&local_50);
      FUN_00cbd7c0(local_110,local_d0);
      if (local_110[0] == 0) goto LAB_007daad4;
      puVar1[0x3c6] = (char)*(undefined4 *)(param_1 + 0x98);
      uVar12 = *(undefined8 *)(param_1 + 0x60);
      piVar10 = local_110;
      goto LAB_007da860;
    }
    local_d0[0] = 0x6478;
    local_50 = (ulong)local_50._4_4_ << 0x20;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_d0 | 4),(Result *)&local_50);
    FUN_00cbd7c0(local_100,local_d0);
    if (local_100[0] != 0) {
      puVar1[0x3c6] = (char)*(undefined4 *)(param_1 + 0x98);
      uVar12 = *(undefined8 *)(param_1 + 0x60);
      piVar10 = local_100;
      goto LAB_007da860;
    }
LAB_007daad4:
    uVar12 = *(undefined8 *)(param_1 + 0x60);
    local_60[0] = 0;
    local_50 = local_50 & 0xffffffff00000000;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)&local_50);
    FUN_00cbd7c0(&local_50,local_60);
    FUN_0078cb28(uVar12,&local_50);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  uVar12 = 1;
LAB_007dab10:
  FUN_007e51d0(auStack_a0);
  return uVar12;
}


