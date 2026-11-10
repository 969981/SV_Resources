/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008042ec; name: FUN_008042ec
 */


void FUN_008042ec(undefined8 param_1,undefined8 param_2,long param_3,int param_4,int param_5)

{
  ulong uVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  int local_68 [4];
  int local_58 [4];
  undefined4 local_48 [2];
  
  if ((param_4 - 3U < 2) &&
     (uVar1 = FUN_00802458(param_2,*(undefined8 *)(param_3 + 0x10)), (uVar1 & 1) != 0)) {
    local_58[0] = 0;
    local_68[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_68);
  }
  else {
    local_58[0] = 0;
    local_68[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_68);
    if (0 < param_5) {
      iVar3 = 0;
      bVar4 = false;
      do {
        iVar3 = iVar3 + 1;
        while (FUN_00804084(local_68,param_2,param_3,param_4), local_68[0] != 0) {
          FUN_018ff39c(local_58,local_68);
          iVar3 = iVar3 + 1;
          if (iVar3 - param_5 == 1) {
            if (!bVar4) goto LAB_008043ec;
            goto LAB_008043cc;
          }
        }
        bVar4 = true;
      } while (iVar3 != param_5);
LAB_008043cc:
      local_68[0] = 0;
      local_48[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_68 | 4),(Result *)local_48);
      piVar2 = local_68;
      goto LAB_008043f0;
    }
  }
LAB_008043ec:
  piVar2 = local_58;
LAB_008043f0:
  FUN_00cbd7c0(param_1,piVar2);
  return;
}


