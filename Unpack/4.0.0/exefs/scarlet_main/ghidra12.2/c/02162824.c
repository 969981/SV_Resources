/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02162824; name: FUN_02162824
 */


void FUN_02162824(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  
  if (**(char **)(param_1 + 0x198) == '\0') {
    return;
  }
  if (**(char **)(param_1 + 0x1b8) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x129) != '\0') {
    if (*(char *)(param_1 + 0x128) == '\0') {
      FUN_017e0d98(param_1,0);
    }
    else {
      if (*(char *)(param_1 + 0x12a) == '\0') {
        *(undefined4 *)(param_1 + 0x228) = 1;
      }
      FUN_017e0d98(param_1,1);
      *(undefined2 *)(param_1 + 0x129) = 0x100;
    }
  }
  if (3 < *(int *)(param_1 + 0x228) - 1U) {
    return;
  }
  lVar1 = param_1 + 400;
  lVar2 = param_1 + 0x1b0;
  switch(*(int *)(param_1 + 0x228)) {
  case 1:
    uVar3 = (**(code **)(**(long **)(param_1 + 200) + 0x98))(*(long **)(param_1 + 200),lVar2);
    if ((uVar3 & 1) == 0) {
      (**(code **)(**(long **)(param_1 + 200) + 0x90))(*(long **)(param_1 + 200),lVar2);
    }
    (**(code **)(**(long **)(param_1 + 200) + 0xa8))(0,*(long **)(param_1 + 200),lVar1);
    (**(code **)(**(long **)(param_1 + 200) + 0x88))(*(long **)(param_1 + 200),lVar1);
    uVar4 = 2;
    break;
  case 2:
    uVar3 = (**(code **)(**(long **)(param_1 + 200) + 0x98))(*(long **)(param_1 + 200),lVar1);
    if ((uVar3 & 1) == 0) {
      return;
    }
    goto LAB_021629d0;
  case 3:
    uVar3 = (**(code **)(**(long **)(param_1 + 200) + 0x98))(*(long **)(param_1 + 200),lVar1);
    if ((uVar3 & 1) == 0) {
      (**(code **)(**(long **)(param_1 + 200) + 0x90))(*(long **)(param_1 + 200),lVar1);
    }
    (**(code **)(**(long **)(param_1 + 200) + 0xa8))(0,*(long **)(param_1 + 200),lVar2);
    (**(code **)(**(long **)(param_1 + 200) + 0x88))(*(long **)(param_1 + 200),lVar2);
    uVar4 = 4;
    break;
  case 4:
    uVar3 = (**(code **)(**(long **)(param_1 + 200) + 0x98))(*(long **)(param_1 + 200),lVar2);
    if ((uVar3 & 1) == 0) {
      return;
    }
    FUN_017e0d98(param_1,0);
LAB_021629d0:
    *(undefined4 *)(param_1 + 0x228) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x228) = uVar4;
  return;
}


