/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00126b30; name: FUN_00126b30
 */


void FUN_00126b30(long param_1,int param_2,long *param_3)

{
  byte bVar1;
  long lVar2;
  
  if (param_2 == 0) {
    bVar1 = 0;
  }
  else if (param_2 == 5) {
    lVar2 = FUN_0013be00(param_1,"error in error handling",0x17);
    *param_3 = lVar2;
    bVar1 = *(byte *)(lVar2 + 8) | 0x40;
  }
  else if (param_2 == 4) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0x110);
    *param_3 = lVar2;
    bVar1 = *(byte *)(lVar2 + 8) | 0x40;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x10);
    *param_3 = *(long *)(lVar2 + -0x10);
    bVar1 = *(byte *)(lVar2 + -8);
  }
  *(byte *)(param_3 + 1) = bVar1;
  *(long **)(param_1 + 0x10) = param_3 + 2;
  return;
}


