/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00684790; name: FUN_00684790
 */


void FUN_00684790(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  byte *pbVar3;
  
  pbVar3 = *(byte **)(param_2 + 0x10);
  if ((*pbVar3 & 1) == 0) {
    pbVar3 = pbVar3 + 1;
  }
  else {
    pbVar3 = *(byte **)(pbVar3 + 0x10);
  }
  uVar1 = FUN_01cf7e20();
  param_1[2] = 0;
  param_1[3] = uVar1;
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_01cf7e20();
  param_1[6] = 0;
  param_1[7] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = FUN_01cf7e20();
  param_1[10] = 0;
  param_1[0xb] = uVar1;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar2 = FUN_006840a0(param_1,pbVar3);
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  return;
}


