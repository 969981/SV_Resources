/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018dd768; name: FUN_018dd768
 */


void FUN_018dd768(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  int local_130 [8];
  int local_110 [4];
  int local_100 [16];
  undefined *local_c0;
  undefined1 *puStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined *local_a0;
  undefined1 auStack_98 [88];
  undefined4 local_38 [2];
  
  piVar5 = local_130;
  local_a8 = 0;
  local_a0 = PTR_DAT_047d0940 + 0x68;
  local_c0 = PTR_DAT_047d0940 + 0x10;
  puStack_b8 = auStack_98;
  local_b0 = 0x50;
  uVar3 = FUN_00793090(param_3);
  uVar1 = FUN_014dca6c(param_3);
  uVar2 = FUN_0079318c(param_3);
  FUN_01854ea4(local_100,&local_c0,uVar3,uVar1,uVar2);
  FUN_0078f100(local_100,&local_c0);
  FUN_00793098(&local_c0);
  uVar4 = FUN_007c6f88();
  if ((uVar4 & 1) == 0) {
    local_100[0] = 0x10407;
    local_130[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_100 | 4),(Result *)local_130);
    piVar5 = local_100;
  }
  else {
    local_100[0xc] = 0;
    local_100[0xd] = 0;
    local_100[0xe] = 0;
    local_100[0xf] = 0;
    local_100[8] = 0;
    local_100[9] = 0;
    local_100[10] = 0;
    local_100[0xb] = 0;
    local_100[4] = 0;
    local_100[5] = 0;
    local_100[6] = 0;
    local_100[7] = 0;
    local_100[0] = 0;
    local_100[1] = 0;
    local_100[2] = 0;
    local_100[3] = 0;
    uVar3 = FUN_00793098(&local_c0);
    FUN_007c702c(local_100,0x40,uVar3,0xffffffffffffffff);
    FUN_018dd540(local_130,local_100);
    FUN_0278a178(local_110,param_2 + 8,local_130);
    if (local_110[0] == 0) {
      local_130[0] = 0;
      local_38[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_130 | 4),(Result *)local_38);
    }
    else {
      piVar5 = local_110;
    }
  }
  FUN_00cbd7c0(param_1,piVar5);
  return;
}


