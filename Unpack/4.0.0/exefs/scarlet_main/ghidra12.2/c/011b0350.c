/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011b0350; name: FUN_011b0350
 */


undefined1  [16] FUN_011b0350(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  short sVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  cVar3 = *(char *)(param_2 + 1);
  sVar4 = *(short *)((long)param_2 + 2);
  uVar5 = *param_2;
  uVar9 = (ulong)*(byte *)((long)param_2 + 6);
  if ((uVar9 == 0) || (lVar6 = FUN_011b047c(param_1,uVar9 << 0x21,0), lVar6 == 0)) {
    uVar1 = (ulong)CONCAT14(cVar3 == '\x01',uVar5) | uVar9 << 0x21;
    uVar7 = uVar9 << 0x21 & 0x200000000;
    uVar2 = (ulong)CONCAT14(cVar3 != '\x01',uVar5);
    uVar8 = uVar7 | uVar2;
    lVar6 = FUN_011b047c(param_1,uVar1,0);
    uVar9 = uVar1;
    if (sVar4 == 0) {
      if (lVar6 == 0) {
        lVar6 = FUN_011b047c(param_1,uVar8,0);
        uVar9 = 0x19;
        if (lVar6 != 0) {
          uVar9 = uVar8;
        }
      }
    }
    else if (lVar6 == 0) {
      lVar6 = FUN_011b047c(param_1,uVar8,0);
      uVar9 = uVar8;
      if (lVar6 == 0) {
        lVar6 = FUN_011b047c(param_1,uVar1 & 0x30000ffff,0);
        uVar9 = uVar1 & 0x30000ffff;
        if (lVar6 == 0) {
          uVar7 = uVar7 | uVar2 & 0x30000ffff;
          lVar6 = FUN_011b047c(param_1,uVar7,0);
          uVar9 = 0x19;
          if (lVar6 != 0) {
            uVar9 = uVar7;
          }
        }
      }
    }
  }
  else {
    uVar9 = 0x200000000;
  }
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar9;
  return auVar10;
}


