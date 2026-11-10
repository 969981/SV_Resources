/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


