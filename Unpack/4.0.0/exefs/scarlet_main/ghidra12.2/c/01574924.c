/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01574924; name: FUN_01574924
 */


void FUN_01574924(int *param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 5) ||
     (uVar1 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[2], uVar1 == 0)) {
    uVar2 = 3;
  }
  else {
    uVar2 = *(undefined4 *)((long)param_1 + uVar1);
  }
  *param_2 = uVar2;
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 7) ||
     (uVar1 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[3], uVar1 == 0)) {
    uVar2 = 2;
  }
  else {
    uVar2 = *(undefined4 *)((long)param_1 + uVar1);
  }
  param_2[1] = uVar2;
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 9) ||
     (uVar1 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[4], uVar1 == 0)) {
    uVar2 = 2;
  }
  else {
    uVar2 = *(undefined4 *)((long)param_1 + uVar1);
  }
  param_2[2] = uVar2;
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 0xb) ||
     (uVar1 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[5], uVar1 == 0)) {
    uVar2 = 3;
  }
  else {
    uVar2 = *(undefined4 *)((long)param_1 + uVar1);
  }
  param_2[3] = uVar2;
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 0xd) ||
     (uVar1 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[6], uVar1 == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = *(undefined4 *)((long)param_1 + uVar1);
  }
  param_2[4] = uVar2;
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 0xf) ||
     (uVar1 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[7], uVar1 == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = *(undefined4 *)((long)param_1 + uVar1);
  }
  param_2[5] = uVar2;
  uVar2 = 0x41f00000;
  if ((0x10 < *(ushort *)((long)param_1 - (long)*param_1)) &&
     (uVar1 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[8], uVar1 != 0)) {
    uVar2 = *(undefined4 *)((long)param_1 + uVar1);
  }
  param_2[6] = uVar2;
  return;
}


