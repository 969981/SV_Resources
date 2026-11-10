/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e999f4; name: FUN_01e999f4
 */


void FUN_01e999f4(undefined8 param_1,char param_2)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  
  if (((*PTR_DAT_047da9b8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047da9b8), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047daa28,PTR_DAT_047da9c0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047da9b8);
  }
  lVar4 = *(long *)PTR_DAT_047da9c0;
  *(long *)PTR_DAT_047da9c8 = lVar4;
  if ((lVar4 != 0) && (iVar2 = FUN_01cefb40(), iVar2 != 0)) {
    iVar5 = 0;
    do {
      FUN_01e97a20(param_1,iVar5);
      uVar3 = FUN_019c7a40(param_1);
      if (((uVar3 & 1) != 0) && (cVar1 = FUN_019c7a20(param_1), cVar1 == param_2)) {
        return;
      }
      FUN_00d8e444(param_1);
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  FUN_015c486c(param_1);
  return;
}


