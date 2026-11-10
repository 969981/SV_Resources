/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00891854; name: FUN_00891854
 */


undefined8
FUN_00891854(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
            undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  while( true ) {
    if (param_1 + 8 == lVar2) {
      return 0;
    }
    uVar1 = FUN_00890c5c(*(undefined8 *)(lVar2 + 0x10),param_2,param_3,param_4,param_5,param_6);
    if ((uVar1 & 1) != 0) break;
    lVar2 = *(long *)(lVar2 + 8);
  }
  return 1;
}


