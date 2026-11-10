/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029864bc; name: FUN_029864bc
 */


void FUN_029864bc(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  FUN_01582534();
  FUN_012409b4();
  uVar1 = FUN_02986820();
  if ((uVar1 & 1) == 0) {
    uVar2 = FUN_01243584(param_1);
    FUN_0166616c(uVar2,5,0);
    uVar2 = FUN_01243584(param_1);
    FUN_0124dc24(uVar2,5,0);
    return;
  }
  return;
}


