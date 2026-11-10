/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dacf14; name: FUN_01dacf14
 */


void FUN_01dacf14(undefined8 param_1)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  
  if (((*PTR_DAT_047d8a30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8a30), iVar1 != 0))
  {
    FUN_00100190(&LAB_00a2f39c,PTR_DAT_047d8a38,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8a30);
  }
  lVar3 = *(long *)PTR_DAT_047d8a38;
  *(long *)PTR_DAT_047d8a40 = lVar3;
  pcVar2 = *(code **)(lVar3 + 0xa8);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(lVar3 + 0xb0) = 0;
    *(undefined8 *)(lVar3 + 0xb8) = 0;
    *(undefined8 *)(lVar3 + 0xa0) = 0;
    *(undefined8 *)(lVar3 + 0xa8) = 0;
    (*pcVar2)(lVar3 + 0xc0);
  }
  *(code **)(lVar3 + 0xa0) = FUN_011d5490;
  *(undefined1 **)(lVar3 + 0xa8) = &LAB_00a2f3a0;
  *(undefined1 **)(lVar3 + 0xb0) = &LAB_00a2fa90;
  *(undefined1 **)(lVar3 + 0xb8) = &LAB_00a2fa9c;
  *(undefined8 *)(lVar3 + 0xc0) = param_1;
  return;
}


