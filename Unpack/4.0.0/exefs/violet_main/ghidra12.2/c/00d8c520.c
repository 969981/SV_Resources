/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d8c520; name: FUN_00d8c520
 */


/* WARNING: Removing unreachable block (ram,0x00d8c794) */
/* WARNING: Removing unreachable block (ram,0x00d8c764) */
/* WARNING: Removing unreachable block (ram,0x00d8c734) */
/* WARNING: Removing unreachable block (ram,0x00d8c6d4) */
/* WARNING: Removing unreachable block (ram,0x00d8c7c4) */
/* WARNING: Removing unreachable block (ram,0x00d8c7e0) */
/* WARNING: Removing unreachable block (ram,0x00d8c7d8) */
/* WARNING: Removing unreachable block (ram,0x00d8c87c) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff80 : 0x00d8c6e0 */
/* WARNING: Removing unreachable block (ram,0x00d8c8ac) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong FUN_00d8c520(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  uint local_80;
  uint local_78;
  int local_70;
  
  uVar6 = 0xffffffff;
  lVar4 = *(long *)(param_1 + 0x18);
  switch(param_2) {
  case 0:
    uVar6 = 0;
    *(undefined1 *)(lVar4 + 0x6a) = 0;
    break;
  case 1:
    FUN_0013aed0(lVar4,0);
    uVar6 = 0;
    *(undefined1 *)(lVar4 + 0x6a) = 1;
    break;
  case 2:
    FUN_0012b690(param_1,0);
    uVar6 = 0;
    break;
  case 3:
    uVar6 = (ulong)(*(long *)(lVar4 + 0x18) + *(long *)(lVar4 + 0x10)) >> 10;
    break;
  case 4:
    uVar6 = (ulong)(*(int *)(lVar4 + 0x18) + *(int *)(lVar4 + 0x10) & 0x3ff);
    break;
  case 5:
    uVar2 = *(undefined1 *)(lVar4 + 0x6a);
    *(undefined1 *)(lVar4 + 0x6a) = 1;
    if (local_80 == 0) {
      FUN_0013aed0(lVar4,0);
      FUN_0012ac30(param_1);
      *(undefined1 *)(lVar4 + 0x6a) = uVar2;
    }
    else {
      lVar1 = *(long *)(lVar4 + 0x18) + (long)(int)local_80 * 0x400;
      FUN_0013aed0(lVar4,lVar1);
      if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
        FUN_0012ac30(param_1);
      }
      *(undefined1 *)(lVar4 + 0x6a) = uVar2;
      if (lVar1 < 1) {
        uVar6 = 0;
        break;
      }
    }
    uVar6 = (ulong)(*(char *)(lVar4 + 0x65) == '\b');
    break;
  case 6:
    uVar6 = (ulong)*(byte *)(lVar4 + 0x6c) << 2;
    uVar5 = local_80 + 3;
    if (-1 < (int)local_80) {
      uVar5 = local_80;
    }
    *(char *)(lVar4 + 0x6c) = (char)(uVar5 >> 2);
    break;
  case 7:
    uVar6 = (ulong)*(byte *)(lVar4 + 0x6d) << 2;
    uVar5 = local_80 + 3;
    if (-1 < (int)local_80) {
      uVar5 = local_80;
    }
    *(char *)(lVar4 + 0x6d) = (char)(uVar5 >> 2);
    break;
  case 9:
    uVar6 = (ulong)*(byte *)(lVar4 + 0x6a);
    break;
  case 10:
    uVar6 = 10;
    if (*(char *)(lVar4 + 0x66) != '\x01') {
      uVar5 = 10;
      if (*(long *)(lVar4 + 0x28) == 0) {
        uVar5 = 0xb;
      }
      uVar6 = (ulong)uVar5;
    }
    if (local_80 != 0) {
      *(char *)(lVar4 + 0x68) = (char)local_80;
    }
    if (local_78 != 0) {
      uVar5 = local_78 + 3;
      if (-1 < (int)local_78) {
        uVar5 = local_78;
      }
      *(char *)(lVar4 + 0x69) = (char)(uVar5 >> 2);
    }
    uVar3 = 1;
    goto LAB_00d8c918;
  case 0xb:
    uVar6 = 10;
    if (*(char *)(lVar4 + 0x66) != '\x01') {
      uVar5 = 10;
      if (*(long *)(lVar4 + 0x28) == 0) {
        uVar5 = 0xb;
      }
      uVar6 = (ulong)uVar5;
    }
    if (local_80 != 0) {
      uVar5 = local_80 + 3;
      if (-1 < (int)local_80) {
        uVar5 = local_80;
      }
      *(char *)(lVar4 + 0x6c) = (char)(uVar5 >> 2);
    }
    if (local_78 != 0) {
      uVar5 = local_78 + 3;
      if (-1 < (int)local_78) {
        uVar5 = local_78;
      }
      *(char *)(lVar4 + 0x6d) = (char)(uVar5 >> 2);
    }
    if (local_70 != 0) {
      *(char *)(lVar4 + 0x6e) = (char)local_70;
    }
    uVar3 = 0;
LAB_00d8c918:
    FUN_0012a1e0(param_1,uVar3);
  }
  return uVar6 & 0xffffffff;
}


