/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01889fcc; name: FUN_01889fcc
 */


void FUN_01889fcc(long *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (((DAT_0483af40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0483af40), iVar1 != 0)) {
    FUN_00100190(&LAB_02a30078,&DAT_0483af30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483af40);
  }
  DAT_0483af48 = DAT_0483af30;
  lVar3 = 0;
  if (*param_1 != 0) {
    lVar2 = *(long *)(*param_1 + 0x10);
    lVar3 = 0;
    if (lVar2 != 0) {
      lVar3 = lVar2 + -0x28;
    }
  }
  *(long *)(DAT_0483af30 + 3000) = lVar3;
  return;
}


