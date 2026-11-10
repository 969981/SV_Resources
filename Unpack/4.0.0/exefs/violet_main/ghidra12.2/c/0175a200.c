/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0175a200; name: FUN_0175a200
 */


undefined8 FUN_0175a200(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((*PTR_DAT_047da9b8 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_DAT_047da9b8);
    if (iVar3 != 0) {
      FUN_00100190(PTR_LAB_047daa28,PTR_DAT_047da9c0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047da9b8);
    }
  }
  uVar4 = FUN_0175a998(param_1,param_2);
  puVar2 = PTR_DAT_047da9c0;
  FUN_0175a2b4(PTR_DAT_047da9c0,uVar4);
  lVar5 = *(long *)puVar2;
  lVar1 = 0;
  if (lVar5 != 0) {
    lVar1 = lVar5 + 0x20;
  }
  FUN_0100ba9c(lVar1);
  return *(undefined8 *)puVar2;
}


