/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0056dbd0; name: FUN_0056dbd0
 */


void FUN_0056dbd0(undefined8 *param_1,long param_2)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  byte *pbVar4;
  
  pbVar4 = *(byte **)(param_2 + 0x10);
  if ((*pbVar4 & 1) == 0) {
    pbVar4 = pbVar4 + 1;
  }
  else {
    pbVar4 = *(byte **)(pbVar4 + 0x10);
  }
  bVar1 = *pbVar4;
  uVar2 = FUN_01cf7e20();
  param_1[2] = 0;
  param_1[3] = uVar2;
  *param_1 = 0;
  param_1[1] = 0;
  if ((bVar1 != 0) && (uVar3 = FUN_0056d9b0(param_1,pbVar4), (uVar3 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  return;
}


