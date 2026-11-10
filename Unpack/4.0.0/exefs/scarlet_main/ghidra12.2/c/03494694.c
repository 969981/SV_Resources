/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03494694; name: FUN_03494694
 */


bool FUN_03494694(long param_1,code *param_2,ulong *param_3,undefined8 param_4,ulong *param_5,
                 undefined8 param_6)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  
  if (((*(char *)(param_1 + 0x10) != '\0') &&
      (uVar3 = (*param_2)(param_1 + 8,param_4,param_6), (uVar3 & 1) != 0)) &&
     (*(char *)(param_1 + 0x10) != '\0')) {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  uVar3 = *param_3;
  if (uVar3 == 0) {
    puVar12 = *(undefined8 **)(param_1 + 0x18);
    uVar5 = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      puVar7 = puVar12;
      do {
        *param_5 = puVar7[1];
        uVar3 = (*param_2)(puVar7,param_4,param_6);
        if ((uVar3 & 1) == 0) {
          uVar5 = *(uint *)(param_1 + 0x20);
          puVar7 = puVar7 + 2;
        }
        else {
          uVar5 = *(uint *)(param_1 + 0x20);
          puVar4 = (undefined8 *)((*(long *)(param_1 + 0x18) + (ulong)uVar5 * 0x10) - 0x10);
          puVar12 = puVar7;
          if (puVar7 < puVar4) {
            do {
              puVar6 = puVar12 + 2;
              *puVar12 = *puVar6;
              puVar12[1] = puVar12[3];
              puVar12 = puVar6;
            } while (puVar6 < puVar4);
            uVar5 = *(uint *)(param_1 + 0x20);
          }
          uVar5 = uVar5 - 1;
          *(uint *)(param_1 + 0x20) = uVar5;
        }
        puVar12 = *(undefined8 **)(param_1 + 0x18);
      } while (puVar12 + (ulong)uVar5 * 2 != puVar7);
    }
    if ((puVar12 != (undefined8 *)0x0) && (uVar5 == 0)) {
      *(undefined4 *)(param_1 + 0x20) = 0;
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,puVar12);
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x20);
    if (uVar5 != 0) {
      lVar9 = *(long *)(param_1 + 0x18);
      iVar8 = 0;
      do {
        iVar1 = iVar8 + (uVar5 >> 1);
        uVar11 = *(ulong *)(lVar9 + (long)iVar1 * 0x10 + 8);
        if (uVar11 == uVar3) {
          *param_5 = uVar3;
          uVar3 = (*param_2)(lVar9 + (long)iVar1 * 0x10,param_4,param_6);
          if ((uVar3 & 1) != 0) {
            uVar5 = *(uint *)(param_1 + 0x20);
            if (uVar5 != 0) {
              uVar3 = *param_3;
              iVar8 = 0;
              lVar9 = *(long *)(param_1 + 0x18);
              uVar10 = uVar5;
              goto LAB_03494824;
            }
          }
          break;
        }
        if (uVar11 < uVar3) {
          iVar8 = iVar1 + 1;
        }
        uVar5 = uVar5 - (uVar11 < uVar3) >> 1;
      } while (uVar5 != 0);
    }
  }
  goto LAB_03494890;
  while( true ) {
    if (uVar11 < uVar3) {
      iVar8 = iVar1 + 1;
    }
    uVar10 = uVar10 - (uVar11 < uVar3) >> 1;
    if (uVar10 == 0) break;
LAB_03494824:
    iVar1 = iVar8 + (uVar10 >> 1);
    uVar11 = *(ulong *)(lVar9 + (long)iVar1 * 0x10 + 8);
    if (uVar11 == uVar3) {
      puVar7 = (undefined8 *)((lVar9 + (ulong)uVar5 * 0x10) - 0x10);
      puVar12 = (undefined8 *)(lVar9 + (long)iVar1 * 0x10);
      if (puVar12 < puVar7) {
        do {
          puVar4 = puVar12 + 2;
          *puVar12 = *puVar4;
          puVar12[1] = puVar12[3];
          puVar12 = puVar4;
        } while (puVar4 < puVar7);
        uVar5 = *(uint *)(param_1 + 0x20);
      }
      *(uint *)(param_1 + 0x20) = uVar5 - 1;
      break;
    }
  }
LAB_03494890:
  if (*(char *)(param_1 + 0x10) == '\0') {
    bVar2 = *(int *)(param_1 + 0x20) == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


