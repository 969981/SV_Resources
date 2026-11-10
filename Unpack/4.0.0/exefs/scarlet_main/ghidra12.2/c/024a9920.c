/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024a9920; name: FUN_024a9920
 */


void FUN_024a9920(long *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  if (param_1[2] != 0) {
    lVar1 = *param_1;
    plVar2 = (long *)param_1[1];
    *(undefined8 *)(*plVar2 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = *plVar2;
    param_1[2] = 0;
    while (plVar2 != param_1) {
      plVar3 = (long *)plVar2[1];
      FUN_024a8be8(plVar2 + 2);
      (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],plVar2,0x20,8);
      plVar2 = plVar3;
    }
  }
  return;
}


