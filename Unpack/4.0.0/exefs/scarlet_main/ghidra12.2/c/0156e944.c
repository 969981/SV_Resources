/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0156e944; name: FUN_0156e944
 */


void FUN_0156e944(void)

{
  int iVar1;
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  FUN_0156ec2c(*(undefined8 *)(*(long *)PTR_DAT_047d3f70 + 8));
  if (((*PTR_DAT_047d8b30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8b30), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047e2420,PTR_DAT_047d8b38,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8b30);
  }
  *(undefined8 *)PTR_DAT_047d8b40 = *(undefined8 *)PTR_DAT_047d8b38;
  local_30 = 0x98b6dc35cb15d2db;
  pcStack_28 = "trinity_config";
  local_20 = 0xe;
  uStack_18 = 0;
  FUN_0156f254(&local_30);
  return;
}


