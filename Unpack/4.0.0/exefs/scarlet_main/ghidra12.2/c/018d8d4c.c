/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018d8d4c; name: FUN_018d8d4c
 */


bool FUN_018d8d4c(undefined8 param_1,uint *param_2)

{
  undefined *puVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *local_a0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined *local_48;
  undefined8 local_40;
  uint local_38;
  uint uStack_34;
  
  uVar5 = *(undefined8 *)(param_2 + 2);
  uVar6 = *(undefined8 *)(param_2 + 6);
  local_a0 = PTR_DAT_047dcc88 + 0x10;
  uStack_34 = *param_2;
  puVar1 = PTR_DAT_047dcc70 + 0x10;
  local_40 = 0;
  local_38 = 0;
  local_48 = puVar1;
  if (uStack_34 != 0) {
    uVar4 = (ulong)uStack_34 - ((ulong)(uStack_34 >> 1) & 0x5555555555555555);
    uStack_34 = uStack_34 ^ uStack_34 << 2;
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uStack_34 = uStack_34 ^ uStack_34 >> 0xf;
    uStack_34 = uStack_34 ^ uStack_34 << 0xd;
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (((uVar4 != 1) &&
        (uStack_34 = uStack_34 ^ uStack_34 << 2, uStack_34 = uStack_34 ^ uStack_34 >> 0xf,
        uStack_34 = uStack_34 ^ uStack_34 << 0xd, uVar4 != 2)) &&
       (uStack_34 = uStack_34 ^ uStack_34 << 2, uStack_34 = uStack_34 ^ uStack_34 >> 0xf,
       uStack_34 = uStack_34 ^ uStack_34 << 0xd, uVar4 != 3)) {
      (**(code **)(PTR_DAT_047dcc70 + 0x20))(&local_48);
      for (lVar2 = uVar4 - 4; lVar2 != 0; lVar2 = lVar2 + -1) {
        (**(code **)(local_48 + 0x10))(&local_48);
      }
    }
  }
  local_58 = CONCAT44(uStack_34,uStack_34);
  local_88 = PTR_DAT_047dcc78 + 0x10;
  local_70 = 0;
  uStack_50 = 0;
  local_98 = PTR_DAT_047dcc80 + 0x10;
  uStack_90 = 0;
  local_80 = uVar5;
  uStack_78 = uVar6;
  local_68 = puVar1;
  uStack_60 = local_40;
  local_38 = uStack_34;
  cVar3 = FUN_015d1064(&local_a0);
  return cVar3 == '\x0e';
}


