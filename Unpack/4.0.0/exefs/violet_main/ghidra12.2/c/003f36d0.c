/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003f36d0; name: FUN_003f36d0
 */


undefined8 FUN_003f36d0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  size_t __n;
  
  if (*(int *)(param_2 + 0x11) == -1) {
    return 0;
  }
  uVar2 = FUN_0043adf0(*param_1,*param_2);
  if ((int)uVar2 != 0) {
    iVar1 = FUN_0043b650(*param_2);
    __n = (size_t)iVar1;
    memcpy(param_1 + 1,param_2 + 1,__n);
    memcpy(param_1 + 5,param_2 + 5,__n);
    memcpy(param_1 + 9,param_2 + 9,__n);
    memcpy(param_1 + 0xd,param_2 + 0xd,__n);
    uVar2 = 1;
    *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  }
  return uVar2;
}


