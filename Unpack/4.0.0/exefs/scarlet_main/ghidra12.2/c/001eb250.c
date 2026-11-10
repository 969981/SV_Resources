/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001eb250; name: FUN_001eb250
 */


void FUN_001eb250(long param_1,long param_2)

{
  uint *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  ulong auStack_2e8 [8];
  long alStack_2a8 [5];
  ulong auStack_280 [66];
  ulong local_70;
  ulong local_68 [7];
  
  memcpy(&local_70,(void *)(param_1 + 8),0x40);
  lVar5 = 0;
  param_2 = param_2 + 3;
  do {
    puVar1 = (uint *)(param_2 + -3);
    param_2 = param_2 + 4;
    uVar6 = (ulong)*puVar1 << 0x20;
    uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    *(ulong *)((long)auStack_280 + lVar5 + 0x10) =
         ((uVar6 & 0xffff0000ffff0000) >> 0x10 | uVar6 << 0x10) >> 0x20;
    lVar5 = lVar5 + 8;
  } while (lVar5 != 0x80);
  lVar5 = 0x80;
  uVar6 = auStack_280[2];
  do {
    lVar3 = lVar5 + 8;
    uVar7 = *(ulong *)((long)auStack_280 + lVar5);
    lVar4 = uVar6 + *(long *)((long)alStack_2a8 + lVar5);
    uVar6 = *(ulong *)((long)auStack_2e8 + lVar5);
    *(ulong *)((long)auStack_280 + lVar5 + 0x10) =
         lVar4 + (((ulong)(uint)((int)uVar7 << 0xd) | uVar7 >> 0x13 & 0x1fff) ^
                  (uVar7 & 0xffffffff) >> 10 ^
                 ((ulong)(uint)((int)uVar7 << 0xf) | uVar7 >> 0x11 & 0x7fff)) +
         (((ulong)(uint)((int)uVar6 << 0xe) | uVar6 >> 0x12 & 0x3fff) ^ (uVar6 & 0xffffffff) >> 3 ^
         ((ulong)(uint)((int)uVar6 << 0x19) | uVar6 >> 7 & 0x1ffffff));
    lVar5 = lVar3;
  } while (lVar3 != 0x200);
  lVar5 = 0;
  do {
    uVar10 = local_68[4];
    uVar7 = local_68[5];
    uVar6 = local_68[1];
    local_68[1] = local_68[0];
    local_68[4] = local_68[3];
    local_68[0] = local_70;
    plVar2 = (long *)((long)&DAT_03cc0ff0 + lVar5);
    iVar9 = (int)local_68[4];
    lVar3 = lVar5 + 0x10;
    lVar5 = lVar5 + 8;
    iVar8 = (int)local_68[0];
    lVar3 = *plVar2 + local_68[6] + *(long *)((long)auStack_280 + lVar3) +
            (((ulong)(uint)(iVar9 << 0x1a) | local_68[4] >> 6 & 0x3ffffff) ^
             ((ulong)(uint)(iVar9 << 0x15) | local_68[4] >> 0xb & 0x1fffff) ^
            ((ulong)(uint)(iVar9 << 7) | local_68[4] >> 0x19 & 0x7f)) +
            (uVar10 & local_68[4] | uVar7 & (local_68[4] ^ 0xffffffffffffffff));
    local_68[3] = lVar3 + local_68[2];
    local_70 = lVar3 + ((local_68[1] | local_68[0]) & uVar6 | local_68[1] & local_68[0]) +
               (((ulong)(uint)(iVar8 << 0x1e) | local_68[0] >> 2 & 0x3fffffff) ^
                ((ulong)(uint)(iVar8 << 0x13) | local_68[0] >> 0xd & 0x7ffff) ^
               ((ulong)(uint)(iVar8 << 10) | local_68[0] >> 0x16 & 0x3ff));
    local_68[5] = uVar10;
    local_68[2] = uVar6;
    local_68[6] = uVar7;
  } while (lVar5 != 0x200);
  lVar5 = 0;
  *(ulong *)(param_1 + 8) = local_70 + *(long *)(param_1 + 8);
  do {
    *(long *)(param_1 + 0x10 + lVar5) =
         *(long *)((long)local_68 + lVar5) + *(long *)(param_1 + 0x10 + lVar5);
    lVar5 = lVar5 + 8;
  } while (lVar5 != 0x38);
  return;
}


