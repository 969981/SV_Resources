/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0278d214; name: FUN_0278d214
 */


void FUN_0278d214(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  if ((*PTR_DAT_047e2090 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_DAT_047e2090);
    if (iVar3 != 0) {
      FUN_00100190(&LAB_02bddbc0,PTR_DAT_047e2098,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047e2090);
    }
  }
  uVar4 = FUN_0278d2d4(param_1,param_2,param_3);
  puVar2 = PTR_DAT_047e2098;
  FUN_0278d3ac(PTR_DAT_047e2098,uVar4);
  lVar1 = 0;
  if (*(long *)puVar2 != 0) {
    lVar1 = *(long *)puVar2 + 0x20;
  }
  FUN_0100ba9c(lVar1);
  return;
}


