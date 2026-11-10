/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fb31b4; name: FUN_00fb31b4
 */


void FUN_00fb31b4(long param_1)

{
  ulong uVar1;
  int iVar2;
  
  if (*(uint *)(param_1 + 0xa8d4) < 5) {
    iVar2 = 5;
    switch(*(uint *)(param_1 + 0xa8d4)) {
    case 0:
      uVar1 = FUN_00fbc0bc(param_1);
      if ((uVar1 & 1) != 0) {
        *(int *)(param_1 + 0xa8d4) = *(int *)(param_1 + 0xa8d4) + 1;
        goto switchD_00fb3200_caseD_1;
      }
      break;
    case 1:
switchD_00fb3200_caseD_1:
      FUN_00fb9b6c(param_1);
      *(int *)(param_1 + 0xa8d4) = *(int *)(param_1 + 0xa8d4) + 1;
    case 2:
      FUN_00fc7f18(param_1);
      FUN_00fcef78(param_1);
      FUN_00fcb350(param_1);
      *(int *)(param_1 + 0xa8d4) = *(int *)(param_1 + 0xa8d4) + 1;
    case 3:
      FUN_00fbc7d4(param_1);
      iVar2 = *(int *)(param_1 + 0xa8d4);
      *(int *)(param_1 + 0xa8d4) = iVar2 + 1;
      iVar2 = iVar2 + 2;
    case 4:
      *(undefined1 *)(param_1 + 0xa8d0) = 1;
      *(int *)(param_1 + 0xa8d4) = iVar2;
    }
  }
  return;
}


