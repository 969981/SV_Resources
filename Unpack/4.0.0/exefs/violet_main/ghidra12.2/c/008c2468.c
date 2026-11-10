/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008c2468; name: FUN_008c2468
 */


void FUN_008c2468(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(param_2 + 0x28);
  if (lVar1 != 0) {
    if (((float)param_1 < *(float *)(lVar1 + 0x7c)) || (*(float *)(lVar1 + 0x80) <= (float)param_1))
    {
      *(undefined1 *)(param_2 + 0x1c) = 0;
      return;
    }
    *(undefined1 *)(param_2 + 0x1c) = 1;
    FUN_008c25fc(param_1,param_2,&local_70,lVar1 + 8);
    uVar4 = FUN_008bea60(param_1,*(long *)(param_2 + 0x28) + 0x68);
    puVar2 = *(undefined8 **)(param_2 + 0x20);
    if (*(long *)(param_2 + 0x38) == 0) {
      puVar2[5] = uStack_48;
      *puVar2 = local_70;
      puVar2[1] = uStack_68;
      puVar2[3] = local_58;
      puVar2[4] = local_50;
      puVar2[2] = local_60;
    }
    else {
      puVar3 = *(undefined8 **)(*(long *)(param_2 + 0x38) + 0x20);
      uVar11 = puVar3[3];
      uVar15 = puVar3[5];
      fVar5 = (float)*puVar3;
      fVar16 = (float)local_70;
      fVar17 = (float)((ulong)local_70 >> 0x20);
      fVar18 = (float)uStack_68;
      fVar19 = (float)((ulong)uStack_68 >> 0x20);
      fVar6 = (float)((ulong)*puVar3 >> 0x20);
      fVar20 = (float)local_60;
      fVar22 = (float)((ulong)local_60 >> 0x20);
      fVar24 = (float)local_58;
      fVar26 = (float)((ulong)local_58 >> 0x20);
      fVar8 = (float)puVar3[2];
      fVar9 = (float)((ulong)puVar3[2] >> 0x20);
      fVar12 = (float)puVar3[4];
      fVar13 = (float)((ulong)puVar3[4] >> 0x20);
      fVar7 = (float)puVar3[1];
      fVar21 = (float)local_50;
      fVar23 = (float)((ulong)local_50 >> 0x20);
      fVar25 = (float)uStack_48;
      fVar27 = (float)((ulong)uStack_48 >> 0x20);
      fVar10 = (float)uVar11;
      fVar14 = (float)uVar15;
      puVar2[1] = CONCAT44((float)((ulong)puVar3[1] >> 0x20) +
                           fVar19 * fVar5 + fVar26 * fVar6 + fVar27 * fVar7,
                           fVar18 * fVar5 + fVar24 * fVar6 + fVar25 * fVar7 + 0.0);
      *puVar2 = CONCAT44(fVar17 * fVar5 + fVar22 * fVar6 + fVar23 * fVar7 + 0.0,
                         fVar16 * fVar5 + fVar20 * fVar6 + fVar21 * fVar7 + 0.0);
      puVar2[3] = CONCAT44((float)((ulong)uVar11 >> 0x20) +
                           fVar19 * fVar8 + fVar26 * fVar9 + fVar27 * fVar10,
                           fVar18 * fVar8 + fVar24 * fVar9 + fVar25 * fVar10 + 0.0);
      puVar2[2] = CONCAT44(fVar17 * fVar8 + fVar22 * fVar9 + fVar23 * fVar10 + 0.0,
                           fVar16 * fVar8 + fVar20 * fVar9 + fVar21 * fVar10 + 0.0);
      puVar2[5] = CONCAT44((float)((ulong)uVar15 >> 0x20) +
                           fVar19 * fVar12 + fVar26 * fVar13 + fVar27 * fVar14,
                           fVar18 * fVar12 + fVar24 * fVar13 + fVar25 * fVar14 + 0.0);
      puVar2[4] = CONCAT44(fVar17 * fVar12 + fVar22 * fVar13 + fVar23 * fVar14 + 0.0,
                           fVar16 * fVar12 + fVar20 * fVar13 + fVar21 * fVar14 + 0.0);
    }
    *(undefined4 *)(param_2 + 0x18) = uVar4;
  }
  if (0 < *(int *)(param_2 + 0x50)) {
    FUN_008c1a00(param_1,param_2 + 0x40,param_3,param_4,*(undefined8 *)(param_2 + 0x20));
  }
  for (lVar1 = *(long *)(param_2 + 0x98); lVar1 != param_2 + 0x90; lVar1 = *(long *)(lVar1 + 8)) {
    (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_1,(long *)(lVar1 + -8),param_3,param_4);
  }
  return;
}


