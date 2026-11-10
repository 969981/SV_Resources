/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034a127c; name: FUN_034a127c
 */


void FUN_034a127c(long *param_1)

{
  long local_38;
  
  local_38 = *param_1;
  if ((int)param_1[1] != 0) {
    do {
      if (*(int *)(local_38 + 0xa4) == 0x2d) {
        *(undefined8 *)(local_38 + 0x98) = 0;
        *(undefined8 *)(local_38 + 0xa4) = 0x11;
        local_38 = local_38 + 0xc0;
      }
      else {
        if (*(int *)(local_38 + 0xb0) == 3) {
          *(int *)(param_1 + 4) = (int)param_1[4] + -1;
        }
        FUN_034a137c(param_1,&local_38);
      }
    } while (local_38 != *param_1 + (ulong)*(uint *)(param_1 + 1) * 0xc0);
  }
  local_38 = param_1[2];
  if ((int)param_1[3] != 0) {
    do {
      if (*(int *)(local_38 + 0xa4) == 0x2d) {
        *(undefined8 *)(local_38 + 0x98) = 0;
        *(undefined8 *)(local_38 + 0xa4) = 0x11;
        local_38 = local_38 + 0xc0;
      }
      else {
        FUN_034a137c(param_1 + 2,&local_38);
      }
    } while (local_38 != param_1[2] + (ulong)*(uint *)(param_1 + 3) * 0xc0);
  }
  return;
}


