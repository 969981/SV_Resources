/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00877788; name: FUN_00877788
 */


void FUN_00877788(long param_1,long *param_2,long *param_3,uint *param_4,ulong param_5,uint param_6)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  void *pvVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  undefined1 auStack_d0 [48];
  long *local_a0;
  void *local_98;
  uint local_90;
  uint uStack_8c;
  void *local_88;
  undefined8 local_80;
  undefined4 local_78;
  
  bVar2 = *(byte *)(param_1 + 0x3e0);
  uVar17 = (ulong)bVar2;
  local_78 = 0;
  local_88 = (void *)0x0;
  local_80 = 0x2b00000000;
  uVar13 = param_5 & 0xffffffff;
  plVar5 = (long *)(**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0xd0))(plVar5,0);
  uVar16 = (uint)bVar2;
  if ((*(char *)(param_1 + 0x3ed) == '\0') && (*(char *)(param_1 + 0x3ec) == '\0')) {
    local_88 = (void *)*param_2;
    local_78 = CONCAT22((short)param_2[2],(short)param_2[2]);
    local_80 = CONCAT44(local_80._4_4_,(int)param_2[1]);
    if (uVar16 == 0) goto LAB_00877ac8;
LAB_008779f0:
    if (param_6 != 0) {
      uVar7 = 0;
      do {
        lVar15 = uVar7 * (ushort)local_78;
        iVar4 = (int)uVar7;
        if (param_6 == 1) {
          uVar12 = 0;
        }
        else {
          uVar12 = 0;
          do {
            uVar1 = uVar13 + uVar12;
            iVar11 = (int)uVar12;
            *(undefined4 *)
             (*(long *)(param_1 + 0x3f8) +
             (ulong)(uint)(iVar4 + *(int *)(param_1 + 1000) * iVar11) * 4) =
                 *(undefined4 *)((long)local_88 + (uVar1 & 0xffffffff) * 4 + lVar15 * 4);
            uVar12 = uVar12 + 2;
            *(undefined4 *)
             (*(long *)(param_1 + 0x3f8) +
             (ulong)(uint)(iVar4 + *(int *)(param_1 + 1000) * (iVar11 + 1)) * 4) =
                 *(undefined4 *)((long)local_88 + (ulong)((int)uVar1 + 1) * 4 + lVar15 * 4);
          } while (((ulong)param_6 & 0xfffffffe) != uVar12);
        }
        if ((param_6 & 1) != 0) {
          *(undefined4 *)
           (*(long *)(param_1 + 0x3f8) +
           (ulong)(uint)(iVar4 + *(int *)(param_1 + 1000) * (int)uVar12) * 4) =
               *(undefined4 *)
                ((long)local_88 + (ulong)(uint)((int)uVar13 + (int)uVar12) * 4 + lVar15 * 4);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar17);
      goto LAB_00877ac8;
    }
    uVar9 = *(uint *)(param_1 + 1000);
    if (uVar9 <= uVar16) goto LAB_00877b00;
LAB_00877aec:
    do {
      uVar16 = (int)uVar17 + 1;
      uVar17 = (ulong)uVar16;
    } while (uVar16 < uVar9);
  }
  else {
    local_90 = (uint)param_5;
    pvVar8 = *(void **)(param_1 + 0x408);
    local_78 = CONCAT22((short)param_6,(short)param_6);
    local_80 = CONCAT44(local_80._4_4_,(int)param_2[1]);
    local_a0 = param_3;
    local_98 = pvVar8;
    uStack_8c = param_6;
    local_88 = pvVar8;
    if (uVar16 != 0) {
      lVar15 = 0;
      do {
        memcpy(pvVar8,(void *)(*param_2 + lVar15 * (ulong)*(ushort *)(param_2 + 2) +
                              (param_5 & 0xffffffff) * 4),(ulong)(param_6 << 2));
        lVar15 = lVar15 + 4;
        pvVar8 = (void *)((long)pvVar8 + (ulong)(param_6 & 0xffff) * 4);
      } while (uVar17 * 4 != lVar15);
    }
    param_6 = uStack_8c;
    uVar9 = local_90;
    pvVar8 = local_98;
    plVar6 = local_a0;
    if ((local_a0 != (long *)0x0) && (*(char *)(param_1 + 0x3ec) != '\0')) {
      uVar13 = (ulong)local_90;
      (**(code **)(*plVar5 + 0x20))
                (0x3f800000,0x3f800000,plVar5,*local_a0 + uVar13 * 4,local_98,uStack_8c);
      (**(code **)(*plVar5 + 0x20))
                (0x3f800000,0x3f800000,plVar5,
                 *plVar6 + (ulong)*(ushort *)(plVar6 + 2) * 4 + uVar13 * 4,
                 (long)pvVar8 + (ulong)((param_6 & 0xffff) << 2),param_6);
    }
    if ((*(char *)(param_1 + 0x3ed) != '\0') && (*param_4 != 0)) {
      uVar13 = 0;
      do {
        lVar15 = *(long *)(*(long *)(param_4 + 2) + uVar13 * 8);
        if ((*(short *)(lVar15 + 0x12) != 0) &&
           (iVar4 = (**(code **)(**(long **)(param_1 + 0x20) + 0x68))
                              (*(long **)(param_1 + 0x20),
                               *(long *)(*(long *)(param_4 + 4) + uVar13 * 8) + 8,
                               *(undefined4 *)(lVar15 + 8),*(undefined4 *)(param_1 + 0x3e0),
                               auStack_d0), iVar4 == 1)) {
          lVar14 = uVar13 * 8;
          plVar6 = *(long **)(*(long *)(param_4 + 2) + lVar14);
          lVar15 = *plVar6;
          (**(code **)(*plVar5 + 0x30))
                    (*(undefined4 *)(*(long *)(*(long *)(param_4 + 4) + lVar14) + 0x58),
                     *(undefined4 *)(*(long *)(*(long *)(param_4 + 4) + lVar14) + 0x5c),plVar5,
                     plVar6,plVar6,0);
          *(undefined8 *)(*(long *)(*(long *)(param_4 + 4) + lVar14) + 0x58) = 0x3f8000003f800000;
          (**(code **)(*plVar5 + 0x18))
                    (0x3f800000,0x3f800000,plVar5,lVar15 + (ulong)uVar9 * 4,&local_88,auStack_d0,
                     auStack_d0);
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < *param_4);
    }
    uVar13 = 0;
    if (uVar16 != 0) goto LAB_008779f0;
LAB_00877ac8:
    uVar9 = *(uint *)(param_1 + 1000);
    if (uVar16 < uVar9) {
      if (param_6 == 0) goto LAB_00877aec;
      uVar16 = param_6 - 1 & 3;
      do {
        iVar4 = (int)uVar17;
        *(undefined4 *)(*(long *)(param_1 + 0x3f8) + uVar17 * 4) = 0;
        if (param_6 != 1) {
          if (param_6 - 2 < 3) {
            iVar11 = 1;
          }
          else {
            uVar9 = 0;
            do {
              uVar10 = uVar9;
              *(undefined4 *)
               (*(long *)(param_1 + 0x3f8) +
               (ulong)(iVar4 + *(int *)(param_1 + 1000) * (uVar10 + 1)) * 4) = 0;
              *(undefined4 *)
               (*(long *)(param_1 + 0x3f8) +
               (ulong)(iVar4 + *(int *)(param_1 + 1000) * (uVar10 + 2)) * 4) = 0;
              *(undefined4 *)
               (*(long *)(param_1 + 0x3f8) +
               (ulong)(iVar4 + *(int *)(param_1 + 1000) * (uVar10 + 3)) * 4) = 0;
              uVar9 = uVar10 + 4;
              *(undefined4 *)
               (*(long *)(param_1 + 0x3f8) + (ulong)(iVar4 + *(int *)(param_1 + 1000) * uVar9) * 4)
                   = 0;
            } while ((param_6 - 1 & 0xfffffffc) != uVar9);
            iVar11 = uVar10 + 5;
          }
          if (uVar16 != 0) {
            uVar9 = uVar16;
            do {
              iVar3 = *(int *)(param_1 + 1000) * iVar11;
              iVar11 = iVar11 + 1;
              uVar9 = uVar9 - 1;
              *(undefined4 *)(*(long *)(param_1 + 0x3f8) + (ulong)(uint)(iVar4 + iVar3) * 4) = 0;
            } while (uVar9 != 0);
          }
        }
        uVar9 = *(uint *)(param_1 + 1000);
        uVar17 = (ulong)(iVar4 + 1U);
      } while (iVar4 + 1U < uVar9);
    }
  }
  if (0xff < param_6) {
    return;
  }
LAB_00877b00:
  memset((void *)(*(long *)(param_1 + 0x3f8) + (ulong)(uVar9 * param_6) * 4),0,
         (ulong)((param_6 * -4 + 0x400) * uVar9));
  return;
}


