/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00113800; name: FUN_00113800
 */


void FUN_00113800(undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,
                 undefined8 param_5,undefined8 param_6,uint param_7,undefined4 param_8,
                 undefined4 *param_9)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 local_470 [16];
  undefined1 auStack_460 [240];
  undefined1 local_370 [16];
  undefined1 auStack_360 [240];
  undefined1 auStack_270 [528];
  
  uVar2 = FUN_0011e000(param_5,*param_9);
  *param_9 = uVar2;
  FUN_0011e0f0(param_1,param_2,param_8,param_5,param_7,0,0x7ff);
  iVar3 = FUN_0011d6a0(uVar2,auStack_270,param_5,param_8,&DAT_03cb4dc0,param_1,param_6,0x8000);
  if (iVar3 != 0) {
    FUN_0011d9e0(local_470,auStack_270,iVar3,0x20);
    if ((param_7 & 3) == 0) {
      if ((param_7 >> 2 & 1) == 0) {
        lVar4 = 0;
        puVar5 = param_3;
        do {
          lVar1 = lVar4 + 0x20;
          auVar7 = *(undefined1 (*) [16])(local_470 + lVar4);
          auVar8._8_8_ = auVar7._8_8_;
          auVar8._0_8_ = NEON_sqxtun(auVar7._0_8_,auVar7,2);
          auVar7 = NEON_sqxtun2(auVar8,*(undefined1 (*) [16])(auStack_460 + lVar4),2);
          puVar5[1] = auVar7._8_8_;
          *puVar5 = auVar7._0_8_;
          puVar5 = (undefined8 *)((long)puVar5 + (long)param_4);
          lVar4 = lVar1;
        } while ((int)lVar1 != 0x100);
        param_3 = (undefined8 *)((long)param_3 + (ulong)(uint)(param_4 << 3));
        lVar4 = 0;
        do {
          lVar1 = lVar4 + 0x20;
          auVar7 = *(undefined1 (*) [16])(local_370 + lVar4);
          auVar9._8_8_ = auVar7._8_8_;
          auVar9._0_8_ = NEON_sqxtun(auVar7._0_8_,auVar7,2);
          auVar7 = NEON_sqxtun2(auVar9,*(undefined1 (*) [16])(auStack_360 + lVar4),2);
          param_3[1] = auVar7._8_8_;
          *param_3 = auVar7._0_8_;
          param_3 = (undefined8 *)((long)param_3 + (long)param_4);
          lVar4 = lVar1;
        } while ((int)lVar1 != 0x100);
      }
      else {
        param_3 = (undefined8 *)((long)param_3 + (ulong)(uint)(param_4 << 3));
        lVar4 = 0;
        do {
          lVar1 = lVar4 + 0x20;
          auVar7 = *(undefined1 (*) [16])(local_370 + lVar4);
          auVar7._0_8_ = NEON_sqxtun(auVar7._0_8_,auVar7,2);
          auVar7 = NEON_sqxtun2(auVar7,*(undefined1 (*) [16])(auStack_360 + lVar4),2);
          param_3[1] = auVar7._8_8_;
          *param_3 = auVar7._0_8_;
          param_3 = (undefined8 *)((long)param_3 + (long)param_4);
          lVar4 = lVar1;
        } while ((int)lVar1 != 0x100);
      }
    }
    else {
      lVar4 = 0;
      do {
        lVar1 = lVar4 + 0x20;
        auVar7 = *(undefined1 (*) [16])(local_470 + lVar4);
        auVar6._8_8_ = auVar7._8_8_;
        auVar6._0_8_ = NEON_sqxtun(auVar7._0_8_,auVar7,2);
        auVar7 = NEON_sqxtun2(auVar6,*(undefined1 (*) [16])(auStack_460 + lVar4),2);
        param_3[1] = auVar7._8_8_;
        *param_3 = auVar7._0_8_;
        param_3 = (undefined8 *)((long)param_3 + (long)param_4);
        lVar4 = lVar1;
      } while ((int)lVar1 != 0x100);
    }
  }
  return;
}


