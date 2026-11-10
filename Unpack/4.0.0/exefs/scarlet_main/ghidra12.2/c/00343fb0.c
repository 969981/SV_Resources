/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00343fb0; name: FUN_00343fb0
 */


ulong FUN_00343fb0(long *param_1,char *param_2,ulong param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  
  if ((param_1 != (long *)0x0) && (lVar6 = *param_1, lVar6 != 0)) {
    lVar7 = param_1[1];
    puVar5 = (uint *)(lVar7 + 0x10);
    do {
      iVar4 = strcmp(*(char **)(puVar5 + -2),param_2);
      if (iVar4 == 0) {
        if ((lVar7 != 0) && (puVar5[-4] == 1)) {
          uVar3 = *puVar5;
          uVar1 = (uint)param_3;
          if ((int)uVar3 <= param_4) {
            uVar1 = uVar3;
          }
          uVar2 = (uint)param_3;
          if ((int)(param_3 >> 0x20) <= (int)uVar3) {
            uVar2 = uVar1;
          }
          param_3 = (ulong)uVar2;
        }
        break;
      }
      puVar5 = puVar5 + 8;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return param_3 & 0xffffffff;
}


