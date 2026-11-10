/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


