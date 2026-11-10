/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e93a24; name: FUN_01e93a24
 */


void FUN_01e93a24(undefined8 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  ulong uVar3;
  long lVar4;
  char local_48 [4];
  undefined4 local_44;
  undefined1 auStack_40 [16];
  undefined4 local_18 [2];
  
  if (((*PTR_DAT_047da9a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047da9a0), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047e2088,PTR_DAT_047da9a8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047da9a0);
  }
  lVar4 = *(long *)PTR_DAT_047da9a8;
  *(long *)PTR_DAT_047da9b0 = lVar4;
  if (lVar4 == 0) {
    return;
  }
  FUN_0278c2e8(local_48,param_1);
  if (local_48[0] == '\0') {
    FUN_01f51324(local_48,param_1);
    if (local_48[0] != '\0') {
      FUN_0278c320((ulong)local_48 | 4);
      return;
    }
    FUN_01f51304(local_48,param_1);
    if (local_48[0] == '\0') {
      FUN_0278c374(local_48,param_1);
      if (local_48[0] != '\0') {
        FUN_0278c3a0((ulong)local_48 | 4);
        return;
      }
      FUN_0278c3d4(local_48,param_1);
      if (local_48[0] == '\0') {
        return;
      }
      uVar3 = FUN_0278c3f4(param_1);
      FUN_0278c3fc(lVar4,auStack_40,uVar3 >> 0x20);
      return;
    }
    local_18[0] = local_44;
    puVar2 = local_18;
  }
  else {
    puVar2 = (undefined4 *)((ulong)local_48 | 4);
  }
  FUN_0278c310(puVar2);
  return;
}


