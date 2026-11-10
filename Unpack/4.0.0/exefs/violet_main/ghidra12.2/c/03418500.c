/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03418500; name: FUN_03418500
 */


void FUN_03418500(long param_1,undefined8 param_2,long *param_3,undefined4 param_4,int *param_5)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined1 (*pauVar6) [16];
  long *plVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 (*local_50) [16];
  undefined1 (*local_38) [16];
  
  uVar2 = FUN_03418760(param_1,param_2,*param_3,&local_38,param_4,param_5);
  if ((uVar2 & 1) != 0) {
    for (puVar3 = *(undefined8 **)(param_1 + 0x18); puVar3 != (undefined8 *)0x0;
        puVar3 = (undefined8 *)puVar3[0x1ec]) {
      if (puVar3[0x1ee] != 0) goto LAB_034185c8;
    }
    puVar3 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x18))(10,0xf78,0x10);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[0xa4] = puVar3 + 0x52;
      puVar3[0xf6] = puVar3 + 0xa4;
      puVar3[0x148] = puVar3 + 0xf6;
      puVar3[0x1ee] = puVar3 + 0x19a;
      puVar3[0x1ec] = 0;
      *puVar3 = 0;
      puVar3[0x52] = puVar3;
      puVar3[0x19a] = puVar3 + 0x148;
      *(undefined4 *)(puVar3 + 0x1ed) = 6;
      if (*(long *)(param_1 + 0x18) == 0) {
        *(undefined8 **)(param_1 + 0x18) = puVar3;
        puVar3[0x1ec] = 0;
      }
      else {
        puVar3[0x1ec] = *(long *)(param_1 + 0x18);
        *(undefined8 **)(param_1 + 0x18) = puVar3;
      }
LAB_034185c8:
      plVar7 = (long *)puVar3[0x1ee];
      if (plVar7 != (long *)0x0) {
        if (*plVar7 == 0) {
          puVar3[0x1ee] = 0;
        }
        else {
          puVar3[0x1ee] = *plVar7;
        }
        *(int *)(puVar3 + 0x1ed) = *(int *)(puVar3 + 0x1ed) + -1;
        plVar7[0x50] = -0x100000000;
        if (*param_5 != 1) {
          return;
        }
        *(int *)((long)plVar7 + 0x284) = *(int *)(*param_3 + 0x284) + 1;
        local_50 = (undefined1 (*) [16])*param_3;
        uVar1 = *(uint *)local_50[0x28];
        auVar8 = *local_50;
        auVar9 = local_50[1];
        if (1 < (int)uVar1) {
          if (uVar1 == 2) {
            lVar4 = 1;
          }
          else {
            uVar2 = 0;
            pauVar6 = local_50 + 5;
            do {
              uVar5 = uVar2;
              auVar9 = NEON_fmax(auVar9,pauVar6[-2],4);
              uVar2 = uVar5 + 2;
              auVar8 = NEON_fmin(auVar8,pauVar6[-3],4);
              auVar8 = NEON_fmin(auVar8,pauVar6[-1],4);
              auVar9 = NEON_fmax(auVar9,*pauVar6,4);
              pauVar6 = pauVar6 + 4;
            } while (((ulong)uVar1 - 1 & 0xfffffffffffffffe) != uVar2);
            lVar4 = uVar5 + 3;
          }
          if (((ulong)uVar1 - 1 & 1) != 0) {
            auVar9 = NEON_fmax(auVar9,(local_50 + lVar4 * 2)[1],4);
            auVar8 = NEON_fmin(auVar8,local_50[lVar4 * 2],4);
          }
        }
        uStack_68 = auVar8._8_8_;
        local_70 = auVar8._0_8_;
        uStack_58 = auVar9._8_8_;
        uStack_60 = auVar9._0_8_;
        FUN_03418ab8(param_1,&local_70,plVar7,0,param_5);
        uVar1 = *(uint *)local_38[0x28];
        auVar8 = *local_38;
        auVar9 = local_38[1];
        if (1 < (int)uVar1) {
          if (uVar1 == 2) {
            lVar4 = 1;
          }
          else {
            uVar2 = 0;
            pauVar6 = local_38 + 5;
            do {
              uVar5 = uVar2;
              auVar9 = NEON_fmax(auVar9,pauVar6[-2],4);
              uVar2 = uVar5 + 2;
              auVar8 = NEON_fmin(auVar8,pauVar6[-3],4);
              auVar8 = NEON_fmin(auVar8,pauVar6[-1],4);
              auVar9 = NEON_fmax(auVar9,*pauVar6,4);
              pauVar6 = pauVar6 + 4;
            } while (((ulong)uVar1 - 1 & 0xfffffffffffffffe) != uVar2);
            lVar4 = uVar5 + 3;
          }
          if (((ulong)uVar1 - 1 & 1) != 0) {
            auVar9 = NEON_fmax(auVar9,(local_38 + lVar4 * 2)[1],4);
            auVar8 = NEON_fmin(auVar8,local_38[lVar4 * 2],4);
          }
        }
        local_50 = local_38;
        uStack_68 = auVar8._8_8_;
        local_70 = auVar8._0_8_;
        uStack_58 = auVar9._8_8_;
        uStack_60 = auVar9._0_8_;
        FUN_03418ab8(param_1,&local_70,plVar7,0,param_5);
        *param_3 = (long)plVar7;
        return;
      }
    }
    *param_5 = 0x34;
  }
  return;
}


