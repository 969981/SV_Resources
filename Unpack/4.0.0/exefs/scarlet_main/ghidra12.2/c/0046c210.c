/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0046c210; name: FUN_0046c210
 */


undefined8
FUN_0046c210(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  undefined1 auStack_a4 [64];
  uint local_64;
  
  lVar5 = FUN_0042bbc0();
  if ((lVar5 == 0) || (uVar3 = FUN_0043b720(param_5), (int)uVar3 < 0)) {
LAB_0046c314:
    uVar6 = 0xffffffff;
  }
  else {
    if (0 < param_2) {
      uVar7 = 0;
      uVar6 = 0xffffffff;
      lVar8 = 0;
      do {
        uVar2 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
        local_64 = uVar2 >> 0x10 | uVar2 << 0x10;
        iVar4 = FUN_0042bc40(lVar5,param_5,0);
        if (((iVar4 == 0) || (iVar4 = FUN_0042bd60(lVar5,param_3,param_4), iVar4 == 0)) ||
           (iVar4 = FUN_0042bd60(lVar5,&local_64,4), iVar4 == 0)) goto LAB_0046c318;
        lVar1 = lVar8 + (ulong)uVar3;
        if (param_2 < lVar1) {
          iVar4 = FUN_0042be20(lVar5,auStack_a4,0);
          if (iVar4 == 0) goto LAB_0046c314;
          memcpy((void *)(param_1 + lVar8),auStack_a4,param_2 - lVar8);
          break;
        }
        iVar4 = FUN_0042be20(lVar5,param_1 + lVar8,0);
        if (iVar4 == 0) goto LAB_0046c318;
        uVar7 = uVar7 + 1;
        lVar8 = lVar1;
      } while (lVar1 < param_2);
    }
    uVar6 = 0;
  }
LAB_0046c318:
  FUN_00453300(auStack_a4,0x40);
  FUN_0042bbe0(lVar5);
  return uVar6;
}


