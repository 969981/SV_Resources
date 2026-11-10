/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0351df38; name: FUN_0351df38
 */


void FUN_0351df38(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  float *pfVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_1a0;
  undefined1 local_198;
  undefined8 local_190;
  long local_188;
  undefined4 local_180;
  undefined1 local_178;
  undefined1 local_170;
  undefined8 local_168;
  undefined4 local_90;
  long local_88;
  long *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  *(int *)(*(long *)(param_1 + 0x10) + 0x48) = *(int *)(*(long *)(param_1 + 0x10) + 0x48) + 1;
  plVar4 = *(long **)(param_1 + 0x10);
  if ((*(byte *)((long)plVar4 + 0x5a) & 3) != 0 && (*(byte *)((long)plVar4 + 0x5a) & 0x10) == 0) {
    local_90 = 0;
    local_70 = 0;
    local_88 = 0;
    local_80 = (long *)0x0;
    local_78 = 0;
    local_68 = 1;
    (**(code **)(*plVar4 + 0xb8))(plVar4,&local_190,0);
    local_68._0_3_ = CONCAT12(1,(undefined2)local_68);
    if (local_88 == 0) {
      plVar4 = (long *)0x0;
    }
    else {
      if (*(long *)(local_88 + 0x18) == 0) {
        plVar4 = (long *)(**(code **)(*local_80 + 0xd0))();
        if (plVar4 == (long *)0x0) {
          plVar4 = (long *)(**(code **)(*(long *)local_80[2] + 0xd0))();
        }
        plVar1 = (long *)0x0;
      }
      else {
        plVar1 = *(long **)(*(long *)(local_88 + 0x18) + 0x78);
        plVar4 = (long *)plVar1[0x13];
      }
      if (plVar1 != (long *)0x0) {
        plVar4 = plVar1;
      }
    }
    if ((plVar4 != (long *)0x0) && (*(char *)(param_1 + 0x50) == '\0')) {
      pfVar6 = (float *)(param_1 + 0x4c);
      fVar11 = *pfVar6;
      if (*(char *)(param_1 + 0x51) != '\0') {
        (**(code **)(**(long **)(param_1 + 0x10) + 0x38))();
      }
      *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
      local_180 = 0;
      local_178 = 0xff;
      local_170 = 0xff;
      local_168 = 0;
      local_190 = *(undefined8 *)(param_1 + 0x30);
      local_188 = CONCAT44(local_188._4_4_,*(undefined4 *)(param_1 + 0x2c));
      (**(code **)(*plVar4 + 0x290))(plVar4,pfVar6,&local_190);
      fVar8 = *(float *)(param_1 + 0x4c);
      fVar10 = 4.0;
      if (fVar8 <= 4.0) {
        fVar10 = fVar8;
      }
      fVar9 = 0.25;
      if (0.25 <= fVar8) {
        fVar9 = fVar10;
      }
      fVar9 = fVar9 * (float)param_2;
      fVar10 = 0.5;
      if (fVar9 <= 0.0) {
        fVar10 = -0.5;
      }
      fVar10 = (float)(uint)(int)(fVar10 + fVar9) / (float)param_2;
      *pfVar6 = fVar10;
      if (fVar10 - fVar11 != 0.0) {
        (**(code **)(**(long **)(param_1 + 0x10) + 0x30))(*(long **)(param_1 + 0x10),0x36);
      }
      *(undefined2 *)(param_1 + 0x50) = 1;
    }
    fVar10 = *(float *)(param_1 + 0x4c) * (float)param_2;
    fVar11 = 0.5;
    if (fVar10 <= 0.0) {
      fVar11 = -0.5;
    }
    iVar5 = (int)(fVar11 + fVar10);
    *(int *)(param_1 + 0x48) = iVar5;
    local_1a0 = 0;
    local_198 = 0;
    (**(code **)(**(long **)(param_1 + 0x10) + 0xa8))
              (*(long **)(param_1 + 0x10),*(undefined8 *)(param_1 + 8),iVar5,&local_1a0);
    fVar11 = *(float *)(param_1 + 0x4c);
    local_190 = 0;
    local_188 = 0;
    lVar2 = *(long *)(param_1 + 0x60);
    if (*(long *)(param_1 + 0x60) != 0) {
      do {
        lVar7 = *(long *)(lVar2 + 8);
        FUN_03520f08(lVar2,&local_190,iVar5);
        lVar2 = lVar7;
      } while (lVar7 != 0);
      if (local_188 != 0) {
        lVar2 = local_188;
        do {
          fVar8 = (float)NEON_ucvtf(*(undefined4 *)(lVar2 + 0x14));
          fVar8 = fVar8 * (1.0 / fVar11);
          fVar10 = 0.5;
          if (fVar8 <= 0.0) {
            fVar10 = -0.5;
          }
          *(int *)(lVar2 + 0x14) = (int)(fVar10 + fVar8);
          lVar2 = *(long *)(lVar2 + 0x20);
        } while (lVar2 != 0);
      }
    }
    FUN_0344b328(param_1 + 0x58,&local_190,iVar5);
    *(ulong *)(param_1 + 8) = *(long *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0x48);
    FUN_0351c938(*(undefined8 *)(param_1 + 0x10));
    local_90 = 0;
    local_70 = 0;
    local_88 = 0;
    local_80 = (long *)0x0;
    local_78 = 0;
    local_68 = 1;
    (**(code **)(**(long **)(param_1 + 0x10) + 0xb8))(*(long **)(param_1 + 0x10),&local_190,0);
    local_68._0_3_ = CONCAT12(1,(undefined2)local_68);
    plVar1 = (long *)0x0;
    if (local_88 != 0) {
      if (*(long *)(local_88 + 0x18) == 0) {
        plVar1 = (long *)(**(code **)(*local_80 + 0xd0))();
        if (plVar1 == (long *)0x0) {
          plVar1 = (long *)(**(code **)(*(long *)local_80[2] + 0xd0))();
        }
        plVar3 = (long *)0x0;
      }
      else {
        plVar3 = *(long **)(*(long *)(local_88 + 0x18) + 0x78);
        plVar1 = (long *)plVar3[0x13];
      }
      if (plVar3 != (long *)0x0) {
        plVar1 = plVar3;
      }
    }
    if (plVar1 != plVar4) {
      *(undefined1 *)(param_1 + 0x50) = 0;
    }
    plVar4 = *(long **)(param_1 + 0x10);
  }
  iVar5 = (int)plVar4[9] + -1;
  *(int *)(plVar4 + 9) = iVar5;
  if (iVar5 == 0) {
    if (plVar4[2] == 0) {
      FUN_03518540(plVar4);
    }
    else {
      FUN_0351c44c(plVar4[2],plVar4);
      plVar4[2] = 0;
    }
    (**(code **)(*plVar4 + 0x50))(plVar4);
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar4);
  }
  return;
}


