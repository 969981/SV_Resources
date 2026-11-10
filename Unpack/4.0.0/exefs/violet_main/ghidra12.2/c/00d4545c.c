/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d4545c; name: FUN_00d4545c
 */


void FUN_00d4545c(int *param_1,long *param_2,undefined8 param_3)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long local_58;
  
  if ((4 < *(ushort *)((long)param_1 - (long)*param_1)) &&
     (uVar7 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[2], uVar7 != 0)) {
    uVar9 = (ulong)*(uint *)((long)param_1 + uVar7);
    puVar1 = (uint *)((long)((long)param_1 + uVar7) + uVar9);
    lVar6 = param_2[1];
    uVar5 = lVar6 - *param_2 >> 4;
    uVar4 = (ulong)*puVar1;
    if (uVar5 < uVar4) {
      FUN_00d45758(param_2,uVar4 - uVar5);
    }
    else if (uVar4 < uVar5) {
      lVar10 = *param_2 + uVar4 * 0x10;
      if ((((lVar10 != lVar6) && (FUN_00d44bc8(lVar6 + -0x10), lVar6 + -0x10 != lVar10)) &&
          (FUN_00d44bc8(lVar6 + -0x20), lVar6 + -0x20 != lVar10)) &&
         (FUN_00d44bc8(lVar6 + -0x30), lVar6 + -0x30 != lVar10)) {
        do {
          FUN_00d44bc8(lVar6 + -0x40);
          lVar6 = lVar6 + -0x10;
        } while (lVar10 + 0x30 != lVar6);
      }
      param_2[1] = lVar10;
    }
    if ((*puVar1 != 0) && (*(char *)*param_2 = (char)puVar1[1], 1 < *puVar1)) {
      lVar6 = 5;
      lVar10 = 0x10;
      do {
        *(undefined1 *)(*param_2 + lVar10) = *(undefined1 *)((long)param_1 + lVar6 + uVar9 + uVar7);
        uVar4 = lVar6 - 3;
        lVar6 = lVar6 + 1;
        lVar10 = lVar10 + 0x10;
      } while (uVar4 < *puVar1);
    }
  }
  if ((6 < *(ushort *)((long)param_1 - (long)*param_1)) &&
     (uVar7 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[3], uVar7 != 0)) {
    uVar9 = (ulong)*(uint *)((long)param_1 + uVar7);
    puVar1 = (uint *)((long)((long)param_1 + uVar7) + uVar9);
    local_58 = param_2[1];
    uVar5 = local_58 - *param_2 >> 4;
    uVar4 = (ulong)*puVar1;
    if (uVar5 < uVar4) {
      FUN_00d45758(param_2,uVar4 - uVar5);
    }
    else if (uVar4 < uVar5) {
      lVar6 = *param_2 + uVar4 * 0x10;
      if ((((lVar6 != local_58) && (FUN_00d44bc8(local_58 + -0x10), local_58 + -0x10 != lVar6)) &&
          (FUN_00d44bc8(local_58 + -0x20), local_58 + -0x20 != lVar6)) &&
         (FUN_00d44bc8(local_58 + -0x30), local_58 + -0x30 != lVar6)) {
        do {
          FUN_00d44bc8(local_58 + -0x40);
          local_58 = local_58 + -0x10;
        } while (lVar6 + 0x30 != local_58);
      }
      param_2[1] = lVar6;
    }
    if (*puVar1 != 0) {
      puVar2 = (uint *)((long)param_1 + (ulong)*(ushort *)((long)param_1 + (4 - (long)*param_1)));
      uVar3 = FUN_00d4324c((long)(puVar1 + 1) + (ulong)puVar1[1],
                           *(undefined1 *)((long)puVar2 + (ulong)*puVar2 + 4),param_3);
      *(undefined8 *)(*param_2 + 8) = uVar3;
      if (1 < *puVar1) {
        lVar8 = 0x18;
        lVar6 = uVar7 + uVar9 + 8;
        lVar10 = 5;
        do {
          uVar7 = (ulong)*(ushort *)((long)param_1 + (4 - (long)*param_1));
          uVar3 = FUN_00d4324c((long)param_1 + lVar6 + (ulong)*(uint *)((long)param_1 + lVar6),
                               *(undefined1 *)
                                ((long)param_1 + lVar10 + uVar7 + *(uint *)((long)param_1 + uVar7)),
                               param_3);
          *(undefined8 *)(*param_2 + lVar8) = uVar3;
          uVar7 = lVar10 - 3;
          lVar10 = lVar10 + 1;
          lVar8 = lVar8 + 0x10;
          lVar6 = lVar6 + 4;
        } while (uVar7 < *puVar1);
      }
    }
  }
  return;
}


