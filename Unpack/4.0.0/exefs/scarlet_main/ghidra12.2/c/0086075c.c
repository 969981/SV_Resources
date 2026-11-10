/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0086075c; name: FUN_0086075c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0086075c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  if ((puVar1 == (undefined8 *)0x0) || (puVar1[0x140] == 0)) {
    puVar1 = (undefined8 *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,0xa20);
    if (puVar1 == (undefined8 *)0x0) {
      _DAT_0000002c = 0;
      _DAT_00000034 = 0xffffffff;
      return (undefined8 *)0x0;
    }
    puVar1[0x122] = puVar1 + 300;
    puVar1[300] = puVar1 + 0x136;
    puVar1[0x118] = puVar1 + 0x122;
    puVar1[0x10e] = puVar1 + 0x118;
    puVar1[0x104] = puVar1 + 0x10e;
    puVar1[0xfa] = puVar1 + 0x104;
    puVar1[0xf0] = puVar1 + 0xfa;
    puVar1[0xe6] = puVar1 + 0xf0;
    puVar1[0xdc] = puVar1 + 0xe6;
    puVar1[0xd2] = puVar1 + 0xdc;
    puVar1[200] = puVar1 + 0xd2;
    puVar1[0xbe] = puVar1 + 200;
    puVar1[0xb4] = puVar1 + 0xbe;
    puVar1[0xaa] = puVar1 + 0xb4;
    puVar1[0xa0] = puVar1 + 0xaa;
    puVar1[0x96] = puVar1 + 0xa0;
    puVar1[0x8c] = puVar1 + 0x96;
    puVar1[0x82] = puVar1 + 0x8c;
    puVar1[0x78] = puVar1 + 0x82;
    puVar1[0x6e] = puVar1 + 0x78;
    puVar1[100] = puVar1 + 0x6e;
    puVar1[0x5a] = puVar1 + 100;
    puVar1[0x50] = puVar1 + 0x5a;
    puVar1[0x46] = puVar1 + 0x50;
    puVar1[0x3c] = puVar1 + 0x46;
    puVar1[0x32] = puVar1 + 0x3c;
    puVar1[0x28] = puVar1 + 0x32;
    puVar1[0x136] = 0;
    puVar1[0x1e] = puVar1 + 0x28;
    puVar1[0x14] = puVar1 + 0x1e;
    puVar1[10] = puVar1 + 0x14;
    *puVar1 = puVar1 + 10;
    *(undefined4 *)(puVar1 + 0x143) = 0;
    puVar1[0x140] = puVar1;
    puVar1[0x141] = 0;
    puVar1[0x142] = *param_1;
    *param_1 = puVar1;
    if (puVar1[0x142] != 0) {
      *(undefined8 **)(puVar1[0x142] + 0xa08) = puVar1;
    }
  }
  puVar2 = (undefined8 *)puVar1[0x140];
  puVar1[0x140] = *puVar2;
  puVar2[8] = puVar1;
  *(int *)(puVar1 + 0x143) = *(int *)(puVar1 + 0x143) + 1;
  *(undefined4 *)((long)puVar2 + 0x2c) = 0;
  *(undefined4 *)((long)puVar2 + 0x34) = 0xffffffff;
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


