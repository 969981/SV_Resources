/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0129aff0; name: FUN_0129aff0
 */


/* WARNING: Removing unreachable block (ram,0x0129b104) */
/* WARNING: Removing unreachable block (ram,0x0129b124) */
/* WARNING: Removing unreachable block (ram,0x0129b128) */
/* WARNING: Removing unreachable block (ram,0x0129b148) */
/* WARNING: Removing unreachable block (ram,0x0129b14c) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff60 : 0x0129b158 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0129aff0(long *param_1,ushort param_2)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  undefined4 *puVar9;
  ulong uVar10;
  long *plVar11;
  undefined4 *puVar12;
  ulong uVar13;
  uint local_a0;
  undefined4 auStack_9c [7];
  undefined4 *puVar14;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar8 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar13 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar8 = (ulong)param_2;
    if (uVar13 < 2) {
      uVar10 = (int)uVar5 - 1 & uVar8;
    }
    else {
      uVar10 = uVar8;
      if (uVar5 <= uVar8) {
        uVar10 = 0;
        if (uVar5 != 0) {
          uVar10 = uVar8 / uVar5;
        }
        uVar10 = uVar8 - uVar10 * uVar5;
      }
    }
    plVar11 = *(long **)(*param_1 + uVar10 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar11[1] == uVar8) {
            if (*(ushort *)(plVar11 + 2) == param_2) goto LAB_0129b0a0;
          }
          else if ((plVar11[1] & uVar5 - 1) != uVar10) goto LAB_0129b298;
          plVar11 = (long *)*plVar11;
          uVar3 = 0;
        } while (plVar11 != (long *)0x0);
        goto LAB_0129b0b8;
      }
      do {
        uVar13 = plVar11[1];
        if (uVar13 == uVar8) {
          if (*(ushort *)(plVar11 + 2) == param_2) goto LAB_0129b0a0;
        }
        else {
          if (uVar5 <= uVar13) {
            uVar2 = 0;
            if (uVar5 != 0) {
              uVar2 = uVar13 / uVar5;
            }
            uVar13 = uVar13 - uVar2 * uVar5;
          }
          if (uVar13 != uVar10) break;
        }
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
  }
LAB_0129b298:
  uVar3 = 0;
  goto LAB_0129b0b8;
LAB_0129b0a0:
  bVar1 = *(byte *)((long)plVar11 + 0x12);
  uVar3 = (uint)bVar1;
  uVar5 = 10;
  if ((bVar1 == 0x10) || (bVar1 == 0x20)) goto LAB_0129b0bc;
LAB_0129b0b8:
  uVar5 = (ulong)(uVar3 & 0xf);
LAB_0129b0bc:
  local_30 = 0;
  uStack_28 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  iVar4 = (int)uVar5;
  if (((iVar4 != 0) && (iVar4 != 1)) && (iVar4 != 2)) {
    iVar7 = -0x18;
    local_58 = (ulong)local_a0;
    if (iVar4 != 3) {
      lVar6 = uVar5 - 3;
      puVar12 = (undefined4 *)((long)&local_58 + 4);
      puVar14 = (undefined4 *)register0x00000008;
      do {
        if (iVar7 < 0) {
          iVar4 = iVar7 + 8;
          if (-8 < iVar7) goto LAB_0129b1e0;
          puVar9 = (undefined4 *)((long)auStack_9c + (long)iVar7 + 0x1c);
          iVar7 = iVar4;
        }
        else {
          iVar4 = iVar7;
LAB_0129b1e0:
          puVar9 = puVar14;
          iVar7 = iVar4;
          puVar14 = puVar14 + 2;
        }
        lVar6 = lVar6 + -1;
        *puVar12 = *puVar9;
        puVar12 = puVar12 + 1;
      } while (lVar6 != 0);
    }
  }
  FUN_0129bf58();
  return;
}


