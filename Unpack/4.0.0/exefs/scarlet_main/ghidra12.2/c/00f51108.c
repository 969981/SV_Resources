/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f51108; name: FUN_00f51108
 */


void FUN_00f51108(long param_1,long param_2)

{
  undefined1 uVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  
  uVar9 = FUN_00cf44f4(*(undefined8 *)(param_2 + 0x70));
  uVar4 = FUN_00cf41a8(*(undefined8 *)(param_2 + 0x70));
  lVar11 = param_1 + (uVar9 & 0xffff) * 0x18;
  uVar5 = 0;
  if (((uint)uVar9 & 0xfffe) != 0x298 && ((uint)uVar9 & 0xffff) != 0x2e8) {
    uVar5 = uVar4;
  }
  *(uint *)(lVar11 + 0x50) = uVar5 & 0xffff;
  cVar2 = FUN_00f51268(uVar9 & 0xffffffff);
  uVar1 = 2;
  if (cVar2 != '\x03') {
    uVar1 = cVar2 == '\x02';
  }
  *(undefined1 *)(lVar11 + 0x54) = uVar1;
  uVar5 = FUN_00dbf838(*(undefined8 *)(param_2 + 0x70));
  uVar4 = FUN_00dbfb7c(*(undefined8 *)(param_2 + 0x70));
  *(bool *)(lVar11 + 0x55) =
       (uVar5 & 0xfff0 ^ uVar5 >> 0x10 ^ uVar4 >> 0x10 ^ uVar4 & 0xfff0) < 0x10;
  if (((*PTR_DAT_047d8938 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8938), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d8e20,PTR_DAT_047d8940,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8938);
  }
  uVar10 = *(undefined8 *)PTR_DAT_047d8940;
  *(undefined8 *)PTR_DAT_047d8948 = uVar10;
  uVar6 = FUN_00cf44f4(*(undefined8 *)(param_2 + 0x70));
  uVar7 = FUN_00cf41a8(*(undefined8 *)(param_2 + 0x70));
  bVar3 = FUN_00f51454(uVar10,uVar6,uVar7);
  *(byte *)(param_1 + (uVar9 & 0xffff) * 0x18 + 0x56) = bVar3 & 1;
  return;
}


