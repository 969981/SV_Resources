/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0043e8d0; name: FUN_0043e8d0
 */


long FUN_0043e8d0(long param_1,undefined8 param_2)

{
  int iVar1;
  code *pcVar2;
  
  if (((*(long *)(param_1 + 0x10) == 0) ||
      (pcVar2 = *(code **)(*(long *)(param_1 + 0x10) + 0xb0), pcVar2 == (code *)0x0)) ||
     (iVar1 = (*pcVar2)(param_1,10,0,param_2), iVar1 < 1)) {
    return 0;
  }
  return (long)iVar1;
}


