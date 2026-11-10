/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004442f0; name: FUN_004442f0
 */


undefined8
FUN_004442f0(void *param_1,ulong param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
            ulong param_6,undefined8 param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  undefined1 auStack_a0 [64];
  uint local_54;
  
  uVar5 = 0;
  if (((param_4 < 0x40000001) && (param_2 < 0x40000001)) && (param_6 < 0x40000001)) {
    lVar4 = FUN_0042bbc0();
    if (lVar4 == 0) {
      uVar5 = 0;
    }
    else {
      iVar2 = FUN_0043b720(param_7);
      iVar3 = FUN_0042bc40(lVar4,param_7,0);
      if (iVar3 != 0) {
        uVar6 = (ulong)iVar2;
        uVar7 = 1;
        do {
          uVar1 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
          local_54 = uVar1 >> 0x10 | uVar1 << 0x10;
          iVar2 = FUN_0042bd60(lVar4,param_3,param_4);
          if (((iVar2 == 0) || (iVar2 = FUN_0042bd60(lVar4,&local_54,4), iVar2 == 0)) ||
             (iVar2 = FUN_0042bd60(lVar4,param_5,param_6), iVar2 == 0)) break;
          if (param_2 < uVar6) {
            iVar2 = FUN_0042bd80(lVar4,auStack_a0,0);
            if (iVar2 != 0) {
              memcpy(param_1,auStack_a0,param_2);
              FUN_00453300(auStack_a0,uVar6);
LAB_00444444:
              uVar5 = 1;
              goto LAB_00444450;
            }
            break;
          }
          iVar2 = FUN_0042bd80(lVar4,param_1,0);
          if (iVar2 == 0) break;
          param_2 = param_2 - uVar6;
          if (param_2 == 0) goto LAB_00444444;
          param_1 = (void *)((long)param_1 + uVar6);
          uVar7 = uVar7 + 1;
          iVar2 = FUN_0042bc40(lVar4,param_7,0);
        } while (iVar2 != 0);
      }
      uVar5 = 0;
LAB_00444450:
      FUN_0042bbe0(lVar4);
    }
  }
  return uVar5;
}


