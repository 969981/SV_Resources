/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018e972c; name: FUN_018e972c
 */


void FUN_018e972c(long param_1)

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
    local_18 = 0x726c2890c3d75149;
    bVar1 = FUN_018e9800(lVar4);
    puVar3 = (undefined8 *)FUN_01235878(param_1 + 0x158,&local_18);
    *(byte *)(puVar3 + 2) = bVar1 & 1;
    *puVar3 = PTR_LAB_047dcd90;
    FUN_018e9808(lVar4,0);
  }
  return;
}


