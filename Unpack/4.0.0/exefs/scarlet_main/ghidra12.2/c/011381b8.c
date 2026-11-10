/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011381b8; name: FUN_011381b8
 */


uint FUN_011381b8(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int *piVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 *puVar13;
  
  puVar6 = *(undefined8 **)(param_1 + 0x18);
  puVar3 = *(undefined8 **)(param_1 + 0x20);
  puVar4 = puVar6;
  puVar11 = puVar6;
  if (puVar6 != puVar3) {
    while( true ) {
      puVar6 = puVar4;
      puVar11 = puVar11 + 0x3a;
      if (puVar11 == puVar3) break;
      piVar7 = (int *)*puVar6;
      if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 0xb) ||
         (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[5], uVar8 == 0)) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(uint *)((long)piVar7 + uVar8);
      }
      piVar7 = (int *)*puVar11;
      if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 0xb) ||
         (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[5], uVar8 == 0)) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(uint *)((long)piVar7 + uVar8);
      }
      puVar4 = puVar11;
      if (uVar12 <= uVar10) {
        puVar4 = puVar6;
      }
    }
  }
  puVar11 = *(undefined8 **)(param_1 + 0x50);
  puVar4 = *(undefined8 **)(param_1 + 0x58);
  if ((puVar11 != puVar4) && (puVar13 = puVar11 + 0x3a, puVar13 != puVar4)) {
    piVar7 = (int *)*puVar11;
    if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 0xb) ||
       (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[5], uVar8 == 0)) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(uint *)((long)piVar7 + uVar8);
    }
    piVar7 = (int *)*puVar13;
    if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 0xb) ||
       (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[5], uVar8 == 0)) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(uint *)((long)piVar7 + uVar8);
    }
    puVar5 = puVar11 + 0x74;
    if (uVar12 <= uVar10) {
      puVar13 = puVar11;
    }
    if (puVar5 != puVar4) {
      piVar7 = (int *)*puVar13;
      if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 0xb) ||
         (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[5], uVar8 == 0)) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(uint *)((long)piVar7 + uVar8);
      }
      piVar7 = (int *)*puVar5;
      if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 0xb) ||
         (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[5], uVar8 == 0)) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(uint *)((long)piVar7 + uVar8);
      }
      if (uVar12 <= uVar10) {
        puVar5 = puVar13;
      }
      puVar2 = puVar11 + 0xae;
      puVar13 = puVar5;
      if (puVar2 != puVar4) {
        piVar7 = (int *)*puVar5;
        if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 0xb) ||
           (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[5], uVar8 == 0)) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(uint *)((long)piVar7 + uVar8);
        }
        piVar7 = (int *)*puVar2;
        if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 0xb) ||
           (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[5], uVar8 == 0)) {
          uVar12 = 0;
        }
        else {
          uVar12 = *(uint *)((long)piVar7 + uVar8);
        }
        puVar11 = puVar11 + 0xe8;
        if (uVar12 <= uVar10) {
          puVar2 = puVar5;
        }
        for (; puVar13 = puVar2, puVar11 != puVar4; puVar11 = puVar11 + 0x3a) {
          piVar7 = (int *)*puVar2;
          if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 0xb) ||
             (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[5], uVar8 == 0)) {
            uVar10 = 0;
          }
          else {
            uVar10 = *(uint *)((long)piVar7 + uVar8);
          }
          piVar7 = (int *)*puVar11;
          if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 0xb) ||
             (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[5], uVar8 == 0)) {
            uVar12 = 0;
          }
          else {
            uVar12 = *(uint *)((long)piVar7 + uVar8);
          }
          puVar13 = puVar11;
          if (uVar12 <= uVar10) {
            puVar13 = puVar2;
          }
          puVar2 = puVar13;
        }
      }
    }
    puVar11 = puVar13;
  }
  puVar13 = *(undefined8 **)(param_1 + 0x88);
  puVar5 = *(undefined8 **)(param_1 + 0x90);
  if ((puVar13 != puVar5) && (puVar2 = puVar13 + 0x3a, puVar2 != puVar5)) {
    piVar7 = (int *)*puVar13;
    if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 0xb) ||
       (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[5], uVar8 == 0)) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(uint *)((long)piVar7 + uVar8);
    }
    piVar7 = (int *)*puVar2;
    if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 0xb) ||
       (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[5], uVar8 == 0)) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(uint *)((long)piVar7 + uVar8);
    }
    if (uVar12 <= uVar10) {
      puVar2 = puVar13;
    }
    puVar1 = puVar13 + 0x74;
    puVar13 = puVar2;
    for (; puVar1 != puVar5; puVar1 = puVar1 + 0x3a) {
      piVar7 = (int *)*puVar13;
      if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 0xb) ||
         (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[5], uVar8 == 0)) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(uint *)((long)piVar7 + uVar8);
      }
      piVar7 = (int *)*puVar1;
      if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 0xb) ||
         (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[5], uVar8 == 0)) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(uint *)((long)piVar7 + uVar8);
      }
      puVar2 = puVar1;
      if (uVar12 <= uVar10) {
        puVar2 = puVar13;
      }
      puVar13 = puVar2;
    }
  }
  if (puVar3 == puVar6) {
LAB_01138280:
    uVar10 = 0;
  }
  else {
    piVar7 = (int *)*puVar6;
    if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 0xb) ||
       (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[5], uVar8 == 0))
    goto LAB_01138280;
    uVar10 = *(uint *)((long)piVar7 + uVar8);
  }
  if (puVar4 == puVar11) {
LAB_0113828c:
    uVar12 = 0;
  }
  else {
    piVar7 = (int *)*puVar11;
    if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 0xb) ||
       (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[5], uVar8 == 0))
    goto LAB_0113828c;
    uVar12 = *(uint *)((long)piVar7 + uVar8);
  }
  if (puVar5 != puVar13) {
    piVar7 = (int *)*puVar13;
    if ((10 < *(ushort *)((long)piVar7 - (long)*piVar7)) &&
       (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[5], uVar8 != 0)) {
      uVar9 = *(uint *)((long)piVar7 + uVar8);
      goto LAB_0113829c;
    }
  }
  uVar9 = 0;
LAB_0113829c:
  if (uVar12 <= uVar10) {
    uVar12 = uVar10;
  }
  if (uVar9 <= uVar12) {
    uVar9 = uVar12;
  }
  return uVar9;
}


