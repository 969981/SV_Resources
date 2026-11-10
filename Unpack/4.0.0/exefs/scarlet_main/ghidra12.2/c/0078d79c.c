/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0078d79c; name: FUN_0078d79c
 */


void FUN_0078d79c(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,long param_5
                 ,uint param_6,int *param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_2b0 [4];
  undefined4 local_2a0 [44];
  undefined4 local_1f0 [2];
  undefined4 *local_1e8;
  undefined *puStack_1e0;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_68 [2];
  
  if (*param_7 == 1) {
    local_1f0[0] = 0;
    local_178 = 0;
    local_170 = 0;
    local_1e8 = (undefined4 *)0x0;
    puStack_1e0 = (undefined *)0x0;
    local_188 = 0;
    uStack_180 = 0;
    if (param_7[8] == 0x10) {
      uVar2 = *(undefined8 *)(param_7 + 2);
      iVar1 = param_7[4];
      FUN_0078e928(local_2a0,*(undefined8 *)(param_7 + 6),0x10,1);
      puStack_1e0 = PTR_LAB_047d0920;
      local_1e8 = local_2a0;
      FUN_0078e7c4(local_1f0);
      local_1f0[0] = 1;
      FUN_0078db98(local_1f0,uVar2,iVar1);
      if ((param_4 & 0xf) == 0) {
        FUN_0078e040(local_1f0,param_2,param_4,param_3,param_4);
        if ((param_5 != 0) && (param_6 < 0x11)) {
          FUN_0078e568(local_1f0,param_5,0x10);
        }
        FUN_0078db8c(local_1f0);
        FUN_0078e920(local_2a0);
        goto LAB_0078d7cc;
      }
      local_2b0[0] = 0x10407;
      local_68[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_2b0 | 4),(Result *)local_68);
      FUN_00cbd7c0(param_1,local_2b0);
    }
    else {
      local_2b0[0] = 0x10407;
      local_68[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_2b0 | 4),(Result *)local_68);
      FUN_00cbd7c0(param_1,local_2b0);
    }
    FUN_0078db8c(local_1f0);
    FUN_0078e920(local_2a0);
  }
  else {
    if (*param_7 == 0) {
LAB_0078d7cc:
      local_2a0[0] = 0;
    }
    else {
      local_2a0[0] = 0x10407;
    }
    local_2b0[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_2a0 | 4),(Result *)local_2b0);
    FUN_00cbd7c0(param_1,local_2a0);
  }
  return;
}


