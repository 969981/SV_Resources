/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01574824; name: FUN_01574824
 */


void FUN_01574824(int *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 5) ||
     (uVar2 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[2], uVar2 == 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = *(undefined1 *)((long)param_1 + uVar2);
  }
  *param_2 = uVar1;
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 7) ||
     (uVar2 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[3], uVar2 == 0)) {
    uVar3 = 0x3f4ccccd;
  }
  else {
    uVar3 = *(undefined4 *)((long)param_1 + uVar2);
  }
  *(undefined4 *)(param_2 + 4) = uVar3;
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 9) ||
     (uVar2 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[4], uVar2 == 0)) {
    uVar3 = 0x38d1b717;
  }
  else {
    uVar3 = *(undefined4 *)((long)param_1 + uVar2);
  }
  *(undefined4 *)(param_2 + 8) = uVar3;
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 0xb) ||
     (uVar2 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[5], uVar2 == 0)) {
    uVar3 = 0x3f6b851f;
  }
  else {
    uVar3 = *(undefined4 *)((long)param_1 + uVar2);
  }
  *(undefined4 *)(param_2 + 0xc) = uVar3;
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 0xd) ||
     (uVar2 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[6], uVar2 == 0)) {
    uVar3 = 0x3f333333;
  }
  else {
    uVar3 = *(undefined4 *)((long)param_1 + uVar2);
  }
  *(undefined4 *)(param_2 + 0x10) = uVar3;
  return;
}


