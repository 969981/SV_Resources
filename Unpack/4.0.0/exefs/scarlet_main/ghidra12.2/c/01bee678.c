/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01bee678; name: FUN_01bee678
 */


void FUN_01bee678(void)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  
  if (((DAT_0483af40 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0483af40), iVar4 != 0)) {
    FUN_00100190(&LAB_02a30078,&DAT_0483af30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483af40);
  }
  lVar3 = DAT_0483af30;
  DAT_0483af48 = DAT_0483af30;
  if (*(char *)(DAT_0483af30 + 0x100) != '\0') {
    uVar2 = *(int *)(DAT_0483af30 + 0xbc4) + 1;
    puVar1 = (uint *)(DAT_0483af30 + 0xbc0);
    *(uint *)(DAT_0483af30 + 0xbc4) = uVar2;
    if (*puVar1 <= uVar2) {
      *(undefined4 *)(lVar3 + 0xbc4) = 0;
      FUN_011358c8();
      return;
    }
  }
  return;
}


