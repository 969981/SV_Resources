/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00798620; name: FUN_00798620
 */


void FUN_00798620(long param_1)

{
  void *__s;
  undefined4 uVar1;
  long lVar2;
  undefined1 auStack_38 [20];
  undefined1 auStack_24 [4];
  
  if ((*(long *)(param_1 + 0x20) != 0) && (*(int *)(param_1 + 0x28) != 0)) {
    lVar2 = *(long *)PTR_DAT_047d0a08;
    __s = (void *)(*(long *)(param_1 + 0x20) + 0x17);
    memset(__s,0,0x45);
    uVar1 = FUN_0078f1d0();
    (**(code **)(*(long *)(lVar2 + 0x1f8) + 0x10))(auStack_38,lVar2 + 0x1f8,__s,auStack_24,uVar1);
  }
  return;
}


