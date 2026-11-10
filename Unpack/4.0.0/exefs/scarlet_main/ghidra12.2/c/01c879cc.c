/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c879cc; name: FUN_01c879cc
 */


undefined8 FUN_01c879cc(long param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  char local_50 [8];
  undefined1 auStack_48 [8];
  undefined8 local_40;
  char local_38 [16];
  undefined8 local_28;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  *(undefined8 *)PTR_DAT_047d4ca8 = *(undefined8 *)PTR_DAT_047d4ca0;
  uVar4 = FUN_01ed96ac();
  bVar1 = *(byte *)(param_1 + 0x10);
  if ((bVar1 & 1) != 0) {
    uVar5 = FUN_01edac64(uVar4,param_1);
    if ((uVar5 & 1) != 0) {
      return 0;
    }
    bVar1 = *(byte *)(param_1 + 0x10);
  }
  if (((bVar1 >> 2 & 1) == 0) || (FUN_01edac94(local_38,uVar4,param_1), local_38[0] == '\0')) {
    return 1;
  }
  local_40 = local_28;
  FUN_01ecce00(local_50);
  if (local_50[0] != '\0') {
    iVar2 = FUN_01edad60(&local_40);
    iVar3 = FUN_01edad60(auStack_48);
    if (iVar3 != iVar2) {
      return 1;
    }
  }
  return 0;
}


