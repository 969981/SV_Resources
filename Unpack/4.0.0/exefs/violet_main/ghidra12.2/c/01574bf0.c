/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01574bf0; name: FUN_01574bf0
 */


void FUN_01574bf0(int *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 5) ||
     (uVar1 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[2], uVar1 == 0)) {
    uVar2 = 0x2000000;
  }
  else {
    uVar2 = *(undefined8 *)((long)param_1 + uVar1);
  }
  *param_2 = uVar2;
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 7) ||
     (uVar1 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[3], uVar1 == 0)) {
    uVar2 = 0x30000000;
  }
  else {
    uVar2 = *(undefined8 *)((long)param_1 + uVar1);
  }
  param_2[1] = uVar2;
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 9) ||
     (uVar1 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[4], uVar1 == 0)) {
    uVar2 = 0x6000000;
  }
  else {
    uVar2 = *(undefined8 *)((long)param_1 + uVar1);
  }
  param_2[2] = uVar2;
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 0xb) ||
     (uVar1 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[5], uVar1 == 0)) {
    uVar2 = 0x4000000;
  }
  else {
    uVar2 = *(undefined8 *)((long)param_1 + uVar1);
  }
  param_2[3] = uVar2;
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 0xd) ||
     (uVar1 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[6], uVar1 == 0)) {
    uVar2 = 0x4000000;
  }
  else {
    uVar2 = *(undefined8 *)((long)param_1 + uVar1);
  }
  param_2[4] = uVar2;
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 0xf) ||
     (uVar1 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[7], uVar1 == 0)) {
    uVar2 = 0x40000000;
  }
  else {
    uVar2 = *(undefined8 *)((long)param_1 + uVar1);
  }
  param_2[5] = uVar2;
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x11) ||
     (uVar1 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[8], uVar1 == 0)) {
    uVar2 = 0x6000000;
  }
  else {
    uVar2 = *(undefined8 *)((long)param_1 + uVar1);
  }
  param_2[6] = uVar2;
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x13) ||
     (uVar1 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[9], uVar1 == 0)) {
    uVar2 = 0x4000000;
  }
  else {
    uVar2 = *(undefined8 *)((long)param_1 + uVar1);
  }
  param_2[7] = uVar2;
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 0x15) ||
     (uVar1 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[10], uVar1 == 0)) {
    uVar2 = 0x4000000;
  }
  else {
    uVar2 = *(undefined8 *)((long)param_1 + uVar1);
  }
  param_2[8] = uVar2;
  if (*(ushort *)((long)param_1 - (long)*param_1) < 0x17) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0xb];
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = *(undefined8 *)((long)param_1 + uVar1);
    }
  }
  param_2[9] = uVar2;
  return;
}


