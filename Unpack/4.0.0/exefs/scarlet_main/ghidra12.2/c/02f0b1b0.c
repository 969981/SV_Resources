/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f0b1b0; name: FUN_02f0b1b0
 */


void FUN_02f0b1b0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  short *psVar4;
  long lVar5;
  short *psVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  
  puVar2 = PTR_DAT_047d1a08;
  uVar3 = *(uint *)(param_1 + 0x14);
  if (-1 < (int)uVar3) {
    psVar4 = *(short **)(param_1 + 8);
    uVar8 = 0xffffffffffffffff;
    psVar6 = psVar4;
    do {
      if (*psVar6 != -1) {
        uVar1 = (uint)uVar8;
        break;
      }
      uVar8 = uVar8 + 1;
      psVar6 = psVar6 + 8;
      uVar1 = uVar3;
    } while (uVar3 != uVar8);
    uVar8 = (ulong)(uVar1 + 1);
    if ((int)(uVar1 + 1) <= (int)uVar3) {
      do {
        uVar7 = (uint)uVar8;
        uVar9 = -(uVar8 >> 0x1f) & 0xfffffff000000000 | uVar8 << 4;
        (**(code **)(puVar2 + 8))(0,*(undefined8 *)(psVar4 + (long)(int)uVar7 * 8 + 4),0);
        uVar3 = *(uint *)(param_1 + 0x14);
        uVar1 = uVar3;
        if ((int)uVar3 <= (int)uVar7) {
          uVar1 = uVar7;
        }
        lVar5 = (long)(int)uVar1 - (long)(int)uVar7;
        do {
          uVar9 = uVar9 + 0x10;
          if (lVar5 == 0) {
            uVar8 = (ulong)(uVar1 + 1);
            break;
          }
          lVar5 = lVar5 + -1;
          uVar8 = (ulong)((int)uVar8 + 1);
        } while (*(short *)(*(long *)(param_1 + 8) + uVar9) == -1);
        if ((int)uVar3 < (int)uVar8) break;
        psVar4 = *(short **)(param_1 + 8);
      } while( true );
    }
    if (0 < (int)uVar3) {
      lVar5 = 0;
      uVar8 = (ulong)(uVar3 + 1);
      do {
        if (*(short *)(*(long *)(param_1 + 8) + lVar5) != -1) {
          *(undefined2 *)(*(long *)(param_1 + 8) + lVar5) = 0xffff;
        }
        uVar8 = uVar8 - 1;
        lVar5 = lVar5 + 0x10;
      } while (uVar8 != 0);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0x80000000;
  return;
}


