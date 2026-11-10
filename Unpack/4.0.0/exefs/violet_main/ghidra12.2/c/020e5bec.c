/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020e5bec; name: FUN_020e5bec
 */


bool FUN_020e5bec(int param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  undefined4 local_28;
  int iStack_24;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar3 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  *(undefined8 *)PTR_DAT_047d4ca8 = *(undefined8 *)PTR_DAT_047d4ca0;
  lVar5 = FUN_020e5ab8();
  iVar3 = (**(code **)(**(long **)(lVar5 + 0x40) + 0x30))();
  if (0 < iVar3) {
    iVar4 = 0;
    do {
      local_28 = *(undefined4 *)(lVar5 + 0x60);
      iStack_24 = iVar4;
      pcVar6 = (char *)(**(code **)(**(long **)(lVar5 + 0x40) + 0x40))
                                 (*(long **)(lVar5 + 0x40),&local_28);
      cVar2 = *pcVar6;
      if (-1 < (char)(cVar2 + '\x7f')) {
        cVar1 = -0x80;
        if (param_1 <= cVar2 + 0x80) {
          cVar1 = cVar2 - (char)param_1;
        }
        *pcVar6 = cVar1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar3 != iVar4);
  }
  (**(code **)(**(long **)(lVar5 + 0x40) + 0x50))
            (*(long **)(lVar5 + 0x40),*(undefined4 *)(lVar5 + 0x60));
  iVar3 = *(int *)(lVar5 + 0x60) + 1;
  *(int *)(lVar5 + 0x60) = iVar3;
  iVar4 = (**(code **)(**(long **)(lVar5 + 0x40) + 0x28))();
  if (iVar4 <= iVar3) {
    *(undefined4 *)(lVar5 + 0x60) = 0;
  }
  return iVar4 <= iVar3;
}


