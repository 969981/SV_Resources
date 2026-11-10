/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0045c970; name: FUN_0045c970
 */


long FUN_0045c970(undefined8 param_1,long param_2,int param_3,int param_4,code *param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (0 < param_3) {
    iVar4 = 0;
    do {
      while( true ) {
        iVar2 = iVar4 + param_3;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        iVar2 = iVar2 >> 1;
        lVar1 = param_2 + iVar2 * param_4;
        iVar3 = (*param_5)(param_1,lVar1);
        if (iVar3 < 0) break;
        if (iVar3 == 0) {
          return lVar1;
        }
        iVar4 = iVar2 + 1;
        if (param_3 <= iVar4) {
          return 0;
        }
      }
      param_3 = iVar2;
    } while (iVar4 < iVar2);
  }
  return 0;
}


