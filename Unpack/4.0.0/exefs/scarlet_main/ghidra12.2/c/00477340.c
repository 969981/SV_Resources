/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00477340; name: FUN_00477340
 */


undefined8 FUN_00477340(long *param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  
  if (*(int *)((long)param_1 + 0x2c) != param_3) {
    return 0;
  }
  uVar5 = param_1[1];
  uVar4 = *param_1 << 0x38;
  uVar1 = param_1[2];
  uVar6 = param_1[3];
  switch((int)param_1[5]) {
  case 7:
    uVar4 = uVar4 | (ulong)*(byte *)((long)param_1 + 0x3e) << 0x30;
  case 6:
    uVar4 = uVar4 | (ulong)*(byte *)((long)param_1 + 0x3d) << 0x28;
  case 5:
    uVar4 = uVar4 | (ulong)*(byte *)((long)param_1 + 0x3c) << 0x20;
  case 4:
    uVar4 = uVar4 | (ulong)*(byte *)((long)param_1 + 0x3b) << 0x18;
  case 3:
    uVar4 = uVar4 | (ulong)*(byte *)((long)param_1 + 0x3a) << 0x10;
  case 2:
    uVar4 = uVar4 | (ulong)*(byte *)((long)param_1 + 0x39) << 8;
  case 1:
    uVar4 = uVar4 | *(byte *)(param_1 + 7);
  default:
    iVar7 = (int)param_1[6];
    uVar2 = uVar4 ^ param_1[4];
    if (0 < iVar7) {
      do {
        uVar5 = uVar1 + uVar5;
        uVar1 = uVar5 ^ (uVar1 >> 0x33 | uVar1 << 0xd);
        iVar7 = iVar7 + -1;
        uVar3 = uVar2 + uVar6 ^ (uVar2 >> 0x30 | uVar2 << 0x10);
        uVar6 = uVar2 + uVar6 + uVar1;
        uVar5 = uVar3 + (uVar5 >> 0x20 | uVar5 << 0x20);
        uVar1 = uVar6 ^ (uVar1 >> 0x2f | uVar1 << 0x11);
        uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
        uVar2 = uVar5 ^ (uVar3 >> 0x2b | uVar3 << 0x15);
      } while (iVar7 != 0);
    }
    uVar5 = uVar5 ^ uVar4;
    uVar4 = 0xee;
    if (*(int *)((long)param_1 + 0x2c) != 0x10) {
      uVar4 = 0xff;
    }
    uVar6 = uVar6 ^ uVar4;
    iVar7 = *(int *)((long)param_1 + 0x34);
    if (0 < iVar7) {
      do {
        uVar5 = uVar1 + uVar5;
        uVar1 = uVar5 ^ (uVar1 >> 0x33 | uVar1 << 0xd);
        iVar7 = iVar7 + -1;
        uVar4 = uVar2 + uVar6 ^ (uVar2 >> 0x30 | uVar2 << 0x10);
        uVar6 = uVar2 + uVar6 + uVar1;
        uVar5 = uVar4 + (uVar5 >> 0x20 | uVar5 << 0x20);
        uVar1 = uVar6 ^ (uVar1 >> 0x2f | uVar1 << 0x11);
        uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
        uVar2 = uVar5 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
      } while (iVar7 != 0);
    }
    *param_2 = uVar1 ^ uVar5 ^ uVar6 ^ uVar2;
    if (*(int *)((long)param_1 + 0x2c) != 8) {
      uVar1 = uVar1 ^ 0xdd;
      iVar7 = *(int *)((long)param_1 + 0x34);
      if (0 < iVar7) {
        do {
          uVar5 = uVar1 + uVar5;
          uVar1 = uVar5 ^ (uVar1 >> 0x33 | uVar1 << 0xd);
          iVar7 = iVar7 + -1;
          uVar4 = uVar2 + uVar6 ^ (uVar2 >> 0x30 | uVar2 << 0x10);
          uVar6 = uVar2 + uVar6 + uVar1;
          uVar5 = uVar4 + (uVar5 >> 0x20 | uVar5 << 0x20);
          uVar1 = uVar6 ^ (uVar1 >> 0x2f | uVar1 << 0x11);
          uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
          uVar2 = uVar5 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
        } while (iVar7 != 0);
      }
      param_2[1] = uVar1 ^ uVar5 ^ uVar6 ^ uVar2;
    }
    return 1;
  }
}


