/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c87d80; name: FUN_01c87d80
 */


bool FUN_01c87d80(void)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  char local_40 [8];
  long local_38;
  char local_30 [8];
  long local_28;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar3 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  *(undefined8 *)PTR_DAT_047d4ca8 = *(undefined8 *)PTR_DAT_047d4ca0;
  lVar4 = FUN_01ed96ac();
  bVar2 = false;
  if (lVar4 != 0) {
    FUN_01ecce00(local_30);
    if (local_30[0] == '\0') {
      bVar2 = false;
    }
    else {
      FUN_01edadc8(local_40,lVar4);
      if (local_40[0] == '\0') {
        bVar2 = false;
      }
      else {
        uVar5 = (local_28 - local_38) * 1000000000;
        uVar1 = ((long)uVar5 >> 0x20) * 0x26d694b3 + ((uVar5 & 0xfffffe00) * 0x26d694b3 >> 0x20);
        bVar2 = ((long)(((long)uVar5 >> 0x20) * 0x112e0be8 + ((long)uVar1 >> 0x20) +
                       ((uVar5 & 0xfffffe00) * 0x112e0be8 + (uVar1 & 0xffffffff) >> 0x20)) >> 0x1a)
                - ((long)uVar5 >> 0x3f) < 0x5460;
      }
    }
  }
  return bVar2;
}


