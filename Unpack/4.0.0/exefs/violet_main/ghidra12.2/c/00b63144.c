/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b63144; name: FUN_00b63144
 */


uint FUN_00b63144(long param_1,ulong param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  uint local_40 [4];
  
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar3 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar4 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar4;
  puVar2 = PTR_DAT_047d0a08;
  if ((((lVar4 != 0) && (*(long *)PTR_DAT_047d0a08 != 0)) && (iVar3 = FUN_00f21480(), iVar3 == 1))
     && (*(long *)puVar2 != 0)) {
    cVar1 = *(char *)(*(long *)(param_1 + (param_2 & 0xff) * 8 + 0x40) + 0x68);
    iVar3 = FUN_00f21480();
    if (((iVar3 == 1) && ((byte)(cVar1 + 4U) < 8)) &&
       ((*(long *)PTR_DAT_047d0860 != 0 &&
        (lVar4 = FUN_00f21488(*(long *)PTR_DAT_047d0860 + 0x10,(&DAT_0485ea48)[(byte)(cVar1 + 4)],
                              0x81), lVar4 != 0)))) {
      FUN_01977ebc(local_40);
      return local_40[0] & 0x3ff;
    }
  }
  return 0xffffffff;
}


