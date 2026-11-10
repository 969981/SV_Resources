/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004771c0; name: FUN_004771c0
 */


void FUN_004771c0(long *param_1,ulong *param_2,size_t param_3)

{
  void *__dest;
  uint uVar1;
  ulong *__src;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar8 = param_1[1];
  uVar9 = param_1[2];
  uVar10 = param_1[3];
  uVar7 = param_1[4];
  uVar1 = *(uint *)(param_1 + 5);
  *param_1 = *param_1 + param_3;
  if (uVar1 != 0) {
    uVar6 = (ulong)(8 - uVar1);
    __dest = (void *)((long)param_1 + (ulong)uVar1 + 0x38);
    if (param_3 < uVar6) {
      memcpy(__dest,param_2,param_3);
      *(uint *)(param_1 + 5) = uVar1 + (int)param_3;
      return;
    }
    memcpy(__dest,param_2,uVar6);
    param_3 = param_3 - uVar6;
    param_2 = (ulong *)((long)param_2 + uVar6);
    iVar2 = (int)param_1[6];
    uVar7 = param_1[7] ^ uVar7;
    if (0 < iVar2) {
      do {
        uVar8 = uVar9 + uVar8;
        uVar6 = uVar8 ^ (uVar9 >> 0x33 | uVar9 << 0xd);
        iVar2 = iVar2 + -1;
        uVar3 = uVar7 + uVar10 ^ (uVar7 >> 0x30 | uVar7 << 0x10);
        uVar8 = uVar3 + (uVar8 >> 0x20 | uVar8 << 0x20);
        uVar9 = uVar7 + uVar10 + uVar6;
        uVar10 = uVar9 >> 0x20 | uVar9 << 0x20;
        uVar7 = uVar8 ^ (uVar3 >> 0x2b | uVar3 << 0x15);
        uVar9 = uVar9 ^ (uVar6 >> 0x2f | uVar6 << 0x11);
      } while (iVar2 != 0);
    }
    uVar8 = uVar8 ^ param_1[7];
  }
  uVar1 = (uint)param_3 & 7;
  __src = (ulong *)((long)param_2 + (param_3 - uVar1));
  if (param_2 != __src) {
    if ((int)param_1[6] < 1) {
      do {
        puVar5 = param_2 + 1;
        uVar7 = *param_2 ^ uVar7;
        uVar8 = uVar8 ^ *param_2;
        param_2 = puVar5;
      } while (puVar5 != __src);
    }
    else {
      do {
        uVar6 = *param_2;
        uVar7 = uVar6 ^ uVar7;
        iVar2 = (int)param_1[6];
        do {
          uVar8 = uVar9 + uVar8;
          uVar3 = uVar8 ^ (uVar9 >> 0x33 | uVar9 << 0xd);
          iVar2 = iVar2 + -1;
          uVar4 = uVar7 + uVar10 ^ (uVar7 >> 0x30 | uVar7 << 0x10);
          uVar8 = uVar4 + (uVar8 >> 0x20 | uVar8 << 0x20);
          uVar9 = uVar7 + uVar10 + uVar3;
          uVar10 = uVar9 >> 0x20 | uVar9 << 0x20;
          uVar7 = uVar8 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
          uVar9 = uVar9 ^ (uVar3 >> 0x2f | uVar3 << 0x11);
        } while (iVar2 != 0);
        param_2 = param_2 + 1;
        uVar8 = uVar8 ^ uVar6;
      } while (param_2 != __src);
    }
  }
  if ((param_3 & 7) != 0) {
    memcpy(param_1 + 7,__src,(ulong)uVar1);
  }
  *(uint *)(param_1 + 5) = uVar1;
  param_1[1] = uVar8;
  param_1[2] = uVar9;
  param_1[3] = uVar10;
  param_1[4] = uVar7;
  return;
}


