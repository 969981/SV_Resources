/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003b9570; name: FUN_003b9570
 */


undefined8 FUN_003b9570(long param_1,long param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  
  piVar1 = (int *)(param_2 + 0x1d0);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = *piVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  FUN_0047e5e0(*(undefined8 *)(param_1 + 0x378));
  lVar7 = FUN_004515c0(*(undefined8 *)(param_1 + 0x28),param_2);
  if ((lVar7 == 0) || (lVar7 == param_2)) {
    if (((lVar7 != 0) ||
        (lVar8 = FUN_00451a40(*(undefined8 *)(param_1 + 0x28),param_2), lVar7 = param_2, lVar8 == 0)
        ) && (lVar7 != 0)) {
      FUN_003b8e30();
      uVar12 = 0;
      goto LAB_003b97a0;
    }
  }
  else {
    puVar10 = *(undefined8 **)(lVar7 + 0x210);
    if ((puVar10 != (undefined8 *)0x0) &&
       (puVar11 = *(undefined8 **)(lVar7 + 0x208), puVar11 != (undefined8 *)0x0)) {
      puVar2 = (undefined8 *)(param_1 + 0x40);
      puVar3 = (undefined8 *)(param_1 + 0x38);
      if (puVar10 == puVar2) {
        if (puVar11 == puVar3) {
          *puVar3 = 0;
          *(undefined8 *)(param_1 + 0x40) = 0;
        }
        else {
          *puVar2 = puVar11;
          puVar11[0x42] = puVar2;
        }
      }
      else if (puVar11 == puVar3) {
        *puVar3 = puVar10;
        puVar10[0x41] = puVar3;
      }
      else {
        puVar10[0x41] = puVar11;
        *(undefined8 **)(*(long *)(lVar7 + 0x208) + 0x210) = puVar10;
      }
      *(long *)(lVar7 + 0x208) = 0;
      *(undefined8 *)(lVar7 + 0x210) = 0;
    }
    FUN_003b8e30();
  }
  puVar10 = *(undefined8 **)(param_2 + 0x210);
  if ((puVar10 != (undefined8 *)0x0) &&
     (puVar11 = *(undefined8 **)(param_2 + 0x208), puVar11 != (undefined8 *)0x0)) {
    puVar2 = (undefined8 *)(param_1 + 0x40);
    puVar3 = (undefined8 *)(param_1 + 0x38);
    if (puVar10 == puVar2) {
      if (puVar11 == puVar3) {
        *puVar3 = 0;
        *(undefined8 *)(param_1 + 0x40) = 0;
      }
      else {
        *puVar2 = puVar11;
        puVar11[0x42] = puVar2;
      }
    }
    else if (puVar11 == puVar3) {
      *puVar3 = puVar10;
      puVar10[0x41] = puVar3;
    }
    else {
      puVar10[0x41] = puVar11;
      *(undefined8 **)(*(long *)(param_2 + 0x208) + 0x210) = puVar10;
    }
    *(long *)(param_2 + 0x208) = 0;
    *(undefined8 *)(param_2 + 0x210) = 0;
  }
  plVar9 = (long *)(param_1 + 0x38);
  lVar7 = *plVar9;
  if (lVar7 == 0) {
    *(long *)(param_1 + 0x40) = param_2;
    *(long *)(param_1 + 0x38) = param_2;
    *(long **)(param_2 + 0x208) = plVar9;
    *(long **)(param_2 + 0x210) = (long *)(param_1 + 0x40);
  }
  else {
    *(long *)(param_2 + 0x210) = lVar7;
    *(long *)(lVar7 + 0x208) = param_2;
    *(long **)(param_2 + 0x208) = plVar9;
    *plVar9 = param_2;
  }
  lVar7 = FUN_003b3f20(param_1,0x2b,0,0);
  if (0 < lVar7) {
    lVar7 = FUN_003b3f20(param_1,0x14,0,0);
    lVar8 = FUN_003b3f20(param_1,0x2b,0,0);
    if (lVar8 < lVar7) {
      piVar1 = (int *)(param_1 + 0x90);
      do {
        iVar6 = FUN_003b9ad0(param_1,*(undefined8 *)(param_1 + 0x40),0);
        if (iVar6 == 0) break;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar7 = FUN_003b3f20(param_1,0x14,0,0);
        lVar8 = FUN_003b3f20(param_1,0x2b,0,0);
      } while (lVar8 < lVar7);
    }
  }
  uVar12 = 1;
LAB_003b97a0:
  FUN_0047e600(*(undefined8 *)(param_1 + 0x378));
  return uVar12;
}


