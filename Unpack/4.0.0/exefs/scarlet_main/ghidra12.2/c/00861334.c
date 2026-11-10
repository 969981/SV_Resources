/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00861334; name: FUN_00861334
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_00861334(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  if ((puVar1 == (undefined8 *)0x0) || (puVar1[0x200] == 0)) {
    puVar1 = (undefined8 *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,0x1020);
    if (puVar1 == (undefined8 *)0x0) {
      _DAT_00000058 = 0xffffffff;
      _DAT_00000064 = 0xffffffff;
      return (undefined8 *)0x0;
    }
    puVar1[0x1d0] = puVar1 + 0x1e0;
    puVar1[0x1e0] = puVar1 + 0x1f0;
    puVar1[0x1c0] = puVar1 + 0x1d0;
    puVar1[0x1b0] = puVar1 + 0x1c0;
    puVar1[0x1a0] = puVar1 + 0x1b0;
    puVar1[400] = puVar1 + 0x1a0;
    puVar1[0x180] = puVar1 + 400;
    puVar1[0x170] = puVar1 + 0x180;
    puVar1[0x160] = puVar1 + 0x170;
    puVar1[0x150] = puVar1 + 0x160;
    puVar1[0x140] = puVar1 + 0x150;
    puVar1[0x130] = puVar1 + 0x140;
    puVar1[0x120] = puVar1 + 0x130;
    puVar1[0x110] = puVar1 + 0x120;
    puVar1[0x100] = puVar1 + 0x110;
    puVar1[0xf0] = puVar1 + 0x100;
    puVar1[0xe0] = puVar1 + 0xf0;
    puVar1[0xd0] = puVar1 + 0xe0;
    puVar1[0xc0] = puVar1 + 0xd0;
    puVar1[0xb0] = puVar1 + 0xc0;
    puVar1[0xa0] = puVar1 + 0xb0;
    puVar1[0x90] = puVar1 + 0xa0;
    puVar1[0x80] = puVar1 + 0x90;
    puVar1[0x70] = puVar1 + 0x80;
    puVar1[0x60] = puVar1 + 0x70;
    puVar1[0x50] = puVar1 + 0x60;
    puVar1[0x40] = puVar1 + 0x50;
    puVar1[0x30] = puVar1 + 0x40;
    puVar1[0x20] = puVar1 + 0x30;
    puVar1[0x1f0] = 0;
    puVar1[0x10] = puVar1 + 0x20;
    *puVar1 = puVar1 + 0x10;
    *(undefined4 *)(puVar1 + 0x203) = 0;
    puVar1[0x200] = puVar1;
    puVar1[0x201] = 0;
    puVar1[0x202] = *param_1;
    *param_1 = puVar1;
    if (puVar1[0x202] != 0) {
      *(undefined8 **)(puVar1[0x202] + 0x1008) = puVar1;
    }
  }
  puVar2 = (undefined8 *)puVar1[0x200];
  puVar1[0x200] = *puVar2;
  puVar2[0xe] = puVar1;
  *(int *)(puVar1 + 0x203) = *(int *)(puVar1 + 0x203) + 1;
  *(undefined4 *)(puVar2 + 0xb) = 0xffffffff;
  *(undefined4 *)((long)puVar2 + 100) = 0xffffffff;
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    *puVar2 = param_1[1];
    if (param_1[1] != 0) {
      *(undefined8 **)(param_1[1] + 8) = puVar2;
    }
    param_1[1] = puVar2;
    *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + 1;
  }
  return puVar2;
}


