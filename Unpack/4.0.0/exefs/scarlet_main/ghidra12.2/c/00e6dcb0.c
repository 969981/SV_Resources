/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e6dcb0; name: FUN_00e6dcb0
 */


void FUN_00e6dcb0(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  uint local_f0 [2];
  undefined1 local_e8;
  undefined1 auStack_e4 [20];
  undefined1 local_d0;
  undefined1 local_c0;
  undefined1 local_b4;
  undefined1 local_ac;
  uint local_a0;
  uint local_9c;
  uint local_88 [2];
  char local_80 [4];
  uint local_7c;
  char local_78;
  undefined1 auStack_74 [12];
  undefined1 local_68;
  undefined1 local_58;
  undefined1 local_4c;
  undefined1 local_44;
  char local_3c;
  uint local_38;
  int local_34;
  undefined4 local_18 [2];
  
  if ((*(long **)(param_1 + 0x40) != (long *)0x0) &&
     (uVar3 = (**(code **)(**(long **)(param_1 + 0x40) + 0x68))(), (uVar3 & 1) != 0)) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x40) + 0x98))();
    if ((uVar3 & 1) == 0) {
      if (((DAT_0485e9d8 == (long *)0x0) ||
          ((**(code **)(*DAT_0485e9d8 + 0x28))(local_f0), local_f0[0] == 0)) &&
         ((*(long *)PTR_DAT_047d0900 == 0 || (FUN_00cbd7b4(local_f0), local_f0[0] == 0)))) {
        local_88[0] = 0;
        local_a0 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_88 | 4),(Result *)&local_a0);
        FUN_00cbd7c0(local_f0,local_88);
        if (local_f0[0] == 0) {
          return;
        }
      }
      if (*(uint *)(param_1 + 0x550) != local_f0[0]) {
        FUN_018ff39c(param_1 + 0x550,local_f0);
        if ((local_f0[0] & 0x1c00) == 0x400) {
          local_88[0] = local_88[0] & 0xffffff00;
          local_80[0] = '\0';
          FUN_00cbd7c0(&local_7c,local_f0);
          local_68 = 0;
          local_80[0] = '\x01';
          local_58 = 0;
          local_4c = 0;
          local_44 = 0;
          FUN_01c3d63c(local_88);
        }
        else {
          FUN_01c3df28();
        }
      }
    }
    else {
      uVar3 = (**(code **)(**(long **)(param_1 + 0x40) + 0x88))();
      if ((uVar3 & 1) == 0) {
        (**(code **)(**(long **)(param_1 + 0x40) + 0x80))();
        (**(code **)(**(long **)(param_1 + 0x40) + 0x78))(local_88);
        if ((char)local_88[0] == '\0') {
          local_f0[0] = 0x10408;
          local_a0 = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)local_f0 | 4),(Result *)&local_a0);
          FUN_018ff39c(param_1 + 0x550,local_f0);
          plVar4 = *(long **)(param_1 + 0x40);
          if (*(int *)((long)plVar4 + 0xb4) == 6) {
            if (DAT_04839fc0 == 1) {
              return;
            }
            if (DAT_0485e950 == '\x01') {
              uVar3 = nn::nifm::IsNetworkAvailable();
              if (((uVar3 & 1) != 0) && (DAT_04839fc0 == 1)) {
                return;
              }
              plVar4 = *(long **)(param_1 + 0x40);
            }
          }
          iVar2 = (**(code **)(*plVar4 + 0x70))();
          if (iVar2 - 3U < 4) {
            FUN_01c3e1f8();
          }
          else {
            FUN_01c3df28();
          }
        }
        else if ((local_3c == '\0') || (local_34 != 4)) {
          local_f0[0] = local_f0[0] & 0xffffff00;
          if (local_78 != '\0') {
            FUN_00cbd7c0((ulong)local_f0 | 4,auStack_74);
            local_f0[0] = CONCAT31(local_f0[0]._1_3_,1);
            FUN_018ff39c(param_1 + 0x550,(ulong)local_f0 | 4);
            if ((char)local_f0[0] != '\0') {
              local_f0[0] = local_f0[0] & 0xffffff00;
            }
          }
          if ((local_80[0] != '\0') && ((local_7c & 0x3fe1ff) == 0x20cb)) {
            local_f0[0] = 0xc420;
            local_a0 = 0;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)local_f0 | 4),(Result *)&local_a0);
            FUN_018ff39c(param_1 + 0x550,local_f0);
          }
          if ((*(int *)(*(long *)(param_1 + 0x40) + 0xb4) == 6) &&
             ((DAT_04839fc0 == 1 ||
              (((DAT_0485e950 == '\x01' &&
                (uVar3 = nn::nifm::IsNetworkAvailable(), (uVar3 & 1) != 0)) && (DAT_04839fc0 == 1)))
              ))) {
            local_f0[0] = 0xc420;
            local_a0 = 0;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)local_f0 | 4),(Result *)&local_a0);
            if (*(uint *)(param_1 + 0x550) != local_f0[0]) {
              local_18[0] = 0;
              local_a0 = 0xc421;
              nn::err::ErrorResultVariant::ErrorResultVariant
                        ((ErrorResultVariant *)((ulong)&local_a0 | 4),(Result *)local_18);
              if (*(uint *)(param_1 + 0x550) != local_a0) {
                return;
              }
            }
          }
          local_f0[0] = 0x6c47;
          local_a0 = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)local_f0 | 4),(Result *)&local_a0);
          if (*(uint *)(param_1 + 0x550) != local_f0[0]) {
            local_a0 = local_a0 & 0xffffff00;
            if (local_78 == '\0') {
              if ((local_3c != '\0') && ((local_38 & 0x1ff) == 0x141)) {
                uVar1 = local_38 >> 9 & 0x1fff;
                if (uVar1 - 0xc00 < 0x17f) {
                  FUN_01c3e4c8();
                  return;
                }
                if (uVar1 - 0x600 < 0x17f) {
                  FUN_01c3e6a8();
                  return;
                }
              }
              FUN_01c3d63c(local_80);
            }
            else {
              FUN_00cbd7c0((ulong)&local_a0 | 4,auStack_74);
              local_a0 = CONCAT31(local_a0._1_3_,1);
              if ((local_9c & 0x1c00) == 0x400) {
                local_f0[0] = local_f0[0] & 0xffffff00;
                local_e8 = 0;
                FUN_00cbd7c0(auStack_e4,(ulong)&local_a0 | 4);
                local_e8 = 1;
                local_d0 = 0;
                local_c0 = 0;
                local_b4 = 0;
                local_ac = 0;
                FUN_01c3d63c(local_f0);
              }
              else {
                FUN_01c3df28();
              }
            }
          }
        }
      }
    }
  }
  return;
}


