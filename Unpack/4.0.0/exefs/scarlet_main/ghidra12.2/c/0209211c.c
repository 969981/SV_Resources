/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0209211c; name: FUN_0209211c
 */


void FUN_0209211c(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = FUN_02092180(param_1,*param_2);
  if ((((*(long *)(lVar1 + 0x268) == 0) || (*(short *)(*(long *)(lVar1 + 0x268) + 0x1a) == 0)) &&
      (uVar2 = FUN_014004b0(lVar1 + 0x250), (uVar2 & 1) == 0)) ||
     (*(long **)(lVar1 + 0x260) == (long *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02092164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar1 + 0x260) + 0x148))();
  return;
}


