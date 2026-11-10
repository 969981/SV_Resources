/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029834a8; name: FUN_029834a8
 */


void FUN_029834a8(undefined8 param_1,undefined1 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  *param_2 = 0;
  FUN_01582534();
  uVar1 = FUN_014813e4();
  uVar2 = FUN_01481400(uVar1,*param_3);
  if ((uVar2 & 1) != 0) {
    uVar1 = FUN_014813f4(param_1,*param_3);
    FUN_0298350c(param_1,uVar1);
    *param_2 = 1;
  }
  return;
}


