/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e6cb70; name: FUN_01e6cb70
 */


void FUN_01e6cb70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  long local_58;
  long local_50;
  undefined8 local_48;
  long *local_40 [4];
  undefined4 local_8 [2];
  
  FUN_01267a34(local_40,param_3,param_4);
  local_8[0] = 0;
  local_50 = 0;
  local_48 = 0;
  if (local_40[0] != (long *)0x0) {
    FUN_01e61d90(&local_58,local_8);
    if (((local_40[0] != (long *)0x0) &&
        (cVar1 = *(char *)(*local_40[0] + local_40[0][2]), local_40[0][2] = local_40[0][2] + 1,
        cVar1 == -0x47)) && (FUN_01e6cc54(&local_58,&local_50), (char)local_48 != '\0')) {
      *(long *)(param_1 + 200) = local_50;
      *(undefined8 *)(param_1 + 0xd0) = local_48;
      if (*(char *)(param_1 + 0xc0) == '\0') {
        *(undefined1 *)(param_1 + 0xc0) = 1;
      }
      if (*(long *)(param_1 + 0x58) == 0) {
        local_58 = 0;
      }
      else {
        FUN_01c27dd8(&local_58);
        if (local_58 != 0) {
          *(bool *)(local_58 + 0xf0) = *(long *)(local_58 + 0x50) == local_50;
        }
      }
      FUN_01c1abf8(&local_58);
    }
  }
  FUN_01267b4c(local_40);
  return;
}


