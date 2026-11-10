/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03412c3c; name: FUN_03412c3c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_03412c3c(long *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  float fVar9;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  char *local_60;
  char local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined8 local_48;
  
  uVar4 = *(uint *)(param_1 + 1);
  if (uVar4 != 0) {
    uVar2 = 0;
    if (uVar4 != 0) {
      uVar2 = (uint)param_2 / uVar4;
    }
    for (plVar8 = *(long **)(*param_1 + (ulong)((uint)param_2 - uVar2 * uVar4) * 8);
        plVar8 != (long *)0x0; plVar8 = (long *)plVar8[0xf]) {
      if (plVar8[0xe] == param_2) {
        return plVar8;
      }
    }
  }
  plVar8 = param_1 + 0xb;
  plVar3 = (long *)FUN_034158b4(plVar8);
  if (plVar3 != (long *)0x0) {
    *(undefined1 *)(plVar3 + 0xc) = 1;
    plVar3[10] = 0;
    plVar3[0xb] = 0;
    *(undefined8 *)((long)plVar3 + 0x94) = 0x3f8000003f800000;
    plVar3[8] = 0;
    *(undefined1 *)(plVar3 + 9) = 0;
    plVar3[6] = 0;
    *(undefined4 *)(plVar3 + 7) = 0;
    plVar3[0x11] = 0;
    *(undefined4 *)(plVar3 + 0x12) = 0;
    *(undefined8 *)((long)plVar3 + 0x9c) = 0xffffffff3f800000;
    *(undefined4 *)((long)plVar3 + 0xa4) = 0;
    *(undefined1 *)(plVar3 + 0x17) = 0;
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[2] = 0;
    plVar3[3] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
    plVar3[0xd] = 0;
    plVar3[0xe] = param_2;
    plVar3[0xf] = 0;
    plVar3[0x10] = 0;
    plVar3[0x15] = 0;
    plVar3[0x16] = -1;
    uVar4 = *(uint *)(param_1 + 1);
    if ((uVar4 == 0) || (fVar9 = (float)NEON_ucvtf((int)param_1[2]), 0.9 < fVar9 / (float)uVar4)) {
      FUN_03415c0c(param_1);
      uVar4 = *(uint *)(param_1 + 1);
      if (uVar4 == 0) {
        FUN_0341e9a0(plVar3);
        plVar5 = (long *)*plVar8;
        if (plVar5 == (long *)0x0) {
LAB_03412ea4:
          if (_DAT_00003010 == (long *)0x0) {
            _DAT_00003010 = plVar3;
            *plVar3 = 0;
          }
          else {
            *plVar3 = (long)_DAT_00003010;
            _DAT_00003010 = plVar3;
          }
          _DAT_00003008 = _DAT_00003008 + 1;
          return (long *)0x0;
        }
        if ((plVar3 < plVar5) || (plVar5 + 0x600 <= plVar3)) {
          do {
            plVar7 = plVar5;
            plVar5 = (long *)plVar7[0x600];
            if (plVar5 == (long *)0x0) goto LAB_03412ea4;
          } while ((plVar3 < plVar5) || (plVar5 + 0x600 <= plVar3));
        }
        else {
          plVar7 = (long *)0x0;
        }
        if (plVar5[0x602] == 0) {
          plVar5[0x602] = (long)plVar3;
          *plVar3 = 0;
        }
        else {
          *plVar3 = plVar5[0x602];
          plVar5[0x602] = (long)plVar3;
        }
        iVar1 = (int)plVar5[0x601] + 1;
        *(int *)(plVar5 + 0x601) = iVar1;
        if (iVar1 == 0x40) {
          if ((long *)*plVar8 != plVar5) {
            plVar8 = plVar7 + 0x600;
          }
          *plVar8 = plVar5[0x600];
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(10);
        }
        return (long *)0x0;
      }
      lVar6 = plVar3[0xe];
    }
    else {
      lVar6 = param_2;
    }
    uVar2 = 0;
    if (uVar4 != 0) {
      uVar2 = (uint)lVar6 / uVar4;
    }
    uVar4 = (uint)lVar6 - uVar2 * uVar4;
    plVar3[0xf] = *(long *)(*param_1 + (ulong)uVar4 * 8);
    *(long **)(*param_1 + (ulong)uVar4 * 8) = plVar3;
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
    if ((plVar3[0x15] == 0) && (lVar6 = param_1[0xf], lVar6 != 0)) {
      plVar3[0x15] = lVar6;
      *(int *)(lVar6 + 0x38) = *(int *)(lVar6 + 0x38) + 1;
      if ((int)plVar3[0xb] != 0) {
        plVar8 = (long *)plVar3[10];
        do {
          plVar5 = plVar8 + 1;
          *(undefined1 *)(*plVar8 + 0x60) = 1;
          plVar8 = plVar5;
        } while (plVar5 != (long *)(plVar3[10] + (ulong)*(uint *)(plVar3 + 0xb) * 8));
      }
    }
    local_6c = 0x3f8000003f800000;
    local_7c = 0x3f80000000000000;
    local_60 = (char *)0x0;
    local_58 = '\0';
    local_50 = 0;
    local_4c = 0;
    local_48 = 0xffffffffffffffff;
    local_74 = 0;
    local_88 = 0;
    local_80 = 0x3f800000;
    if (param_2 == -1) {
      local_6c = 0x3f800000;
      local_60 = "Outdoors";
    }
    FUN_0341ec54(plVar3,&local_88,0xffffffffffffffff);
    if ((local_60 != (char *)0x0) && (local_58 != '\0')) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9);
    }
  }
  return plVar3;
}


