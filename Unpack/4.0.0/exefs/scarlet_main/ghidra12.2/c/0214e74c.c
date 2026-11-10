/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0214e74c; name: FUN_0214e74c
 */


void FUN_0214e74c(long param_1)

{
  ulong uVar1;
  
  if ((**(char **)(param_1 + 0x178) == '\0') || (*(char *)(param_1 + 0x300) != '\0')) {
    *(undefined2 *)(param_1 + 0x374) = 0;
  }
  else {
    if (*(char *)(param_1 + 0x370) != '\0') {
      uVar1 = (**(code **)(**(long **)(param_1 + 200) + 0x98))
                        (*(long **)(param_1 + 200),param_1 + 0x130);
      if ((uVar1 & 1) == 0) {
        if (*(char *)(param_1 + 0x370) != '\0') {
          *(undefined2 *)(param_1 + 0x374) = 0x100;
          return;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x370) = 0;
      }
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
    (**(code **)(**(long **)(param_1 + 200) + 0x88))(*(long **)(param_1 + 200),param_1 + 0x170);
    *(undefined2 *)(param_1 + 0x374) = 1;
    *(undefined1 *)(param_1 + 0x376) = 0;
  }
  *(undefined4 *)(param_1 + 0x370) = 0;
  return;
}


