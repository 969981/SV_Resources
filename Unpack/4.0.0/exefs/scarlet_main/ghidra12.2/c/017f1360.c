/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017f1360; name: FUN_017f1360
 */


undefined8 FUN_017f1360(long param_1)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x48))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  cVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x48))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if (cVar1 == '\0') {
    if (cVar2 != '\x01') {
      return 0xfffffff6;
    }
  }
  else if (cVar1 == '\x01' && cVar2 != '\0') {
    return 0xfffffff6;
  }
  uVar3 = FUN_017f1188(param_1);
  return uVar3;
}


