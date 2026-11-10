/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e62a04; name: FUN_01e62a04
 */


undefined8 FUN_01e62a04(long param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  undefined8 local_38;
  long local_18;
  
  if (((*(char *)(param_1 + 0xd8) != '\0') && (*(long *)(param_1 + 0x58) != 0)) &&
     (*(short *)(*(long *)(param_1 + 0x58) + 0x1a) != 0)) {
    bVar3 = *(long *)(param_1 + 0xe8) != 0;
    uVar4 = 1;
    if (bVar3) {
      uVar4 = 2;
    }
    uVar1 = (uint)bVar3;
    if (*(long *)(param_1 + 0xf0) != 0) {
      uVar1 = uVar4;
    }
    if (*(long *)(param_1 + 0xf8) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(long *)(param_1 + 0x100) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*(long *)(param_1 + 0x58) == 0) {
      local_18 = 0;
    }
    else {
      FUN_01c27dd8(&local_18);
      if (local_18 != 0) {
        iVar2 = *(int *)(local_18 + 0xf8);
        FUN_01c1abf8(&local_18);
        if ((int)uVar1 < iVar2) {
          return 0;
        }
        if (*(long *)(param_1 + 0x58) == 0) {
          local_18 = 0;
        }
        else {
          FUN_01c27dd8(&local_18);
          if (local_18 != 0) {
            local_38 = *(undefined8 *)(param_1 + 0xe8);
            FUN_01e62b4c(local_18,&local_38,0);
            local_38 = *(undefined8 *)(param_1 + 0xf0);
            FUN_01e62b4c(local_18,&local_38,1);
            local_38 = *(undefined8 *)(param_1 + 0xf8);
            FUN_01e62b4c(local_18,&local_38,2);
            local_38 = *(undefined8 *)(param_1 + 0x100);
            FUN_01e62b4c(local_18,&local_38,3);
          }
        }
        FUN_01c1abf8(&local_18);
        *(undefined1 *)(param_1 + 0x108) = 1;
        return 1;
      }
    }
    FUN_01c1abf8(&local_18);
  }
  return 0;
}


