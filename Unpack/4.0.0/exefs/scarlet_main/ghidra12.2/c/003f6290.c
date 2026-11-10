/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003f6290; name: FUN_003f6290
 */


undefined8 FUN_003f6290(long param_1,long param_2)

{
  undefined8 uVar1;
  long local_28 [3];
  
  uVar1 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    local_28[1] = 0;
    local_28[0] = param_2;
    uVar1 = FUN_00451a40(*(undefined8 *)(param_1 + 0x10),local_28);
  }
  return uVar1;
}


