/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cc64f8; name: FUN_00cc64f8
 */


void FUN_00cc64f8(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  if ((*PTR_DAT_047e0ea0 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_DAT_047e0ea0);
    if (iVar3 != 0) {
      FUN_00100190(&LAB_02bb7238,PTR_DAT_047e0ea8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047e0ea0);
    }
  }
  uVar4 = FUN_00cc70ec(param_1);
  puVar2 = PTR_DAT_047e0ea8;
  FUN_00cd24e8(PTR_DAT_047e0ea8,uVar4);
  lVar1 = 0;
  if (*(long *)puVar2 != 0) {
    lVar1 = *(long *)puVar2 + 0x20;
  }
  FUN_0100ba9c(lVar1);
  return;
}


