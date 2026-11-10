/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00769610; name: FUN_00769610
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00769610(undefined4 *param_1,long *param_2,long *param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  char *pcVar10;
  undefined8 *puVar11;
  undefined **ppuVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *local_d0;
  undefined8 uStack_c8;
  long local_c0;
  long local_b8;
  char local_b0;
  undefined *local_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  ppuVar12 = &local_d0;
  *param_4 = 1;
  uVar4 = (**(code **)(*param_2 + 0x48))();
  puVar3 = PTR_DAT_047cbeb8;
  puVar2 = PTR_DAT_047cbb08;
  if (uVar4 < 0x18) {
    (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x140))(&local_60);
    lVar6 = (long)&uStack_58 + 1 + (uStack_58 & 0xff);
    lVar5 = (long)&uStack_58 + 1;
    if (local_60 != (undefined *)0x0) {
      lVar6 = lStack_50 + uStack_58;
      lVar5 = lStack_50;
    }
    lVar5 = FUN_0052d550(param_2,lVar5);
    if (lVar6 != lVar5) {
LAB_0076988c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = (**(code **)(**(long **)puVar2 + 0xf0))(*(long **)puVar2,&local_60,1);
    lVar5 = *param_3;
    *param_3 = lVar6;
    uVar7 = (**(code **)(**(long **)puVar2 + 0x1a0))();
    FUN_002246b8(param_1,uVar7);
    if (lVar5 != 0) {
      (**(code **)(**(long **)puVar2 + 0xc0))(*(long **)puVar2,lVar5);
    }
    uStack_c8 = uStack_58;
    local_d0 = local_60;
    local_b8 = lStack_48;
    local_c0 = lStack_50;
    plVar8 = *(long **)puVar2;
    pcVar13 = *(code **)(*plVar8 + 0x148);
  }
  else {
    local_c0 = 0;
    local_b0 = '\0';
    local_d0 = PTR_DAT_047cbeb8 + 0x10;
    uStack_c8 = CONCAT44(uVar4,0x100000);
    if (*param_3 != 0) goto LAB_0076988c;
    lVar6 = (**(code **)(**(long **)PTR_DAT_047cbb08 + 0xf0))(*(long **)PTR_DAT_047cbb08,0,0);
    if (*param_3 != 0) {
      (**(code **)(**(long **)puVar2 + 0xc0))();
      *param_3 = 0;
    }
    local_b8 = lVar6 + 0x18;
    *param_3 = lVar6;
    uVar9 = FUN_0052d5bc(param_2,&local_d0);
    puVar1 = PTR_FUN_047cba38;
    if ((uVar9 & 1) == 0) {
      pcVar10 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x20);
      uVar7 = s_Failed_to_serialize_message_03c0f32a._0_8_;
      *(ulong *)(pcVar10 + 8) =
           CONCAT53(s_Failed_to_serialize_message_03c0f32a._11_5_,
                    s_Failed_to_serialize_message_03c0f32a._8_3_);
      *(undefined8 *)pcVar10 = uVar7;
      uVar14 = s_Failed_to_serialize_message_03c0f32a._19_8_;
      uVar7 = CONCAT35(s_Failed_to_serialize_message_03c0f32a._16_3_,
                       s_Failed_to_serialize_message_03c0f32a._11_5_);
      pcVar10[0x1b] = '\0';
      *(undefined8 *)(pcVar10 + 0x13) = uVar14;
      *(undefined8 *)(pcVar10 + 0xb) = uVar7;
      *param_1 = 0xd;
      puVar11 = (undefined8 *)FUN_0049e770(puVar1,0x20);
      uVar14 = _UNK_03caa878;
      uVar7 = _DAT_03caa870;
      *(undefined8 **)(param_1 + 6) = puVar11;
      *(undefined8 *)(param_1 + 4) = uVar14;
      *(undefined8 *)(param_1 + 2) = uVar7;
      uVar14 = *(undefined8 *)(pcVar10 + 8);
      uVar7 = *(undefined8 *)pcVar10;
      uVar15 = *(undefined8 *)(pcVar10 + 0xc);
      *(undefined8 *)((long)puVar11 + 0x14) = *(undefined8 *)(pcVar10 + 0x14);
      *(undefined8 *)((long)puVar11 + 0xc) = uVar15;
      puVar11[1] = uVar14;
      *puVar11 = uVar7;
      *(undefined8 *)(param_1 + 10) = 0;
      *(undefined8 *)(param_1 + 0xc) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      FUN_0049e790(PTR_LAB_047cba48,pcVar10);
    }
    else {
      uVar7 = (**(code **)(**(long **)puVar2 + 0x1a0))();
      FUN_002246b8(param_1,uVar7);
    }
    if (local_b0 == '\0') {
      s_Failed_to_serialize_message_03c0f32a[0] = s_Failed_to_serialize_message_03c0f32a[0];
      s_Failed_to_serialize_message_03c0f32a[1] = s_Failed_to_serialize_message_03c0f32a[1];
      s_Failed_to_serialize_message_03c0f32a[2] = s_Failed_to_serialize_message_03c0f32a[2];
      s_Failed_to_serialize_message_03c0f32a[3] = s_Failed_to_serialize_message_03c0f32a[3];
      s_Failed_to_serialize_message_03c0f32a[4] = s_Failed_to_serialize_message_03c0f32a[4];
      s_Failed_to_serialize_message_03c0f32a[5] = s_Failed_to_serialize_message_03c0f32a[5];
      s_Failed_to_serialize_message_03c0f32a[6] = s_Failed_to_serialize_message_03c0f32a[6];
      s_Failed_to_serialize_message_03c0f32a[7] = s_Failed_to_serialize_message_03c0f32a[7];
      s_Failed_to_serialize_message_03c0f32a[8] = s_Failed_to_serialize_message_03c0f32a[8];
      s_Failed_to_serialize_message_03c0f32a[9] = s_Failed_to_serialize_message_03c0f32a[9];
      s_Failed_to_serialize_message_03c0f32a[10] = s_Failed_to_serialize_message_03c0f32a[10];
      s_Failed_to_serialize_message_03c0f32a[0xb] = s_Failed_to_serialize_message_03c0f32a[0xb];
      s_Failed_to_serialize_message_03c0f32a[0xc] = s_Failed_to_serialize_message_03c0f32a[0xc];
      s_Failed_to_serialize_message_03c0f32a[0xd] = s_Failed_to_serialize_message_03c0f32a[0xd];
      s_Failed_to_serialize_message_03c0f32a[0xe] = s_Failed_to_serialize_message_03c0f32a[0xe];
      s_Failed_to_serialize_message_03c0f32a[0xf] = s_Failed_to_serialize_message_03c0f32a[0xf];
      s_Failed_to_serialize_message_03c0f32a[0x10] = s_Failed_to_serialize_message_03c0f32a[0x10];
      s_Failed_to_serialize_message_03c0f32a[0x11] = s_Failed_to_serialize_message_03c0f32a[0x11];
      s_Failed_to_serialize_message_03c0f32a[0x12] = s_Failed_to_serialize_message_03c0f32a[0x12];
      s_Failed_to_serialize_message_03c0f32a[0x13] = s_Failed_to_serialize_message_03c0f32a[0x13];
      s_Failed_to_serialize_message_03c0f32a[0x14] = s_Failed_to_serialize_message_03c0f32a[0x14];
      s_Failed_to_serialize_message_03c0f32a[0x15] = s_Failed_to_serialize_message_03c0f32a[0x15];
      s_Failed_to_serialize_message_03c0f32a[0x16] = s_Failed_to_serialize_message_03c0f32a[0x16];
      s_Failed_to_serialize_message_03c0f32a[0x17] = s_Failed_to_serialize_message_03c0f32a[0x17];
      s_Failed_to_serialize_message_03c0f32a[0x18] = s_Failed_to_serialize_message_03c0f32a[0x18];
      s_Failed_to_serialize_message_03c0f32a[0x19] = s_Failed_to_serialize_message_03c0f32a[0x19];
      s_Failed_to_serialize_message_03c0f32a[0x1a] = s_Failed_to_serialize_message_03c0f32a[0x1a];
      return;
    }
    local_d0 = puVar3 + 0x10;
    ppuVar12 = &local_60;
    plVar8 = *(long **)puVar2;
    pcVar13 = *(code **)(*plVar8 + 0x148);
  }
  (*pcVar13)(plVar8,ppuVar12);
  return;
}


