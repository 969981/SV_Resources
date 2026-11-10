/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03523a50; name: FUN_03523a50
 */


int FUN_03523a50(long *param_1,double *param_2,undefined4 param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  void *__dest;
  long lVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  char *__src;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  double dVar19;
  double dVar20;
  undefined4 local_7c;
  double *local_78;
  
  local_7c = param_3;
  local_78 = param_2;
  iVar6 = (**(code **)(*param_1 + 0x88))();
  if (iVar6 == 7) {
    iVar6 = FUN_0351af38(param_1,&local_78,&local_7c,0);
    if (iVar6 == 1) {
      dVar19 = (double)NEON_ucvtf((ulong)*(uint *)PTR_DAT_047e6fa0);
      dVar19 = *local_78 * 0.001 * dVar19;
      dVar20 = 0.5;
      if (dVar19 <= 0.0) {
        dVar20 = -0.5;
      }
      *(int *)(param_1 + 0x28) = (int)(dVar20 + dVar19);
      puVar4 = PTR_DAT_047e2fd0;
      uVar3 = *(uint *)(local_78 + 1);
      uVar18 = (ulong)uVar3;
      local_78 = (double *)((long)local_78 + 0xc);
      if (uVar3 == 0) {
        iVar6 = 1;
      }
      else {
        lVar7 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(2,uVar18 * 0x18);
        if (lVar7 == 0) {
          iVar6 = 0x34;
        }
        else {
          uVar17 = uVar18 - 1;
          uVar9 = uVar18 & 3;
          if (uVar17 < 3) {
            uVar12 = 0;
          }
          else {
            uVar12 = 0;
            puVar11 = (undefined8 *)(lVar7 + 0x40);
            do {
              uVar12 = uVar12 + 4;
              puVar11[-6] = 0;
              puVar11[-3] = 0;
              *puVar11 = 0;
              puVar11[3] = 0;
              puVar11 = puVar11 + 0xc;
            } while ((uVar18 & 0xfffffffc) != uVar12);
          }
          if ((uVar3 & 3) != 0) {
            puVar11 = (undefined8 *)(lVar7 + uVar12 * 0x18 + 0x10);
            do {
              uVar9 = uVar9 - 1;
              *puVar11 = 0;
              puVar11 = puVar11 + 3;
            } while (uVar9 != 0);
          }
          uVar9 = 0;
          uVar2 = uVar3;
          if (uVar3 < 2) {
            uVar2 = 1;
          }
          uVar12 = (ulong)uVar2;
          do {
            puVar10 = (undefined4 *)(lVar7 + uVar9 * 0x18);
            *puVar10 = *(undefined4 *)local_78;
            __src = (char *)((long)local_78 + 0xc);
            *(undefined8 *)(puVar10 + 2) = *(undefined8 *)((long)local_78 + 4);
            local_78 = (double *)((long)local_78 + 0xd);
            if (*__src != '\0') {
              uVar16 = 0;
              do {
                uVar1 = uVar16 + 1;
                lVar8 = uVar16 + 1;
                local_78 = (double *)(__src + uVar16 + 2);
                uVar16 = uVar1;
              } while (__src[lVar8] != '\0');
              if ((int)uVar1 != 0) {
                __dest = (void *)(**(code **)(puVar4 + 0x10))(2,(int)uVar1 + 1);
                plVar15 = (long *)(lVar7 + uVar9 * 0x18 + 0x10);
                *plVar15 = (long)__dest;
                if (__dest == (void *)0x0) goto LAB_03523db4;
                memcpy(__dest,__src,uVar1 & 0xffffffff);
                *(undefined1 *)(*plVar15 + (uVar1 & 0xffffffff)) = 0;
              }
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 != uVar12);
          lVar8 = param_1[0x26];
          if (lVar8 != 0) {
            if (*(uint *)(param_1 + 0x27) != 0) {
              lVar14 = (ulong)*(uint *)(param_1 + 0x27) << 4;
              plVar15 = (long *)(lVar8 + 8);
              do {
                if (*plVar15 != 0) {
                  (**(code **)(puVar4 + 0x30))(2);
                }
                lVar14 = lVar14 + -0x10;
                plVar15 = plVar15 + 2;
              } while (lVar14 != 0);
              lVar8 = param_1[0x26];
            }
            *(undefined4 *)(param_1 + 0x27) = 0;
            (**(code **)(puVar4 + 0x30))(0,lVar8);
            param_1[0x26] = 0;
            *(undefined4 *)((long)param_1 + 0x13c) = 0;
          }
          lVar8 = (**(code **)(puVar4 + 0x10))(0,uVar18 << 4);
          param_1[0x26] = lVar8;
          if (lVar8 == 0) {
LAB_03523db4:
            plVar15 = (long *)(lVar7 + 0x10);
            do {
              if (*plVar15 != 0) {
                (**(code **)(puVar4 + 0x30))(2);
              }
              uVar12 = uVar12 - 1;
              plVar15 = plVar15 + 3;
            } while (uVar12 != 0);
            iVar6 = 2;
          }
          else {
            *(uint *)((long)param_1 + 0x13c) = uVar3;
            puVar5 = PTR_DAT_047e6fa0;
            puVar11 = (undefined8 *)(lVar7 + 0x10);
            while( true ) {
              uVar3 = *(uint *)(param_1 + 0x27);
              if (uVar3 < (uint)uVar18) {
                *(uint *)(param_1 + 0x27) = uVar3 + 1;
                puVar13 = (undefined8 *)(param_1[0x26] + (ulong)uVar3 * 0x10);
                if (param_1[0x26] != 0) {
                  *puVar13 = 0;
                  puVar13[1] = 0;
                }
              }
              else {
                puVar13 = (undefined8 *)0x0;
              }
              *(undefined4 *)puVar13 = *(undefined4 *)(puVar11 + -2);
              dVar19 = (double)NEON_ucvtf((ulong)*(uint *)puVar5);
              dVar19 = (double)puVar11[-1] * 0.001 * dVar19;
              dVar20 = 0.5;
              if (dVar19 <= 0.0) {
                dVar20 = -0.5;
              }
              *(int *)((long)puVar13 + 4) = (int)(dVar20 + dVar19);
              puVar13[1] = *puVar11;
              if (uVar17 == 0) break;
              uVar18 = (ulong)*(uint *)((long)param_1 + 0x13c);
              uVar17 = uVar17 - 1;
              puVar11 = puVar11 + 3;
            }
            iVar6 = 1;
          }
          (**(code **)(puVar4 + 0x30))(2,lVar7);
        }
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0x88))(param_1);
    iVar6 = 0x5b;
  }
  return iVar6;
}


