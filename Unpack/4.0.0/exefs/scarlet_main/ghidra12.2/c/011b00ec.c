/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011b00ec; name: FUN_011b00ec
 */


void FUN_011b00ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  ushort local_68;
  short local_66;
  undefined1 local_64;
  undefined1 local_63;
  byte local_62;
  float local_60;
  undefined4 local_5c;
  uint local_58;
  
  local_58 = 0xffffffff;
  uVar2 = FUN_00cf44f4(*(undefined8 *)(param_3 + 0x70));
  local_68 = uVar2;
  sVar3 = FUN_00cf41a8(*(undefined8 *)(param_3 + 0x70));
  local_66 = sVar3;
  local_64 = FUN_00cec030(*(undefined8 *)(param_3 + 0x70));
  uVar4 = FUN_00dbf838(*(undefined8 *)(param_3 + 0x70));
  uVar5 = FUN_00dbfb7c(*(undefined8 *)(param_3 + 0x70));
  local_63 = (uVar4 & 0xfff0 ^ uVar4 >> 0x10 ^ uVar5 >> 0x10 ^ uVar5 & 0xfff0) < 0x10;
  bVar1 = FUN_00cf4cfc(*(undefined8 *)(param_3 + 0x70));
  local_62 = (bVar1 | (byte)(*(ushort *)(*(long *)(*(long *)(param_3 + 0x70) + 0x10) + 4) >> 2)) & 1
  ;
  bVar1 = FUN_01180328(*(long *)(param_3 + 0x70));
  local_60 = (float)bVar1 / 255.0 + (float)bVar1 / 255.0 + -1.0;
  local_5c = 0;
  if (uVar2 == 0x147) {
    local_5c = FUN_018c687c(param_3);
    local_58 = 0xffffffff;
  }
  else {
    local_58 = 0xffffffff;
    if (uVar2 == 0x365) {
      local_58 = FUN_00e997c4(param_3);
      local_58 = local_58 & 0xff;
    }
    else if ((uVar2 == 0x292) && (sVar3 == 2)) {
      local_60 = 0.0;
    }
  }
  FUN_011b0254(param_1,param_2,&local_68);
  return;
}


