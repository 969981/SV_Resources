/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008aa96c; name: FUN_008aa96c
 */


void FUN_008aa96c(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long local_58 [4];
  long lStack_38;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x228) >> 2 & 1) == 0) {
    if (((*(byte *)(lVar2 + 4) >> 1 & 1) != 0) && (*(char *)(param_1 + 0x54) == '\0'))
    goto LAB_008aa9bc;
    if ((*(byte *)(lVar2 + 4) >> 1 & 1) != 0) {
      return;
    }
  }
  if (*(long *)(param_1 + 0x58) == 0) {
    return;
  }
LAB_008aa9bc:
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[0] = *(long *)(param_1 + 0x48) + 0x40;
  FUN_008f0dc8(param_3,local_58[0],local_58 + 1,0);
  FUN_00c6cfb4(param_3,1,local_58,0);
  FUN_00d8d198(param_3,*(long *)(param_1 + 0x48) + 0x88);
  FUN_008ab86c(param_1,param_2,param_3);
  plVar1 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                   (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
  lStack_38 = plVar1[1];
  local_58[3] = *plVar1 + (long)*(int *)(param_1 + 0x50);
  lVar2 = *(long *)(param_2 + 0xb8);
  FUN_008f1150(param_3,*(undefined4 *)
                        (*(long *)(*(long *)(param_1 + 0x38) + 0x18) +
                        (long)*(int *)(param_1 + 0x40) * 4),0,local_58 + 3,0x230);
  FUN_008f0a30(param_3,3,1,lVar2 + 0x248,6,0);
  FUN_00d8d070(param_3,0x80);
  FUN_008f110c(param_3,0x20);
  FUN_00892e3c(param_2,param_3);
  if (((*(long *)(param_1 + 8) != 0) && ((*(byte *)(param_1 + 0x228) >> 2 & 1) == 0)) &&
     ((*(byte *)(*(long *)(param_1 + 8) + 4) >> 1 & 1) != 0)) {
    *(undefined1 *)(param_1 + 0x54) = 1;
  }
  return;
}


