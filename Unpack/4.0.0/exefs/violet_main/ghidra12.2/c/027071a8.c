/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027071a8; name: FUN_027071a8
 */


void FUN_027071a8(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long *plVar9;
  undefined1 *puVar10;
  long *plVar11;
  
  plVar11 = (long *)param_1[1];
  if (param_2 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar10 = *(undefined1 **)PTR_DAT_047d3e30;
    plVar9 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  else {
    bVar1 = *param_2;
    puVar10 = &DAT_cbf29ce484222645;
    if (bVar1 == 0) {
      plVar9 = (long *)0x0;
    }
    else {
      plVar9 = (long *)0x0;
      pbVar6 = param_2;
      do {
        pbVar6 = pbVar6 + 1;
        puVar10 = (undefined1 *)(((ulong)puVar10 ^ (ulong)bVar1) * 0x100000001b3);
        bVar1 = *pbVar6;
      } while (bVar1 != 0);
    }
  }
  puVar7 = (undefined1 *)plVar11[1];
  if (puVar7 != (undefined1 *)0x0) {
    uVar4 = (long)puVar7 - ((ulong)puVar7 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      puVar5 = (undefined1 *)((ulong)(puVar7 + -1) & (ulong)puVar10);
    }
    else {
      puVar5 = puVar10;
      if (puVar7 <= puVar10) {
        uVar2 = 0;
        if (puVar7 != (undefined1 *)0x0) {
          uVar2 = (ulong)puVar10 / (ulong)puVar7;
        }
        puVar5 = puVar10 + -(uVar2 * (long)puVar7);
      }
    }
    plVar11 = *(long **)(*plVar11 + (long)puVar5 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar4 < 2) {
        do {
          if ((undefined1 *)plVar11[1] == puVar10) {
            if ((undefined1 *)plVar11[2] == puVar10) goto joined_r0x027072b0;
          }
          else if ((undefined1 *)((ulong)plVar11[1] & (ulong)(puVar7 + -1)) != puVar5) break;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          puVar8 = (undefined1 *)plVar11[1];
          if (puVar8 == puVar10) {
            if ((undefined1 *)plVar11[2] == puVar10) goto joined_r0x027072b0;
          }
          else {
            if (puVar7 <= puVar8) {
              uVar4 = 0;
              if (puVar7 != (undefined1 *)0x0) {
                uVar4 = (ulong)puVar8 / (ulong)puVar7;
              }
              puVar8 = puVar8 + -(uVar4 * (long)puVar7);
            }
            if (puVar8 != puVar5) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
  plVar11 = (long *)0x0;
joined_r0x027072b0:
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  if (plVar11 == (long *)0x0) {
    FUN_00ca1a30(*param_1);
    FUN_027073e0(*param_1,param_2);
    return;
  }
  return;
}


