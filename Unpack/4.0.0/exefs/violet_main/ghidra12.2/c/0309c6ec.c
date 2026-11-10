/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0309c6ec; name: FUN_0309c6ec
 */


void FUN_0309c6ec(long param_1,long param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  uint *puVar16;
  
  iVar2 = *param_3;
  iVar7 = *param_4;
  if (iVar7 != iVar2) {
    puVar12 = (undefined4 *)(*(long *)(param_2 + 0xe0) + (long)iVar7 * 0x14);
    puVar11 = (undefined4 *)(*(long *)(param_2 + 0xe0) + (long)iVar2 * 0x14);
    iVar1 = *(int *)(param_2 + 0x30);
    *puVar11 = *puVar12;
    puVar11[1] = puVar12[1];
    uVar13 = *(undefined8 *)(puVar12 + 2);
    *(undefined2 *)(puVar11 + 4) = *(undefined2 *)(puVar12 + 4);
    *(undefined8 *)(puVar11 + 2) = uVar13;
    *(undefined2 *)((long)puVar11 + 0x12) = *(undefined2 *)((long)puVar12 + 0x12);
    *(undefined2 *)(*(long *)(param_2 + 0x110) + (long)iVar2 * 2) =
         *(undefined2 *)(*(long *)(param_2 + 0x110) + (long)iVar7 * 2);
    iVar3 = *(int *)(param_2 + 0x60);
    memcpy((void *)(*(long *)(param_2 + 0x150) + (long)(iVar3 * iVar2) * 4),
           (void *)(*(long *)(param_2 + 0x150) + (long)(iVar3 * iVar7) * 4),(long)iVar3 << 2);
    iVar2 = *param_3;
    lVar15 = *(long *)(param_2 + 0xe0);
    lVar14 = (long)*param_4;
    puVar16 = (uint *)(lVar15 + (long)iVar2 * 0x14 + 8);
    uVar5 = *puVar16;
    if (uVar5 == 0xffffffff) {
      bVar4 = *(byte *)(lVar15 + lVar14 * 0x14 + 0x10);
    }
    else {
      if ((*(byte *)(lVar15 + (long)iVar2 * 0x14 + 0x10) >> 6 & 1) == 0) {
        uVar8 = (ulong)uVar5 & 0x3fffff;
        iVar7 = (int)uVar8 - *(int *)(param_2 + 0x30);
        if ((int)uVar8 < *(int *)(param_2 + 0x30)) {
          if (*(int *)(param_2 + 0x78) != 0) {
            uVar8 = (ulong)*(uint *)(*(long *)(param_2 + 0x70) + uVar8 * 4);
          }
          iVar7 = (int)uVar8;
          lVar10 = *(long *)(param_2 + 0xc0);
        }
        else {
          lVar10 = lVar15;
        }
        *(int *)(lVar10 + (long)iVar7 * 0x14 + 8) = iVar2 + iVar1;
      }
      else {
        lVar10 = *(long *)(*(long *)(param_1 + 0x38) + ((ulong)(uVar5 >> 0xe) & 0x3ff00));
        if (*(char *)(lVar10 + 0x30) == '\x01') {
          lVar10 = *(long *)(lVar10 + 0x20);
        }
        else {
          lVar10 = FUN_0307d71c();
          uVar5 = *puVar16;
        }
        uVar5 = uVar5 & 0x3fffff;
        uVar6 = uVar5 - *(int *)(lVar10 + 0x30);
        if ((int)uVar5 < *(int *)(lVar10 + 0x30)) {
          if (*(int *)(lVar10 + 0x78) != 0) {
            uVar5 = *(uint *)(*(long *)(lVar10 + 0x70) + (ulong)uVar5 * 4);
          }
          plVar9 = (long *)(lVar10 + 0xc0);
          uVar6 = uVar5;
        }
        else {
          plVar9 = (long *)(lVar10 + 0xe0);
        }
        lVar10 = *plVar9 + (long)(int)uVar6 * 0x14;
        *(uint *)(lVar10 + 8) = *(uint *)(lVar10 + 8) & 0xffc00000 | *param_3 + iVar1;
      }
      lVar10 = lVar15 + lVar14 * 0x14;
      *(undefined8 *)(lVar10 + 8) = 0xffffffffffffffff;
      bVar4 = *(byte *)(lVar10 + 0x10) & 0xbf;
      *(byte *)(lVar10 + 0x10) = bVar4;
    }
    *(byte *)(lVar15 + lVar14 * 0x14 + 0x10) = bVar4 | 0x80;
  }
  return;
}


