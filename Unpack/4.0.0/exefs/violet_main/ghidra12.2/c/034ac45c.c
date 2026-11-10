/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034ac45c; name: FUN_034ac45c
 */


void FUN_034ac45c(ulong param_1,long param_2,long param_3,uint param_4,int param_5,
                 undefined4 param_6,int param_7)

{
  uint uVar1;
  byte bVar2;
  float *pfVar3;
  float *pfVar4;
  undefined8 uVar5;
  float *pfVar6;
  float *pfVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  long local_90;
  undefined8 local_88;
  float local_80;
  float fStack_7c;
  int local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined1 local_6c;
  undefined2 local_6b;
  undefined8 local_68;
  
  uVar9 = (ulong)param_4;
  pfVar4 = (float *)FUN_034c86d0(0,param_3,param_4);
  if (pfVar4 != (float *)0x0) {
    fVar11 = (float)param_1;
    if (*(long *)(pfVar4 + 2) != 0) {
      if (param_5 == 1) {
        local_90 = CONCAT44(local_90._4_4_,*(undefined4 *)((long)&DAT_048b014c + uVar9 * 4));
        pfVar6 = *(float **)(param_2 + 0xb0);
        if (pfVar6 != (float *)0x0) {
          bVar2 = *(byte *)pfVar6;
          uVar1 = (uint)bVar2;
          if (bVar2 < 2) {
            uVar1 = 1;
          }
          uVar8 = (ulong)uVar1;
          pfVar3 = (float *)((long)pfVar6 + ((ulong)(bVar2 + 4) & 0x1fc));
          pfVar7 = pfVar6;
          do {
            pfVar6 = pfVar3;
            pfVar7 = (float *)((long)pfVar7 + 1);
            if ((uint)*(byte *)pfVar7 == (param_4 & 0xff)) goto LAB_034ac51c;
            uVar8 = uVar8 - 1;
            pfVar3 = pfVar6 + 1;
          } while (uVar8 != 0);
          pfVar6 = (float *)0x0;
        }
LAB_034ac51c:
        pfVar7 = (float *)&local_90;
        if (pfVar6 != (float *)0x0) {
          pfVar7 = pfVar6;
        }
        param_1 = (ulong)(uint)(fVar11 - *pfVar7);
      }
      FUN_034e6c0c(param_1,*(undefined8 *)PTR_DAT_047e7038,*(long *)(pfVar4 + 2),uVar9,param_7,
                   param_6,param_5);
      return;
    }
    fVar10 = *pfVar4;
    if (param_5 == 2) {
      fStack_7c = fVar10 + fVar11;
    }
    else {
      fStack_7c = 0.0;
      if (param_5 == 1) {
        local_90 = CONCAT44(local_90._4_4_,*(undefined4 *)((long)&DAT_048b014c + uVar9 * 4));
        pfVar6 = *(float **)(param_2 + 0xb0);
        if (pfVar6 != (float *)0x0) {
          bVar2 = *(byte *)pfVar6;
          uVar1 = (uint)bVar2;
          if (bVar2 < 2) {
            uVar1 = 1;
          }
          uVar8 = (ulong)uVar1;
          pfVar3 = (float *)((long)pfVar6 + ((ulong)(bVar2 + 4) & 0x1fc));
          pfVar7 = pfVar6;
          do {
            pfVar6 = pfVar3;
            pfVar7 = (float *)((long)pfVar7 + 1);
            if ((uint)*(byte *)pfVar7 == (param_4 & 0xff)) goto LAB_034ac59c;
            uVar8 = uVar8 - 1;
            pfVar3 = pfVar6 + 1;
          } while (uVar8 != 0);
          pfVar6 = (float *)0x0;
        }
LAB_034ac59c:
        pfVar7 = (float *)&local_90;
        if (pfVar6 != (float *)0x0) {
          pfVar7 = pfVar6;
        }
        fStack_7c = fVar11 - *pfVar7;
      }
    }
    if ((param_7 == 0) || (fVar10 == fStack_7c)) {
      *pfVar4 = fStack_7c;
      local_90 = *(long *)(param_3 + 0x10);
      local_88 = (ulong)local_88._4_4_ << 0x20;
      local_80 = 0.0;
      local_78 = CONCAT31(local_78._1_3_,0xff);
      local_70 = CONCAT31(local_70._1_3_,0xff);
      local_68 = 0;
      FUN_034bf050(*pfVar4,*pfVar4 - fVar10,param_2 + 0x58,
                   *(undefined4 *)(&DAT_03d9818c + uVar9 * 4),&local_90);
    }
    else {
      local_6c = (&DAT_03d983a4)[uVar9];
      local_70 = 10;
      local_6b = 1;
      local_90 = param_3;
      local_88 = uVar9;
      local_80 = fVar10;
      local_78 = param_7;
      uStack_74 = param_6;
      uVar5 = FUN_034e6ab0(*(undefined8 *)PTR_DAT_047e7038,&local_90,0);
      *(undefined8 *)(pfVar4 + 2) = uVar5;
    }
  }
  return;
}


