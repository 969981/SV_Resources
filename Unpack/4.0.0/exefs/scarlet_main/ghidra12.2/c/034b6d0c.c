/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034b6d0c; name: FUN_034b6d0c
 */


undefined8
FUN_034b6d0c(ulong param_1,long *param_2,uint param_3,long *param_4,long param_5,int param_6,
            ulong param_7)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  long lVar4;
  float *pfVar5;
  uint *puVar6;
  float fVar7;
  undefined1 local_5c [4];
  float *local_58;
  
  local_58 = (float *)0x0;
  local_5c[0] = 0;
  uVar2 = *(uint *)(param_2 + 1);
  if (uVar2 != 0) {
    uVar1 = 0;
    if (uVar2 != 0) {
      uVar1 = param_3 / uVar2;
    }
    for (puVar6 = *(uint **)(*param_2 + (ulong)(param_3 - uVar1 * uVar2) * 8); puVar6 != (uint *)0x0
        ; puVar6 = *(uint **)(puVar6 + 2)) {
      if (*puVar6 == param_3) {
        pfVar3 = (float *)FUN_034b9430(puVar6 + 8,param_4,&local_58,local_5c);
        if ((pfVar3 == (float *)0x0) && ((param_7 & 1) != 0)) {
          pfVar3 = (float *)0x0;
          *(undefined1 *)(param_5 + 8) = 1;
        }
        goto LAB_034b6e50;
      }
    }
  }
  puVar6 = (uint *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x68);
  if (puVar6 == (uint *)0x0) {
    return 2;
  }
  *puVar6 = param_3;
  *(undefined ***)(puVar6 + 8) = &PTR_LAB_047c4448;
  puVar6[10] = 0;
  *(undefined1 *)(puVar6 + 0xb) = 0;
  puVar6[0x18] = 0;
  puVar6[0x19] = 0;
  puVar6[0xc] = 0;
  puVar6[0xd] = 0;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[0x10] = 0;
  puVar6[0x11] = 0;
  puVar6[0x12] = 0;
  puVar6[0x13] = 0;
  puVar6[0x14] = 0;
  puVar6[0x15] = 0;
  puVar6[0x16] = 0;
  puVar6[0x17] = 0;
  uVar2 = *(uint *)(param_2 + 1);
  if ((uVar2 == 0) || (fVar7 = (float)NEON_ucvtf((int)param_2[2]), 0.9 < fVar7 / (float)uVar2)) {
    FUN_034bb448(param_2);
    uVar2 = *(uint *)(param_2 + 1);
    if (uVar2 == 0) goto LAB_034b6e38;
    param_3 = *puVar6;
  }
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = param_3 / uVar2;
  }
  param_3 = param_3 - uVar1 * uVar2;
  *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(*param_2 + (ulong)param_3 * 8);
  *(uint **)(*param_2 + (ulong)param_3 * 8) = puVar6;
  *(int *)(param_2 + 2) = (int)param_2[2] + 1;
LAB_034b6e38:
  FUN_034b9430(puVar6 + 8,param_4,&local_58,local_5c);
  pfVar3 = (float *)0x0;
LAB_034b6e50:
  if (param_6 == 2) {
    if (pfVar3 == (float *)0x0) {
      pfVar5 = (float *)(puVar6 + 4);
      if (local_58 != (float *)0x0) {
        pfVar5 = local_58;
      }
    }
    else {
      lVar4 = *(long *)(puVar6 + 0x10);
      if (lVar4 != 0) {
        do {
          if ((((*(long *)(lVar4 + 0x20) == *param_4) && (*(int *)(lVar4 + 0x28) == 0)) &&
              (*(int *)(lVar4 + 0x30) == 0)) &&
             (((*(char *)(lVar4 + 0x38) == -1 && (*(char *)(lVar4 + 0x40) == -1)) &&
              (*(long *)(lVar4 + 0x48) == 0)))) {
            pfVar5 = (float *)(*(long *)(lVar4 + 0x10) + 0xc);
            goto LAB_034b6efc;
          }
          lVar4 = *(long *)(lVar4 + 8);
        } while (lVar4 != 0);
      }
      pfVar5 = pfVar3;
    }
LAB_034b6efc:
    param_1 = (ulong)(uint)(*pfVar5 + (float)param_1);
  }
  FUN_034b6f50(param_1,puVar6,pfVar3,local_58,param_4,param_5,0,local_5c[0]);
  return 1;
}


