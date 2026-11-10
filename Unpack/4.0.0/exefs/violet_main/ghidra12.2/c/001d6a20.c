/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001d6a20; name: FUN_001d6a20
 */


int FUN_001d6a20(undefined8 param_1,undefined8 *param_2,int *param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *param_3;
  if (iVar1 == 4) {
    FUN_001ec308(*param_2);
    *param_2 = 0;
    iVar1 = *param_3;
  }
  if (iVar1 != 0) {
    iVar1 = FUN_003822f0(param_2);
    if ((param_4 == 0) && (iVar1 != 0)) {
      FUN_001d6780(param_1,param_2);
      param_4 = 0x3d;
    }
    *param_3 = 0;
  }
  return param_4;
}


