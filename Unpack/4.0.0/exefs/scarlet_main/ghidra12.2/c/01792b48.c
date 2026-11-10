/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01792b48; name: FUN_01792b48
 */


void FUN_01792b48(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  undefined1 auStack_30 [16];
  long local_20;
  undefined4 local_14;
  
  if ((*PTR_DAT_047d78d8 & 1) == 0) {
    local_20 = param_1;
    local_14 = param_2;
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d78d8);
    param_1 = local_20;
    param_2 = local_14;
    if (iVar1 != 0) {
      FUN_00100190(&LAB_02b70a64,PTR_DAT_047d78e0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d78d8);
      param_1 = local_20;
      param_2 = local_14;
    }
  }
  DAT_04842260 = *(undefined8 *)PTR_DAT_047d78e0;
  if (((*PTR_DAT_047d89b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d89b0), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047dcbf0,PTR_DAT_047d89b8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d89b0);
  }
  uVar2 = *(undefined8 *)PTR_DAT_047d89b8;
  *(undefined8 *)PTR_DAT_047d89c0 = uVar2;
  FUN_01792ce0(auStack_30,uVar2,param_2);
  uVar3 = FUN_00cf4cfc(*(undefined8 *)(param_1 + 0x70));
  if ((uVar3 & 1) == 0) {
    if ((*(ushort *)(*(long *)(*(long *)(param_1 + 0x70) + 0x10) + 4) >> 2 & 1) == 0) {
      uVar2 = FUN_0131c054();
      iVar1 = FUN_01480500(uVar2,param_1,auStack_30);
      uVar4 = iVar1 + (int)uVar2;
      uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
      if (0xfe < (int)uVar4) {
        uVar4 = 0xff;
      }
      if (0xfe < uVar4) {
        uVar4 = 0xff;
      }
      FUN_00ef7530(*(undefined8 *)(param_1 + 0x70),uVar4);
      FUN_00f13b9c(param_1,1);
    }
  }
  return;
}


