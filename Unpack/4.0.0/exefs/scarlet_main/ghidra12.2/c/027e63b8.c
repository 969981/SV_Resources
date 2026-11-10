/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027e63b8; name: FUN_027e63b8
 */


void FUN_027e63b8(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined1 local_278;
  undefined1 auStack_270 [36];
  undefined4 local_24c;
  undefined1 auStack_248 [472];
  char local_70 [8];
  void *local_68;
  size_t local_60;
  undefined4 local_48;
  undefined1 auStack_40 [16];
  
  FUN_027e92e0(*(undefined8 *)(param_2 + 8));
  memset(auStack_270,0,0x200);
  FUN_027e6978(auStack_40,param_2 + 0x78);
  FUN_0278dcb0(auStack_40);
  FUN_027e9400(local_70);
  if (local_70[0] == '\0') {
    local_24c = 0;
    local_278 = 0;
    local_288 = 0;
    uStack_280 = 0;
    local_298 = 0;
    uStack_290 = 0;
  }
  else {
    memcpy(&local_298,(void *)((ulong)local_70 | 4),0x24);
    local_70[0] = '\0';
    local_24c = local_48;
  }
  FUN_0278f0cc(auStack_40);
  memcpy(auStack_270,&local_298,0x24);
  if ((((*(char *)(param_2 + 0x58) == '\0') &&
       ((*(long *)(param_2 + 0x40) == 0 || (*(short *)(*(long *)(param_2 + 0x40) + 0x1a) == 0)))) ||
      (*(long **)(param_2 + 0x50) == (long *)0x0)) ||
     ((**(code **)(**(long **)(param_2 + 0x50) + 8))(local_70), local_70[0] == '\0')) {
    uVar1 = 0x28;
  }
  else {
    if ((local_60 == 0) || (uVar1 = local_60 + 0x28, 0x200 < uVar1)) {
      uVar1 = 0x28;
    }
    else {
      memcpy(auStack_248,local_68,local_60);
    }
    local_70[0] = '\0';
  }
  (**(code **)(*(long *)*param_1 + 0x18))(local_70,(long *)*param_1,auStack_270,uVar1 & 0xffffffff);
  return;
}


