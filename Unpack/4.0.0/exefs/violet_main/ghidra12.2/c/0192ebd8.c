/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0192ebd8; name: FUN_0192ebd8
 */


void FUN_0192ebd8(long param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 local_18;
  
  if (((*PTR_DAT_047d88d0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d88d0);
  }
  lVar4 = *(long *)PTR_DAT_047d88d8;
  *(long *)PTR_DAT_047d88e0 = lVar4;
  if (lVar4 != 0) {
    local_18 = 0x9ba105a5fece6484;
    bVar1 = FUN_0192ecac(lVar4);
    puVar3 = (undefined8 *)FUN_01235878(param_1 + 0x158,&local_18);
    *(byte *)(puVar3 + 2) = bVar1 & 1;
    *puVar3 = PTR_LAB_047dcd90;
    FUN_0188bef4(lVar4,0);
  }
  return;
}


