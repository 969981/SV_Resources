/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ba778; name: FUN_007ba778
 */


void FUN_007ba778(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ErrorResultVariant *this;
  int *piVar2;
  int local_90 [4];
  int local_80 [8];
  int local_60 [4];
  undefined1 auStack_50 [32];
  undefined4 local_28;
  undefined1 local_24 [4];
  
  piVar2 = local_90;
  FUN_0284e338(auStack_50);
  local_24[0] = 0;
  local_60[0] = 0;
  local_80[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_80);
  FUN_007927c8(local_80,param_3,param_4 + 0x30,0x5c0,auStack_50,local_24,param_4 + 0x5f8);
  FUN_018ff39c(local_60,local_80);
  if (local_60[0] == 0) {
    uVar1 = FUN_0078b12c(auStack_50);
    if (((((uVar1 & 1) != 0) && (uVar1 = FUN_0078b278(param_2 + 0x88,auStack_50), (uVar1 & 1) == 0))
        && (uVar1 = FUN_0078b278(param_2 + 0xa8,auStack_50), (uVar1 & 1) == 0)) &&
       ((uVar1 = FUN_0078b278(param_2 + 200,auStack_50), (uVar1 & 1) == 0 &&
        (uVar1 = FUN_0078b278(param_2 + 0xe8,auStack_50), (uVar1 & 1) == 0)))) {
      FUN_00796584(local_80);
      FUN_007968fc(local_80,auStack_50);
      FUN_0079ff98(*(undefined8 *)(param_2 + 0x58),local_80);
      FUN_00796828(param_4 + 0x628,local_80);
      *(undefined1 *)(param_4 + 0x620) = local_24[0];
      FUN_00796f04(local_90,param_4);
      FUN_018ff39c(local_60,local_90);
      if (local_60[0] == 0) {
        local_90[0] = 0;
      }
      else {
        local_90[0] = 0x2c09;
      }
      local_28 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_90 | 4),(Result *)&local_28);
      goto LAB_007ba900;
    }
    local_80[0] = 0x2c09;
LAB_007ba8ac:
    this = (ErrorResultVariant *)((ulong)local_80 | 4);
  }
  else {
    if (*(char *)(param_2 + 0x10) != '\0') {
      local_80[0] = 0x10407;
      local_90[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_80 | 4),(Result *)local_90);
      if (local_60[0] != local_80[0]) {
        local_80[0] = 0x2c18;
        local_90[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_80 | 4),(Result *)local_90);
        if (local_60[0] == local_80[0]) {
          local_80[0] = 0xc406;
          goto LAB_007ba8ac;
        }
      }
      piVar2 = local_60;
      goto LAB_007ba900;
    }
    this = (ErrorResultVariant *)((ulong)local_80 | 4);
    local_80[0] = 0x2c09;
    local_90[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_90);
    local_80[0] = 0x2c09;
  }
  local_90[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_90);
  piVar2 = local_80;
LAB_007ba900:
  FUN_00cbd7c0(param_1,piVar2);
  FUN_0284e3d4(auStack_50);
  return;
}


