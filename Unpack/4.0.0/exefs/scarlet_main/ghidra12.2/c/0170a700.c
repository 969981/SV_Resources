/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0170a700; name: FUN_0170a700
 */


void FUN_0170a700(undefined4 *param_1)

{
  long lVar1;
  int iVar2;
  float fVar3;
  
  if ((DAT_0483af40 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_0483af40);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_02a30078,&DAT_0483af30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_0483af40);
    }
  }
  lVar1 = DAT_0483af30;
  DAT_0483af48 = DAT_0483af30;
  *(undefined4 *)(DAT_0483af30 + 0xe8) = *param_1;
  fVar3 = (float)param_1[1] * 0.5;
  *(float *)(lVar1 + 0xf0) = fVar3;
  *(float *)(lVar1 + 0xec) = fVar3 * fVar3;
  return;
}


