/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a208c; name: FUN_007a208c
 */


void FUN_007a208c(undefined8 param_1,long param_2,void *param_3,uint param_4)

{
  void *__s;
  undefined1 auStack_88 [16];
  undefined4 local_78 [2];
  undefined1 *local_70;
  undefined4 local_68;
  long local_60;
  undefined4 local_58;
  undefined4 local_50 [4];
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  
  if ((param_3 == (void *)0x0) || (0x10 < param_4)) {
    local_78[0] = 0x10407;
  }
  else {
    __s = (void *)(param_2 + 0x220);
    memset(__s,0,0x10);
    if ((*(char *)(param_2 + 0x230) == '\0') || (*(int *)(param_2 + 0x234) != 1)) {
      memcpy(__s,param_3,(ulong)param_4);
    }
    else {
      memset(local_50,0xfe,0x10);
      memcpy(local_50,param_3,(ulong)param_4);
      local_34 = *(undefined1 *)(param_2 + 0x239);
      local_33 = *(undefined1 *)(param_2 + 0x240);
      local_32 = *(undefined1 *)(param_2 + 0x23f);
      local_31 = *(undefined1 *)(param_2 + 0x23a);
      local_78[0] = 1;
      local_60 = param_2 + 0x238;
      local_70 = &local_34;
      local_68 = 4;
      local_58 = 0x10;
      FUN_0078d79c(auStack_88,__s,local_50,0x10,0,0x10,local_78);
    }
    local_78[0] = 0;
  }
  local_50[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_50);
  FUN_00cbd7c0(param_1,local_78);
  return;
}


