/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00811fec; name: FUN_00811fec
 */


undefined8 FUN_00811fec(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined4 local_40 [4];
  undefined1 auStack_30 [16];
  undefined4 local_18 [2];
  
  if ((*(long *)(param_1 + 0x60) == 0) || (*(char *)(*(long *)(param_1 + 0x60) + 0x28) == '\0')) {
    if (*(char *)(param_1 + 0x98) == '\0') {
      uVar1 = FUN_00811b20(*(undefined8 *)(param_1 + 0x68));
      if ((uVar1 & 1) == 0) {
        PTR_DAT_047d0868[0x417] = 0;
        uVar4 = *(undefined8 *)(param_1 + 0x58);
        local_40[0] = 0xc434;
        local_18[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_18);
        FUN_00cbd7c0(auStack_60,local_40);
        puVar3 = auStack_60;
      }
      else {
        lVar2 = FUN_008127c0();
        if (*(char *)(lVar2 + 2) == '\0') {
          PTR_DAT_047d0868[0x417] = 1;
          uVar4 = *(undefined8 *)(param_1 + 0x58);
          local_40[0] = 0;
          local_18[0] = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_18);
          FUN_00cbd7c0(auStack_80,local_40);
          FUN_0078cb28(uVar4,auStack_80);
          goto LAB_00812118;
        }
        PTR_DAT_047d0868[0x417] = 0;
        uVar4 = *(undefined8 *)(param_1 + 0x58);
        local_40[0] = 0xc434;
        local_18[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_18);
        FUN_00cbd7c0(auStack_70,local_40);
        puVar3 = auStack_70;
      }
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x58);
      local_40[0] = 0xc434;
      local_18[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_18);
      FUN_00cbd7c0(auStack_50,local_40);
      puVar3 = auStack_50;
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    local_40[0] = 0x6c05;
    local_18[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_18);
    FUN_00cbd7c0(auStack_30,local_40);
    puVar3 = auStack_30;
  }
  FUN_0078cb94(uVar4,puVar3);
LAB_00812118:
  FUN_00810f24(*(undefined8 *)(param_1 + 0x68));
  *(undefined8 *)(param_1 + 0x68) = 0;
  return 1;
}


