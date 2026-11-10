/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c87b70; name: FUN_01c87b70
 */


ulong FUN_01c87b70(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  char local_30 [8];
  undefined8 local_28;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar3 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  *(undefined8 *)PTR_DAT_047d4ca8 = *(undefined8 *)PTR_DAT_047d4ca0;
  lVar4 = FUN_01ed96ac();
  if (lVar4 == 0) {
    uVar5 = FUN_01c87d80();
    return uVar5;
  }
  bVar1 = FUN_01edad8c();
  if (9 < bVar1) {
    FUN_01ecce00(local_30);
    if (local_30[0] != '\0') {
      FUN_01edadb4(lVar4,local_28);
      if (local_30[0] != '\0') {
        local_30[0] = '\0';
      }
    }
  }
  uVar2 = FUN_01c87d80();
  return (ulong)(uVar2 & 1);
}


