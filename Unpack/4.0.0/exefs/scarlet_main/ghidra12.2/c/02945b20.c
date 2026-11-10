/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02945b20; name: FUN_02945b20
 */


void FUN_02945b20(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  
  if (*(int *)(*(long *)(param_1 + 0x48) + 0x68) != 0) {
    lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x308);
    if (lVar2 == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = *(int *)(lVar2 + 0xc) != 0;
    }
    FUN_02945a30(param_1,param_2,bVar1,1);
    lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x288);
    if (((lVar2 != 0) && (*(byte *)(lVar2 + 10) < 2)) &&
       (*(undefined4 *)(lVar2 + 0xc) = 1, *(byte *)(lVar2 + 10) == 1)) {
      *(undefined1 *)(lVar2 + 10) = 2;
    }
  }
  return;
}


