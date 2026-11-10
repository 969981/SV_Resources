/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01574a58; name: FUN_01574a58
 */


void FUN_01574a58(int *param_1,undefined8 *param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 5) ||
     (uVar2 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[2], uVar2 == 0)) {
    uVar3 = 0x1000000;
  }
  else {
    uVar3 = *(undefined8 *)((long)param_1 + uVar2);
  }
  *param_2 = uVar3;
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 7) ||
     (uVar2 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[3], uVar2 == 0)) {
    uVar3 = 0x3000000;
  }
  else {
    uVar3 = *(undefined8 *)((long)param_1 + uVar2);
  }
  param_2[1] = uVar3;
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 9) ||
     (uVar2 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[4], uVar2 == 0)) {
    uVar3 = 0x2000000;
  }
  else {
    uVar3 = *(undefined8 *)((long)param_1 + uVar2);
  }
  param_2[2] = uVar3;
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 0xb) ||
     (uVar2 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[5], uVar2 == 0)) {
    uVar3 = 0x18000000;
  }
  else {
    uVar3 = *(undefined8 *)((long)param_1 + uVar2);
  }
  param_2[3] = uVar3;
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 0xd) ||
     (uVar2 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[6], uVar2 == 0)) {
    uVar3 = 0x14000000;
  }
  else {
    uVar3 = *(undefined8 *)((long)param_1 + uVar2);
  }
  param_2[4] = uVar3;
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 0xf) ||
     (uVar2 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[7], uVar2 == 0)) {
    uVar3 = 0x3000000;
  }
  else {
    uVar3 = *(undefined8 *)((long)param_1 + uVar2);
  }
  param_2[5] = uVar3;
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x11) ||
     (uVar2 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[8], uVar2 == 0)) {
    uVar3 = 0x2000;
  }
  else {
    uVar3 = *(undefined8 *)((long)param_1 + uVar2);
  }
  param_2[6] = uVar3;
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x13) ||
     (uVar2 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[9], uVar2 == 0)) {
    uVar3 = 0x200;
  }
  else {
    uVar3 = *(undefined8 *)((long)param_1 + uVar2);
  }
  param_2[7] = uVar3;
  if (*(ushort *)((long)param_1 - (long)*param_1) < 0x15) {
    bVar1 = false;
  }
  else {
    uVar2 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[10];
    bVar1 = false;
    if (uVar2 != 0) {
      bVar1 = *(char *)((long)param_1 + uVar2) != '\0';
    }
  }
  *(bool *)(param_2 + 8) = bVar1;
  return;
}


