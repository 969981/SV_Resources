/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01240958; name: FUN_01240958
 */


void FUN_01240958(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  FUN_01582534();
  FUN_012409b4();
  lVar1 = FUN_0106fc68();
  if (lVar1 != 0) {
    FUN_01582534(param_1);
    FUN_012409b4();
    plVar2 = (long *)FUN_0106fc68();
    uVar3 = (**(code **)(*plVar2 + 0x200))();
    if ((uVar3 & 1) == 0) {
      FUN_012425b0(param_1);
      return;
    }
  }
  return;
}


