/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0040e270; name: FUN_0040e270
 */


ulong FUN_0040e270(long *param_1,long *param_2,long param_3,long param_4,long *param_5,
                  undefined8 param_6,long param_7)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  long *plVar9;
  long lVar10;
  
  lVar7 = *param_1;
  if ((lVar7 == *param_2) &&
     (((iVar1 = (int)param_1[4], iVar1 == 0 || ((int)param_2[1] == 0)) || (iVar1 == (int)param_2[1])
      ))) {
    if ((param_3 == 0) && (param_4 == 0)) {
      if (*(code **)(lVar7 + 0x70) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0040e320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(lVar7 + 0x70))(param_1,param_2);
        return uVar3;
      }
      uVar5 = 0x42;
      uVar6 = 0x2ec;
      uVar4 = 0x7f;
      goto LAB_0040e2a8;
    }
    if (param_4 != 0) {
      plVar9 = param_5;
      lVar10 = param_4;
      do {
        if ((lVar7 != *(long *)*plVar9) ||
           ((iVar1 != 0 && (iVar2 = (int)((long *)*plVar9)[1], iVar2 != 0 && iVar1 != iVar2)))) {
          uVar5 = 0x65;
          uVar6 = 0x3fd;
          goto LAB_0040e2a4;
        }
        lVar10 = lVar10 + -1;
        plVar9 = plVar9 + 1;
      } while (lVar10 != 0);
    }
    if (param_7 != 0) {
      lVar10 = 0;
      pcVar8 = *(code **)(lVar7 + 0xf0);
joined_r0x0040e3e0:
      if (pcVar8 == (code *)0x0) {
        uVar3 = FUN_0040ed30(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      }
      else {
        uVar3 = (*pcVar8)(param_1,param_2,param_3,param_4,param_5,param_6);
      }
      FUN_003ed280(lVar10);
      return uVar3 & 0xffffffff;
    }
    lVar10 = FUN_003ed220();
    if (lVar10 != 0) {
      pcVar8 = *(code **)(*param_1 + 0xf0);
      param_7 = lVar10;
      goto joined_r0x0040e3e0;
    }
    uVar5 = 0x44;
    uVar6 = 0x403;
  }
  else {
    uVar5 = 0x65;
    uVar6 = 0x3f4;
  }
LAB_0040e2a4:
  uVar4 = 0x122;
LAB_0040e2a8:
  FUN_004806c0(0x10,uVar4,uVar5,"external/openssl/crypto/ec/ec_lib.c",uVar6);
  return 0;
}


