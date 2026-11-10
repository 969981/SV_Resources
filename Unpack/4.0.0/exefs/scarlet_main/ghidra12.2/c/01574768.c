/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01574768; name: FUN_01574768
 */


void FUN_01574768(int *param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 5) ||
     (uVar3 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[2], uVar3 == 0)) {
    uVar4 = 0x10000;
  }
  else {
    uVar4 = *(undefined8 *)((long)param_1 + uVar3);
  }
  *param_2 = uVar4;
  if ((*(ushort *)((long)param_1 - (long)*param_1) < 7) ||
     (uVar3 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[3], uVar3 == 0)) {
    uVar4 = 0x40000;
  }
  else {
    uVar4 = *(undefined8 *)((long)param_1 + uVar3);
  }
  param_2[1] = uVar4;
  if (*(ushort *)((long)param_1 - (long)*param_1) < 9) {
    bVar1 = false;
  }
  else {
    uVar3 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[4];
    bVar1 = false;
    if (uVar3 != 0) {
      bVar1 = *(char *)((long)param_1 + uVar3) != '\0';
    }
  }
  *(bool *)(param_2 + 2) = bVar1;
  if (*(ushort *)((long)param_1 - (long)*param_1) < 0xb) {
    uVar2 = 0;
  }
  else {
    uVar3 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[5];
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = *(undefined1 *)((long)param_1 + uVar3);
    }
  }
  *(undefined1 *)((long)param_2 + 0x11) = uVar2;
  return;
}


