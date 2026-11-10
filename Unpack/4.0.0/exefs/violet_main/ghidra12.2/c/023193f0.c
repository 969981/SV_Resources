/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 023193f0; name: FUN_023193f0
 */


void FUN_023193f0(undefined4 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined8 local_24;
  undefined2 local_1c;
  undefined1 local_1a;
  undefined4 local_19;
  
  local_2c = 0x400000000;
  local_38 = 0;
  local_24 = 4;
  local_1c = 0;
  local_1a = 1;
  local_19 = 0;
  local_30 = param_1;
  if ((*PTR_DAT_047d8a70 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d8a70);
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047ddc70,PTR_DAT_047d8a78,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8a70);
    }
  }
  uVar2 = *(undefined8 *)PTR_DAT_047d8a78;
  *(undefined8 *)PTR_DAT_047d8a80 = uVar2;
  FUN_0159baf4(uVar2,param_2 + 8,&local_38,0);
  return;
}


