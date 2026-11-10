/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0216155c; name: FUN_0216155c
 */


void FUN_0216155c(long param_1)

{
  float fVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if ((((*(char *)(param_1 + 0x2af) != '\0') && (*(char *)(param_1 + 0x82) != '\0')) &&
      ((~*(uint *)(param_1 + 0xd0) & 0xf) == 0)) && (*(char *)(param_1 + 0x80) != '\0')) {
    fVar1 = *(float *)(*(long *)(param_1 + 600) + 0x1d4);
    uStack_28 = *(undefined8 *)(param_1 + 0x288);
    *(int *)(param_1 + 0x2a4) = (int)fVar1;
    local_30 = CONCAT44(*(float *)(param_1 + 0x284) + fVar1 * *(float *)(param_1 + 0x1a8),
                        (int)*(undefined8 *)(param_1 + 0x280));
    (**(code **)(**(long **)(param_1 + 200) + 0x28))
              (*(long **)(param_1 + 200),param_1 + 0x148,&local_30);
    FUN_00f6be74(fVar1,*(undefined8 *)(param_1 + 0x238));
  }
  return;
}


