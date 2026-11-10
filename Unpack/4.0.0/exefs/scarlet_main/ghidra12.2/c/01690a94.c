/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01690a94; name: FUN_01690a94
 */


undefined8 FUN_01690a94(long param_1,int *param_2)

{
  ulong uVar1;
  int iVar2;
  
  switch(*param_2) {
  case 0:
    FUN_01690c24(param_1);
    FUN_01690b94(param_1);
    if (*(char *)(*(long *)(*(long *)(param_1 + 0x48) + 0x38) + 0x8c) == '\0') {
      iVar2 = *param_2 + 2;
      goto LAB_01690b20;
    }
    *(undefined1 *)(param_1 + 0x11f) = 1;
    (**(code **)(**(long **)(param_1 + 0x218) + 0x370))();
    (**(code **)(**(long **)(param_1 + 0x218) + 0x378))();
    break;
  case 1:
    uVar1 = (**(code **)(**(long **)(param_1 + 0x218) + 0x380))();
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    break;
  case 2:
    (**(code **)(**(long **)(param_1 + 0x218) + 0xd8))();
    *param_2 = *param_2 + 1;
  case 3:
    uVar1 = (**(code **)(**(long **)(param_1 + 0x218) + 0xe0))();
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  default:
    return 1;
  }
  iVar2 = *param_2 + 1;
LAB_01690b20:
  *param_2 = iVar2;
  return 0;
}


