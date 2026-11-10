/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019222e8; name: FUN_019222e8
 */


void FUN_019222e8(undefined1 *param_1,int *param_2)

{
  ushort uVar1;
  long lVar2;
  ushort *puVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  puVar3 = (ushort *)((long)param_2 - (long)*param_2);
  uVar1 = *puVar3;
  if (8 < uVar1) {
    uVar4 = (ulong)puVar3[4];
    lVar2 = -(long)*param_2;
    if ((uVar4 != 0) && (*(char *)((long)param_2 + uVar4) != '\0')) {
      *param_1 = 3;
      uVar5 = 0;
      uVar6 = 0;
      if (10 < *(ushort *)((long)param_2 - (long)*param_2)) {
        uVar4 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[5];
        uVar6 = 0;
        if (uVar4 != 0) {
          uVar6 = *(undefined4 *)((long)param_2 + uVar4);
        }
      }
      *(undefined4 *)(param_1 + 0x48) = uVar6;
      uVar6 = 0;
      if (0xc < *(ushort *)((long)param_2 - (long)*param_2)) {
        uVar4 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[6];
        uVar6 = 0;
        if (uVar4 != 0) {
          uVar6 = *(undefined4 *)((long)param_2 + uVar4);
        }
      }
      *(undefined4 *)(param_1 + 0x4c) = uVar6;
      if ((0xe < *(ushort *)((long)param_2 - (long)*param_2)) &&
         (uVar4 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[7], uVar4 != 0)) {
        uVar5 = *(undefined4 *)((long)param_2 + uVar4);
      }
      *(undefined4 *)(param_1 + 0x50) = uVar5;
      lVar2 = -(long)*param_2;
      uVar1 = *(ushort *)((long)param_2 - (long)*param_2);
    }
    if (0x10 < uVar1) {
      uVar4 = (ulong)*(ushort *)((long)param_2 + lVar2 + 0x10);
      if ((uVar4 != 0) && (*(char *)((long)param_2 + uVar4) != '\0')) {
        uVar6 = 0;
        if ((0x12 < uVar1) && (uVar4 = (ulong)*(ushort *)((long)param_2 + lVar2 + 0x12), uVar4 != 0)
           ) {
          uVar6 = *(undefined4 *)((long)param_2 + uVar4);
        }
        *(undefined4 *)(param_1 + 0xa0) = uVar6;
        if (*(ushort *)((long)param_2 - (long)*param_2) < 0x15) {
          uVar6 = 0;
        }
        else {
          uVar4 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[10];
          uVar6 = 0;
          if (uVar4 != 0) {
            uVar6 = *(undefined4 *)((long)param_2 + uVar4);
          }
        }
        *(undefined4 *)(param_1 + 0xa4) = uVar6;
        uVar6 = 0;
        if ((0x16 < *(ushort *)((long)param_2 - (long)*param_2)) &&
           (uVar4 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xb], uVar4 != 0)) {
          uVar6 = *(undefined4 *)((long)param_2 + uVar4);
        }
        *(undefined4 *)(param_1 + 0xa8) = uVar6;
        if (*(ushort *)((long)param_2 - (long)*param_2) < 0x19) {
          uVar6 = 0;
        }
        else {
          uVar4 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xc];
          uVar6 = 0;
          if (uVar4 != 0) {
            uVar6 = *(undefined4 *)((long)param_2 + uVar4);
          }
        }
        *(undefined4 *)(param_1 + 0xac) = uVar6;
        uVar6 = 0;
        if ((0x1a < *(ushort *)((long)param_2 - (long)*param_2)) &&
           (uVar4 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xd], uVar4 != 0)) {
          uVar6 = *(undefined4 *)((long)param_2 + uVar4);
        }
        *(undefined4 *)(param_1 + 0xb0) = uVar6;
        if (*(ushort *)((long)param_2 - (long)*param_2) < 0x1d) {
          uVar6 = 0;
        }
        else {
          uVar4 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xe];
          uVar6 = 0;
          if (uVar4 != 0) {
            uVar6 = *(undefined4 *)((long)param_2 + uVar4);
          }
        }
        *(undefined4 *)(param_1 + 0xb4) = uVar6;
        uVar6 = 0;
        if ((0x1e < *(ushort *)((long)param_2 - (long)*param_2)) &&
           (uVar4 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xf], uVar4 != 0)) {
          uVar6 = *(undefined4 *)((long)param_2 + uVar4);
        }
        *(undefined4 *)(param_1 + 0xb8) = uVar6;
        if (*(ushort *)((long)param_2 - (long)*param_2) < 0x21) {
          uVar6 = 0;
        }
        else {
          uVar4 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x10];
          uVar6 = 0;
          if (uVar4 != 0) {
            uVar6 = *(undefined4 *)((long)param_2 + uVar4);
          }
        }
        *(undefined4 *)(param_1 + 0xbc) = uVar6;
        return;
      }
    }
  }
  return;
}


