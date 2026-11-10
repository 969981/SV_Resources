/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0117356c; name: FUN_0117356c
 */


void FUN_0117356c(long param_1,long *param_2,int param_3)

{
  if (*(long *)(*(long *)(param_1 + 0x98) + (long)param_3 * 8) == 0) {
    FUN_008d43e0("The Resource to be cleared does not exist. ResourceId : %d.\n",param_3);
    return;
  }
  FUN_008daa84();
  (**(code **)(*param_2 + 0x18))
            (param_2,*(undefined8 *)(*(long *)(param_1 + 0x98) + (long)param_3 * 8));
  *(undefined8 *)(*(long *)(param_1 + 0x98) + (long)param_3 * 8) = 0;
  return;
}


