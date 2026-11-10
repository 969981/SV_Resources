/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a31324; name: FUN_00a31324
 */


void FUN_00a31324(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 local_48;
  
  param_1[6] = 0x100010001000100;
  *param_1 = 0x100010001000100;
  param_1[1] = 0x100010001000100;
  param_1[2] = 0x100010001000100;
  param_1[3] = 0x100010001000100;
  param_1[4] = 0x100010001000100;
  param_1[5] = 0x100010001000100;
  puVar2 = param_1;
  do {
    puVar4 = puVar2 + 0xe;
    *(undefined2 *)(puVar2 + 7) = 0xff;
    *(undefined1 *)((long)puVar2 + 0x3a) = 0;
    *(undefined4 *)((long)puVar2 + 0x3c) = 0;
    *(undefined1 *)(puVar2 + 8) = 1;
    *(undefined8 *)((long)puVar2 + 0x44) = 0;
    *(undefined8 *)((long)puVar2 + 0x4c) = 0;
    *(undefined8 *)((long)puVar2 + 0x54) = 0;
    *(undefined8 *)((long)puVar2 + 0x5c) = 0;
    *(undefined8 *)((long)puVar2 + 100) = 0;
    *(undefined2 *)((long)puVar2 + 0x6c) = 0;
    puVar2[0x14] = 0;
    *puVar4 = 0;
    puVar2[0xf] = 0;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    puVar2[0x12] = 0;
    puVar2[0x13] = 0;
    iVar3 = nn::time::StandardNetworkSystemClock::GetCurrentTime((PosixTime *)&local_48);
    if (iVar3 == 0) {
      *puVar4 = local_48;
    }
    puVar1 = puVar2 + 0x15;
    *(undefined8 *)((long)puVar2 + 100) = 0;
    *(undefined8 *)((long)puVar2 + 0x5c) = 0;
    *(undefined8 *)((long)puVar2 + 0x54) = 0;
    *(undefined8 *)((long)puVar2 + 0x4c) = 0;
    puVar2[0x11] = 0;
    puVar2[0x12] = 0;
    puVar2[0x13] = 0;
    puVar2[0x14] = 0;
    puVar2 = puVar4;
  } while (puVar1 != param_1 + 0x1ab);
  *(undefined1 *)(param_1 + 0x1ab) = 0xff;
  *(undefined8 *)((long)param_1 + 0xd59) = 0;
  *(undefined4 *)(param_1 + 0x1ad) = 0;
  *(undefined8 *)((long)param_1 + 0xd61) = 0;
  *(undefined1 *)((long)param_1 + 0xd6c) = 0xff;
  *(undefined8 *)((long)param_1 + 0xd6d) = 0;
  *(undefined8 *)((long)param_1 + 0xd75) = 0;
  *(undefined8 *)((long)param_1 + 0xd7d) = 0;
  *(undefined8 *)((long)param_1 + 0xd85) = 0;
  *(undefined4 *)((long)param_1 + 0xd94) = 0;
  *(undefined8 *)((long)param_1 + 0xd8d) = 0;
  *(undefined8 *)((long)param_1 + 0xd99) = 0;
  *(undefined4 *)(param_1 + 0x1b5) = 0;
  *(undefined8 *)((long)param_1 + 0xda1) = 0;
  *(undefined8 *)((long)param_1 + 0xdad) = 0;
  *(undefined8 *)((long)param_1 + 0xdb5) = 0;
  *(undefined8 *)((long)param_1 + 0xdbd) = 0;
  *(undefined8 *)((long)param_1 + 0xdc5) = 0;
  *(undefined4 *)((long)param_1 + 0xdd4) = 0;
  *(undefined8 *)((long)param_1 + 0xdcd) = 0;
  *(undefined1 *)(param_1 + 0x1bb) = 0xff;
  *(undefined1 *)(param_1 + 7) = 0;
  memset((void *)((long)param_1 + 0xdd9),0,0x94);
  *(undefined1 *)(param_1 + 0x15) = 1;
  *(undefined1 *)(param_1 + 0x31) = 3;
  *(undefined1 *)(param_1 + 0x3f) = 4;
  *(undefined1 *)(param_1 + 0x4d) = 5;
  *(undefined1 *)(param_1 + 0x5b) = 6;
  *(undefined1 *)(param_1 + 0x69) = 7;
  *(undefined1 *)(param_1 + 0x77) = 8;
  *(undefined1 *)(param_1 + 0x85) = 9;
  *(undefined1 *)(param_1 + 0x93) = 10;
  *(undefined1 *)(param_1 + 0xa1) = 0xb;
  *(undefined1 *)(param_1 + 0xaf) = 0xc;
  *(undefined1 *)(param_1 + 0xbd) = 0xd;
  *(undefined1 *)(param_1 + 0xcb) = 0xe;
  *(undefined1 *)(param_1 + 0xd9) = 0xf;
  *(undefined1 *)(param_1 + 0xe7) = 0x10;
  *(undefined1 *)(param_1 + 0xf5) = 0x11;
  *(undefined1 *)(param_1 + 0x103) = 0x12;
  *(undefined1 *)(param_1 + 0x165) = 0x19;
  *(undefined1 *)(param_1 + 0x23) = 2;
  *(undefined1 *)(param_1 + 0x157) = 0x18;
  *(undefined1 *)((long)param_1 + 0xdac) = 0x18;
  param_1[0x1d6] = 0;
  param_1[0x1d5] = 0;
  param_1[0x1d4] = 0;
  param_1[0x1d3] = 0;
  param_1[0x1d2] = 0;
  param_1[0x1d1] = 0;
  param_1[0x1d0] = 0;
  *(undefined1 *)(param_1 + 0x111) = 0x13;
  *(undefined1 *)(param_1 + 0x11f) = 0x14;
  *(undefined1 *)(param_1 + 0x173) = 0x1a;
  *(undefined1 *)(param_1 + 0x181) = 0x1b;
  *(undefined1 *)(param_1 + 399) = 0x1c;
  *(undefined1 *)(param_1 + 0x12d) = 0x15;
  *(undefined1 *)(param_1 + 0x13b) = 0x16;
  param_1[0x1ce] = 0;
  *(undefined1 *)(param_1 + 0x19d) = 0x1d;
  *(undefined1 *)(param_1 + 0x149) = 0x17;
  *(undefined1 *)(param_1 + 0x1b3) = 0x17;
  param_1[0x1cf] = 0;
  return;
}


