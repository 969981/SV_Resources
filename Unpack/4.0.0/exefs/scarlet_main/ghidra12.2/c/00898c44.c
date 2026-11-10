/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00898c44; name: FUN_00898c44
 */


void FUN_00898c44(long param_1,undefined8 param_2)

{
  char acStack_a8 [136];
  
  nn::util::SNPrintf(acStack_a8,0x88,"%s_%s.bflan",*(undefined8 *)(param_1 + 0x30),param_2);
  (**(code **)(**(long **)(param_1 + 0x40) + 0x50))
            (*(long **)(param_1 + 0x40),0x616e696d,acStack_a8);
  return;
}


