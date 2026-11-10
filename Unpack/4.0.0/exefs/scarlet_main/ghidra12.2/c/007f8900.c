/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f8900; name: FUN_007f8900
 */


void FUN_007f8900(int *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ErrorResultVariant *this;
  long *plVar4;
  long lVar5;
  int *piVar6;
  undefined4 local_a0 [8];
  int local_80 [6];
  undefined1 auStack_68 [8];
  int local_60 [2];
  int local_58 [4];
  undefined8 local_48;
  
  if (*(long *)(param_2 + 0x48) == 0) {
    if (*(long *)(param_2 + 0x50) != 0) {
      local_48 = 0;
      FUN_007935cc(&local_48);
      local_58[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)(local_58 + 8));
      FUN_00cbd7c0(param_1,local_58);
      if (*(int *)(param_2 + 0x10) != 0) {
        do {
          lVar5 = 0;
          if (*(long *)(param_2 + 8) != 0) {
            lVar5 = *(long *)(param_2 + 8) + 0x10;
          }
          if (local_48 <= *(ulong *)(lVar5 + 0x650)) {
            return;
          }
          (**(code **)(**(long **)(param_2 + 0x50) + 0x38))
                    (local_58,*(long **)(param_2 + 0x50),lVar5);
          FUN_018ff39c(param_1,local_58);
          FUN_007971bc(lVar5);
          FUN_0078fa2c(param_2,lVar5 + -0x10);
          FUN_0078fa04(param_2 + 0x18,param_2 + 0x18,lVar5 + -0x10 + (long)*(int *)(param_2 + 0x2c))
          ;
          if (*param_1 != 0) {
            FUN_00cbd7c0(auStack_68,param_1);
            uVar3 = FUN_00792cac(auStack_68);
            if ((uVar3 & 1) == 0) {
              local_58[0] = 0x4c0d;
              this = (ErrorResultVariant *)((ulong)local_58 | 4);
              nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)(local_58 + 8));
              if (*param_1 != local_58[0]) {
                return;
              }
              local_58[0] = 0;
LAB_007f8af0:
              nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)(local_58 + 8));
              FUN_018ff39c(param_1,local_58);
              return;
            }
            if (*(char *)(lVar5 + 0x624) == '\0') {
              local_58[0] = 0xc47e;
              this = (ErrorResultVariant *)((ulong)local_58 | 4);
              goto LAB_007f8af0;
            }
            local_58[0] = 0;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)(local_58 + 8));
            FUN_018ff39c(param_1,local_58);
          }
        } while (*(int *)(param_2 + 0x10) != 0);
      }
      return;
    }
  }
  else if (*(long *)(param_2 + 0x50) == 0) {
    if (*(int *)(param_2 + 0x6f0) == 0) {
      local_80[0] = 0;
      local_a0[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_80 | 4),(Result *)local_a0);
      piVar6 = local_80;
    }
    else {
      local_48 = 0;
      FUN_007935cc(&local_48);
      local_80[0] = 0;
      local_a0[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_80 | 4),(Result *)local_a0);
      FUN_00cbd7c0(local_60,local_80);
      if (*(int *)(param_2 + 0x28) != 0) {
        do {
          (**(code **)(**(long **)(param_2 + 0x48) + 0x10))
                    (local_80,*(long **)(param_2 + 0x48),param_2 + 0x88);
          FUN_018ff39c(local_60,local_80);
          if (local_60[0] != 0) {
            local_80[0] = 0x2c09;
            local_a0[0] = 0;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)local_80 | 4),(Result *)local_a0);
            if (local_60[0] == local_80[0]) {
              local_80[0] = 0;
              local_a0[0] = 0;
              nn::err::ErrorResultVariant::ErrorResultVariant
                        ((ErrorResultVariant *)((ulong)local_80 | 4),(Result *)local_a0);
              FUN_018ff39c(local_60,local_80);
            }
            break;
          }
          FUN_00796868(local_80,param_2 + 0x6b0);
          FUN_00796868(local_a0,param_2 + 0x688);
          iVar2 = FUN_007f885c(param_2,local_80,local_a0);
          plVar4 = (long *)FUN_0079365c();
          *(ulong *)(param_2 + 0x6d8) = local_48 + *plVar4 * (long)iVar2;
          FUN_0284e3d4(local_a0);
          FUN_0284e3d4(local_80);
          if (*(int *)(param_2 + 0x28) == 0) break;
          lVar5 = FUN_0078fac8(param_2 + 0x18);
          if (lVar5 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = lVar5 - *(int *)(param_2 + 0x2c);
          }
          lVar1 = lVar5 + 0x10;
          FUN_0079704c(lVar1);
          *(undefined8 *)(lVar5 + 0x660) = 0;
          FUN_00797134(lVar1);
          FUN_0078f9e0(param_2,param_2,lVar5);
          FUN_00797268(lVar1,param_2 + 0x88);
          *(undefined8 *)(lVar5 + 0x660) = *(undefined8 *)(param_2 + 0x6d8);
        } while (*(int *)(param_2 + 0x28) != 0);
      }
      piVar6 = local_60;
    }
    FUN_00cbd7c0(param_1,piVar6);
    return;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)(local_58 + 0xc) | 4),(Result *)(local_58 + 0x10));
  FUN_00cbd7c0(param_1,local_58 + 0xc);
  return;
}


