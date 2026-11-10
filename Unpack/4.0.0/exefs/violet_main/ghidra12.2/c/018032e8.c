/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018032e8; name: FUN_018032e8
 */


void FUN_018032e8(float param_1,float param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int *piVar4;
  ushort *puVar5;
  float fVar6;
  
  puVar1 = *(undefined8 **)(param_3 + 0x50);
  puVar2 = *(undefined8 **)(param_3 + 0x58);
  if (puVar1 != puVar2) {
    piVar4 = (int *)*puVar1;
    fVar6 = 0.0;
    puVar5 = (ushort *)((long)piVar4 - (long)*piVar4);
    if ((10 < *puVar5) && ((ulong)puVar5[5] != 0)) {
      fVar6 = (float)NEON_ucvtf(*(undefined4 *)((long)piVar4 + (ulong)puVar5[5]));
    }
    if (param_1 < fVar6) {
      fVar6 = 0.0;
      if ((8 < *puVar5) && ((ulong)puVar5[4] != 0)) {
        fVar6 = (float)NEON_ucvtf(*(undefined4 *)((long)piVar4 + (ulong)puVar5[4]));
      }
      uVar3 = (uint)(fVar6 < param_2);
    }
    else {
      uVar3 = 3;
    }
    *(uint *)(puVar1 + 0x2a) = uVar3;
    *(undefined4 *)((long)puVar1 + 0x1c4) = 0;
    if (puVar1 + 0x3a != puVar2) {
      piVar4 = (int *)puVar1[0x3a];
      fVar6 = 0.0;
      puVar5 = (ushort *)((long)piVar4 - (long)*piVar4);
      if ((10 < *puVar5) && ((ulong)puVar5[5] != 0)) {
        fVar6 = (float)NEON_ucvtf(*(undefined4 *)((long)piVar4 + (ulong)puVar5[5]));
      }
      if (param_1 < fVar6) {
        fVar6 = 0.0;
        if ((8 < *puVar5) && ((ulong)puVar5[4] != 0)) {
          fVar6 = (float)NEON_ucvtf(*(undefined4 *)((long)piVar4 + (ulong)puVar5[4]));
        }
        uVar3 = (uint)(fVar6 < param_2);
      }
      else {
        uVar3 = 3;
      }
      *(uint *)(puVar1 + 100) = uVar3;
      *(undefined4 *)((long)puVar1 + 0x394) = 0;
      if (puVar1 + 0x74 != puVar2) {
        piVar4 = (int *)puVar1[0x74];
        fVar6 = 0.0;
        puVar5 = (ushort *)((long)piVar4 - (long)*piVar4);
        if ((10 < *puVar5) && ((ulong)puVar5[5] != 0)) {
          fVar6 = (float)NEON_ucvtf(*(undefined4 *)((long)piVar4 + (ulong)puVar5[5]));
        }
        if (param_1 < fVar6) {
          fVar6 = 0.0;
          if ((8 < *puVar5) && ((ulong)puVar5[4] != 0)) {
            fVar6 = (float)NEON_ucvtf(*(undefined4 *)((long)piVar4 + (ulong)puVar5[4]));
          }
          uVar3 = (uint)(fVar6 < param_2);
        }
        else {
          uVar3 = 3;
        }
        *(uint *)(puVar1 + 0x9e) = uVar3;
        *(undefined4 *)((long)puVar1 + 0x564) = 0;
        for (puVar1 = puVar1 + 0xae; puVar1 != puVar2; puVar1 = puVar1 + 0x3a) {
          piVar4 = (int *)*puVar1;
          fVar6 = 0.0;
          puVar5 = (ushort *)((long)piVar4 - (long)*piVar4);
          if (10 < *puVar5) {
            fVar6 = 0.0;
            if ((ulong)puVar5[5] != 0) {
              fVar6 = (float)NEON_ucvtf(*(undefined4 *)((long)piVar4 + (ulong)puVar5[5]));
            }
          }
          if (param_1 < fVar6) {
            fVar6 = 0.0;
            if (8 < *puVar5) {
              fVar6 = 0.0;
              if ((ulong)puVar5[4] != 0) {
                fVar6 = (float)NEON_ucvtf(*(undefined4 *)((long)piVar4 + (ulong)puVar5[4]));
              }
            }
            uVar3 = (uint)(fVar6 < param_2);
          }
          else {
            uVar3 = 3;
          }
          *(uint *)(puVar1 + 0x2a) = uVar3;
          *(undefined4 *)((long)puVar1 + 0x1c4) = 0;
        }
      }
    }
  }
  puVar2 = *(undefined8 **)(param_3 + 0x20);
  for (puVar1 = *(undefined8 **)(param_3 + 0x18); puVar1 != puVar2; puVar1 = puVar1 + 0x3a) {
    piVar4 = (int *)*puVar1;
    fVar6 = 0.0;
    puVar5 = (ushort *)((long)piVar4 - (long)*piVar4);
    if (10 < *puVar5) {
      fVar6 = 0.0;
      if ((ulong)puVar5[5] != 0) {
        fVar6 = (float)NEON_ucvtf(*(undefined4 *)((long)piVar4 + (ulong)puVar5[5]));
      }
    }
    if (param_1 < fVar6) {
      fVar6 = 0.0;
      if (8 < *puVar5) {
        fVar6 = 0.0;
        if ((ulong)puVar5[4] != 0) {
          fVar6 = (float)NEON_ucvtf(*(undefined4 *)((long)piVar4 + (ulong)puVar5[4]));
        }
      }
      uVar3 = (uint)(fVar6 < param_2);
    }
    else {
      uVar3 = 3;
    }
    *(uint *)(puVar1 + 0x2a) = uVar3;
    *(undefined4 *)((long)puVar1 + 0x1c4) = 0;
  }
  return;
}


