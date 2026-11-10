/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0290499c; name: FUN_0290499c
 */


undefined2 FUN_0290499c(long param_1,int param_2)

{
  undefined2 uVar1;
  long lVar2;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x30));
    uVar1 = 0;
    if (lVar2 != 0) {
      uVar1 = FUN_029049e8(*(undefined8 *)(param_1 + 0x50),lVar2,1);
    }
  }
  return uVar1;
}


