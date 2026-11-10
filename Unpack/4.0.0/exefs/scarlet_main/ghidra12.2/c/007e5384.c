/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e5384; name: FUN_007e5384
 */


void FUN_007e5384(undefined8 param_1,long param_2,undefined1 *param_3,int *param_4,uint param_5)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_70 [4];
  undefined4 local_60 [4];
  undefined4 local_48;
  undefined1 auStack_44 [4];
  
  puVar3 = local_70;
  if ((param_3 == (undefined1 *)0x0) || (param_4 == (int *)0x0)) {
    local_60[0] = 0x10407;
  }
  else {
    uVar2 = FUN_00796620(param_2 + 0x18);
    if (uVar2 + 0xc <= param_5) {
      local_70[0] = 0;
      local_60[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_60);
      FUN_00cbd7c0(local_60,local_70);
      *param_3 = (char)uVar2;
      FUN_00796628(local_70,param_2 + 0x18,param_3 + 1,auStack_44,uVar2);
      FUN_018ff39c(local_60,local_70);
      puVar1 = param_3 + 1 + uVar2;
      FUN_00793890(puVar1,*(undefined8 *)(param_2 + 8));
      FUN_007938d0(puVar1 + 8,*(undefined2 *)(param_2 + 0x10));
      FUN_007938f0(puVar1 + 10,*(undefined1 *)(param_2 + 0x38));
      *param_4 = ((int)(puVar1 + 10) - (int)param_3) + 1;
      local_70[0] = 0;
      local_48 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)&local_48);
      goto LAB_007e54a8;
    }
    local_60[0] = 0x4c0d;
  }
  local_70[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_70);
  puVar3 = local_60;
LAB_007e54a8:
  FUN_00cbd7c0(param_1,puVar3);
  return;
}


