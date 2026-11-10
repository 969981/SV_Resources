/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03471e20; name: FUN_03471e20
 */


void FUN_03471e20(undefined8 param_1,long *param_2,uint param_3)

{
  long lVar1;
  byte bVar2;
  undefined *puVar3;
  float *pfVar4;
  undefined1 *puVar5;
  float *pfVar6;
  float *pfVar7;
  byte *pbVar8;
  ulong uVar9;
  uint uVar10;
  size_t __n;
  float fVar11;
  ulong local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined1 local_60;
  undefined8 local_58;
  
  if (5 < param_3) {
    FUN_034ad738(param_1,param_2,param_3);
    return;
  }
  local_80 = local_80 & 0xffffffff00000000;
  pfVar6 = (float *)param_2[0x16];
  if (pfVar6 != (float *)0x0) {
    bVar2 = *(byte *)pfVar6;
    uVar10 = (uint)bVar2;
    if (bVar2 < 2) {
      uVar10 = 1;
    }
    uVar9 = (ulong)uVar10;
    pfVar4 = (float *)((long)pfVar6 + ((ulong)(bVar2 + 4) & 0x1fc));
    pfVar7 = pfVar6;
    do {
      pfVar6 = pfVar4;
      pfVar7 = (float *)((long)pfVar7 + 1);
      if ((uint)*(byte *)pfVar7 == (param_3 & 0xff)) goto LAB_03471e9c;
      uVar9 = uVar9 - 1;
      pfVar4 = pfVar6 + 1;
    } while (uVar9 != 0);
    pfVar6 = (float *)0x0;
  }
LAB_03471e9c:
  pfVar7 = (float *)&local_80;
  if (pfVar6 != (float *)0x0) {
    pfVar7 = pfVar6;
  }
  fVar11 = (float)param_1 - *pfVar7;
  if (fVar11 != 0.0) {
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0xff;
    local_60 = 0xff;
    local_58 = 0;
    (**(code **)(*param_2 + 200))
              (fVar11,param_1,param_2,*(undefined4 *)(PTR_DAT_047e7190 + (ulong)param_3 * 4),
               &local_80,0);
    puVar3 = PTR_DAT_047e2fd0;
    pbVar8 = (byte *)param_2[0x16];
    if (pbVar8 == (byte *)0x0) {
      __n = 0;
    }
    else {
      bVar2 = *pbVar8;
      __n = (size_t)bVar2;
      uVar10 = (uint)bVar2;
      if (bVar2 < 2) {
        uVar10 = 1;
      }
      uVar9 = (ulong)uVar10;
      pfVar6 = (float *)(pbVar8 + ((ulong)(bVar2 + 4) & 0x1fc));
      do {
        pbVar8 = pbVar8 + 1;
        if ((uint)*pbVar8 == (param_3 & 0xff)) goto LAB_03471ff4;
        pfVar6 = pfVar6 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    uVar10 = (int)__n + 5U & 0x1fc;
    lVar1 = __n + 1;
    puVar5 = (undefined1 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,uVar10 + (int)lVar1 * 4);
    if (puVar5 != (undefined1 *)0x0) {
      if (param_2[0x16] != 0) {
        memcpy(puVar5 + 1,(void *)(param_2[0x16] + 1),__n);
        memcpy(puVar5 + uVar10,(void *)(param_2[0x16] + (ulong)((int)__n + 4U & 0x1fc)),__n << 2);
        (**(code **)(puVar3 + 0x30))(0,param_2[0x16]);
      }
      pfVar6 = (float *)(puVar5 + __n * 4 + (ulong)uVar10);
      puVar5[lVar1] = (char)param_3;
      *puVar5 = (char)lVar1;
      param_2[0x16] = (long)puVar5;
LAB_03471ff4:
      *pfVar6 = (float)param_1;
    }
  }
  return;
}


