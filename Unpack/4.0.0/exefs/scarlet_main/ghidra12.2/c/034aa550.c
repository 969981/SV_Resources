/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034aa550; name: FUN_034aa550
 */


/* WARNING: Removing unreachable block (ram,0x034aa630) */

void FUN_034aa550(undefined8 *param_1)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  long lVar9;
  byte bVar10;
  long *plVar11;
  undefined8 local_60;
  undefined1 local_58;
  
  uVar2 = *(ushort *)(param_1 + 2);
  if (uVar2 != 0) {
    uVar4 = *(uint *)(param_1 + 1);
    if (uVar2 <= uVar4 && uVar4 != uVar2) {
      plVar11 = (long *)*param_1;
      lVar5 = (ulong)uVar4 * 8;
      plVar1 = plVar11 + uVar4;
      uVar4 = 0;
      do {
        lVar5 = lVar5 + -8;
        lVar6 = *plVar11;
        if (((*(uint *)(lVar6 + 699) & 0x2010000) == 0) && ((*(byte *)(lVar6 + 0x1b1) & 3) == 0)) {
          lVar7 = *(long *)(lVar6 + 0x250);
          if (lVar7 == 0) {
LAB_034aa640:
            if ((*(uint *)(lVar6 + 699) & 0x78) != 0) goto LAB_034aa64c;
          }
          else {
            lVar9 = *(long *)(lVar7 + 0x28);
            if (lVar9 == 0) {
              if ((*(byte *)(lVar7 + 0x50) >> 1 & 1) != 0) {
                bVar8 = 1;
LAB_034aa63c:
                if (bVar8 == 0) goto LAB_034aa648;
              }
              goto LAB_034aa640;
            }
            bVar10 = 1;
            bVar8 = 1;
            do {
              if (bVar8 == 0) {
                bVar8 = 0;
              }
              else {
                bVar8 = *(byte *)(lVar9 + 0x1d8) >> 1 & 1;
              }
              if (bVar10 == 0) {
                bVar10 = 0;
              }
              else {
                bVar10 = *(byte *)(lVar9 + 0x1d8) & 1;
              }
              lVar9 = *(long *)(lVar9 + 0x20);
            } while (lVar9 != 0);
            if ((*(byte *)(lVar7 + 0x50) >> 1 & 1) == 0) {
              if (bVar10 != 0) goto LAB_034aa640;
            }
            else if (bVar10 == 1) goto LAB_034aa63c;
          }
LAB_034aa648:
          uVar4 = uVar4 + 1;
        }
LAB_034aa64c:
        plVar11 = plVar11 + 1;
      } while ((plVar11 != plVar1) && (uVar4 < uVar2));
      if (plVar11 != plVar1) {
        iVar3 = 1;
        if (param_1 == (undefined8 *)PTR_DAT_047e7110) {
          iVar3 = 2;
        }
        do {
          lVar6 = *plVar11;
          uVar4 = *(uint *)(lVar6 + 699);
          if ((uVar4 & 0x2010000) == 0) {
            if (*(char *)((long)param_1 + 0x13) == '\0') {
              if ((uVar4 >> 0x10 & 1) == 0) {
                *(uint *)(lVar6 + 699) = iVar3 << 0x11 | uVar4 & 0xfff0ffff | 0x10000;
              }
              local_60 = 0x400000000;
              local_58 = 0;
              FUN_034a30a4(lVar6,&local_60,1);
            }
            else {
              FUN_034a5d34(lVar6,iVar3);
            }
          }
          plVar11 = plVar11 + 1;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
    }
  }
  return;
}


