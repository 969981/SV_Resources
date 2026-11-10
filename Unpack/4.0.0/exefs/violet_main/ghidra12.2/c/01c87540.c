/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c87540; name: FUN_01c87540
 */


undefined8 FUN_01c87540(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (((*PTR_DAT_047d89f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d89f8), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d8ed8,PTR_DAT_047d8a00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d89f8);
  }
  lVar3 = *(long *)PTR_DAT_047d8a00;
  *(long *)PTR_DAT_047d8a08 = lVar3;
  uVar2 = 0;
  switch(*(undefined1 *)(lVar3 + 0x2c)) {
  case 1:
    break;
  default:
    uVar2 = 1;
    break;
  case 3:
    uVar2 = 2;
    break;
  case 4:
    uVar2 = 3;
    break;
  case 5:
    uVar2 = 4;
    break;
  case 7:
    uVar2 = 5;
    break;
  case 8:
    uVar2 = 6;
    break;
  case 9:
    uVar2 = 7;
    break;
  case 10:
    uVar2 = 8;
  }
  return uVar2;
}


