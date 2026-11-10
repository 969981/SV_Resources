/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007c7240; name: FUN_007c7240
 */


void FUN_007c7240(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  undefined1 *__dest;
  
  puVar1 = PTR_DAT_047d1008 + 0x10;
  *param_1 = (long)(PTR_DAT_047d10f0 + 0x10);
  plVar6 = param_1 + 1;
  *plVar6 = (long)puVar1;
  param_1[2] = (long)param_1 + 0x1c;
  *(undefined4 *)(param_1 + 3) = 0x80;
  FUN_007c450c(plVar6);
  *plVar6 = (long)(PTR_DAT_047d1010 + 0x10);
  __dest = (undefined1 *)param_1[2];
  if (__dest != &DAT_03c25b16) {
    cVar3 = *PTR_DAT_047d1018;
    lVar5 = 0;
    cVar4 = DAT_03c25b16;
    while (cVar4 != cVar3) {
      if (lVar5 == 0x80000) {
        lVar5 = 0;
        break;
      }
      if ((&DAT_03c25b17)[lVar5] == cVar3) {
        lVar5 = lVar5 + 1;
        break;
      }
      cVar4 = (&DAT_03c25b18)[lVar5];
      lVar5 = lVar5 + 2;
    }
    iVar2 = (int)lVar5;
    if ((int)param_1[3] <= (int)lVar5) {
      iVar2 = (int)param_1[3] + -1;
    }
    memcpy(__dest,&DAT_03c25b16,(long)iVar2);
    __dest[iVar2] = cVar3;
  }
  *plVar6 = (long)(PTR_DAT_047d1020 + 0x10);
  return;
}


