/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0214e878; name: FUN_0214e878
 */


void FUN_0214e878(long param_1)

{
  ulong uVar1;
  
  if ((**(char **)(param_1 + 0x158) == '\0') || (*(char *)(param_1 + 0x300) != '\0')) {
    *(undefined2 *)(param_1 + 0x372) = 0;
  }
  else {
    if ((*(char *)(param_1 + 0x370) != '\0') &&
       (uVar1 = (**(code **)(**(long **)(param_1 + 200) + 0x98))
                          (*(long **)(param_1 + 200),param_1 + 0x130), (uVar1 & 1) != 0)) {
      *(undefined1 *)(param_1 + 0x370) = 0;
    }
    if ((*(char *)(param_1 + 0x374) != '\0') &&
       (uVar1 = (**(code **)(**(long **)(param_1 + 200) + 0x98))
                          (*(long **)(param_1 + 200),param_1 + 0x170), (uVar1 & 1) != 0)) {
      *(undefined1 *)(param_1 + 0x374) = 0;
    }
    if ((*(char *)(param_1 + 0x370) != '\0') || (*(char *)(param_1 + 0x374) != '\0')) {
      *(undefined2 *)(param_1 + 0x372) = 0x100;
      return;
    }
    if (**(char **)(param_1 + 0x138) != '\0') {
      (**(code **)(**(long **)(param_1 + 200) + 0x90))(*(long **)(param_1 + 200),param_1 + 0x130);
    }
    if (**(char **)(param_1 + 0x158) != '\0') {
      (**(code **)(**(long **)(param_1 + 200) + 0x90))(*(long **)(param_1 + 200),param_1 + 0x150);
    }
    if (**(char **)(param_1 + 0x178) != '\0') {
      (**(code **)(**(long **)(param_1 + 200) + 0x90))(*(long **)(param_1 + 200),param_1 + 0x170);
    }
    if (**(char **)(param_1 + 0x198) != '\0') {
      (**(code **)(**(long **)(param_1 + 200) + 0x90))(*(long **)(param_1 + 200),param_1 + 400);
    }
    FUN_0214e5dc(param_1);
    (**(code **)(**(long **)(param_1 + 200) + 0x88))(*(long **)(param_1 + 200),param_1 + 0x150);
    *(undefined2 *)(param_1 + 0x372) = 1;
    *(undefined1 *)(param_1 + 0x376) = 0;
  }
  *(undefined2 *)(param_1 + 0x370) = 0;
  *(undefined2 *)(param_1 + 0x374) = 0;
  return;
}


