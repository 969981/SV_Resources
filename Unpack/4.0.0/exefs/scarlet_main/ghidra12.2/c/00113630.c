/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00113630; name: FUN_00113630
 */


void FUN_00113630(long param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5,
                 long param_6,uint param_7,undefined4 param_8,uint *param_9)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 local_470 [16];
  undefined1 auStack_460 [240];
  undefined1 local_370 [16];
  undefined1 auStack_360 [240];
  undefined1 auStack_270 [528];
  
  uVar3 = FUN_0011cad0(param_5,*param_9,param_7);
  uVar8 = (ulong)uVar3;
  *param_9 = uVar3;
  FUN_0011ccc0(param_1,param_2,param_8,param_5,param_7,0,0x7ff);
  uVar9 = 0;
  do {
    iVar2 = param_4 << 4;
    if ((uVar9 & 2) == 0) {
      iVar2 = 0;
    }
    iVar4 = FUN_0011d6a0(uVar8,auStack_270,param_5,param_8,&DAT_03cb4bc0,param_1 + uVar9 * 0x10,
                         param_6 + uVar9 * 8,0x8000);
    uVar8 = uVar8 >> 4;
    if (param_3 != 0) {
      if ((((uVar9 & 2) == 0 && (param_7 & 4) == 0) || (((param_7 & 3) == 0 && ((uVar9 & 2) != 0))))
         && (iVar4 != 0)) {
        FUN_0011d9e0(local_470,auStack_270,iVar4,0x20);
        puVar5 = (undefined8 *)(param_3 + (ulong)(iVar2 + ((uint)uVar9 & 1) * 0x10));
        lVar6 = 0;
        puVar7 = puVar5;
        do {
          lVar1 = lVar6 + 0x20;
          auVar10 = *(undefined1 (*) [16])(local_470 + lVar6);
          auVar10._0_8_ = NEON_sqxtun(auVar10._0_8_,auVar10,2);
          auVar10 = NEON_sqxtun2(auVar10,*(undefined1 (*) [16])(auStack_460 + lVar6),2);
          puVar7[1] = auVar10._8_8_;
          *puVar7 = auVar10._0_8_;
          puVar7 = (undefined8 *)((long)puVar7 + (long)param_4);
          lVar6 = lVar1;
        } while ((int)lVar1 != 0x100);
        puVar5 = (undefined8 *)((long)puVar5 + (ulong)(uint)(param_4 << 3));
        lVar6 = 0;
        do {
          lVar1 = lVar6 + 0x20;
          auVar10 = *(undefined1 (*) [16])(local_370 + lVar6);
          auVar11._8_8_ = auVar10._8_8_;
          auVar11._0_8_ = NEON_sqxtun(auVar10._0_8_,auVar10,2);
          auVar10 = NEON_sqxtun2(auVar11,*(undefined1 (*) [16])(auStack_360 + lVar6),2);
          puVar5[1] = auVar10._8_8_;
          *puVar5 = auVar10._0_8_;
          puVar5 = (undefined8 *)((long)puVar5 + (long)param_4);
          lVar6 = lVar1;
        } while ((int)lVar1 != 0x100);
      }
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 != 4);
  return;
}


