/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017d1750; name: FUN_017d1750
 */


byte FUN_017d1750(int param_1)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  
  if (((DAT_048405f8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_048405f8), iVar3 != 0)) {
    FUN_00100190(&LAB_02acf048,&DAT_048405e8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_048405f8);
  }
  lVar1 = DAT_048405e8;
  DAT_04840600 = DAT_048405e8;
  FUN_017d2474(0x28,1);
  FUN_017d2474(0x30,1);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    if (param_1 == 0) {
      uVar5 = 0xcff42b45dd277599;
      uVar6 = 0xb;
      pcVar7 = "kManualSave";
    }
    else {
      switch(param_1) {
      case 1:
        uVar5 = 0x2f4562d1d02b7649;
        uVar6 = 10;
        pcVar7 = "kAutoSave;";
        break;
      case 2:
        uVar5 = 0x5f95d698cd66de8a;
        uVar6 = 0xe;
        pcVar7 = "kAutoPokeTrade";
        break;
      default:
        uVar5 = 0xfbe02ce85958f71;
        uVar6 = 4;
        pcVar7 = "kAll";
        break;
      case 4:
        uVar5 = 0xda7fe4cdb5674f3f;
        uVar6 = 0xb;
        pcVar7 = "kAutoBackup";
      }
    }
    *(undefined8 *)(lVar1 + 0x30) = uVar5;
    *(char **)(lVar1 + 0x38) = pcVar7;
    *(undefined8 *)(lVar1 + 0x40) = uVar6;
    if (((*PTR_DAT_047d4c98 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4c98);
    }
    uVar5 = *(undefined8 *)PTR_DAT_047d4ca0;
    *(undefined8 *)PTR_DAT_047d4ca8 = uVar5;
    uVar4 = FUN_017d1984(uVar5,lVar1 + 0x30);
    if ((uVar4 & 1) != 0) {
      bVar2 = FUN_017d1bd8(uVar5,lVar1 + 0x30,1);
      *(byte *)(lVar1 + 0x28) = bVar2 & 1;
      goto LAB_017d1888;
    }
  }
  bVar2 = 0;
LAB_017d1888:
  return bVar2 & 1;
}


