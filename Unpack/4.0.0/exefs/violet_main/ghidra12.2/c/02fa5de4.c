/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02fa5de4; name: FUN_02fa5de4
 */


void FUN_02fa5de4(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  int *piVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  int iVar14;
  undefined8 uVar15;
  
  lVar3 = tpidr_el0;
  lVar2 = *(long *)(lVar3 + 0x1000b8);
  if (lVar2 == 0) {
    lVar2 = FUN_00e5d3b4();
    *(long *)(lVar3 + 0x1000b8) = lVar2;
  }
  lVar3 = *(long *)(lVar2 + 0x3e0);
  fVar10 = 0.0;
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) {
    fVar11 = 0.0;
    fVar12 = 0.0;
  }
  else {
    uVar4 = (ulong)*(uint *)(lVar2 + 0x108);
    fVar11 = 0.0;
    fVar12 = 0.0;
    if (0 < (int)*(uint *)(lVar2 + 0x108)) {
      iVar8 = 0;
      iVar14 = 0;
      iVar6 = 0;
      piVar9 = (int *)(*(long *)(lVar2 + 0x100) + 0x208);
      do {
        iVar8 = piVar9[0x40] + iVar8;
        iVar14 = piVar9[-0x40] + iVar14;
        iVar6 = *piVar9 + iVar6;
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 0x140;
      } while (uVar4 != 0);
      fVar12 = (float)iVar8;
      fVar11 = (float)iVar14;
      fVar10 = (float)iVar6;
    }
  }
  if (lVar3 != 0) {
    puVar5 = *(undefined8 **)(lVar3 + 0x10);
    uVar4 = *(ulong *)(lVar3 + 0x18);
    uVar7 = (ulong)((long)puVar5 + 0x17) & 0xfffffffffffffff8;
    if (uVar7 <= uVar4) {
      uVar13 = *(undefined4 *)(param_2 + 0x5bc);
      *(ulong *)(lVar3 + 0x10) = uVar7;
      if (puVar5 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)&DAT_00000010;
      }
      else {
        uVar13 = NEON_ucvtf(uVar13);
        *puVar5 = "MiStep count";
        *(undefined4 *)(puVar5 + 1) = uVar13;
        puVar5 = *(undefined8 **)(lVar3 + 0x10);
        uVar4 = *(ulong *)(lVar3 + 0x18);
      }
    }
    uVar7 = (ulong)((long)puVar5 + 0x17) & 0xfffffffffffffff8;
    if (uVar7 <= uVar4) {
      uVar15 = *(undefined8 *)(param_2 + 0x540);
      *(ulong *)(lVar3 + 0x10) = uVar7;
      if (puVar5 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)&DAT_00000010;
      }
      else {
        *puVar5 = "MfTime step";
        *(int *)(puVar5 + 1) = (int)uVar15;
        puVar5 = *(undefined8 **)(lVar3 + 0x10);
        uVar4 = *(ulong *)(lVar3 + 0x18);
      }
    }
    uVar7 = (ulong)((long)puVar5 + 0xf) & 0xfffffffffffffff8;
    if ((uVar7 <= uVar4) && (*(ulong *)(lVar3 + 0x10) = uVar7, puVar5 != (undefined8 *)0x0)) {
      *puVar5 = "PdBodies";
    }
    iVar14 = *(int *)(param_2 + 0xf0);
    iVar8 = *(int *)(param_2 + 0x58);
    puVar5 = *(undefined8 **)(lVar3 + 0x10);
    uVar4 = *(ulong *)(lVar3 + 0x18);
    uVar7 = (ulong)((long)puVar5 + 0x17) & 0xfffffffffffffff8;
    if (uVar7 <= uVar4) {
      *(ulong *)(lVar3 + 0x10) = uVar7;
      if (puVar5 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)&DAT_00000010;
      }
      else {
        *puVar5 = "MiNum active";
        *(float *)(puVar5 + 1) = (float)iVar14;
        puVar5 = *(undefined8 **)(lVar3 + 0x10);
        uVar4 = *(ulong *)(lVar3 + 0x18);
      }
    }
    uVar7 = (ulong)((long)puVar5 + 0x17) & 0xfffffffffffffff8;
    if ((uVar7 <= uVar4) && (*(ulong *)(lVar3 + 0x10) = uVar7, puVar5 != (undefined8 *)0x0)) {
      *puVar5 = "MiNum allocated";
      *(float *)(puVar5 + 1) = (float)iVar8;
    }
    uVar1 = *(uint *)(param_2 + 0x170);
    puVar5 = *(undefined8 **)(lVar3 + 0x10);
    uVar4 = *(ulong *)(lVar3 + 0x18);
    uVar7 = (ulong)((long)puVar5 + 0x17) & 0xfffffffffffffff8;
    if (uVar7 <= uVar4) {
      *(ulong *)(lVar3 + 0x10) = uVar7;
      if (puVar5 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)&DAT_00000010;
      }
      else {
        *puVar5 = "MiNum motions";
        *(float *)(puVar5 + 1) = (float)uVar1;
        puVar5 = *(undefined8 **)(lVar3 + 0x10);
        uVar4 = *(ulong *)(lVar3 + 0x18);
      }
    }
    uVar7 = (ulong)((long)puVar5 + 0xf) & 0xfffffffffffffff8;
    if (uVar7 <= uVar4) {
      *(ulong *)(lVar3 + 0x10) = uVar7;
      if (puVar5 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)&DAT_00000008;
      }
      else {
        *puVar5 = &DAT_03bf2198;
        puVar5 = *(undefined8 **)(lVar3 + 0x10);
        uVar4 = *(ulong *)(lVar3 + 0x18);
      }
    }
    uVar7 = (ulong)((long)puVar5 + 0xf) & 0xfffffffffffffff8;
    if (uVar7 <= uVar4) {
      *(ulong *)(lVar3 + 0x10) = uVar7;
      if (puVar5 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)&DAT_00000008;
      }
      else {
        *puVar5 = "PdJacobians";
        puVar5 = *(undefined8 **)(lVar3 + 0x10);
        uVar4 = *(ulong *)(lVar3 + 0x18);
      }
    }
    uVar7 = (ulong)((long)puVar5 + 0x17) & 0xfffffffffffffff8;
    if ((uVar7 <= uVar4) && (*(ulong *)(lVar3 + 0x10) = uVar7, puVar5 != (undefined8 *)0x0)) {
      *puVar5 = "MiNum active constraints";
      *(float *)(puVar5 + 1) = fVar12;
    }
    uVar1 = *(uint *)(*(long *)(param_2 + 0x488) + 0x28);
    puVar5 = *(undefined8 **)(lVar3 + 0x10);
    uVar4 = *(ulong *)(lVar3 + 0x18);
    uVar7 = (ulong)((long)puVar5 + 0x17) & 0xfffffffffffffff8;
    if (uVar7 <= uVar4) {
      *(ulong *)(lVar3 + 0x10) = uVar7;
      if (puVar5 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)&DAT_00000010;
      }
      else {
        *puVar5 = "MiNum allocated constraints";
        *(float *)(puVar5 + 1) = (float)uVar1;
        puVar5 = *(undefined8 **)(lVar3 + 0x10);
        uVar4 = *(ulong *)(lVar3 + 0x18);
      }
    }
    uVar7 = (ulong)((long)puVar5 + 0x17) & 0xfffffffffffffff8;
    if (uVar7 <= uVar4) {
      *(ulong *)(lVar3 + 0x10) = uVar7;
      if (puVar5 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)&DAT_00000010;
      }
      else {
        *puVar5 = "MiNum active moving contacts";
        *(float *)(puVar5 + 1) = fVar11;
        puVar5 = *(undefined8 **)(lVar3 + 0x10);
        uVar4 = *(ulong *)(lVar3 + 0x18);
      }
    }
    uVar7 = (ulong)((long)puVar5 + 0x17) & 0xfffffffffffffff8;
    if (uVar7 <= uVar4) {
      *(ulong *)(lVar3 + 0x10) = uVar7;
      if (puVar5 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)&DAT_00000010;
      }
      else {
        *puVar5 = "MiNum active fixed contacts";
        *(float *)(puVar5 + 1) = fVar10;
        puVar5 = *(undefined8 **)(lVar3 + 0x10);
        uVar4 = *(ulong *)(lVar3 + 0x18);
      }
    }
    uVar7 = (ulong)((long)puVar5 + 0xf) & 0xfffffffffffffff8;
    if ((uVar7 <= uVar4) && (*(ulong *)(lVar3 + 0x10) = uVar7, puVar5 != (undefined8 *)0x0)) {
      *puVar5 = &DAT_03bf2198;
    }
  }
  return;
}


