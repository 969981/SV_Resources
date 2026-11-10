/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03335d20; name: FUN_03335d20
 */


void FUN_03335d20(long *param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                 long param_7,long param_8,undefined2 param_9)

{
  undefined *puVar1;
  void *__s;
  
  param_1[2] = 0x4000;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  puVar1 = PTR_DAT_047e5b60;
  param_1[6] = -0x8000000000000000;
  param_1[7] = 0;
  param_1[8] = -0x8000000000000000;
  param_1[9] = 0;
  param_1[10] = -0x8000000000000000;
  param_1[0xb] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = param_4;
  puVar1 = PTR_DAT_047e66e0 + 0x10;
  param_1[0xc] = -0x100000000;
  param_1[0xd] = 0;
  param_1[0x10] = param_4;
  param_1[0x11] = param_5;
  param_1[0x12] = param_6;
  param_1[0x13] = param_8;
  param_1[0x14] = param_7;
  param_1[0x15] = 0;
  param_1[0xe] = -0x8000000000000000;
  param_1[0xf] = (long)puVar1;
  param_1[0x16] = -0x100000000;
  param_1[0x17] = 0;
  puVar1 = PTR_PTR_047d1a50;
  param_1[0x1c] = -0x8000000000000000;
  param_1[0x18] = -0x8000000000000000;
  param_1[0x19] = 0;
  param_1[0x1a] = -0x8000000000000000;
  param_1[0x1b] = 0;
  __s = (void *)(**(code **)(*(long *)puVar1 + 0x18))(puVar1,0x180);
  param_1[0x1d] = (long)__s;
  memset(__s,0xff,0x180);
  param_1[0x1e] = 0xf00000000;
  param_1[0x20] = param_2;
  param_1[0x21] = param_3;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x25] = (long)&DAT_03d7702c;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined2 *)(param_1 + 0x2b) = param_9;
  param_1[0x23] = 0;
  param_1[0x24] = -0x8000000000000000;
  param_1[0x27] = 0;
  param_1[0x28] = -0x100000000;
  param_1[0x29] = 0;
  param_1[0x2a] = -0x100000000;
  return;
}


