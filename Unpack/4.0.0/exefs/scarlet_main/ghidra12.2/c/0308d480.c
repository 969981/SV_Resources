/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0308d480; name: FUN_0308d480
 */


void FUN_0308d480(long param_1,long param_2,undefined8 param_3)

{
  undefined *local_28;
  long lStack_20;
  undefined8 local_18;
  
  local_28 = &DAT_0464ce38;
  lStack_20 = param_2;
  local_18 = param_3;
  (**(code **)(**(long **)(param_1 + 0x18) + 0x38))
            (*(long **)(param_1 + 0x18),param_2 + 0x30,&local_28);
  return;
}


