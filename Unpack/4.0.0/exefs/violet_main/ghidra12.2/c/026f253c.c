/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026f253c; name: FUN_026f253c
 */


bool FUN_026f253c(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    return false;
  }
  if (*(long *)(param_1 + 0x128) == lVar1) {
    lVar2 = param_1 + 0x128;
  }
  else if (*(long *)(param_1 + 0x130) == lVar1) {
    lVar2 = param_1 + 0x130;
  }
  else if (*(long *)(param_1 + 0x138) == lVar1) {
    lVar2 = param_1 + 0x138;
  }
  else {
    lVar2 = param_1 + 0x140;
    if (*(long *)(param_1 + 0x140) != lVar1) {
      lVar2 = param_1 + 0x148;
    }
  }
  return lVar2 != param_1 + 0x148;
}


