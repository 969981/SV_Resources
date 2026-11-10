/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034589b0; name: FUN_034589b0
 */


undefined8 FUN_034589b0(long *param_1,long param_2,undefined4 param_3)

{
  uint uVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 local_54;
  byte *local_38;
  
  if (*(short *)((long)param_1 + 0x34) != *(short *)(param_2 + 4)) {
    return 1;
  }
  local_38 = (byte *)(param_2 + 0xb);
  local_54 = param_3;
  (**(code **)(*param_1 + 0x28))
            (param_1,(ulong)CONCAT14(*(char *)(param_2 + 10) != '\0',*(undefined4 *)(param_2 + 6)));
  puVar4 = PTR_DAT_047e2fd0;
  if (param_1[4] != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(1);
  }
  param_1[4] = 0;
  if (param_1[5] != 0) {
    (**(code **)(puVar4 + 0x30))(1);
  }
  param_1[5] = 0;
  bVar2 = *(byte *)(param_2 + 0xb);
  uVar8 = (ulong)bVar2;
  pbVar6 = (byte *)(param_2 + 0xc);
  local_38 = pbVar6;
  if (uVar8 == 0) {
    if (param_1[4] != 0) {
      (**(code **)(puVar4 + 0x30))(1);
      pbVar5 = (byte *)0x0;
      goto LAB_03458adc;
    }
LAB_03458ae0:
    local_38 = pbVar6 + 1;
    bVar2 = *pbVar6;
    uVar8 = (ulong)bVar2;
    if (uVar8 == 0) {
      if (param_1[5] != 0) {
        (**(code **)(puVar4 + 0x30))(1);
        pbVar6 = (byte *)0x0;
        goto LAB_03458b68;
      }
    }
    else {
      uVar9 = (ulong)(bVar2 + 4) & 0x1fc;
      pbVar6 = (byte *)(**(code **)(puVar4 + 0x20))(1,param_1[5],uVar9 + uVar8 * 8);
      pbVar5 = local_38;
      if (pbVar6 == (byte *)0x0) goto LAB_03458b48;
      *pbVar6 = bVar2;
      memcpy(pbVar6 + 1,local_38,uVar8);
      memcpy(pbVar6 + uVar9,pbVar5 + uVar8,uVar8 * 8);
      local_38 = pbVar5 + uVar8 + uVar8 * 8;
LAB_03458b68:
      param_1[5] = (long)pbVar6;
    }
    uVar7 = (**(code **)(*param_1 + 0x48))(param_1,&local_38,&local_54);
  }
  else {
    uVar9 = (ulong)(bVar2 + 4) & 0x1fc;
    pbVar5 = (byte *)(**(code **)(puVar4 + 0x20))(1,param_1[4],uVar9 + uVar8 * 4);
    pbVar6 = local_38;
    if (pbVar5 != (byte *)0x0) {
      *pbVar5 = bVar2;
      memcpy(pbVar5 + 1,local_38,uVar8);
      memcpy(pbVar5 + uVar9,pbVar6 + uVar8,uVar8 * 4);
      pbVar6 = pbVar6 + uVar8 + uVar8 * 4;
LAB_03458adc:
      param_1[4] = (long)pbVar5;
      goto LAB_03458ae0;
    }
LAB_03458b48:
    uVar7 = 0x34;
  }
  pbVar6 = (byte *)param_1[4];
  if (pbVar6 != (byte *)0x0) {
    bVar2 = *pbVar6;
    uVar1 = (uint)bVar2;
    if (bVar2 < 2) {
      uVar1 = 1;
    }
    uVar8 = (ulong)uVar1;
    pbVar5 = pbVar6 + ((ulong)(bVar2 + 4) & 0x1fc);
    do {
      pbVar6 = pbVar6 + 1;
      if (*pbVar6 == 0xf) {
        auVar3 = SEXT816((long)((ulong)*(uint *)PTR_DAT_047e6fa0 * (long)*(int *)pbVar5)) *
                 SEXT816(0x20c49ba5e353f7cf);
        *(int *)pbVar5 = (int)(auVar3._8_8_ >> 7) - (auVar3._12_4_ >> 0x1f);
        break;
      }
      pbVar5 = pbVar5 + 4;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  puVar4 = PTR_DAT_047e6fa0;
  pbVar6 = (byte *)param_1[5];
  if (pbVar6 != (byte *)0x0) {
    bVar2 = *pbVar6;
    uVar1 = (uint)bVar2;
    if (bVar2 < 2) {
      uVar1 = 1;
    }
    uVar8 = (ulong)uVar1;
    pbVar5 = pbVar6 + ((ulong)(bVar2 + 4) & 0x1fc) + 4;
    do {
      pbVar6 = pbVar6 + 1;
      if (*pbVar6 == 0xf) {
        auVar3 = SEXT816((long)((ulong)*(uint *)PTR_DAT_047e6fa0 * (long)*(int *)(pbVar5 + -4))) *
                 SEXT816(0x20c49ba5e353f7cf);
        *(int *)(pbVar5 + -4) = (int)(auVar3._8_8_ >> 7) - (auVar3._12_4_ >> 0x1f);
        auVar3 = SEXT816((long)((ulong)*(uint *)puVar4 * (long)*(int *)pbVar5)) *
                 SEXT816(0x20c49ba5e353f7cf);
        *(int *)pbVar5 = (int)(auVar3._8_8_ >> 7) - (auVar3._12_4_ >> 0x1f);
        return uVar7;
      }
      pbVar5 = pbVar5 + 8;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return uVar7;
}


