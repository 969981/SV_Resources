/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0123fa64; name: FUN_0123fa64
 */


void FUN_0123fa64(long param_1,byte *param_2)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  int local_80 [3];
  undefined1 local_73;
  int local_70;
  undefined4 uStack_6c;
  undefined5 uStack_68;
  undefined1 local_63;
  int local_60;
  undefined4 uStack_5c;
  undefined5 uStack_58;
  undefined1 local_53;
  int local_50;
  undefined4 uStack_4c;
  undefined5 uStack_48;
  undefined1 local_43;
  int local_40;
  undefined4 uStack_3c;
  undefined5 uStack_38;
  undefined1 local_33;
  int local_30;
  undefined4 uStack_2c;
  undefined5 uStack_28;
  undefined1 local_23;
  
  *param_2 = 0;
  lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x38);
  if ((*(uint *)(lVar3 + 0x30) < 2) && (*(char *)(lVar3 + 0x706) == '\0')) {
    stack0xffffffffffffff88 = 0;
    local_80[0] = 0;
    local_80[1] = 0;
    local_73 = 1;
    local_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    local_63 = 1;
    local_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    local_53 = 1;
    local_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    local_43 = 1;
    local_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    local_33 = 1;
    uStack_28 = 0;
    local_30 = 0;
    uStack_2c = 0;
    local_23 = 1;
    FUN_0123fb60(param_1,local_80);
    if (((local_80[0] != 0) || (((local_70 != 0 || (local_60 != 0)) || (local_50 != 0)))) ||
       ((local_40 != 0 || (local_30 != 0)))) {
      uVar2 = FUN_0123fc80(param_1);
      if ((uVar2 & 1) != 0) {
        FUN_0124221c(param_1);
      }
      bVar1 = FUN_0123fcc8(param_1,local_80);
      *param_2 = bVar1 & 1;
    }
  }
  return;
}


