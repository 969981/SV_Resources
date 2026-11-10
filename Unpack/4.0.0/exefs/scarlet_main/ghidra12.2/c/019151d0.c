/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019151d0; name: FUN_019151d0
 */


void FUN_019151d0(undefined8 param_1)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  if (((*PTR_DAT_047d3be0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3be0), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d89f0,PTR_DAT_047d3be8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3be0);
  }
  uVar3 = *(undefined8 *)PTR_DAT_047d3be8;
  *(undefined8 *)PTR_DAT_047dcd80 = uVar3;
  local_40 = 0x746c50dd3115765e;
  pcStack_38 = "IsEnable";
  local_30 = 8;
  local_28 = (long *)0x0;
  uVar1 = FUN_0141f968(param_1,&local_40);
  FUN_019152c4(uVar3,param_1,(uVar1 & 0xff) != 0 && 0xff < uVar1);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


