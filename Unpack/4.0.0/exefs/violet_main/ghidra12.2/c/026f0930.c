/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026f0930; name: FUN_026f0930
 */


void FUN_026f0930(long param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if ((((lVar1 != 0) && (*(long *)(param_1 + 0x128) != lVar1)) &&
      (*(long *)(param_1 + 0x130) != lVar1)) &&
     ((*(long *)(param_1 + 0x138) != lVar1 && (*(long *)(param_1 + 0x140) != lVar1)))) {
    if (*(long *)(param_1 + 0x128) == 0) {
      *(long *)(param_1 + 0x128) = lVar1;
    }
    if (*(long *)(param_1 + 0x130) == 0) {
      *(long *)(param_1 + 0x130) = *param_2;
    }
    if (*(long *)(param_1 + 0x138) == 0) {
      *(long *)(param_1 + 0x138) = *param_2;
    }
    if (*(long *)(param_1 + 0x140) == 0) {
      *(long *)(param_1 + 0x140) = *param_2;
    }
  }
  return;
}


