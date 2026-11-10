/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d9ec44; name: FUN_00d9ec44
 */


void FUN_00d9ec44(undefined8 *param_1,uint param_2,ulong param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = (uint)(param_3 >> 0x20);
  uVar5 = (uint)param_3;
  *(undefined4 *)((long)param_1 + 0xf) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if ((param_2 & 0xff) < 4) {
    *(char *)param_1 = (char)(0x45534643 >> (ulong)((param_2 & 3) << 3));
  }
  bVar1 = (byte)param_3 & 0xf | 0x30;
  if (9 < (uVar5 & 0xf)) {
    bVar1 = (char)(uVar5 & 0xf) + 0x37;
  }
  uVar3 = uVar5 >> 4 & 0xf;
  bVar2 = (byte)(uVar5 >> 4) & 0xf | 0x30;
  if (9 < uVar3) {
    bVar2 = (char)uVar3 + 0x37;
  }
  *(byte *)((long)param_1 + 0xf) = bVar2;
  *(byte *)(param_1 + 2) = bVar1;
  uVar3 = uVar5 >> 8 & 0xf;
  bVar1 = (byte)(param_3 >> 8) & 0xf | 0x30;
  if (9 < uVar3) {
    bVar1 = (char)uVar3 + 0x37;
  }
  *(byte *)((long)param_1 + 0xe) = bVar1;
  uVar3 = uVar5 >> 0xc & 0xf;
  bVar1 = (byte)(uVar5 >> 0xc) & 0xf | 0x30;
  if (9 < uVar3) {
    bVar1 = (char)uVar3 + 0x37;
  }
  *(byte *)((long)param_1 + 0xd) = bVar1;
  uVar3 = uVar5 >> 0x10 & 0xf;
  bVar1 = (byte)(param_3 >> 0x10) & 0xf | 0x30;
  if (9 < uVar3) {
    bVar1 = (char)uVar3 + 0x37;
  }
  *(byte *)((long)param_1 + 0xc) = bVar1;
  uVar3 = uVar5 >> 0x14 & 0xf;
  bVar1 = (byte)(uVar5 >> 0x14) & 0xf | 0x30;
  if (9 < uVar3) {
    bVar1 = (char)uVar3 + 0x37;
  }
  *(byte *)((long)param_1 + 0xb) = bVar1;
  uVar5 = uVar5 >> 0x18 & 0xf;
  bVar1 = (byte)(param_3 >> 0x18) & 0xf | 0x30;
  if (9 < uVar5) {
    bVar1 = (char)uVar5 + 0x37;
  }
  *(byte *)((long)param_1 + 10) = bVar1;
  uVar5 = (uint)(param_3 >> 0x1c) & 0xf;
  bVar2 = (byte)uVar5;
  bVar1 = bVar2 | 0x30;
  if (9 < uVar5) {
    bVar1 = bVar2 + 0x37;
  }
  *(byte *)((long)param_1 + 9) = bVar1;
  bVar2 = (byte)(uVar4 & 0xf);
  bVar1 = bVar2 | 0x30;
  if (9 < (uVar4 & 0xf)) {
    bVar1 = bVar2 + 0x37;
  }
  *(byte *)(param_1 + 1) = bVar1;
  uVar5 = uVar4 >> 4 & 0xf;
  bVar2 = (byte)uVar5;
  bVar1 = bVar2 | 0x30;
  if (9 < uVar5) {
    bVar1 = bVar2 + 0x37;
  }
  *(byte *)((long)param_1 + 7) = bVar1;
  uVar5 = uVar4 >> 8 & 0xf;
  bVar2 = (byte)uVar5;
  bVar1 = bVar2 | 0x30;
  if (9 < uVar5) {
    bVar1 = bVar2 + 0x37;
  }
  *(byte *)((long)param_1 + 6) = bVar1;
  uVar5 = uVar4 >> 0xc & 0xf;
  bVar2 = (byte)uVar5;
  bVar1 = bVar2 | 0x30;
  if (9 < uVar5) {
    bVar1 = bVar2 + 0x37;
  }
  *(byte *)((long)param_1 + 5) = bVar1;
  uVar5 = uVar4 >> 0x10 & 0xf;
  bVar2 = (byte)uVar5;
  bVar1 = bVar2 | 0x30;
  if (9 < uVar5) {
    bVar1 = bVar2 + 0x37;
  }
  *(byte *)((long)param_1 + 4) = bVar1;
  uVar5 = uVar4 >> 0x14 & 0xf;
  bVar2 = (byte)uVar5;
  bVar1 = bVar2 | 0x30;
  if (9 < uVar5) {
    bVar1 = bVar2 + 0x37;
  }
  *(byte *)((long)param_1 + 3) = bVar1;
  uVar5 = uVar4 >> 0x18 & 0xf;
  bVar2 = (byte)uVar5;
  bVar1 = bVar2 | 0x30;
  if (9 < uVar5) {
    bVar1 = bVar2 + 0x37;
  }
  *(byte *)((long)param_1 + 2) = bVar1;
  bVar2 = (byte)(param_3 >> 0x38);
  bVar1 = bVar2 >> 4 | 0x30;
  if (9 < uVar4 >> 0x1c) {
    bVar1 = (bVar2 >> 4) + 0x37;
  }
  *(byte *)((long)param_1 + 1) = bVar1;
  return;
}


