/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026f0d10; name: FUN_026f0d10
 */


void FUN_026f0d10(long param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    if (*(long *)(param_1 + 0x128) == lVar1) {
      *(undefined8 *)(param_1 + 0x128) = 0;
      lVar1 = *param_2;
    }
    if (*(long *)(param_1 + 0x130) == lVar1) {
      *(undefined8 *)(param_1 + 0x130) = 0;
      lVar1 = *param_2;
    }
    if (*(long *)(param_1 + 0x138) == lVar1) {
      *(undefined8 *)(param_1 + 0x138) = 0;
      lVar1 = *param_2;
    }
    if (*(long *)(param_1 + 0x140) == lVar1) {
      *(undefined8 *)(param_1 + 0x140) = 0;
    }
  }
  return;
}


