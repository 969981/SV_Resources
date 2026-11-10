/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012e370c; name: FUN_012e370c
 */


void FUN_012e370c(undefined8 *param_1)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  char *local_38;
  
  FUN_012e3c20();
  *param_1 = &PTR_FUN_045e5f78;
  param_1[4] = &PTR_LAB_045e5fa8;
  FUN_012e3b68(param_1 + 6,param_1[1]);
  *(undefined1 *)(param_1 + 0x39) = 0;
  FUN_012e38e0(param_1 + 0x3a);
  param_1[4] = &PTR_LAB_045e5fa8;
  *param_1 = &PTR_FUN_045e5f78;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  FUN_012e3914(param_1 + 0x51);
  uVar3 = param_1[0x52];
  if (uVar3 < 8) {
    uVar2 = 8;
  }
  else {
    if (uVar3 == 8) goto LAB_012e3794;
    uVar2 = (ulong)((float)(ulong)param_1[0x5c] / *(float *)(param_1 + 0x5d));
    if ((uVar3 & uVar3 - 1) == 0) {
      if (1 < uVar2) {
        uVar2 = 1L << (-LZCOUNT(uVar2 - 1) & 0x3fU);
      }
    }
    else {
      uVar2 = std::__next_prime(uVar2);
    }
    if (uVar2 < 9) {
      uVar2 = 8;
    }
    if (uVar3 <= uVar2) goto LAB_012e3794;
  }
  FUN_00fa07d0(param_1 + 0x51,uVar2);
LAB_012e3794:
  param_1[0x5e] = 0;
  *(undefined4 *)((long)param_1 + 0x304) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x5f,0,1);
  param_1[0x61] = 0;
  *(undefined4 *)((long)param_1 + 0x314) = 4;
  *(undefined2 *)(param_1 + 99) = 0;
  memset(param_1 + 100,0,0x98);
  FUN_012e3a40(&local_68,param_1[1]);
  plVar1 = local_68;
  local_68 = (long *)0x0;
  FUN_012e3994(param_1 + 0x4d,plVar1);
  param_1[0x50] = local_50;
  param_1[0x4f] = uStack_58;
  param_1[0x4e] = local_60;
  FUN_012e3994(&local_68,0);
  *(undefined1 *)((long)param_1 + 0x319) = 0;
  local_38 = "system_resource/";
  FUN_00e52f24(&local_68,&local_38);
  FUN_012e3ab4(&local_68);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  return;
}


