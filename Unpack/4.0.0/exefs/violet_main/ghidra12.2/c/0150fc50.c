/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0150fc50; name: FUN_0150fc50
 */


void FUN_0150fc50(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  if ((*PTR_DAT_047dd280 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_DAT_047dd280);
    if (iVar3 != 0) {
      FUN_00100190(PTR_LAB_047dd2e0,PTR_DAT_047dd288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047dd280);
    }
  }
  uVar4 = FUN_015101e4(param_1);
  puVar2 = PTR_DAT_047dd288;
  FUN_01510b8c(PTR_DAT_047dd288,uVar4);
  lVar1 = 0;
  if (*(long *)puVar2 != 0) {
    lVar1 = *(long *)puVar2 + 0x20;
  }
  FUN_0100ba9c(lVar1);
  return;
}


