/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01635450; name: FUN_01635450
 */


void FUN_01635450(long param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  short sVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long *plVar11;
  long lVar12;
  undefined2 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined2 local_70;
  undefined2 local_6e;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined4 local_68;
  undefined1 local_64;
  
  if (*(char *)(param_3 + 3) != '\0') {
    uVar16 = 0;
    do {
      plVar11 = (long *)param_3[5];
      bVar2 = *(byte *)((long)plVar11 + 0xa6);
      uVar14 = (ulong)bVar2;
      lVar12 = *(long *)(param_3[4] + uVar16 * 8);
      sVar6 = *(short *)(param_3[4] + uVar16 * 2 + 0x30);
      if (lVar12 == 0) {
LAB_01635700:
        if ((uVar14 & 0xff) != 0) goto LAB_01635514;
      }
      else {
        if (bVar2 < 0xb) {
          plVar18 = plVar11;
          uVar15 = uVar14;
          if (bVar2 != 0) {
            do {
              if (*plVar18 == lVar12) goto LAB_01635700;
              uVar15 = uVar15 - 1;
              plVar18 = plVar18 + 1;
            } while (uVar15 != 0);
          }
          plVar11[uVar14] = lVar12;
          *(undefined1 *)((long)plVar11 + (ulong)*(byte *)((long)plVar11 + 0xa6) + 0x84) = 0;
          *(undefined2 *)((long)plVar11 + (ulong)*(byte *)((long)plVar11 + 0xa6) * 2 + 0x58) = 0;
          *(undefined2 *)((long)plVar11 + (ulong)*(byte *)((long)plVar11 + 0xa6) * 2 + 0x6e) = 0;
          uVar1 = *(byte *)((long)plVar11 + 0xa6) + 1;
          uVar14 = (ulong)uVar1;
          *(char *)((long)plVar11 + 0xa6) = (char)uVar1;
          if ((uVar1 & 0xff) <= (uint)*(byte *)((long)plVar11 + 0xa7)) goto LAB_01635700;
          *(char *)((long)plVar11 + 0xa7) = (char)uVar1;
        }
LAB_01635514:
        if (*plVar11 == lVar12) {
          *(short *)(plVar11 + 0xb) = (short)plVar11[0xb] + sVar6;
          *(undefined1 *)((long)plVar11 + 0x84) = 1;
          uVar14 = (ulong)*(byte *)((long)plVar11 + 0xa6);
        }
        if (1 < ((uint)uVar14 & 0xff)) {
          if (plVar11[1] == lVar12) {
            *(short *)((long)plVar11 + 0x5a) = *(short *)((long)plVar11 + 0x5a) + sVar6;
            *(undefined1 *)((long)plVar11 + 0x85) = 1;
            uVar14 = (ulong)*(byte *)((long)plVar11 + 0xa6);
          }
          if (2 < ((uint)uVar14 & 0xff)) {
            lVar17 = 0;
            do {
              if (plVar11[lVar17 + 2] == lVar12) {
                *(short *)((long)plVar11 + lVar17 * 2 + 0x5c) =
                     *(short *)((long)plVar11 + lVar17 * 2 + 0x5c) + sVar6;
                *(undefined1 *)((long)plVar11 + lVar17 + 0x86) = 1;
                uVar14 = (ulong)*(byte *)((long)plVar11 + 0xa6);
              }
              uVar15 = lVar17 + 3;
              lVar17 = lVar17 + 1;
            } while (uVar15 < (uVar14 & 0xff));
          }
        }
      }
      plVar19 = *(long **)(param_3[4] + uVar16 * 8);
      uVar7 = *(undefined2 *)(param_3[4] + uVar16 * 2 + 0x30);
      lVar17 = *(long *)(*(long *)(*(long *)(param_1 + 0x78) + 0x60) + 0x20);
      lVar12 = *(long *)(lVar17 + 0x20);
      puVar13 = (undefined2 *)param_3[2];
      uVar8 = *puVar13;
      uVar3 = *(undefined1 *)(puVar13 + 4);
      uVar4 = *(undefined1 *)((long)puVar13 + 9);
      plVar18 = (long *)*param_3;
      uVar5 = *(undefined1 *)(param_3 + 1);
      uVar9 = (**(code **)(*plVar19 + 0x98))(plVar19);
      local_68 = (**(code **)(*plVar18 + 0x98))(plVar18);
      local_70 = uVar8;
      local_6e = uVar7;
      local_6c = uVar4;
      local_6b = uVar3;
      local_64 = uVar5;
      plVar11 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(lVar12 + 0x10) + 0x30),uVar9);
      (**(code **)(*plVar11 + 0x788))(plVar11,&local_70);
      uVar20 = *(undefined8 *)(lVar17 + 0x18);
      uVar9 = (**(code **)(*plVar19 + 0x98))(plVar19);
      uVar10 = (**(code **)(*plVar18 + 0x98))(plVar18);
      FUN_0129aff0(uVar20,0x42,uVar9,uVar10,uVar5,uVar3,uVar4,uVar8,uVar7);
      plVar11 = *(long **)(param_3[4] + uVar16 * 8);
      (**(code **)(*plVar11 + 0x508))(plVar11,2);
      uVar16 = uVar16 + 1;
    } while (uVar16 < *(byte *)(param_3 + 3));
  }
  return;
}


