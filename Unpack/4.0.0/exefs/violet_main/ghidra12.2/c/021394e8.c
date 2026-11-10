/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021394e8; name: FUN_021394e8
 */


undefined1 FUN_021394e8(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*PTR_DAT_047d8a48 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d8a48);
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047dcf08,PTR_DAT_047d8a50,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8a48);
    }
  }
  uVar2 = *(undefined8 *)PTR_DAT_047d8a50;
  *(undefined8 *)PTR_DAT_047d8a58 = uVar2;
  iVar1 = FUN_02139484(uVar2,param_2);
  return *(undefined1 *)(*(long *)(param_1 + 0x48) + (long)iVar1 * 0x50 + 0x48);
}


