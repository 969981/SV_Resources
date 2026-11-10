/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0036b3fc; name: FUN_0036b3fc
 */


void FUN_0036b3fc(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  *param_1 = 1;
  param_1[1] = param_2;
  FUN_003503e8(param_1 + 2);
  param_1[0xe] = param_3[4];
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = *param_3;
                    /* try { // try from 0036b438 to 0036b43b has its CatchHandler @ 0036b568 */
  uVar2 = FUN_0038e610();
  param_1[0x12] = uVar2;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  lVar1 = param_3[6];
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(bool *)(param_1 + 0x15) = lVar1 == 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  *(undefined8 *)((long)param_1 + 0xa9) = 0;
  *(undefined4 *)(param_1 + 0xbe) = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = param_1 + 0xc2;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  memset(param_1 + 0x32,0,0x3b0);
  param_1[0xbb] = 0;
  param_1[0xb6] = 0;
  param_1[0xb5] = 0;
  param_1[0xb8] = 0;
  param_1[0xb7] = 0;
  param_1[0xba] = 0;
  param_1[0xb9] = 0;
  param_1[0xc0] = 0;
  param_1[0xbf] = 0;
  *(undefined4 *)(param_1 + 0xc1) = 1;
  *(undefined4 *)((long)param_1 + 0x64c) = 0;
  *(undefined8 *)((long)param_1 + 0x614) = 0;
  *(undefined8 *)((long)param_1 + 0x60c) = 0;
  *(undefined8 *)((long)param_1 + 0x624) = 0;
  *(undefined8 *)((long)param_1 + 0x61c) = 0;
  *(undefined8 *)((long)param_1 + 0x634) = 0;
  *(undefined8 *)((long)param_1 + 0x62c) = 0;
  *(undefined8 *)((long)param_1 + 0x644) = 0;
  *(undefined8 *)((long)param_1 + 0x63c) = 0;
  param_1[0xcc] = 0;
  param_1[0xcb] = 0;
  param_1[0xd0] = 0;
  param_1[0xcf] = 0;
  param_1[0xd4] = 0;
  param_1[0xd3] = 0;
  param_1[0x101] = 0;
  param_1[0x100] = 0;
                    /* try { // try from 0036b500 to 0036b503 has its CatchHandler @ 0036b540 */
  FUN_00367020(param_1 + 0x102);
  *(undefined4 *)(param_1 + 0x116) = 0;
  *(undefined1 *)((long)param_1 + 0x8b4) = 0;
  param_1[0x117] = 0;
  param_1[0x120] = 0;
  param_1[0x11f] = 0;
  param_1[0x4e] = 0x7fffffffffffffff;
  param_1[0x6b] = 0x7fffffffffffffff;
  param_1[0x88] = 0x7fffffffffffffff;
  param_1[0xa5] = 0x7fffffffffffffff;
  return;
}


