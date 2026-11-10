/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0353ac00; name: FUN_0353ac00
 */


void FUN_0353ac00(int param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  lVar1 = nn::os::GetTlsValue((&DAT_048d2d70)[param_1]);
  if (lVar1 == 0) {
    lVar1 = (long)param_1;
    if (*(int *)(&DAT_048d2100 + lVar1 * 0x638) == 0) {
      FUN_03539060(param_1,0);
    }
    else {
      lVar2 = nn::os::GetTlsValue((&DAT_048d2d70)[lVar1],0);
      if ((lVar2 == 0) &&
         (puVar3 = (undefined8 *)FUN_03539a30(param_1,0), puVar3 != (undefined8 *)0x0)) {
        nn::os::SetTlsValue((&DAT_048d2d70)[lVar1],puVar3);
        uVar4 = nn::os::GetTlsValue((&DAT_048d2d70)[lVar1]);
        *puVar3 = uVar4;
      }
    }
    lVar1 = nn::os::GetTlsValue((&DAT_048d2d70)[lVar1]);
  }
  FUN_0353ace0(param_1,lVar1,param_2,param_3);
  return;
}


