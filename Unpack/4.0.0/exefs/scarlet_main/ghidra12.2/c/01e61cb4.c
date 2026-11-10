/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e61cb4; name: FUN_01e61cb4
 */


void FUN_01e61cb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  long local_60;
  undefined1 local_58;
  char cStack_57;
  undefined6 uStack_56;
  undefined8 local_50;
  undefined4 local_48 [2];
  long *local_40 [4];
  
  FUN_01267a34(local_40,param_3,param_4);
  local_48[0] = 0;
  local_58 = 0;
  cStack_57 = '\0';
  local_50 = 0;
  if (local_40[0] != (long *)0x0) {
    FUN_01e61d90(&local_60,local_48);
    if (((local_40[0] != (long *)0x0) &&
        (cVar1 = *(char *)(*local_40[0] + local_40[0][2]), local_40[0][2] = local_40[0][2] + 1,
        cVar1 == -0x47)) && (FUN_01e61dc8(&local_60,&local_58), cStack_57 != '\0')) {
      *(ulong *)(param_1 + 200) = CONCAT62(uStack_56,CONCAT11(cStack_57,local_58));
      *(undefined8 *)(param_1 + 0xd0) = local_50;
      if (*(char *)(param_1 + 0xc0) == '\0') {
        *(undefined1 *)(param_1 + 0xc0) = 1;
      }
      if (*(long *)(param_1 + 0x58) == 0) {
        local_60 = 0;
      }
      else {
        FUN_01c27dd8(&local_60);
        if (local_60 != 0) {
          *(undefined8 *)(local_60 + 0x78) = param_2;
        }
      }
      FUN_01c1abf8(&local_60);
    }
  }
  FUN_01267b4c(local_40);
  return;
}


