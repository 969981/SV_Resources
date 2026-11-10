/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02003ad0; name: FUN_02003ad0
 */


void FUN_02003ad0(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined1 uVar3;
  long lVar4;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  *(undefined2 *)param_1 = 0x101;
  if (((*PTR_DAT_047d9210 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d9210), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047dafb0,PTR_DAT_047d9218,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d9210);
  }
  lVar4 = *(long *)PTR_DAT_047d9218;
  *(long *)PTR_DAT_047d9220 = lVar4;
  lVar4 = *(long *)(lVar4 + 0x38);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = FUN_02003ba4(lVar4);
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
      goto LAB_02003b50;
    }
    param_1[1] = *(undefined8 *)(lVar4 + 0xb8);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar4 + 0xc0);
    uVar3 = 1;
  }
  *(undefined1 *)((long)param_1 + 1) = uVar3;
  uVar3 = 1;
LAB_02003b50:
  *(undefined1 *)param_1 = uVar3;
  return;
}


