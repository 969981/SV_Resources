/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 032726c8; name: FUN_032726c8
 */


void FUN_032726c8(undefined8 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined8 *)((long)param_1 + 0x24) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x2c) = 0x3f7d70a4;
  param_1[7] = 0;
  param_1[8] = 0x8000000000000000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)((long)param_1 + 0xac) = 0;
  param_1[9] = 0;
  param_1[10] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 0x14) = 0x100;
  *(undefined8 *)((long)param_1 + 0xa4) = 0x33d6bf953f7fbe77;
  if ((DAT_0488a7c8 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_0488a7c8);
    if (iVar2 != 0) {
      DAT_0488a7c0 = &PTR_LAB_046c83b8;
      __cxa_guard_release(&DAT_0488a7c8);
    }
  }
  if ((DAT_0488a7d8 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_0488a7d8);
    if (iVar2 != 0) {
      DAT_0488a7d0 = &PTR_LAB_046c8428;
      __cxa_guard_release(&DAT_0488a7d8);
    }
  }
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined2 *)(param_1 + 0x12) = 0;
  param_1[2] = 0x37fffffff;
  *param_1 = 0x200000000;
  param_1[1] = 0x3f80000000000000;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0x11] = 0x38d1b7173a83126f;
  param_1[0xd] = 0x7fffffff00000000;
  param_1[0xe] = 0x38d1b7173f7fff58;
  param_1[0xf] = 0x3a03126f3f7d70a4;
  param_1[0x10] = 0x3a83126f00000000;
  uVar1 = *(undefined4 *)(*(long *)PTR_DAT_047e58f8 + 0x18);
  param_1[0x13] = 0x80;
  param_1[0x16] = 0;
  param_1[0x17] = &DAT_0488a7b0;
  *(undefined4 *)((long)param_1 + 0x94) = uVar1;
  param_1[0x18] = &DAT_0488a7b8;
  return;
}


