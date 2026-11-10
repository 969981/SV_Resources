/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00140b30; name: FUN_00140b30
 */


void FUN_00140b30(long param_1,ulong param_2)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  size_t sVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  ulong local_90;
  undefined1 auStack_88 [40];
  
  if ((int)param_2 != 1) {
    lVar11 = *(long *)(param_1 + 0x10);
    do {
      if ((byte)((*(byte *)(lVar11 + -0x18) & 0xf) - 3) < 2) {
        bVar2 = *(byte *)(lVar11 + -8);
        plVar7 = (long *)(lVar11 + -0x10);
        if ((bVar2 & 0xf) != 4) {
          if ((bVar2 & 0xf) != 3) goto LAB_00140b8c;
          FUN_0012dfb0(param_1,plVar7);
          bVar2 = *(byte *)(lVar11 + -8);
        }
        plVar9 = (long *)(lVar11 + -0x20);
        if ((bVar2 == 0x44) && (*(char *)(*plVar7 + 0xb) == '\0')) {
          if ((*(byte *)(lVar11 + -0x18) & 0xf) == 3) {
            FUN_0012dfb0(param_1,plVar9);
          }
          goto LAB_00140b94;
        }
        if ((*(char *)(lVar11 + -0x18) == 'D') && (*(char *)(*plVar9 + 0xb) == '\0')) {
          *(undefined8 *)(lVar11 + -0x20) = *(undefined8 *)(lVar11 + -0x10);
          *(byte *)(lVar11 + -0x18) = bVar2;
          goto LAB_00140b94;
        }
        lVar3 = *plVar7;
        if (*(char *)(lVar3 + 8) == '\x04') {
          uVar8 = (ulong)*(byte *)(lVar3 + 0xb);
        }
        else {
          uVar8 = *(ulong *)(lVar3 + 0x10);
        }
        local_90 = 1;
        if (1 < (int)param_2) {
          do {
            if ((*(byte *)(plVar9 + 1) & 0xf) != 4) {
              if ((*(byte *)(plVar9 + 1) & 0xf) != 3) goto LAB_00140cc4;
              FUN_0012dfb0(param_1,plVar9);
            }
            lVar3 = *plVar9;
            if (*(char *)(lVar3 + 8) == '\x04') {
              uVar4 = (ulong)*(byte *)(lVar3 + 0xb);
            }
            else {
              uVar4 = *(ulong *)(lVar3 + 0x10);
            }
            if (0x7fffffffffffffff - uVar8 <= uVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_00125b90(param_1,"string length overflow");
            }
            local_90 = local_90 + 1;
            uVar8 = uVar4 + uVar8;
            plVar9 = plVar9 + -2;
          } while ((param_2 & 0xffffffff) != local_90);
          local_90 = param_2 & 0xffffffff;
        }
LAB_00140cc4:
        iVar12 = (int)local_90;
        if (uVar8 < 0x29) {
          plVar7 = (long *)(lVar11 + (local_90 & 0xffffffff) * -0x10);
          lVar13 = 0;
          lVar3 = (local_90 & 0xffffffff) + 1;
          do {
            lVar5 = *plVar7;
            if (*(char *)(lVar5 + 8) == '\x04') {
              sVar10 = (size_t)*(byte *)(lVar5 + 0xb);
            }
            else {
              sVar10 = *(size_t *)(lVar5 + 0x10);
            }
            memcpy(auStack_88 + lVar13,(void *)(lVar5 + 0x18),sVar10);
            lVar3 = lVar3 + -1;
            lVar13 = sVar10 + lVar13;
            plVar7 = plVar7 + 2;
          } while (1 < lVar3);
          lVar5 = FUN_0013be00(param_1,auStack_88,uVar8);
        }
        else {
          lVar5 = FUN_0013c050(param_1,uVar8);
          plVar7 = (long *)(lVar11 + (local_90 & 0xffffffff) * -0x10);
          lVar13 = 0;
          lVar3 = (local_90 & 0xffffffff) + 1;
          do {
            lVar6 = *plVar7;
            if (*(char *)(lVar6 + 8) == '\x04') {
              sVar10 = (size_t)*(byte *)(lVar6 + 0xb);
            }
            else {
              sVar10 = *(size_t *)(lVar6 + 0x10);
            }
            memcpy((void *)(lVar5 + lVar13 + 0x18),(void *)(lVar6 + 0x18),sVar10);
            lVar3 = lVar3 + -1;
            lVar13 = sVar10 + lVar13;
            plVar7 = plVar7 + 2;
          } while (1 < lVar3);
        }
        local_90 = local_90 & 0xffffffff;
        plVar7 = (long *)(lVar11 + local_90 * -0x10);
        *plVar7 = lVar5;
        *(byte *)(plVar7 + 1) = *(byte *)(lVar5 + 8) | 0x40;
      }
      else {
LAB_00140b8c:
        FUN_0013e3d0(param_1);
LAB_00140b94:
        iVar12 = 2;
      }
      uVar1 = (int)param_2 - (iVar12 + -1);
      param_2 = (ulong)uVar1;
      lVar11 = *(long *)(param_1 + 0x10) + (long)(iVar12 + -1) * -0x10;
      *(long *)(param_1 + 0x10) = lVar11;
    } while (1 < (int)uVar1);
  }
  return;
}


