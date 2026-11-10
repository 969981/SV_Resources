/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a7328; name: FUN_007a7328
 */


ulong FUN_007a7328(long param_1)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  long *plVar4;
  ulong uVar5;
  undefined1 *puVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined8 local_38;
  undefined4 local_28 [2];
  
  FUN_00cbd7c0(&local_38,*(long *)(param_1 + 0x78) + 0x1a8);
  if ((int)local_38 == 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x78);
    uVar5 = FUN_0079c0a0(uVar9);
    if (((uVar5 & 1) == 0) && (uVar5 = FUN_0079c92c(uVar9), (uVar5 & 1) == 0)) {
      local_38 = 0;
      FUN_007935cc(&local_38);
      if (*(ulong *)(param_1 + 0x70) < local_38) {
        local_38 = 0;
        FUN_007935cc(&local_38);
        lVar2 = local_38;
        lVar10 = *(long *)(param_1 + 0xc0);
        plVar4 = (long *)FUN_0079365c();
        if (*(uint *)(param_1 + 200) < 6) {
          lVar1 = 0;
          if (*plVar4 != 0) {
            lVar1 = (lVar2 - lVar10) / *plVar4;
          }
                    /* WARNING: Could not recover jumptable at 0x007a74dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*(code *)(&UNK_007a74e0 +
                            (ulong)(byte)(&DAT_03d0bf9b)[*(uint *)(param_1 + 200)] * 4))(lVar1);
          return uVar5;
        }
        local_38 = 0;
        FUN_007935cc(&local_38);
        *(ulong *)(param_1 + 0xc0) = local_38;
        local_38 = 0;
        FUN_007935cc(&local_38);
        *(ulong *)(param_1 + 0xc0) = local_38;
        if ((*(int *)(param_1 + 200) == 7) || (*(int *)(param_1 + 200) == 0)) {
          *(undefined4 *)(param_1 + 200) = 4;
          *(undefined8 *)(param_1 + 0x30) = 200;
          *(undefined8 *)(param_1 + 0x38) = 1;
          goto LAB_007a78e4;
        }
        *(undefined4 *)(param_1 + 200) = 5;
        local_38 = CONCAT44(local_38._4_4_,0x6477);
        local_28[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)&local_38 | 4),(Result *)local_28);
        FUN_00cbd7c0(auStack_78,&local_38);
        puVar6 = auStack_78;
      }
      else {
        if ((*(int *)(param_1 + 200) == 0) || (*(char *)(*(long *)(param_1 + 0x78) + 0x24c) == '\0')
           ) {
          uVar5 = 0xf0000;
          uVar8 = 4;
          goto LAB_007a7678;
        }
        local_38 = 0;
        FUN_007935cc(&local_38);
        lVar2 = local_38;
        lVar10 = *(long *)(param_1 + 0xc0);
        plVar4 = (long *)FUN_0079365c();
        if (*(uint *)(param_1 + 200) < 6) {
          lVar1 = 0;
          if (*plVar4 != 0) {
            lVar1 = (lVar2 - lVar10) / *plVar4;
          }
                    /* WARNING: Could not recover jumptable at 0x007a76e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*(code *)(&UNK_007a76e8 +
                            (ulong)(byte)(&DAT_03d0bf95)[*(uint *)(param_1 + 200)] * 4))(lVar1);
          return uVar5;
        }
        local_38 = 0;
        FUN_007935cc(&local_38);
        *(ulong *)(param_1 + 0xc0) = local_38;
        local_38 = 0;
        FUN_007935cc(&local_38);
        *(undefined4 *)(param_1 + 200) = 5;
        *(ulong *)(param_1 + 0xc0) = local_38;
        local_38 = CONCAT44(local_38._4_4_,0x6479);
        local_28[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)&local_38 | 4),(Result *)local_28);
        FUN_00cbd7c0(auStack_88,&local_38);
        puVar6 = auStack_88;
      }
LAB_007a79d4:
      FUN_007a5ef8(param_1,puVar6);
      uVar8 = 0;
      uVar5 = 0;
      goto LAB_007a7678;
    }
    iVar7 = *(int *)(param_1 + 200);
    if (iVar7 == 7) {
LAB_007a73f0:
      uVar5 = FUN_0079c0a0(*(undefined8 *)(param_1 + 0x78));
      if ((uVar5 & 1) == 0) {
        local_38 = CONCAT44(local_38._4_4_,0x6c57);
        local_28[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)&local_38 | 4),(Result *)local_28);
        FUN_018ff39c(param_1 + 0x80,&local_38);
        local_38 = 0;
        FUN_007935cc(&local_38);
        lVar2 = local_38;
        lVar10 = *(long *)(param_1 + 0xc0);
        plVar4 = (long *)FUN_0079365c();
        if (*(uint *)(param_1 + 200) < 6) {
          lVar1 = 0;
          if (*plVar4 != 0) {
            lVar1 = (lVar2 - lVar10) / *plVar4;
          }
                    /* WARNING: Could not recover jumptable at 0x007a7468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*(code *)(&UNK_007a746c +
                            (ulong)(byte)(&DAT_03d0bfa1)[*(uint *)(param_1 + 200)] * 4))(lVar1);
          return uVar5;
        }
        local_38 = 0;
        FUN_007935cc(&local_38);
        *(ulong *)(param_1 + 0xc0) = local_38;
        local_38 = 0;
        FUN_007935cc(&local_38);
        *(undefined4 *)(param_1 + 200) = 4;
        *(undefined8 *)(param_1 + 0x30) = 200;
        *(undefined8 *)(param_1 + 0x38) = 1;
        *(ulong *)(param_1 + 0xc0) = local_38;
LAB_007a78e4:
        uVar8 = 0;
        uVar5 = 0;
        *(char **)(param_1 + 0x40) = "NetBackgroundProcessJob::StartDestroyNetwork";
        goto LAB_007a7678;
      }
    }
    else {
      if (iVar7 == 1) {
        uVar5 = FUN_0079c0a0(*(undefined8 *)(param_1 + 0x78));
        if ((uVar5 & 1) == 0) {
          iVar7 = *(int *)(param_1 + 200);
          goto LAB_007a7500;
        }
LAB_007a7528:
        local_38 = 0;
        FUN_007935cc(&local_38);
        lVar2 = local_38;
        lVar10 = *(long *)(param_1 + 0xc0);
        plVar4 = (long *)FUN_0079365c();
        if (*(uint *)(param_1 + 200) < 6) {
          lVar1 = 0;
          if (*plVar4 != 0) {
            lVar1 = (lVar2 - lVar10) / *plVar4;
          }
                    /* WARNING: Could not recover jumptable at 0x007a756c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*(code *)(&UNK_007a7570 +
                            (ulong)(byte)(&DAT_03d0bfad)[*(uint *)(param_1 + 200)] * 4))(lVar1);
          return uVar5;
        }
        local_38 = 0;
        FUN_007935cc(&local_38);
        *(ulong *)(param_1 + 0xc0) = local_38;
        local_38 = 0;
        FUN_007935cc(&local_38);
        *(undefined4 *)(param_1 + 200) = 5;
        *(ulong *)(param_1 + 0xc0) = local_38;
        local_38 = CONCAT44(local_38._4_4_,0x6479);
        local_28[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)&local_38 | 4),(Result *)local_28);
        FUN_00cbd7c0(auStack_58,&local_38);
        puVar6 = auStack_58;
        goto LAB_007a79d4;
      }
      if (iVar7 == 0) goto LAB_007a73f0;
LAB_007a7500:
      if (((iVar7 == 8) && (uVar5 = FUN_0079c0a0(*(undefined8 *)(param_1 + 0x78)), (uVar5 & 1) != 0)
          ) && (uVar3 = FUN_0079f0cc(*(undefined8 *)(param_1 + 0x78)), 1 < uVar3))
      goto LAB_007a7528;
    }
    uVar9 = *(undefined8 *)(param_1 + 0x58);
    local_38 = (ulong)local_38._4_4_ << 0x20;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)&local_38 | 4),(Result *)local_28);
    FUN_00cbd7c0(auStack_68,&local_38);
    FUN_0078cb28(uVar9,auStack_68);
    *(undefined8 *)(param_1 + 0x58) = 0;
    local_38 = 0;
    FUN_007935cc(&local_38);
    lVar2 = local_38;
    lVar10 = *(long *)(param_1 + 0xc0);
    plVar4 = (long *)FUN_0079365c();
    if (*(uint *)(param_1 + 200) < 6) {
      lVar1 = 0;
      if (*plVar4 != 0) {
        lVar1 = (lVar2 - lVar10) / *plVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x007a75fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*(code *)(&UNK_007a7600 + (ulong)(byte)(&DAT_03d0bfa7)[*(uint *)(param_1 + 200)] * 4)
              )(lVar1);
      return uVar5;
    }
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x58);
    FUN_00cbd7c0(auStack_48,*(long *)(param_1 + 0x78) + 0x1a8);
    FUN_0078cb94(uVar9,auStack_48);
    *(undefined8 *)(param_1 + 0x58) = 0;
    local_38 = 0;
    FUN_007935cc(&local_38);
    lVar2 = local_38;
    lVar10 = *(long *)(param_1 + 0xc0);
    plVar4 = (long *)FUN_0079365c();
    if (*(uint *)(param_1 + 200) < 6) {
      lVar1 = 0;
      if (*plVar4 != 0) {
        lVar1 = (lVar2 - lVar10) / *plVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x007a73b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*(code *)(&UNK_007a7600 + (ulong)(byte)(&DAT_03d0bf8f)[*(uint *)(param_1 + 200)] * 4)
              )(lVar1);
      return uVar5;
    }
  }
  local_38 = 0;
  FUN_007935cc(&local_38);
  uVar5 = 0;
  *(ulong *)(param_1 + 0xc0) = local_38;
  uVar8 = 1;
LAB_007a7678:
  return uVar5 | uVar8;
}


