/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029883a0; name: FUN_029883a0
 */


bool FUN_029883a0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = FUN_01243584();
  uVar3 = FUN_02988400(uVar2,param_2,param_3);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    uVar2 = FUN_01243584(param_1);
    FUN_02988474(uVar2,param_2,param_3);
  }
  return bVar1;
}


