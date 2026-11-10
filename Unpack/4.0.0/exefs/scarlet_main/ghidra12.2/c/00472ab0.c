/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00472ab0; name: FUN_00472ab0
 */


void FUN_00472ab0(long param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  if (param_3 != 0) {
    if (param_4 >> 3 == 0) {
      do {
        FUN_00472910(param_1);
      } while( true );
    }
    lVar8 = 0;
    lVar7 = 0;
    uVar5 = 0;
    while( true ) {
      uVar4 = *(ulong *)(param_1 + uVar5 * 8);
      uVar2 = param_3 + lVar8;
      puVar3 = (undefined1 *)(param_2 + lVar7);
      if (uVar2 < 8) break;
      puVar3[1] = (char)(uVar4 >> 8);
      puVar3[2] = (char)(uVar4 >> 0x10);
      puVar3[3] = (char)(uVar4 >> 0x18);
      puVar3[4] = (char)(uVar4 >> 0x20);
      *puVar3 = (char)uVar4;
      puVar3[5] = (char)(uVar4 >> 0x28);
      puVar3[6] = (char)(uVar4 >> 0x30);
      puVar3[7] = (char)(uVar4 >> 0x38);
      if ((param_3 + -8 == lVar7) || (uVar5 = uVar5 + 1, param_4 >> 3 <= uVar5)) {
        if (param_3 + -8 == lVar7) {
          return;
        }
        FUN_00472910(param_1);
        uVar5 = 0;
      }
      lVar7 = lVar7 + 8;
      lVar8 = lVar8 + -8;
    }
    uVar5 = uVar2;
    if (uVar2 < 2) {
      uVar5 = 1;
    }
    uVar6 = uVar5 & 3;
    if (2 < uVar5 - 1) {
      if (uVar2 < 2) {
        uVar2 = 0;
      }
      uVar5 = 0;
      do {
        lVar8 = param_2 + uVar5 + lVar7;
        puVar3[uVar5] = (char)uVar4;
        *(char *)(lVar8 + 1) = (char)(uVar4 >> 8);
        uVar1 = uVar5 + 4;
        *(char *)(lVar8 + 2) = (char)(uVar4 >> 0x10);
        puVar3[uVar5 + 3] = (char)(uVar4 >> 0x18);
        uVar4 = uVar4 >> 0x20;
        uVar5 = uVar1;
      } while ((uVar2 & 0xfffffffffffffffc) != uVar1);
      puVar3 = puVar3 + uVar1;
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar3 = (char)uVar4;
      uVar4 = uVar4 >> 8;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}


