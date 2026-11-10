/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027f99f8; name: FUN_027f99f8
 */


void FUN_027f99f8(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  long *local_98;
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  uint local_70 [4];
  char local_60 [4];
  uint local_5c;
  undefined8 local_48;
  char *pcStack_40;
  undefined8 local_38;
  long *local_30;
  undefined4 local_28 [2];
  
  FUN_01e7b310(local_60,param_2);
  if (local_60[0] == '\0') {
LAB_027f9a90:
    FUN_01e948c8(local_60,param_2);
    if (local_60[0] != '\0') {
      local_70[0] = 0xc420;
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_28);
      if (local_5c == local_70[0]) {
        local_90 = 0xbeb2915e8339f22d;
        pcStack_88 = "WifiOff";
        local_80 = 7;
        local_78 = (long *)0x0;
        FUN_01e7b418(param_1,&local_90,param_2);
        plVar1 = local_78;
        goto joined_r0x027f9b08;
      }
      if (local_60[0] != '\0') {
        local_60[0] = '\0';
      }
    }
    local_b0 = &DAT_5bd47e3c1dfde0bd;
    pcStack_a8 = "NotMatching";
    local_a0 = 0xb;
    local_98 = (long *)0x0;
    FUN_027f5b8c(param_1,&local_b0);
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
  }
  else {
    if ((local_5c & 0x3fe1ff) != 0x20cb) {
      local_60[0] = '\0';
      goto LAB_027f9a90;
    }
    local_48 = 0xbeb2915e8339f22d;
    pcStack_40 = "WifiOff";
    local_38 = 7;
    local_30 = (long *)0x0;
    FUN_01e7b418(param_1,&local_48,param_2);
    plVar1 = local_30;
joined_r0x027f9b08:
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))();
    }
  }
  return;
}


