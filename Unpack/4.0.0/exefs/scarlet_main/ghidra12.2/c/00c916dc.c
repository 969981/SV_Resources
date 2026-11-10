/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c916dc; name: FUN_00c916dc
 */


void FUN_00c916dc(byte *param_1,long *param_2,undefined8 param_3,long *param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  undefined *puVar7;
  long *plVar8;
  ulong uVar9;
  byte *pbVar10;
  long *plVar11;
  byte local_68 [8];
  
  cVar6 = *(char *)(*param_4 + (ulong)*(uint *)((long)param_2 + 0xc));
  if (cVar6 != '\x04') {
    plVar11 = (long *)param_2[10];
    plVar2 = (long *)param_2[0xb];
    if (plVar11 != plVar2) {
      (**(code **)(*(long *)*plVar11 + 0x20))((long *)*plVar11,param_4);
      plVar8 = (long *)*plVar11;
      if (((char)plVar8[0xb] == '\0') &&
         (uVar9 = (**(code **)(*plVar8 + 0x30))(plVar8,param_4), (uVar9 & 1) != 0)) {
        (**(code **)(*(long *)*plVar11 + 0x18))((long *)*plVar11,param_4);
      }
      while (plVar11 = plVar11 + 1, plVar11 != plVar2) {
        (**(code **)(*(long *)*plVar11 + 0x20))((long *)*plVar11,param_4);
        plVar8 = (long *)*plVar11;
        if (((char)plVar8[0xb] == '\0') &&
           (uVar9 = (**(code **)(*plVar8 + 0x30))(plVar8,param_4), (uVar9 & 1) != 0)) {
          (**(code **)(*(long *)*plVar11 + 0x18))((long *)*plVar11,param_4);
        }
      }
    }
  }
  plVar11 = (long *)param_2[10];
  plVar2 = (long *)param_2[0xb];
  if (plVar11 != plVar2) {
    plVar8 = (long *)*plVar11;
    if (((char)plVar8[0xb] == '\x02') &&
       (uVar9 = (**(code **)(*plVar8 + 0x30))(plVar8,param_4), (uVar9 & 1) != 0)) {
      (**(code **)(*(long *)*plVar11 + 0x18))((long *)*plVar11,param_4);
    }
    while (plVar11 = plVar11 + 1, plVar11 != plVar2) {
      plVar8 = (long *)*plVar11;
      if (((char)plVar8[0xb] == '\x02') &&
         (uVar9 = (**(code **)(*plVar8 + 0x30))(plVar8,param_4), (uVar9 & 1) != 0)) {
        (**(code **)(*(long *)*plVar11 + 0x18))((long *)*plVar11,param_4);
      }
    }
  }
  puVar7 = PTR_DAT_047e32e8;
  pbVar10 = PTR_DAT_047dca60;
  plVar11 = (long *)param_2[3];
  plVar2 = (long *)param_2[4];
  if (cVar6 != '\x04') {
    if (plVar11 != plVar2) {
      do {
        (**(code **)(*(long *)*plVar11 + 0x20))((long *)*plVar11,param_4);
        plVar8 = (long *)*plVar11;
        cVar5 = *(char *)((long)plVar8 + 0x59);
        uVar9 = (**(code **)(*plVar8 + 0x18))(plVar8,param_4);
        if (cVar5 == '\0') {
          if ((uVar9 & 1) == 0) goto LAB_00c9185c;
        }
        else if ((uVar9 & 1) != 0) goto LAB_00c91c28;
        plVar11 = plVar11 + 1;
      } while (plVar2 != plVar11);
      goto LAB_00c91864;
    }
    bVar4 = *PTR_DAT_047dca60;
    *param_1 = bVar4;
    if (bVar4 != 1) {
      return;
    }
    goto LAB_00c91764;
  }
  if (plVar11 != plVar2) {
    do {
      plVar8 = (long *)*plVar11;
      if (*(char *)((long)plVar8 + 0x59) == '\0') {
        if (((char)plVar8[0xb] == '\x04') &&
           (uVar9 = (**(code **)(*plVar8 + 0x18))(plVar8,param_4), (uVar9 & 1) == 0))
        goto LAB_00c9185c;
      }
      else {
        uVar9 = (**(code **)(*plVar8 + 0x18))(plVar8,param_4);
        if ((uVar9 & 1) != 0) goto LAB_00c91c28;
      }
      plVar11 = plVar11 + 1;
    } while (plVar2 != plVar11);
    goto LAB_00c91864;
  }
  bVar4 = *PTR_DAT_047dca60;
  *param_1 = bVar4;
  if (bVar4 != 1) {
    return;
  }
  goto LAB_00c91770;
LAB_00c91c28:
  pbVar10 = puVar7;
  goto LAB_00c91864;
LAB_00c9185c:
  pbVar10 = (byte *)(*plVar11 + 0x58);
LAB_00c91864:
  bVar4 = *pbVar10;
  *param_1 = bVar4;
  if (bVar4 == 1) {
    if (cVar6 != '\x04') {
LAB_00c91764:
      plVar11 = (long *)param_2[10];
      plVar2 = (long *)param_2[0xb];
      if (plVar11 != plVar2) {
        plVar8 = (long *)*plVar11;
        if (((char)plVar8[0xb] == '\x01') &&
           (uVar9 = (**(code **)(*plVar8 + 0x30))(plVar8,param_4), (uVar9 & 1) != 0)) {
          (**(code **)(*(long *)*plVar11 + 0x18))((long *)*plVar11,param_4);
        }
        while (plVar11 = plVar11 + 1, plVar11 != plVar2) {
          plVar8 = (long *)*plVar11;
          if (((char)plVar8[0xb] == '\x01') &&
             (uVar9 = (**(code **)(*plVar8 + 0x30))(plVar8,param_4), (uVar9 & 1) != 0)) {
            (**(code **)(*(long *)*plVar11 + 0x18))((long *)*plVar11,param_4);
          }
        }
      }
    }
LAB_00c91770:
    plVar11 = (long *)param_2[10];
    plVar2 = (long *)param_2[0xb];
    if (plVar11 != plVar2) {
      plVar8 = (long *)*plVar11;
      if (((char)plVar8[0xb] == '\x03') &&
         (uVar9 = (**(code **)(*plVar8 + 0x30))(plVar8,param_4), (uVar9 & 1) != 0)) {
        (**(code **)(*(long *)*plVar11 + 0x18))((long *)*plVar11,param_4);
      }
      while (plVar11 = plVar11 + 1, plVar11 != plVar2) {
        plVar8 = (long *)*plVar11;
        if (((char)plVar8[0xb] == '\x03') &&
           (uVar9 = (**(code **)(*plVar8 + 0x30))(plVar8,param_4), (uVar9 & 1) != 0)) {
          (**(code **)(*(long *)*plVar11 + 0x18))((long *)*plVar11,param_4);
        }
      }
    }
    if (cVar6 != '\x04') {
      (**(code **)(*param_2 + 0x58))(param_2,param_4);
    }
    (**(code **)(*param_2 + 0x60))(local_68,param_2,param_3,param_4);
    *param_1 = local_68[0];
    if (1 < local_68[0] - 3) {
      (**(code **)(*param_2 + 0x68))(param_2,param_4,param_1);
      plVar11 = (long *)param_2[10];
      plVar2 = (long *)param_2[0xb];
      if (plVar11 != plVar2) {
        plVar8 = (long *)*plVar11;
        if (((char)plVar8[0xb] == '\x04') &&
           (uVar9 = (**(code **)(*plVar8 + 0x30))(plVar8,param_4), (uVar9 & 1) != 0)) {
          (**(code **)(*(long *)*plVar11 + 0x18))((long *)*plVar11,param_4);
        }
        (**(code **)(*(long *)*plVar11 + 0x28))((long *)*plVar11,param_4,param_1);
        while (plVar11 = plVar11 + 1, plVar11 != plVar2) {
          plVar8 = (long *)*plVar11;
          if (((char)plVar8[0xb] == '\x04') &&
             (uVar9 = (**(code **)(*plVar8 + 0x30))(plVar8,param_4), (uVar9 & 1) != 0)) {
            (**(code **)(*(long *)*plVar11 + 0x18))((long *)*plVar11,param_4);
          }
          (**(code **)(*(long *)*plVar11 + 0x28))((long *)*plVar11,param_4,param_1);
        }
      }
      puVar1 = (undefined8 *)param_2[3];
      puVar3 = (undefined8 *)param_2[4];
      if (puVar1 != puVar3) {
        (**(code **)(*(long *)*puVar1 + 0x28))((long *)*puVar1,param_4,param_1);
        while (puVar1 = puVar1 + 1, puVar1 != puVar3) {
          (**(code **)(*(long *)*puVar1 + 0x28))((long *)*puVar1,param_4,param_1);
        }
      }
    }
  }
  return;
}


