/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0289b9c4; name: FUN_0289b9c4
 */


void FUN_0289b9c4(undefined8 param_1,void *param_2)

{
  ulong uVar1;
  undefined1 local_d0;
  undefined1 local_cf;
  undefined8 local_c8;
  
  memcpy(&local_d0,param_2,0x99);
  FUN_019b566c(param_1,&local_d0);
  if (*(char *)((long)param_2 + 0xc4) != '\0') {
    uVar1 = 0;
    do {
      local_d0 = *(undefined1 *)((long)param_2 + 0x8e);
      local_cf = *(undefined1 *)((long)param_2 + uVar1 + 0xc0);
      local_c8 = *(undefined8 *)((long)param_2 + uVar1 * 8 + 0xa0);
      FUN_019b65c8(param_1,&local_d0);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(byte *)((long)param_2 + 0xc4));
  }
  if (*(char *)((long)param_2 + 0xc5) != '\0') {
    local_d0 = *(undefined1 *)((long)param_2 + 0x8e);
    FUN_0289bd34(param_1,&local_d0);
  }
  return;
}


