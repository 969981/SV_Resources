/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0278ced4; name: FUN_0278ced4
 */


void FUN_0278ced4(Result *param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  char local_8 [8];
  
  if ((param_1 != (Result *)0x0) && (param_2 != 0)) {
    local_8[0] = '\0';
    local_8[1] = '\0';
    local_8[2] = '\0';
    local_8[3] = '\0';
    local_8[4] = '\0';
    local_8[5] = '\0';
    local_8[6] = '\0';
    local_8[7] = '\0';
    iVar1 = FUN_0278cf24(param_2,param_3,local_8);
    if (iVar1 == 0) {
      nn::ssl::GetSslResultFromValue(param_1,local_8,8);
    }
  }
  return;
}


