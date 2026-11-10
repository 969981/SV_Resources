/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018335f0; name: FUN_018335f0
 */


void FUN_018335f0(long param_1,short *param_2)

{
  short *psVar1;
  short *psVar2;
  
  psVar2 = *(short **)(param_1 + 200);
  psVar1 = *(short **)(param_1 + 0xd0);
  if (psVar2 != psVar1) {
    if (*psVar2 != *param_2) {
      do {
        psVar2 = psVar2 + 1;
        if (psVar1 == psVar2) {
          psVar2 = psVar1;
          break;
        }
      } while (*psVar2 != *param_2);
    }
  }
  if (psVar1 == psVar2) {
    FUN_01833648();
    return;
  }
  return;
}


