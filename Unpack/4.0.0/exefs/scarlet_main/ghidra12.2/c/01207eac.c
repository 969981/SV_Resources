/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01207eac; name: FUN_01207eac
 */


bool FUN_01207eac(undefined8 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if (((*PTR_DAT_047d9210 & 1) == 0) &&
     (uStack_18._4_4_ = param_2, iVar2 = __cxa_guard_acquire(PTR_DAT_047d9210),
     param_2 = uStack_18._4_4_, iVar2 != 0)) {
    FUN_00100190(param_1,uStack_18._4_4_,PTR_LAB_047dafb0,PTR_DAT_047d9218,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d9210);
    param_2 = uStack_18._4_4_;
  }
  lVar3 = *(long *)PTR_DAT_047d9218;
  *(long *)PTR_DAT_047d9220 = lVar3;
  lVar3 = *(long *)(lVar3 + 0x30);
  bVar1 = false;
  if (lVar3 != 0) {
    local_20 = 0x1000000000;
    uStack_18 = 0;
    fVar4 = (float)FUN_01207f7c(param_1,param_2,lVar3,&local_20);
    bVar1 = 0.5 <= fVar4;
  }
  return bVar1;
}


