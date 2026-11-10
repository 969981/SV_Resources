/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027e9d20; name: FUN_027e9d20
 */


void FUN_027e9d20(long *param_1,long param_2,undefined4 *param_3,void *param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_2 + 8);
  plVar3 = *(long **)(param_2 + 0x18);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  FUN_0191e33c(param_1);
  puVar2 = PTR_DAT_047e2118;
  *param_1 = (long)(PTR_DAT_047e2118 + 0x10);
  param_1[4] = (long)(puVar2 + 0xb8);
  param_1[5] = (long)(puVar2 + 0x108);
  FUN_00ddaef8(param_1 + 8,uVar5,0);
  *(undefined4 *)(param_1 + 9) = 1;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  *param_1 = (long)&PTR_FUN_045e34b8;
  param_1[4] = (long)&PTR_LAB_045e3560;
  param_1[5] = (long)&DAT_045e35b0;
  uVar1 = *param_3;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = uVar1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  memcpy(param_1 + 0x1b,param_4,0x50);
  *(undefined1 *)(param_1 + 0x25) = 0;
  if (*(char *)((long)param_4 + 0x50) != '\0') {
    memcpy((void *)((long)param_1 + 300),(void *)((long)param_4 + 0x54),0x28);
    *(undefined1 *)(param_1 + 0x25) = 1;
  }
  lVar4 = 0;
  do {
    *(undefined1 *)((long)param_1 + lVar4 + 0x158) = 0;
    if (*(char *)((long)param_4 + lVar4 + 0x80) != '\0') {
      memcpy((void *)((long)param_1 + lVar4 + 0x160),(void *)((long)param_4 + lVar4 + 0x88),0x28);
      *(undefined1 *)((long)param_1 + lVar4 + 0x158) = 1;
    }
    lVar4 = lVar4 + 0x30;
  } while (lVar4 != 0x480);
  *(undefined1 *)(param_1 + 0x1a) = 1;
  param_1[0xbb] = param_1[1];
  param_1[0xc0] = param_1[1];
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc2] = 0;
  *(undefined4 *)(param_1 + 0xc3) = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[0xc1] = 0x1fffffffffffffff;
  *(undefined1 *)(param_1 + 199) = 0;
  return;
}


