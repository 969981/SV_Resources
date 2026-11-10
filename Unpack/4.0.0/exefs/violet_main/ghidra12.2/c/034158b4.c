/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034158b4; name: FUN_034158b4
 */


long * FUN_034158b4(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  
  for (puVar1 = (undefined8 *)*param_1; puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)puVar1[0x600]) {
    if (puVar1[0x602] != 0) goto LAB_03415bd4;
  }
  puVar1 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(10,0x3018);
  if (puVar1 == (undefined8 *)0x0) {
    plVar2 = (long *)0x0;
  }
  else {
    puVar1[0x48] = puVar1 + 0x30;
    puVar1[0x30] = puVar1 + 0x18;
    puVar1[0x60] = puVar1 + 0x48;
    puVar1[0x78] = puVar1 + 0x60;
    puVar1[0x90] = puVar1 + 0x78;
    puVar1[0xa8] = puVar1 + 0x90;
    puVar1[0xc0] = puVar1 + 0xa8;
    puVar1[0xd8] = puVar1 + 0xc0;
    puVar1[0xf0] = puVar1 + 0xd8;
    puVar1[0x108] = puVar1 + 0xf0;
    puVar1[0x120] = puVar1 + 0x108;
    puVar1[0x138] = puVar1 + 0x120;
    puVar1[0x150] = puVar1 + 0x138;
    puVar1[0x168] = puVar1 + 0x150;
    puVar1[0x180] = puVar1 + 0x168;
    puVar1[0x198] = puVar1 + 0x180;
    puVar1[0x1b0] = puVar1 + 0x198;
    puVar1[0x1c8] = puVar1 + 0x1b0;
    puVar1[0x1e0] = puVar1 + 0x1c8;
    puVar1[0x1f8] = puVar1 + 0x1e0;
    puVar1[0x210] = puVar1 + 0x1f8;
    puVar1[0x228] = puVar1 + 0x210;
    puVar1[0x240] = puVar1 + 0x228;
    puVar1[600] = puVar1 + 0x240;
    puVar1[0x270] = puVar1 + 600;
    puVar1[0x288] = puVar1 + 0x270;
    puVar1[0x2a0] = puVar1 + 0x288;
    puVar1[0x2b8] = puVar1 + 0x2a0;
    puVar1[0x2d0] = puVar1 + 0x2b8;
    puVar1[0x2e8] = puVar1 + 0x2d0;
    puVar1[0x300] = puVar1 + 0x2e8;
    puVar1[0x318] = puVar1 + 0x300;
    puVar1[0x330] = puVar1 + 0x318;
    puVar1[0x348] = puVar1 + 0x330;
    puVar1[0x360] = puVar1 + 0x348;
    puVar1[0x378] = puVar1 + 0x360;
    puVar1[0x390] = puVar1 + 0x378;
    puVar1[0x3a8] = puVar1 + 0x390;
    puVar1[0x3c0] = puVar1 + 0x3a8;
    puVar1[0x3d8] = puVar1 + 0x3c0;
    puVar1[0x3f0] = puVar1 + 0x3d8;
    puVar1[0x408] = puVar1 + 0x3f0;
    puVar1[0x420] = puVar1 + 0x408;
    puVar1[0x438] = puVar1 + 0x420;
    puVar1[0x450] = puVar1 + 0x438;
    puVar1[0x468] = puVar1 + 0x450;
    puVar1[0x480] = puVar1 + 0x468;
    puVar1[0x498] = puVar1 + 0x480;
    puVar1[0x4b0] = puVar1 + 0x498;
    puVar1[0x4c8] = puVar1 + 0x4b0;
    puVar1[0x4e0] = puVar1 + 0x4c8;
    puVar1[0x4f8] = puVar1 + 0x4e0;
    puVar1[0x510] = puVar1 + 0x4f8;
    puVar1[0x528] = puVar1 + 0x510;
    puVar1[0x540] = puVar1 + 0x528;
    puVar1[0x558] = puVar1 + 0x540;
    puVar1[0x570] = puVar1 + 0x558;
    puVar1[0x588] = puVar1 + 0x570;
    puVar1[0x5a0] = puVar1 + 0x588;
    puVar1[0x5b8] = puVar1 + 0x5a0;
    puVar1[0x5d0] = puVar1 + 0x5b8;
    puVar1[0x5e8] = puVar1 + 0x5d0;
    puVar1[0x600] = 0;
    *(undefined4 *)(puVar1 + 0x601) = 0;
    *puVar1 = 0;
    puVar1[0x18] = puVar1;
    puVar1[0x602] = puVar1 + 0x5e8;
    *(undefined4 *)(puVar1 + 0x601) = 0x40;
    if (*param_1 == 0) {
      *param_1 = (long)puVar1;
      puVar1[0x600] = 0;
    }
    else {
      puVar1[0x600] = *param_1;
      *param_1 = (long)puVar1;
    }
LAB_03415bd4:
    plVar2 = (long *)puVar1[0x602];
    if (plVar2 != (long *)0x0) {
      if (*plVar2 == 0) {
        puVar1[0x602] = 0;
      }
      else {
        puVar1[0x602] = *plVar2;
      }
      *(int *)(puVar1 + 0x601) = *(int *)(puVar1 + 0x601) + -1;
    }
  }
  return plVar2;
}


