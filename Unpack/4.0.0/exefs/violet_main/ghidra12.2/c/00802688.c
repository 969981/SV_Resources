/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00802688; name: FUN_00802688
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00802688(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong local_58;
  
  FUN_00802884();
  puVar2 = PTR_DAT_047d0868;
  if (*(char *)(param_1 + 0x5a) != '\0') {
    if (*(int *)(param_1 + 0xc0) != 0) {
      uVar11 = 0;
      do {
        lVar12 = *(long *)(param_1 + 0xb8);
        local_58 = 0;
        FUN_007935cc(&local_58);
        lVar12 = lVar12 + uVar11 * 0x80;
        if (((*(long *)(lVar12 + 0x10) == -1) || (local_58 < *(ulong *)(lVar12 + 8))) ||
           (8 < *(int *)(lVar12 + 0x20) - 2U)) {
switchD_00802740_caseD_3:
          uVar3 = (ulong)*(uint *)(param_1 + 0xc0);
        }
        else {
          puVar4 = puVar2 + 0x3fe;
          switch(*(int *)(lVar12 + 0x20)) {
          case 2:
            break;
          default:
            goto switchD_00802740_caseD_3;
          case 5:
            puVar4 = puVar2 + 0x412;
            puVar2[0x402] = 0;
            break;
          case 8:
          case 10:
            puVar4 = puVar2 + 0x40e;
          }
          *puVar4 = 0;
          lVar5 = *(long *)(param_1 + 0xb8);
          lVar12 = lVar5 + uVar11 * 0x80;
          lVar6 = *(long *)(lVar12 + 0x10);
          uVar3 = 0xffffffffffffffff;
          plVar8 = (long *)(lVar5 + 0x10);
          do {
            lVar10 = *plVar8;
            uVar3 = uVar3 + 1;
            plVar8 = plVar8 + 0x10;
          } while (lVar10 != lVar6);
          piVar9 = (int *)(lVar5 + (uVar3 & 0xffffffff) * 0x80 + 0x6c);
          lVar10 = lVar5;
          if (*piVar9 == 0) {
            *piVar9 = *(int *)(lVar12 + 0x20) + 10;
            uVar3 = (ulong)*(uint *)(param_1 + 0xc0);
            uVar7 = uVar3;
            if (*(uint *)(param_1 + 0xc0) == 0) goto LAB_008027e4;
LAB_008027a0:
            do {
              if (*(long *)(lVar10 + 0x10) == lVar6) goto LAB_008027bc;
              uVar7 = uVar7 - 1;
              lVar10 = lVar10 + 0x80;
            } while (uVar7 != 0);
            lVar10 = 0;
LAB_008027bc:
            uVar1 = *(uint *)(lVar10 + 0x20);
          }
          else {
            uVar3 = (ulong)*(uint *)(param_1 + 0xc0);
            uVar7 = uVar3;
            if (*(uint *)(param_1 + 0xc0) != 0) goto LAB_008027a0;
LAB_008027e4:
            lVar10 = 0;
            uVar1 = _DAT_00000020;
          }
          if ((((int)uVar1 < 0xe) && (*(undefined8 *)(lVar10 + 0x74) = 0, uVar1 < 0xd)) &&
             ((1 << (ulong)(uVar1 & 0x1f) & 0x157dU) != 0)) {
            *(undefined4 *)(lVar10 + 0x20) = 0xe;
            if ((int)uVar3 != 0) {
              piVar9 = (int *)(lVar5 + 0x20);
              uVar7 = uVar3;
              do {
                if ((*(long *)(piVar9 + -4) != -1) && (1 < *piVar9 - 0xdU)) goto LAB_00802850;
                uVar7 = uVar7 - 1;
                piVar9 = piVar9 + 0x20;
              } while (uVar7 != 0);
            }
            *(undefined1 *)(param_1 + 0x5a) = 0;
LAB_00802850:
            *(undefined1 *)(param_1 + 0xa8) = 1;
          }
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar3);
    }
    FUN_008029fc(param_1);
  }
  FUN_008033e8(param_1);
  return;
}


