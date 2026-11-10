/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b63670; name: FUN_00b63670
 */


undefined1 FUN_00b63670(byte param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  
  if (((DAT_0483a3b8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0483a3b8), iVar3 != 0)) {
    FUN_00100190(&LAB_00b651c8,&DAT_0483a3a8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483a3b8);
  }
  DAT_0483a3a0 = DAT_0483a3a8;
  if (DAT_0483a3a8 == 0) {
    uVar2 = 0;
  }
  else if (param_1 == 0xfd) {
    uVar2 = 0xfd;
  }
  else {
    lVar4 = *(long *)(DAT_0483a3a8 + (ulong)param_1 * 8 + 0x40);
    if (lVar4 == 0) {
      uVar2 = 0xfe;
    }
    else {
      if (*(long *)PTR_DAT_047d0a08 != 0) {
        cVar1 = *(char *)(lVar4 + 0x68);
        iVar3 = FUN_00f21480();
        if ((((iVar3 == 1) && ((byte)(cVar1 + 4U) < 8)) && (*(long *)PTR_DAT_047d0860 != 0)) &&
           (lVar4 = FUN_00f21488(*(long *)PTR_DAT_047d0860 + 0x10,(&DAT_0485ea48)[(byte)(cVar1 + 4)]
                                 ,0x81), lVar4 != 0)) {
          return *(undefined1 *)(lVar4 + 0xba);
        }
      }
      uVar2 = 100;
    }
  }
  return uVar2;
}


