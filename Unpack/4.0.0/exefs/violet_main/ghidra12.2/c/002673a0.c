/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002673a0; name: FUN_002673a0
 */


void FUN_002673a0(undefined8 *param_1,char *param_2)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  cVar1 = *param_2;
  uVar2 = FUN_01cf7e20();
  param_1[2] = 0;
  param_1[3] = uVar2;
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = FUN_01cf7e20();
  param_1[6] = 0;
  param_1[7] = uVar2;
  param_1[4] = 0;
  param_1[5] = 0;
  if ((cVar1 != '\0') && (uVar3 = FUN_00267020(param_1,param_2), (uVar3 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  return;
}


