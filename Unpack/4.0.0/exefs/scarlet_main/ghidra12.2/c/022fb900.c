/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022fb900; name: FUN_022fb900
 */


undefined8 FUN_022fb900(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  float fVar4;
  
  if (((DAT_04845148 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04845148), iVar2 != 0)) {
    DAT_04845738 = '\x01';
    __cxa_guard_release(&DAT_04845148);
  }
  pcVar3 = (char *)FUN_022fb790(param_1,1);
  fVar4 = 0.0;
  lVar1 = 4;
  if (DAT_04845738 == '\0') {
    lVar1 = -1;
  }
  if (((*pcVar3 == '\x01') || (*pcVar3 == '\0')) && (*(long *)(pcVar3 + 8) != 0)) {
    fVar4 = *(float *)(*(long *)(pcVar3 + 8) + lVar1);
  }
  FUN_00c46da0((double)fVar4,param_1);
  return 1;
}


