/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03539fa0; name: FUN_03539fa0
 */


void FUN_03539fa0(int param_1,undefined8 param_2)

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
  FUN_0353a070(param_1,lVar1,param_2);
  return;
}


