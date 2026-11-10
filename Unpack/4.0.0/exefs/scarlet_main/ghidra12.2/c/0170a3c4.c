/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0170a3c4; name: FUN_0170a3c4
 */


bool FUN_0170a3c4(long param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long *local_38;
  
  *(undefined1 *)(param_1 + 0x2e8) = 0;
  if ((*(char *)(param_1 + 0x82) == '\0') || (*(char *)(param_1 + 0x2ec) == '\0')) {
    bVar1 = false;
  }
  else {
    local_50 = *(undefined8 *)(param_1 + 0x2a8);
    uStack_48 = *(undefined8 *)(param_1 + 0x2b0);
    local_40 = *(undefined8 *)(param_1 + 0x2b8);
    local_38 = *(long **)(param_1 + 0x2c0);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x18))();
    }
    uVar2 = FUN_0170a4ec(param_1,param_2,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    if ((uVar2 & 1) == 0) {
      local_70 = *(undefined8 *)(param_1 + 0x2c8);
      uStack_68 = *(undefined8 *)(param_1 + 0x2d0);
      local_60 = *(undefined8 *)(param_1 + 0x2d8);
      local_58 = *(long **)(param_1 + 0x2e0);
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x18))();
      }
      uVar2 = FUN_0170a4ec(param_1,param_2,&local_70);
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      if ((uVar2 & 1) == 0) {
        bVar1 = *(char *)(param_1 + 0x2e8) != '\0';
      }
      else {
        bVar1 = true;
        *(undefined1 *)(param_1 + 0x2e8) = 1;
        *(undefined1 *)(param_1 + 0x2ea) = 1;
      }
    }
    else {
      bVar1 = true;
      *(undefined1 *)(param_1 + 0x2e8) = 1;
      *(undefined1 *)(param_1 + 0x2ea) = 0;
    }
  }
  return bVar1;
}


