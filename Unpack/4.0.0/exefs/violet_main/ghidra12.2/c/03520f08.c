/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03520f08; name: FUN_03520f08
 */


void FUN_03520f08(undefined8 *param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  char *pcVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  undefined8 local_80;
  char *local_78;
  
  bVar3 = *(byte *)((long)param_1 + 0x17c);
  if ((bVar3 & 1) == 0) {
    *(int *)((long)param_1 + 0x4c) = *(int *)((long)param_1 + 0x4c) + 1;
    uVar2 = *(uint *)((long)param_1 + 0x174);
    *(undefined4 *)((long)param_1 + 0x174) = 0;
    puVar6 = PTR_DAT_047e6fa0;
    uVar7 = *(uint *)(param_1 + 0x2f);
    fVar9 = (float)NEON_ucvtf(*(undefined4 *)PTR_DAT_047e6fa0);
    uVar1 = 0;
    if (uVar2 <= uVar7) {
      uVar1 = uVar7 - uVar2;
    }
    if (uVar7 == 0xffffffff) {
      uVar1 = 0xffffffff;
    }
    if ((float)(int)(param_3 - uVar2) / (fVar9 * 0.001) != 0.0) {
      local_80 = 0;
      local_78 = (char *)0x0;
      FUN_03521e94(param_1 + 0x1e,&local_80);
      puVar5 = PTR_DAT_047e2fd0;
      if (local_78 != (char *)0x0) {
        pcVar8 = local_78;
        if (uVar1 == 0xffffffff) {
          do {
            local_78 = *(char **)(pcVar8 + 0x18);
            if (local_78 == (char *)0x0) {
              local_80 = 0;
              local_78 = (char *)0x0;
            }
            dVar10 = (double)NEON_ucvtf((ulong)*(uint *)puVar6);
            dVar10 = (double)*(float *)(pcVar8 + 0xc) * 0.001 * dVar10;
            dVar11 = 0.5;
            if (dVar10 <= 0.0) {
              dVar11 = -0.5;
            }
            if (((*pcVar8 != -0x70) || ((bVar3 >> 1 & 1) == 0)) || (pcVar8[5] == '\0')) {
              FUN_0344da38(param_1,param_2,pcVar8,uVar2 + (int)(dVar11 + dVar10),
                           *(undefined4 *)(pcVar8 + 0x10),*(byte *)((long)param_1 + 0x17c) >> 1 & 1,
                           *(byte *)((long)param_1 + 0x17c) >> 2 & 1);
              *(byte *)((long)param_1 + 0x17c) = *(byte *)((long)param_1 + 0x17c) & 0xfb;
            }
            (**(code **)(puVar5 + 0x30))(0,pcVar8);
            pcVar8 = local_78;
          } while (local_78 != (char *)0x0);
        }
        else {
          do {
            local_78 = *(char **)(pcVar8 + 0x18);
            if (local_78 == (char *)0x0) {
              local_80 = 0;
              local_78 = (char *)0x0;
            }
            dVar10 = (double)NEON_ucvtf((ulong)*(uint *)puVar6);
            dVar10 = (double)*(float *)(pcVar8 + 0xc) * 0.001 * dVar10;
            dVar11 = 0.5;
            if (dVar10 <= 0.0) {
              dVar11 = -0.5;
            }
            uVar7 = (uint)(dVar11 + dVar10);
            if ((*pcVar8 != -0x70) || (uVar7 < uVar1 || pcVar8[5] == '\0')) {
              FUN_0344da38(param_1,param_2,pcVar8,uVar2 + uVar7,*(undefined4 *)(pcVar8 + 0x10),
                           *(byte *)((long)param_1 + 0x17c) >> 1 & 1,
                           *(byte *)((long)param_1 + 0x17c) >> 2 & 1);
              *(byte *)((long)param_1 + 0x17c) = *(byte *)((long)param_1 + 0x17c) & 0xfb;
            }
            (**(code **)(puVar5 + 0x30))(0,pcVar8);
            pcVar8 = local_78;
          } while (local_78 != (char *)0x0);
        }
      }
    }
    if (uVar1 != 0xffffffff) {
      *(undefined4 *)(param_1 + 0x2f) = 0;
      if ((*(byte *)((long)param_1 + 0x17c) >> 1 & 1) == 0) {
        *(byte *)((long)param_1 + 0x17c) = *(byte *)((long)param_1 + 0x17c) | 2;
        iVar4 = *(int *)((long)param_1 + 0x4c) + -1;
        *(int *)((long)param_1 + 0x4c) = iVar4;
        if (iVar4 == 0) {
          (**(code **)*param_1)(param_1);
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,param_1);
        }
      }
    }
    iVar4 = *(int *)((long)param_1 + 0x4c) + -1;
    *(int *)((long)param_1 + 0x4c) = iVar4;
    if (iVar4 == 0) {
      (**(code **)*param_1)(param_1);
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,param_1);
    }
  }
  return;
}


