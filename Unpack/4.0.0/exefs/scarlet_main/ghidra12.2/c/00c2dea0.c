/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c2dea0; name: FUN_00c2dea0
 */


void FUN_00c2dea0(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 uVar5;
  int iVar6;
  int *piVar7;
  undefined1 *local_28;
  
  if (*(char *)(param_1 + 0x70) == '\n') {
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x90);
    if (*(char *)(param_1 + 0x70) == '\t') {
      uVar2 = uVar3 + 7;
      if (-1 < (int)uVar3) {
        uVar2 = uVar3;
      }
      iVar6 = (uVar2 & 0xfffffff8) + 8;
    }
    else {
      iVar6 = uVar3 + 1;
    }
    *(int *)(param_1 + 0x90) = iVar6;
  }
  piVar7 = (int *)(param_1 + 0x80);
  lVar1 = (long)*(int *)(param_1 + 0x84) + 1;
  iVar6 = (int)lVar1;
  *(int *)(param_1 + 0x84) = iVar6;
  if (iVar6 < *piVar7) {
    uVar5 = *(undefined1 *)(*(long *)(param_1 + 0x78) + lVar1);
  }
  else {
    if (*(char *)(param_1 + 0x88) != '\0') {
      *(undefined1 *)(param_1 + 0x70) = 0;
      return;
    }
    if ((*(char **)(param_1 + 0x98) != (char *)0x0) && (*(int *)(param_1 + 0xa0) < *piVar7)) {
      std::string::append(*(char **)(param_1 + 0x98),
                          *(long *)(param_1 + 0x78) + (long)*(int *)(param_1 + 0xa0));
      *(undefined4 *)(param_1 + 0xa0) = 0;
    }
    local_28 = (undefined1 *)0x0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    do {
      uVar4 = (**(code **)(**(long **)(param_1 + 0x60) + 0x10))
                        (*(long **)(param_1 + 0x60),&local_28,piVar7);
      if ((uVar4 & 1) == 0) {
        uVar5 = 0;
        *(undefined4 *)(param_1 + 0x80) = 0;
        *(undefined1 *)(param_1 + 0x88) = 1;
        goto LAB_00c2df20;
      }
    } while (*piVar7 == 0);
    *(undefined1 **)(param_1 + 0x78) = local_28;
    uVar5 = *local_28;
  }
LAB_00c2df20:
  *(undefined1 *)(param_1 + 0x70) = uVar5;
  return;
}


