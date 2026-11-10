/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02981128; name: FUN_02981128
 */


void FUN_02981128(long *param_1,long param_2,short param_3,uint param_4)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  bVar2 = *(byte *)((long)param_1 + 0xa6);
  uVar3 = (ulong)bVar2;
  if (param_2 != 0) {
    if (10 < bVar2) goto LAB_02981180;
    if (bVar2 != 0) {
      plVar4 = param_1;
      uVar5 = uVar3;
      do {
        if (*plVar4 == param_2) goto LAB_029812f4;
        uVar5 = uVar5 - 1;
        plVar4 = plVar4 + 1;
      } while (uVar5 != 0);
    }
    param_1[uVar3] = param_2;
    *(undefined1 *)((long)param_1 + (ulong)*(byte *)((long)param_1 + 0xa6) + 0x84) = 0;
    *(undefined2 *)((long)param_1 + (ulong)*(byte *)((long)param_1 + 0xa6) * 2 + 0x58) = 0;
    *(undefined2 *)((long)param_1 + (ulong)*(byte *)((long)param_1 + 0xa6) * 2 + 0x6e) = 0;
    uVar1 = *(byte *)((long)param_1 + 0xa6) + 1;
    uVar3 = (ulong)uVar1;
    *(char *)((long)param_1 + 0xa6) = (char)uVar1;
    if ((uint)*(byte *)((long)param_1 + 0xa7) < (uVar1 & 0xff)) {
      *(char *)((long)param_1 + 0xa7) = (char)uVar1;
      goto LAB_02981180;
    }
  }
LAB_029812f4:
  if ((uVar3 & 0xff) == 0) {
    return;
  }
LAB_02981180:
  if ((param_4 & 1) == 0) {
    if (*param_1 == param_2) {
      *(short *)(param_1 + 0xb) = (short)param_1[0xb] + param_3;
      *(undefined1 *)((long)param_1 + 0x84) = 1;
      uVar3 = (ulong)*(byte *)((long)param_1 + 0xa6);
    }
    if (1 < ((uint)uVar3 & 0xff)) {
      if (param_1[1] == param_2) {
        *(short *)((long)param_1 + 0x5a) = *(short *)((long)param_1 + 0x5a) + param_3;
        *(undefined1 *)((long)param_1 + 0x85) = 1;
        uVar3 = (ulong)*(byte *)((long)param_1 + 0xa6);
      }
      if (2 < ((uint)uVar3 & 0xff)) {
        lVar6 = 0;
        do {
          if (param_1[lVar6 + 2] == param_2) {
            *(short *)((long)param_1 + lVar6 * 2 + 0x5c) =
                 *(short *)((long)param_1 + lVar6 * 2 + 0x5c) + param_3;
            *(undefined1 *)((long)param_1 + lVar6 + 0x86) = 1;
            uVar3 = (ulong)*(byte *)((long)param_1 + 0xa6);
          }
          uVar5 = lVar6 + 3;
          lVar6 = lVar6 + 1;
        } while (uVar5 < (uVar3 & 0xff));
      }
    }
  }
  else {
    if (*param_1 == param_2) {
      *(short *)((long)param_1 + 0x6e) = *(short *)((long)param_1 + 0x6e) + param_3;
      *(undefined1 *)((long)param_1 + 0x84) = 2;
      uVar3 = (ulong)*(byte *)((long)param_1 + 0xa6);
    }
    if (1 < ((uint)uVar3 & 0xff)) {
      if (param_1[1] == param_2) {
        *(short *)(param_1 + 0xe) = (short)param_1[0xe] + param_3;
        *(undefined1 *)((long)param_1 + 0x85) = 2;
        uVar3 = (ulong)*(byte *)((long)param_1 + 0xa6);
      }
      if (2 < ((uint)uVar3 & 0xff)) {
        lVar6 = 0;
        do {
          if (param_1[lVar6 + 2] == param_2) {
            *(short *)((long)param_1 + lVar6 * 2 + 0x72) =
                 *(short *)((long)param_1 + lVar6 * 2 + 0x72) + param_3;
            *(undefined1 *)((long)param_1 + lVar6 + 0x86) = 2;
            uVar3 = (ulong)*(byte *)((long)param_1 + 0xa6);
          }
          uVar5 = lVar6 + 3;
          lVar6 = lVar6 + 1;
        } while (uVar5 < (uVar3 & 0xff));
      }
    }
  }
  return;
}


