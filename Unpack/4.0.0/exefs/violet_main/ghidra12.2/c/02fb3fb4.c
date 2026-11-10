/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02fb3fb4; name: FUN_02fb3fb4
 */


void FUN_02fb3fb4(long param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  
  if (*(char *)(param_1 + 0x121) == '\0') {
    if (*(char *)(param_1 + 0x1bc) != '\0') {
      iVar2 = *(int *)(param_1 + 0x1b4);
      iVar4 = iVar2 + 1;
      *(int *)(param_1 + 0x1b4) = iVar4;
      *(int *)(param_1 + 0x1b8) = iVar4;
      *(undefined1 *)(param_1 + 0x1bc) = 1;
      if (0 < iVar2) {
        return;
      }
      goto LAB_02fb4064;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x122) = 0;
    *(undefined2 *)(param_1 + 0x120) = 1;
    *(undefined8 *)(param_1 + 0x110) = 0x7fffffffffffffff;
    *(undefined8 *)(param_1 + 0x118) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x184) = 0;
    *(undefined8 *)(param_1 + 0x188) = 0;
    *(undefined8 *)(param_1 + 300) = 0x5f7ffff05f7ffff0;
    *(undefined8 *)(param_1 + 0x124) = 0x5f7ffff05f7ffff0;
    *(undefined1 *)(param_1 + 0x1a8) = 0;
    *(undefined4 *)(param_1 + 0x170) = 0;
    *(undefined8 *)(param_1 + 0x1b4) = 0;
    *(undefined1 *)(param_1 + 0x1bc) = 0;
    *(undefined8 *)(param_1 + 0x1ac) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
    *(undefined8 *)(param_1 + 0x160) = 0;
  }
  *(undefined8 *)(param_1 + 0x1b4) = 0x100000001;
  *(undefined1 *)(param_1 + 0x1bc) = 1;
LAB_02fb4064:
  if ((*(int *)(param_1 + 0x40) == 0) && (*(long *)(param_1 + 0x118) != 0)) {
    iVar4 = *(int *)(*(long *)(param_1 + 0x118) + 0x1c);
    if ((int)(*(uint *)(param_1 + 0x44) & 0x7fffffff) < iVar4) {
      FUN_02fb8c10(param_1 + 0x38,(long)iVar4);
      iVar4 = *(int *)(*(long *)(param_1 + 0x118) + 0x1c);
    }
    if ((int)(*(uint *)(param_1 + 0x54) & 0x7fffffff) < iVar4 * 3) {
      FUN_02fb8db4(param_1 + 0x48,(long)(iVar4 * 3));
    }
    if ((*(uint *)(param_1 + 100) & 0x7ffffffe) == 0) {
      FUN_02fb8f3c(param_1 + 0x58);
    }
    if ((*(uint *)(param_1 + 0x74) & 0x7ffffffe) == 0) {
      FUN_02fb9084(param_1 + 0x68);
    }
    if ((int)(*(uint *)(param_1 + 0x84) & 0x7fffffff) < *(int *)(*(long *)(param_1 + 0x118) + 0x1c))
    {
      FUN_02fb91fc(param_1 + 0x78);
    }
  }
  iVar4 = *(int *)(param_1 + 0x10);
  if (iVar4 != 0) {
    puVar8 = *(undefined8 **)(param_1 + 8);
    uVar9 = (long)iVar4 * 0x10 - 0x10;
    uVar1 = ((uint)(uVar9 >> 4) & 0xfffffff) + 1;
    if ((uVar1 & 3) == 0) {
      puVar7 = puVar8;
    }
    else {
      lVar10 = -((ulong)uVar1 & 3);
      puVar6 = puVar8;
      do {
        *(undefined4 *)(puVar6 + 1) = 0xffffff;
        bVar3 = lVar10 != -1;
        lVar10 = lVar10 + 1;
        puVar7 = puVar6 + 2;
        *puVar6 = 0x7fffffff7fffffff;
        puVar6 = puVar7;
      } while (bVar3);
    }
    if (0x2f < uVar9) {
      do {
        *(undefined4 *)(puVar7 + 1) = 0xffffff;
        *puVar7 = 0x7fffffff7fffffff;
        *(undefined4 *)(puVar7 + 3) = 0xffffff;
        puVar7[2] = 0x7fffffff7fffffff;
        *(undefined4 *)(puVar7 + 5) = 0xffffff;
        puVar7[4] = 0x7fffffff7fffffff;
        *(undefined4 *)(puVar7 + 7) = 0xffffff;
        puVar7[6] = 0x7fffffff7fffffff;
        puVar7 = puVar7 + 8;
      } while (puVar8 + (long)iVar4 * 2 != puVar7);
    }
  }
  *(undefined4 *)(param_1 + 0x184) = 0;
  if (*(int *)(param_1 + 0x50) != 0) {
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined1 *)(param_1 + 0x120) = 0;
  *(undefined1 *)(param_1 + 0x1a8) = 0;
  if (*(long *)(param_1 + 0x118) == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = *(undefined4 *)(*(long *)(param_1 + 0x118) + 0x1c);
  }
  *(undefined4 *)(param_1 + 0x1ac) = uVar5;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  return;
}


