/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01208278; name: FUN_01208278
 */


void FUN_01208278(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  if (((DAT_04837608 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04837608), iVar4 != 0)) {
    FUN_00100190(&LAB_00a92af8,&DAT_048375f8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04837608);
  }
  lVar3 = DAT_048375f8;
  DAT_04837610 = DAT_048375f8;
  lVar1 = *(long *)(DAT_048375f8 + 0x1b8);
  lVar2 = *(long *)(DAT_048375f8 + 0x1c0);
  if (lVar1 != lVar2) {
    FUN_01208388(*(undefined8 *)(lVar1 + 0x20),*(undefined4 *)(lVar1 + 0x30),param_1);
    while (lVar1 + 0x60 != lVar2) {
      FUN_01208388(*(undefined8 *)(lVar1 + 0x80),*(undefined4 *)(lVar1 + 0x90),param_1);
      lVar1 = lVar1 + 0x60;
    }
  }
  lVar1 = *(long *)(lVar3 + 0x1f0);
  lVar2 = *(long *)(lVar3 + 0x1f8);
  if (lVar1 != lVar2) {
    FUN_0120858c(*(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x30),
                 *(undefined8 *)(lVar1 + 0x40),param_1);
    while (lVar1 + 0x70 != lVar2) {
      FUN_0120858c(*(undefined8 *)(lVar1 + 0x90),*(undefined8 *)(lVar1 + 0xa0),
                   *(undefined8 *)(lVar1 + 0xb0),param_1);
      lVar1 = lVar1 + 0x70;
    }
  }
  return;
}


