/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01576908; name: FUN_01576908
 */


undefined8 FUN_01576908(long param_1,long param_2)

{
  undefined *puVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined *local_70;
  undefined2 local_68;
  undefined2 local_66;
  
  uVar8 = FUN_00cf44f4(*(undefined8 *)(param_1 + 0x70));
  uVar9 = FUN_00cf41a8(*(undefined8 *)(param_1 + 0x70));
  puVar1 = PTR_DAT_047d8ee0 + 0x10;
  local_70 = puVar1;
  local_68 = uVar8;
  local_66 = uVar9;
  cVar2 = FUN_01576b04(&local_70);
  local_70 = puVar1;
  local_68 = uVar8;
  local_66 = uVar9;
  cVar3 = FUN_01576cd0(&local_70);
  uVar8 = FUN_00cf44f4(*(undefined8 *)(param_2 + 0x70));
  uVar9 = FUN_00cf41a8(*(undefined8 *)(param_2 + 0x70));
  local_70 = puVar1;
  local_68 = uVar8;
  local_66 = uVar9;
  cVar4 = FUN_01576b04(&local_70);
  local_70 = puVar1;
  local_68 = uVar8;
  local_66 = uVar9;
  cVar5 = FUN_01576cd0(&local_70);
  uVar10 = FUN_00cf44f4(*(undefined8 *)(param_1 + 0x70));
  uVar11 = FUN_00cf44f4(*(undefined8 *)(param_2 + 0x70));
  cVar6 = FUN_00cec030(*(undefined8 *)(param_1 + 0x70));
  cVar7 = FUN_00cec030(*(undefined8 *)(param_2 + 0x70));
  if (((((cVar2 == '\x0f') || (cVar3 == '\x0f')) || (cVar4 == '\x0f')) || (cVar5 == '\x0f')) ||
     (((uVar10 & 0xffff) == 0x84 && ((uVar11 & 0xffff) == 0x84)))) {
    return 3;
  }
  if (((uVar10 & 0xffff) != 0x84) && ((uVar11 & 0xffff) != 0x84)) {
    if (cVar6 == cVar7) {
      return 3;
    }
    if (cVar6 == '\x02') {
      return 3;
    }
    if (cVar7 == '\x02') {
      return 3;
    }
    if (((cVar3 != cVar5) && (cVar3 != cVar4)) && ((cVar2 != cVar4 && (cVar2 != cVar5)))) {
      return 3;
    }
  }
  uVar12 = FUN_00dbf838(*(undefined8 *)(param_1 + 0x70));
  uVar13 = FUN_00dbf838(*(undefined8 *)(param_2 + 0x70));
  uVar14 = FUN_01576e9c(uVar10,uVar12,uVar11,uVar13);
  return uVar14;
}


