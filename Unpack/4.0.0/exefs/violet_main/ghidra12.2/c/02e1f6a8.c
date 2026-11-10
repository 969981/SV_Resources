/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e1f6a8; name: FUN_02e1f6a8
 */


bool FUN_02e1f6a8(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  
  lVar6 = *(long *)(param_1 + 0x48);
  puVar7 = (undefined8 *)(lVar6 + 0x28);
  plVar4 = (long *)(**(code **)*puVar7)(puVar7);
  if (((*PTR_DAT_047dcd50 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047dcd50), iVar3 != 0))
  {
    uVar5 = FUN_01af5520();
    *(undefined8 *)PTR_DAT_047dcd58 = uVar5;
    __cxa_guard_release(PTR_DAT_047dcd50);
  }
  while( true ) {
    if (plVar4 == (long *)0x0) {
      return false;
    }
    if (plVar4 == (long *)PTR_DAT_047dcd58) break;
    plVar4 = (long *)*plVar4;
  }
  lVar6 = *(long *)(lVar6 + 0x48);
  uVar1 = FUN_00dbf838(*(undefined8 *)(lVar6 + 0x70));
  uVar2 = FUN_00dbfb7c(*(undefined8 *)(lVar6 + 0x70));
  return (uVar1 & 0xfff0 ^ uVar1 >> 0x10 ^ uVar2 >> 0x10 ^ uVar2 & 0xfff0) < 0x10;
}


