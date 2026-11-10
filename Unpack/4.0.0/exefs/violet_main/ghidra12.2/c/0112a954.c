/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0112a954; name: FUN_0112a954
 */


undefined8 FUN_0112a954(long param_1)

{
  long *plVar1;
  uint *puVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  int *piVar8;
  int *piVar9;
  ushort *puVar10;
  uint uVar11;
  int *piVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  float fVar16;
  float fVar17;
  undefined8 local_f8;
  char *pcStack_f0;
  undefined8 local_e8;
  long *local_e0;
  undefined8 local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  long *local_c0 [8];
  undefined1 auStack_80 [64];
  
  plVar1 = (long *)(param_1 + 0x338);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_0112a98c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x340));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x340));
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_0112a98c;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_0112a98c:
  if (*(char *)(param_1 + 0x28) == '\0') {
LAB_0112aa18:
    uVar14 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x178) == '\0') {
      if ((((*(long *)(param_1 + 0x38) == 0) ||
           ((*(byte *)(*(long *)(param_1 + 0x38) + 0x1e8) & 1) == 0)) ||
          (*(long *)(param_1 + 0x78) == 0)) ||
         ((*(byte *)(*(long *)(param_1 + 0x78) + 0x1e8) & 1) == 0)) goto LAB_0112aa18;
      FUN_00fb9e50(&local_d8,param_1 + 0x70,param_1 + 0x30);
      *(undefined8 *)(param_1 + 0xb0) = local_d8;
      *(char **)(param_1 + 0xb8) = pcStack_d0;
      *(undefined8 *)(param_1 + 0xc0) = local_c8;
      FUN_00fb9ce0(param_1 + 200,local_c0);
      FUN_00fb9ce0(param_1 + 0x108,auStack_80);
      FUN_00db239c(auStack_80);
      FUN_00db239c(local_c0);
      FUN_00fb4dd0(&local_d8,(undefined8 *)(param_1 + 0xb0));
      *(char **)(param_1 + 0x150) = pcStack_d0;
      *(undefined8 *)(param_1 + 0x158) = local_c8;
      puVar15 = (undefined8 *)(param_1 + 0x148);
      *puVar15 = local_d8;
      local_d8 = 0xe2a922b57fe1b5ac;
      pcStack_d0 = "FarBeginDistance";
      local_c8 = 0x10;
      local_c0[0] = (long *)0x0;
      piVar8 = (int *)FUN_0155b658(puVar15,&local_d8);
      puVar6 = PTR_DAT_047d5608;
      fVar16 = 0.0;
      fVar17 = 0.0;
      if (piVar8 != (int *)0x0) {
        piVar9 = (int *)*puVar15;
        fVar17 = 0.0;
        if (piVar9 != (int *)0x0) {
          puVar10 = (ushort *)((long)piVar8 - (long)*piVar8);
          uVar3 = *puVar10;
          if (uVar3 < 7) {
            piVar12 = (int *)0x0;
          }
          else {
            piVar12 = (int *)0x0;
            if ((ulong)puVar10[3] != 0) {
              puVar2 = (uint *)((long)piVar8 + (ulong)puVar10[3]);
              piVar12 = (int *)((long)puVar2 + (ulong)*puVar2);
            }
          }
          if ((*(ushort *)((long)piVar12 - (long)*piVar12) < 5) ||
             (uVar13 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[2], uVar13 == 0)) {
            uVar13 = 0;
          }
          else {
            uVar13 = (long)*(char *)((long)piVar12 + uVar13) & 0xffffffff;
          }
          if (*(long *)(PTR_DAT_047d5608 + uVar13 * 8) == 4) {
            fVar17 = 0.0;
            if (uVar3 < 0xb) {
              uVar11 = 0;
            }
            else {
              uVar11 = 0;
              if ((ulong)puVar10[5] != 0) {
                uVar11 = (uint)*(ushort *)((long)piVar8 + (ulong)puVar10[5]);
              }
              if ((0xe < uVar3) && ((ulong)puVar10[7] != 0)) {
                fVar17 = (float)*(double *)((long)piVar8 + (ulong)puVar10[7]);
              }
            }
            if ((uVar11 < *(ushort *)((long)piVar9 - (long)*piVar9)) &&
               (uVar13 = (ulong)*(ushort *)(((long)piVar9 - (long)*piVar9) + (ulong)uVar11),
               uVar13 != 0)) {
              fVar17 = *(float *)((long)piVar9 + uVar13);
            }
          }
          else {
            fVar17 = 0.0;
            if (0xe < uVar3) {
              fVar17 = 0.0;
              if ((ulong)puVar10[7] != 0) {
                fVar17 = (float)*(double *)((long)piVar8 + (ulong)puVar10[7]);
              }
            }
          }
        }
      }
      local_f8 = 0xff3ef1f4d5d4aa44;
      pcStack_f0 = "FarEndDistance";
      local_e8 = 0xe;
      local_e0 = (long *)0x0;
      piVar8 = (int *)FUN_0155b658(puVar15,&local_f8);
      if ((piVar8 != (int *)0x0) && (piVar9 = (int *)*puVar15, piVar9 != (int *)0x0)) {
        puVar10 = (ushort *)((long)piVar8 - (long)*piVar8);
        uVar3 = *puVar10;
        if (uVar3 < 7) {
          piVar12 = (int *)0x0;
        }
        else {
          piVar12 = (int *)0x0;
          if ((ulong)puVar10[3] != 0) {
            puVar2 = (uint *)((long)piVar8 + (ulong)puVar10[3]);
            piVar12 = (int *)((long)puVar2 + (ulong)*puVar2);
          }
        }
        if ((*(ushort *)((long)piVar12 - (long)*piVar12) < 5) ||
           (uVar13 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[2], uVar13 == 0)) {
          uVar13 = 0;
        }
        else {
          uVar13 = (long)*(char *)((long)piVar12 + uVar13) & 0xffffffff;
        }
        if (*(long *)(puVar6 + uVar13 * 8) == 4) {
          fVar16 = 0.0;
          if (uVar3 < 0xb) {
            uVar11 = 0;
          }
          else {
            uVar11 = 0;
            if ((ulong)puVar10[5] != 0) {
              uVar11 = (uint)*(ushort *)((long)piVar8 + (ulong)puVar10[5]);
            }
            if ((0xe < uVar3) && ((ulong)puVar10[7] != 0)) {
              fVar16 = (float)*(double *)((long)piVar8 + (ulong)puVar10[7]);
            }
          }
          if ((uVar11 < *(ushort *)((long)piVar9 - (long)*piVar9)) &&
             (uVar13 = (ulong)*(ushort *)(((long)piVar9 - (long)*piVar9) + (ulong)uVar11),
             uVar13 != 0)) {
            fVar16 = *(float *)((long)piVar9 + uVar13);
          }
        }
        else if ((0xe < uVar3) && ((ulong)puVar10[7] != 0)) {
          fVar16 = (float)*(double *)((long)piVar8 + (ulong)puVar10[7]);
        }
      }
      *(float *)(param_1 + 0x188) = fVar16;
      *(float *)(param_1 + 0x184) = fVar17 * fVar17;
      *(float *)(param_1 + 0x180) = fVar17;
      *(float *)(param_1 + 0x18c) = fVar16 * fVar16;
      *(float *)(param_1 + 400) = ABS(fVar17 * fVar17 - fVar16 * fVar16);
      if (local_e0 != (long *)0x0) {
        (**(code **)(*local_e0 + 0x20))();
      }
      if (local_c0[0] != (long *)0x0) {
        (**(code **)(*local_c0[0] + 0x20))();
      }
      local_d8 = 0x842ef06b6497684a;
      pcStack_d0 = "FadeTime";
      local_c8 = 8;
      local_c0[0] = (long *)0x0;
      piVar8 = (int *)FUN_0155b658(puVar15,&local_d8);
      fVar16 = 0.0;
      if ((piVar8 != (int *)0x0) && (piVar9 = (int *)*puVar15, piVar9 != (int *)0x0)) {
        puVar10 = (ushort *)((long)piVar8 - (long)*piVar8);
        uVar3 = *puVar10;
        if (uVar3 < 7) {
          piVar12 = (int *)0x0;
        }
        else {
          piVar12 = (int *)0x0;
          if ((ulong)puVar10[3] != 0) {
            puVar2 = (uint *)((long)piVar8 + (ulong)puVar10[3]);
            piVar12 = (int *)((long)puVar2 + (ulong)*puVar2);
          }
        }
        if ((*(ushort *)((long)piVar12 - (long)*piVar12) < 5) ||
           (uVar13 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[2], uVar13 == 0)) {
          uVar13 = 0;
        }
        else {
          uVar13 = (long)*(char *)((long)piVar12 + uVar13) & 0xffffffff;
        }
        if (*(long *)(puVar6 + uVar13 * 8) == 4) {
          fVar16 = 0.0;
          if (uVar3 < 0xb) {
            uVar11 = 0;
          }
          else {
            uVar11 = 0;
            if ((ulong)puVar10[5] != 0) {
              uVar11 = (uint)*(ushort *)((long)piVar8 + (ulong)puVar10[5]);
            }
            if ((0xe < uVar3) && ((ulong)puVar10[7] != 0)) {
              fVar16 = (float)*(double *)((long)piVar8 + (ulong)puVar10[7]);
            }
          }
          if ((uVar11 < *(ushort *)((long)piVar9 - (long)*piVar9)) &&
             (uVar13 = (ulong)*(ushort *)(((long)piVar9 - (long)*piVar9) + (ulong)uVar11),
             uVar13 != 0)) {
            fVar16 = *(float *)((long)piVar9 + uVar13);
          }
        }
        else if ((0xe < uVar3) && ((ulong)puVar10[7] != 0)) {
          fVar16 = (float)*(double *)((long)piVar8 + (ulong)puVar10[7]);
        }
      }
      *(float *)(param_1 + 0x17c) = fVar16;
      if (local_c0[0] != (long *)0x0) {
        (**(code **)(*local_c0[0] + 0x20))();
      }
    }
    uVar14 = 1;
  }
  *(undefined8 *)(param_1 + 0x338) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x340));
  return uVar14;
}


