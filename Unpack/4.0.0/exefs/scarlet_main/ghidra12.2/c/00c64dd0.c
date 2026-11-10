/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c64dd0; name: FUN_00c64dd0
 */


void FUN_00c64dd0(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  ulong uVar8;
  long lVar9;
  
  lVar9 = *(long *)(param_1 + 0xa0);
  lVar1 = *(long *)(param_1 + 0xa8) - lVar9;
  uVar3 = lVar1 >> 2;
  if (uVar3 < 0x80) {
    if (lVar1 != 0) {
      lVar1 = 0;
      lVar4 = 8;
      do {
        lVar9 = **(long **)(*(long *)(param_1 + 0x60) + (ulong)*(uint *)(lVar9 + lVar1 * 4) * 8);
        uVar5 = (ulong)*(uint *)(lVar9 + 0x240);
        lVar9 = *(long *)(lVar9 + 0x208);
        if (*(char *)(lVar9 + uVar5 * 0x18) == '\0') {
          pcVar7 = (char *)(*(long *)(param_1 + 0x1a0) + (ulong)*(uint *)(param_1 + 0x1d8) * 0x18);
          lVar9 = *(long *)(pcVar7 + 8);
          if (*pcVar7 != '\0' && lVar9 != 0) goto LAB_00c64e28;
          uVar6 = 0;
        }
        else {
          lVar9 = *(long *)(lVar9 + uVar5 * 0x18 + 8);
          uVar6 = 0;
          if (lVar9 != 0) {
LAB_00c64e28:
            uVar6 = *(undefined8 *)(lVar9 + 0xa0);
          }
        }
        *(undefined8 *)(*(long *)(param_1 + 0xd8) + lVar4) = uVar6;
        if (uVar3 - 1 == lVar1) {
          return;
        }
        lVar9 = *(long *)(param_1 + 0xa0);
        lVar1 = lVar1 + 1;
        lVar4 = lVar4 + 0x10;
      } while( true );
    }
  }
  else {
    uVar5 = uVar3 >> 1;
    if (uVar5 < uVar3) {
      uVar2 = uVar5 << 4 | 8;
      do {
        lVar9 = **(long **)(*(long *)(param_1 + 0x60) + (ulong)*(uint *)(lVar9 + uVar5 * 4) * 8);
        uVar8 = (ulong)*(uint *)(lVar9 + 0x240);
        lVar9 = *(long *)(lVar9 + 0x208);
        if (*(char *)(lVar9 + uVar8 * 0x18) == '\0') {
          pcVar7 = (char *)(*(long *)(param_1 + 0x1a0) + (ulong)*(uint *)(param_1 + 0x1d8) * 0x18);
          lVar9 = *(long *)(pcVar7 + 8);
          if (*pcVar7 != '\0' && lVar9 != 0) goto LAB_00c64ec0;
          uVar6 = 0;
        }
        else {
          lVar9 = *(long *)(lVar9 + uVar8 * 0x18 + 8);
          uVar6 = 0;
          if (lVar9 != 0) {
LAB_00c64ec0:
            uVar6 = *(undefined8 *)(lVar9 + 0xa0);
          }
        }
        *(undefined8 *)(*(long *)(param_1 + 0xd8) + uVar2) = uVar6;
        if (uVar3 - 1 == uVar5) {
          return;
        }
        lVar9 = *(long *)(param_1 + 0xa0);
        uVar5 = uVar5 + 1;
        uVar2 = uVar2 + 0x10;
      } while( true );
    }
  }
  return;
}


