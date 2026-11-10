/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034ad738; name: FUN_034ad738
 */


void FUN_034ad738(undefined8 param_1,long *param_2,uint param_3)

{
  long lVar1;
  float fVar2;
  byte bVar3;
  undefined *puVar4;
  float *pfVar5;
  undefined1 *puVar6;
  float *pfVar7;
  ulong uVar8;
  float *pfVar9;
  byte *pbVar10;
  ulong uVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  size_t sVar15;
  float fVar16;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined1 local_60;
  undefined8 local_58;
  
  puVar4 = PTR_DAT_047e2fd0;
  fVar16 = (float)param_1;
  if ((((param_3 < 0x1b) && ((1 << (ulong)(param_3 & 0x1f) & 0x7f8007fU) != 0)) || (param_3 == 0x48)
      ) || (param_3 - 0x3c < 10)) {
    local_80 = (ulong)local_80._4_4_ << 0x20;
    pfVar7 = (float *)param_2[0x16];
    if (pfVar7 != (float *)0x0) {
      bVar3 = *(byte *)pfVar7;
      uVar13 = (uint)bVar3;
      if (bVar3 < 2) {
        uVar13 = 1;
      }
      uVar11 = (ulong)uVar13;
      pfVar5 = (float *)((long)pfVar7 + ((ulong)(bVar3 + 4) & 0x1fc));
      pfVar9 = pfVar7;
      do {
        pfVar7 = pfVar5;
        pfVar9 = (float *)((long)pfVar9 + 1);
        if ((uint)*(byte *)pfVar9 == (param_3 & 0xff)) goto LAB_034ad7cc;
        uVar11 = uVar11 - 1;
        pfVar5 = pfVar7 + 1;
      } while (uVar11 != 0);
      pfVar7 = (float *)0x0;
    }
LAB_034ad7cc:
    pfVar9 = (float *)&local_80;
    if (pfVar7 != (float *)0x0) {
      pfVar9 = pfVar7;
    }
    if (fVar16 - *pfVar9 == 0.0) {
      return;
    }
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0xff;
    local_60 = 0xff;
    local_58 = 0;
    (**(code **)(*param_2 + 200))
              (fVar16 - *pfVar9,param_1,param_2,*(undefined4 *)(&DAT_03d9818c + (ulong)param_3 * 4),
               &local_80,0);
    pbVar10 = (byte *)param_2[0x16];
    if (pbVar10 != (byte *)0x0) {
      bVar3 = *pbVar10;
      sVar15 = (size_t)bVar3;
      uVar13 = (uint)bVar3;
      if (bVar3 < 2) {
        uVar13 = 1;
      }
      uVar11 = (ulong)uVar13;
      pfVar7 = (float *)(pbVar10 + ((ulong)(bVar3 + 4) & 0x1fc));
      do {
        pbVar10 = pbVar10 + 1;
        if ((uint)*pbVar10 == (param_3 & 0xff)) goto LAB_034adaf0;
        pfVar7 = pfVar7 + 1;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
      goto LAB_034ada6c;
    }
  }
  else {
    uVar13 = param_3 - 0xc;
    if (0x3d < uVar13) {
LAB_034adb14:
      fVar2 = *(float *)((long)&DAT_048b014c + (ulong)param_3 * 4);
      local_80 = CONCAT44(local_80._4_4_,fVar2);
      pbVar10 = (byte *)param_2[0x16];
      if (pbVar10 == (byte *)0x0) {
        if (fVar2 == fVar16) {
          return;
        }
        sVar15 = 0;
      }
      else {
        bVar3 = *pbVar10;
        sVar15 = (size_t)bVar3;
        uVar14 = (uint)bVar3;
        uVar13 = uVar14;
        if (bVar3 < 2) {
          uVar13 = 1;
        }
        uVar8 = (ulong)uVar13;
        pfVar7 = (float *)(pbVar10 + ((ulong)(uVar14 + 4) & 0x1fc));
        uVar11 = uVar8;
        pbVar12 = pbVar10;
        do {
          pbVar12 = pbVar12 + 1;
          if ((uint)*pbVar12 == (param_3 & 0xff)) goto LAB_034adb6c;
          pfVar7 = pfVar7 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
        pfVar7 = (float *)0x0;
LAB_034adb6c:
        pfVar9 = (float *)&local_80;
        if (pfVar7 != (float *)0x0) {
          pfVar9 = pfVar7;
        }
        if (*pfVar9 == fVar16) {
          return;
        }
        pfVar7 = (float *)(pbVar10 + ((ulong)(uVar14 + 4) & 0x1fc));
        do {
          pbVar10 = pbVar10 + 1;
          if ((uint)*pbVar10 == (param_3 & 0xff)) goto LAB_034adc48;
          pfVar7 = pfVar7 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      uVar13 = (int)sVar15 + 5U & 0x1fc;
      lVar1 = sVar15 + 1;
      puVar6 = (undefined1 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,uVar13 + (int)lVar1 * 4);
      if (puVar6 != (undefined1 *)0x0) {
        if (param_2[0x16] != 0) {
          memcpy(puVar6 + 1,(void *)(param_2[0x16] + 1),sVar15);
          memcpy(puVar6 + uVar13,(void *)(param_2[0x16] + (ulong)((int)sVar15 + 4U & 0x1fc)),
                 sVar15 << 2);
          (**(code **)(puVar4 + 0x30))(0,param_2[0x16]);
        }
        pfVar7 = (float *)(puVar6 + sVar15 * 4 + (ulong)uVar13);
        puVar6[lVar1] = (char)param_3;
        *puVar6 = (char)lVar1;
        param_2[0x16] = (long)puVar6;
LAB_034adc48:
        *pfVar7 = fVar16;
      }
                    /* WARNING: Could not recover jumptable at 0x034adc7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x180))(param_2,0,0);
      return;
    }
    if ((1L << ((ulong)uVar13 & 0x3f) & 0x2000000000000003U) == 0) {
      if ((1L << ((ulong)uVar13 & 0x3f) & 0x800000000000004U) == 0) goto LAB_034adb14;
      local_80 = CONCAT44(local_80._4_4_,*(undefined4 *)((long)&DAT_048b014c + (ulong)param_3 * 4));
      pfVar7 = (float *)param_2[0x16];
      if (pfVar7 != (float *)0x0) {
        bVar3 = *(byte *)pfVar7;
        uVar13 = (uint)bVar3;
        if (bVar3 < 2) {
          uVar13 = 1;
        }
        uVar11 = (ulong)uVar13;
        pfVar5 = (float *)((long)pfVar7 + ((ulong)(bVar3 + 4) & 0x1fc));
        pfVar9 = pfVar7;
        do {
          pfVar7 = pfVar5;
          pfVar9 = (float *)((long)pfVar9 + 1);
          if ((uint)*(byte *)pfVar9 == (param_3 & 0xff)) goto LAB_034ad9e0;
          uVar11 = uVar11 - 1;
          pfVar5 = pfVar7 + 1;
        } while (uVar11 != 0);
        pfVar7 = (float *)0x0;
      }
LAB_034ad9e0:
      pfVar9 = (float *)&local_80;
      if (pfVar7 != (float *)0x0) {
        pfVar9 = pfVar7;
      }
      if (*pfVar9 == fVar16) {
        return;
      }
      (**(code **)(*param_2 + 0x1f8))
                (param_1,param_2,*(undefined4 *)(&DAT_03d9818c + (ulong)param_3 * 4),0,0);
      pbVar10 = (byte *)param_2[0x16];
      if (pbVar10 != (byte *)0x0) {
        bVar3 = *pbVar10;
        sVar15 = (size_t)bVar3;
        uVar13 = (uint)bVar3;
        if (bVar3 < 2) {
          uVar13 = 1;
        }
        uVar11 = (ulong)uVar13;
        pfVar7 = (float *)(pbVar10 + ((ulong)(bVar3 + 4) & 0x1fc));
        do {
          pbVar10 = pbVar10 + 1;
          if ((uint)*pbVar10 == (param_3 & 0xff)) goto LAB_034adaf0;
          pfVar7 = pfVar7 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
        goto LAB_034ada6c;
      }
    }
    else {
      local_80 = (ulong)local_80._4_4_ << 0x20;
      pfVar7 = (float *)param_2[0x16];
      if (pfVar7 != (float *)0x0) {
        bVar3 = *(byte *)pfVar7;
        uVar13 = (uint)bVar3;
        if (bVar3 < 2) {
          uVar13 = 1;
        }
        uVar11 = (ulong)uVar13;
        pfVar5 = (float *)((long)pfVar7 + ((ulong)(bVar3 + 4) & 0x1fc));
        pfVar9 = pfVar7;
        do {
          pfVar7 = pfVar5;
          pfVar9 = (float *)((long)pfVar9 + 1);
          if ((uint)*(byte *)pfVar9 == (param_3 & 0xff)) goto LAB_034ad8f0;
          uVar11 = uVar11 - 1;
          pfVar5 = pfVar7 + 1;
        } while (uVar11 != 0);
        pfVar7 = (float *)0x0;
      }
LAB_034ad8f0:
      pfVar9 = (float *)&local_80;
      if (pfVar7 != (float *)0x0) {
        pfVar9 = pfVar7;
      }
      if (fVar16 - *pfVar9 == 0.0) {
        return;
      }
      (**(code **)(*param_2 + 0x1f8))
                (param_2,*(undefined4 *)(&DAT_03d9818c + (ulong)param_3 * 4),0,0);
      pbVar10 = (byte *)param_2[0x16];
      if (pbVar10 != (byte *)0x0) {
        bVar3 = *pbVar10;
        sVar15 = (size_t)bVar3;
        uVar13 = (uint)bVar3;
        if (bVar3 < 2) {
          uVar13 = 1;
        }
        uVar11 = (ulong)uVar13;
        pfVar7 = (float *)(pbVar10 + ((ulong)(bVar3 + 4) & 0x1fc));
        do {
          pbVar10 = pbVar10 + 1;
          if ((uint)*pbVar10 == (param_3 & 0xff)) goto LAB_034adaf0;
          pfVar7 = pfVar7 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
        goto LAB_034ada6c;
      }
    }
  }
  sVar15 = 0;
LAB_034ada6c:
  puVar4 = PTR_DAT_047e2fd0;
  uVar13 = (int)sVar15 + 5U & 0x1fc;
  lVar1 = sVar15 + 1;
  puVar6 = (undefined1 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,uVar13 + (int)lVar1 * 4);
  if (puVar6 != (undefined1 *)0x0) {
    if (param_2[0x16] != 0) {
      memcpy(puVar6 + 1,(void *)(param_2[0x16] + 1),sVar15);
      memcpy(puVar6 + uVar13,(void *)(param_2[0x16] + (ulong)((int)sVar15 + 4U & 0x1fc)),sVar15 << 2
            );
      (**(code **)(puVar4 + 0x30))(0,param_2[0x16]);
    }
    pfVar7 = (float *)(puVar6 + sVar15 * 4 + (ulong)uVar13);
    puVar6[lVar1] = (char)param_3;
    *puVar6 = (char)lVar1;
    param_2[0x16] = (long)puVar6;
LAB_034adaf0:
    *pfVar7 = fVar16;
  }
  return;
}


