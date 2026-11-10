/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008a68f8; name: FUN_008a68f8
 */


void FUN_008a68f8(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 )

{
  long lVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  void *__dest;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  void *__src;
  
  *(undefined8 *)(param_1 + 0x18) = 0;
  uVar7 = *(undefined8 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined8 *)(param_1 + 0x3c) = uVar7;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x58);
  *(undefined1 *)(param_1 + 0x59) = *(undefined1 *)(param_2 + 0x59);
  *(undefined1 *)(param_1 + 0x5a) = *(undefined1 *)(param_2 + 0x5a);
  *(undefined1 *)(param_1 + 0x5b) = *(undefined1 *)(param_2 + 0x5b);
  *(undefined1 *)(param_1 + 0x5c) = *(undefined1 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  uVar7 = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x98) = uVar7;
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  uVar7 = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x80) = uVar7;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  FUN_010ec5e8(param_1,param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xc9) = *(undefined8 *)(param_2 + 0xc9);
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) & 0xdf | 0x10;
  __src = *(void **)(param_2 + 0xa8);
  if ((*(byte *)(param_1 + 0x5c) & 0x44) == 0) {
    *(void **)(param_1 + 0xa8) = __src;
  }
  else {
    __dest = (void *)FUN_00896e78(*(undefined4 *)((long)__src + 4));
    memcpy(__dest,__src,(ulong)*(uint *)((long)__src + 4));
    *(void **)(param_1 + 0xa8) = __dest;
    if ((__dest != (void *)0x0) && (*(char *)((long)__dest + 0x16) == '\x03')) {
      puVar11 = (uint *)((long)__dest + 0x10);
      uVar10 = (ulong)*puVar11;
      uVar9 = (ulong)*(ushort *)((long)__dest + uVar10 + 0xe);
      if (uVar9 != 0) {
        piVar2 = (int *)((long)__dest +
                        (ulong)(*(int *)((long)__dest + uVar10 + 0x10) + *puVar11) + 0xc);
        lVar8 = 0;
        while( true ) {
          uVar10 = (ulong)(uint)(*(int *)((long)puVar11 + lVar8 * 4 + uVar10) + (int)uVar10);
          *(uint *)(param_1 + 0x60) =
               *(uint *)(param_1 + 0x60) |
               1 << (ulong)(*(uint *)((long)__dest + uVar10 + 0xc) & 0x1f);
          if (*piVar2 == 0x15) {
            iVar5 = *(int *)((long)__dest + uVar10 + 0xc);
            iVar3 = iVar5 + -9;
            if (iVar5 < 0x10) {
              iVar3 = iVar5;
            }
            *(char *)((long)piVar2 + (long)iVar3 + 4) = (char)lVar8;
          }
          if (uVar9 - 1 == lVar8) break;
          uVar10 = (ulong)*puVar11;
          lVar8 = lVar8 + 1;
        }
      }
    }
  }
  if (*(int *)(param_2 + 0x60) != 0) {
    lVar8 = *(long *)(param_2 + 0xa8) + 0xc;
    uVar4 = *(uint *)(*(long *)(param_2 + 0xa8) + 0x10);
    piVar2 = (int *)(lVar8 + (ulong)(*(int *)(lVar8 + (ulong)uVar4 + 4) + uVar4));
    if ((*piVar2 == 0x15) && (bVar6 = *(byte *)(piVar2 + 3), -1 < (char)bVar6)) {
      uVar7 = *(undefined8 *)
               (lVar8 + (ulong)(*(int *)(lVar8 + (ulong)uVar4 + 4 + (ulong)bVar6 * 4) + uVar4) + 8);
      lVar8 = FUN_00896e78(0x230);
      if (lVar8 != 0) {
        FUN_008a9904(lVar8,uVar7,param_1,param_3,param_4,param_5);
      }
      lVar1 = *(long *)(param_1 + 0xa8) + 0xc;
      uVar4 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x10);
      *(long *)(lVar1 + (ulong)(*(int *)(lVar1 + (ulong)uVar4 + 4 +
                                                 (ulong)*(byte *)(lVar1 + (ulong)(*(int *)(lVar1 + (
                                                  ulong)uVar4 + 4) + uVar4) + 0xc) * 4) + uVar4) + 8
               ) = lVar8;
    }
  }
  return;
}


