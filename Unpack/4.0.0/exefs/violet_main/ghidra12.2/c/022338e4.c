/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022338e4; name: FUN_022338e4
 */


void FUN_022338e4(undefined8 param_1)

{
  code *pcVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_100;
  code *local_f8;
  undefined8 local_f0;
  long *local_e8;
  undefined1 auStack_e0 [104];
  undefined8 local_78;
  char *pcStack_70;
  undefined8 local_68;
  long *local_60;
  char local_58 [8];
  undefined1 auStack_50 [24];
  long *local_38;
  
  local_100 = 0xa5d87c9ff14c683c;
  local_f8 = (code *)0x3c2f425;
  local_f0 = 9;
  local_e8 = (long *)0x0;
  FUN_01315eac(local_58,param_1,&local_100);
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  if (local_58[0] != '\0') {
    if (((*PTR_DAT_047d8280 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    uVar4 = *(undefined8 *)PTR_DAT_047d8288;
    local_78 = 0xd1f314a0270da1f;
    pcStack_70 = "IsAsync";
    local_68 = 7;
    local_60 = (long *)0x0;
    *(undefined8 *)PTR_DAT_047d8290 = uVar4;
    uVar2 = FUN_0141f968(param_1,&local_78);
    memset(&local_100,0,0x80);
    FUN_01a3bffc(uVar4,auStack_50,(uVar2 & 0xff) != 0 && 0xff < uVar2,&local_100,0);
    pcVar1 = local_f8;
    if (local_f8 != (code *)0x0) {
      local_f0 = 0;
      local_e8 = (long *)0x0;
      local_100 = 0;
      local_f8 = (code *)0x0;
      (*pcVar1)(auStack_e0);
    }
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 0x20))();
    }
    if ((local_58[0] != '\0') && (local_38 != (long *)0x0)) {
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return;
}


