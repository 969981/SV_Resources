/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f004bc; name: FUN_02f004bc
 */


void FUN_02f004bc(long param_1,undefined1 (*param_2) [12],float *param_3,int *param_4)

{
  long lVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined *puVar18;
  int iVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  undefined *puVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70 [16];
  
  auVar30._8_4_ = 0x7f7fffee;
  auVar30._0_8_ = 0x7f7fffee7f7fffee;
  auVar30._12_4_ = 0x7f7fffee;
  *(long *)(*param_2 + 8) = auVar30._8_8_;
  *(undefined8 *)*param_2 = 0x7f7fffee7f7fffee;
  *(undefined8 *)param_2[2] = 0xff7fffeeff7fffee;
  *(undefined8 *)(param_2[1] + 4) = 0xff7fffeeff7fffee;
  *param_4 = 0;
  puVar18 = PTR_DAT_047d19f0;
  puVar23 = PTR_DAT_047d19b0;
  plVar20 = (long *)(param_1 + 0x48);
  if ((*plVar20 != 0) && (lVar1 = *plVar20 + (long)plVar20, lVar1 != 0)) {
    (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0x18))
              (lVar1,PTR_DAT_047d19b0 + 0x200,&local_80);
    auVar10._8_8_ = uStack_78;
    auVar10._0_8_ = local_80;
    auVar32._12_4_ = (int)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
    auVar32._0_12_ = *param_2;
    auVar32 = NEON_fmin(auVar32,auVar10,4);
    auVar30 = NEON_fmax(*(undefined1 (*) [16])(param_2[1] + 4),local_70,4);
    *(long *)(*param_2 + 8) = auVar32._8_8_;
    *(long *)*param_2 = auVar32._0_8_;
    *(long *)param_2[2] = auVar30._8_8_;
    *(long *)(param_2[1] + 4) = auVar30._0_8_;
    iVar2 = *param_4;
    iVar19 = (**(code **)(*(long *)puVar18 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0xc0))(lVar1);
    if (iVar2 <= iVar19) {
      iVar2 = iVar19;
    }
    *param_4 = iVar2;
  }
  plVar21 = (long *)(param_1 + 0x50);
  if ((*plVar21 != 0) && (lVar1 = *plVar21 + (long)plVar21, lVar1 != 0)) {
    (**(code **)(*(long *)puVar18 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0x18))
              (lVar1,puVar23 + 0x200,&local_80);
    auVar11._8_8_ = uStack_78;
    auVar11._0_8_ = local_80;
    auVar3._12_4_ = (int)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
    auVar3._0_12_ = *param_2;
    auVar32 = NEON_fmin(auVar3,auVar11,4);
    auVar30 = NEON_fmax(*(undefined1 (*) [16])(param_2[1] + 4),local_70,4);
    *(long *)(*param_2 + 8) = auVar32._8_8_;
    *(long *)*param_2 = auVar32._0_8_;
    *(long *)param_2[2] = auVar30._8_8_;
    *(long *)(param_2[1] + 4) = auVar30._0_8_;
    iVar2 = *param_4;
    iVar19 = (**(code **)(*(long *)puVar18 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0xc0))(lVar1);
    if (iVar2 <= iVar19) {
      iVar2 = iVar19;
    }
    *param_4 = iVar2;
  }
  plVar22 = (long *)(param_1 + 0x58);
  if ((*plVar22 != 0) && (lVar1 = *plVar22 + (long)plVar22, lVar1 != 0)) {
    (**(code **)(*(long *)puVar18 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0x18))
              (lVar1,puVar23 + 0x200,&local_80);
    auVar12._8_8_ = uStack_78;
    auVar12._0_8_ = local_80;
    auVar4._12_4_ = (int)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
    auVar4._0_12_ = *param_2;
    auVar32 = NEON_fmin(auVar4,auVar12,4);
    auVar30 = NEON_fmax(*(undefined1 (*) [16])(param_2[1] + 4),local_70,4);
    *(long *)(*param_2 + 8) = auVar32._8_8_;
    *(long *)*param_2 = auVar32._0_8_;
    *(long *)param_2[2] = auVar30._8_8_;
    *(long *)(param_2[1] + 4) = auVar30._0_8_;
    iVar2 = *param_4;
    iVar19 = (**(code **)(*(long *)puVar18 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0xc0))(lVar1);
    if (iVar2 <= iVar19) {
      iVar2 = iVar19;
    }
    *param_4 = iVar2;
  }
  plVar28 = (long *)(param_1 + 0x60);
  if ((*plVar28 != 0) && (lVar1 = *plVar28 + (long)plVar28, lVar1 != 0)) {
    (**(code **)(*(long *)puVar18 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0x18))
              (lVar1,puVar23 + 0x200,&local_80);
    auVar13._8_8_ = uStack_78;
    auVar13._0_8_ = local_80;
    auVar5._12_4_ = (int)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
    auVar5._0_12_ = *param_2;
    auVar32 = NEON_fmin(auVar5,auVar13,4);
    auVar30 = NEON_fmax(*(undefined1 (*) [16])(param_2[1] + 4),local_70,4);
    *(long *)(*param_2 + 8) = auVar32._8_8_;
    *(long *)*param_2 = auVar32._0_8_;
    *(long *)param_2[2] = auVar30._8_8_;
    *(long *)(param_2[1] + 4) = auVar30._0_8_;
    iVar2 = *param_4;
    iVar19 = (**(code **)(*(long *)puVar18 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0xc0))(lVar1);
    if (iVar2 <= iVar19) {
      iVar2 = iVar19;
    }
    *param_4 = iVar2;
  }
  plVar25 = (long *)(param_1 + 0x68);
  if ((*plVar25 != 0) && (lVar1 = *plVar25 + (long)plVar25, lVar1 != 0)) {
    (**(code **)(*(long *)puVar18 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0x18))
              (lVar1,puVar23 + 0x200,&local_80);
    auVar14._8_8_ = uStack_78;
    auVar14._0_8_ = local_80;
    auVar6._12_4_ = (int)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
    auVar6._0_12_ = *param_2;
    auVar32 = NEON_fmin(auVar6,auVar14,4);
    auVar30 = NEON_fmax(*(undefined1 (*) [16])(param_2[1] + 4),local_70,4);
    *(long *)(*param_2 + 8) = auVar32._8_8_;
    *(long *)*param_2 = auVar32._0_8_;
    *(long *)param_2[2] = auVar30._8_8_;
    *(long *)(param_2[1] + 4) = auVar30._0_8_;
    iVar2 = *param_4;
    iVar19 = (**(code **)(*(long *)puVar18 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0xc0))(lVar1);
    if (iVar2 <= iVar19) {
      iVar2 = iVar19;
    }
    *param_4 = iVar2;
  }
  plVar26 = (long *)(param_1 + 0x70);
  if ((*plVar26 != 0) && (lVar1 = *plVar26 + (long)plVar26, lVar1 != 0)) {
    (**(code **)(*(long *)puVar18 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0x18))
              (lVar1,puVar23 + 0x200,&local_80);
    auVar15._8_8_ = uStack_78;
    auVar15._0_8_ = local_80;
    auVar7._12_4_ = (int)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
    auVar7._0_12_ = *param_2;
    auVar32 = NEON_fmin(auVar7,auVar15,4);
    auVar30 = NEON_fmax(*(undefined1 (*) [16])(param_2[1] + 4),local_70,4);
    *(long *)(*param_2 + 8) = auVar32._8_8_;
    *(long *)*param_2 = auVar32._0_8_;
    *(long *)param_2[2] = auVar30._8_8_;
    *(long *)(param_2[1] + 4) = auVar30._0_8_;
    iVar2 = *param_4;
    iVar19 = (**(code **)(*(long *)puVar18 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0xc0))(lVar1);
    if (iVar2 <= iVar19) {
      iVar2 = iVar19;
    }
    *param_4 = iVar2;
  }
  plVar27 = (long *)(param_1 + 0x78);
  if ((*plVar27 != 0) && (lVar1 = *plVar27 + (long)plVar27, lVar1 != 0)) {
    (**(code **)(*(long *)puVar18 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0x18))
              (lVar1,puVar23 + 0x200,&local_80);
    auVar16._8_8_ = uStack_78;
    auVar16._0_8_ = local_80;
    auVar8._12_4_ = (int)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
    auVar8._0_12_ = *param_2;
    auVar32 = NEON_fmin(auVar8,auVar16,4);
    auVar30 = NEON_fmax(*(undefined1 (*) [16])(param_2[1] + 4),local_70,4);
    *(long *)(*param_2 + 8) = auVar32._8_8_;
    *(long *)*param_2 = auVar32._0_8_;
    *(long *)param_2[2] = auVar30._8_8_;
    *(long *)(param_2[1] + 4) = auVar30._0_8_;
    iVar2 = *param_4;
    iVar19 = (**(code **)(*(long *)puVar18 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0xc0))(lVar1);
    puVar23 = PTR_DAT_047d19b0;
    if (iVar2 <= iVar19) {
      iVar2 = iVar19;
    }
    *param_4 = iVar2;
  }
  plVar24 = (long *)(param_1 + 0x80);
  if ((*plVar24 != 0) && (lVar1 = *plVar24 + (long)plVar24, lVar1 != 0)) {
    (**(code **)(*(long *)puVar18 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0x18))
              (lVar1,puVar23 + 0x200,&local_80);
    auVar17._8_8_ = uStack_78;
    auVar17._0_8_ = local_80;
    auVar9._12_4_ = (int)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
    auVar9._0_12_ = *param_2;
    auVar32 = NEON_fmin(auVar9,auVar17,4);
    auVar30 = NEON_fmax(*(undefined1 (*) [16])(param_2[1] + 4),local_70,4);
    *(long *)(*param_2 + 8) = auVar32._8_8_;
    *(long *)*param_2 = auVar32._0_8_;
    *(long *)param_2[2] = auVar30._8_8_;
    *(long *)(param_2[1] + 4) = auVar30._0_8_;
    iVar2 = *param_4;
    iVar19 = (**(code **)(*(long *)puVar18 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0xc0))(lVar1);
    if (iVar2 <= iVar19) {
      iVar2 = iVar19;
    }
    *param_4 = iVar2;
  }
  *param_3 = 0.0;
  auVar31._0_8_ =
       CONCAT44((*(float *)(*param_2 + 4) + (float)((ulong)*(undefined8 *)(param_2[1] + 4) >> 0x20))
                * 0.5,(*(float *)*param_2 + (float)*(undefined8 *)(param_2[1] + 4)) * 0.5);
  auVar31._8_4_ = (*(float *)(*param_2 + 8) + (float)*(undefined8 *)param_2[2]) * 0.5;
  auVar31._12_4_ = (*(float *)param_2[1] + (float)((ulong)*(undefined8 *)param_2[2] >> 0x20)) * 0.5;
  uStack_78 = auVar31._8_8_;
  local_80 = auVar31._0_8_;
  if ((*plVar20 != 0) && (lVar1 = *plVar20 + (long)plVar20, lVar1 != 0)) {
    (**(code **)(*(long *)puVar18 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0x28))
              (lVar1,&local_80,local_88);
    fVar29 = *param_3;
    if (*param_3 <= local_88[0]) {
      fVar29 = local_88[0];
    }
    *param_3 = fVar29;
  }
  if ((*plVar21 != 0) && (lVar1 = *plVar21 + (long)plVar21, lVar1 != 0)) {
    (**(code **)(*(long *)puVar18 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0x28))
              (lVar1,&local_80,local_88);
    fVar29 = *param_3;
    if (*param_3 <= local_88[0]) {
      fVar29 = local_88[0];
    }
    *param_3 = fVar29;
  }
  if ((*plVar22 != 0) && (lVar1 = *plVar22 + (long)plVar22, lVar1 != 0)) {
    (**(code **)(*(long *)puVar18 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0x28))
              (lVar1,&local_80,local_88);
    fVar29 = *param_3;
    if (*param_3 <= local_88[0]) {
      fVar29 = local_88[0];
    }
    *param_3 = fVar29;
  }
  if ((*plVar28 != 0) && (lVar1 = *plVar28 + (long)plVar28, lVar1 != 0)) {
    (**(code **)(*(long *)puVar18 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0x28))
              (lVar1,&local_80,local_88);
    fVar29 = *param_3;
    if (*param_3 <= local_88[0]) {
      fVar29 = local_88[0];
    }
    *param_3 = fVar29;
  }
  if ((*plVar25 != 0) && (lVar1 = *plVar25 + (long)plVar25, lVar1 != 0)) {
    (**(code **)(*(long *)puVar18 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0x28))
              (lVar1,&local_80,local_88);
    fVar29 = *param_3;
    if (*param_3 <= local_88[0]) {
      fVar29 = local_88[0];
    }
    *param_3 = fVar29;
  }
  if ((*plVar26 != 0) && (lVar1 = *plVar26 + (long)plVar26, lVar1 != 0)) {
    (**(code **)(*(long *)puVar18 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0x28))
              (lVar1,&local_80,local_88);
    fVar29 = *param_3;
    if (*param_3 <= local_88[0]) {
      fVar29 = local_88[0];
    }
    *param_3 = fVar29;
  }
  if ((*plVar27 != 0) && (lVar1 = *plVar27 + (long)plVar27, lVar1 != 0)) {
    (**(code **)(*(long *)puVar18 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0x28))
              (lVar1,&local_80,local_88);
    fVar29 = *param_3;
    if (*param_3 <= local_88[0]) {
      fVar29 = local_88[0];
    }
    *param_3 = fVar29;
  }
  if ((*plVar24 != 0) && (lVar1 = *plVar24 + (long)plVar24, lVar1 != 0)) {
    (**(code **)(*(long *)puVar18 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0x28))
              (lVar1,&local_80,local_88);
    fVar29 = *param_3;
    if (*param_3 <= local_88[0]) {
      fVar29 = local_88[0];
    }
    *param_3 = fVar29;
  }
  return;
}


