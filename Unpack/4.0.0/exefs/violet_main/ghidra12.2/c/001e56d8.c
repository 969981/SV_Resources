/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001e56d8; name: FUN_001e56d8
 */


int FUN_001e56d8(long param_1,char *param_2,undefined1 *param_3)

{
  int iVar1;
  long local_38;
  
  *param_2 = '\0';
  FUN_001ec308(*(undefined8 *)(param_1 + 0x1e8));
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  FUN_001ec308(*(undefined8 *)(param_1 + 0x1d0));
  memset((void *)(param_1 + 0xf0),0,0x578);
  *(undefined8 *)(param_1 + 0xf8) = 0xffffffffffffffff;
  iVar1 = FUN_001e57d4(param_1,&local_38,param_2);
  if (iVar1 == 0) {
    if (*(long *)(local_38 + 0x4c0) + *(long *)(local_38 + 0x4e0) != 0) {
      iVar1 = 0;
      *param_3 = 1;
      goto LAB_001e5798;
    }
    if (*param_2 != '\0') {
      iVar1 = 0;
      goto LAB_001e5798;
    }
    iVar1 = FUN_001e55bc(local_38,param_3);
  }
  if (iVar1 == 0x59) {
    return 0x59;
  }
  if ((iVar1 != 0) && (local_38 != 0)) {
    FUN_001e4c44(param_1,local_38,1);
    return iVar1;
  }
LAB_001e5798:
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_001cf534(param_1);
  }
  return iVar1;
}


