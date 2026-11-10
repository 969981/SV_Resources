/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01833780; name: FUN_01833780
 */


uint FUN_01833780(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  byte bVar4;
  long lVar5;
  int local_30 [4];
  byte local_4 [4];
  
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar5 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar5;
  if (lVar5 == 0) {
    uVar1 = 0;
  }
  else {
    if (*(long *)PTR_DAT_047d0a08 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(*(long *)PTR_DAT_047d0a08 + 0xb8);
    }
    if (*(long *)(lVar5 + 0x70) == 0) {
      bVar4 = 0xfd;
    }
    else {
      bVar4 = 0xfd;
      if (*(long *)PTR_DAT_047d0860 != 0) {
        local_4[0] = 0xfd;
        FUN_00f42ddc(local_30,*(long *)PTR_DAT_047d0860,local_4,uVar3);
        bVar4 = local_4[0];
        if (DAT_045dfcb0 <= local_4[0] || local_30[0] != 0) {
          bVar4 = 0xfd;
        }
      }
    }
    local_30[0] = CONCAT31(local_30[0]._1_3_,bVar4);
    uVar1 = FUN_0183389c(param_1,local_30);
  }
  return uVar1 & 1;
}


