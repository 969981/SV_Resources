/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f1894; name: FUN_007f1894
 */


void FUN_007f1894(undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  ushort uVar1;
  ulong uVar2;
  uint uVar3;
  undefined1 auStack_58 [8];
  undefined4 local_50 [4];
  uint local_40 [2];
  undefined4 local_38 [2];
  
  memset(local_40,0,4);
  uVar1 = *(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50);
  if (uVar1 != 0) {
    uVar3 = (uint)uVar1;
    uVar2 = 0;
    if (uVar1 < 2) {
      uVar3 = 1;
    }
    do {
      if (*(long *)(*(long *)(param_2 + 0x40) + uVar2 * 8) != 0) {
        local_40[0] = local_40[0] | 1 << (ulong)((uint)uVar2 & 0x1f);
      }
      uVar2 = uVar2 + 1;
    } while (uVar3 != uVar2);
  }
  if (local_40[0] == 0) {
    local_50[0] = 0x10408;
    local_38[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_38);
    FUN_00cbd7c0(param_1,local_50);
  }
  else {
    memcpy(auStack_58,local_40,4);
    FUN_007f1994(param_1,param_2,auStack_58,param_3,param_4,param_5);
  }
  return;
}


