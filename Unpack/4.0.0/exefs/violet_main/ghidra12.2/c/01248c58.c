/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01248c58; name: FUN_01248c58
 */


void FUN_01248c58(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8);
  uVar1 = FUN_00f7e2a0(*(undefined4 *)(lVar2 + 0x36c),*(undefined1 *)(lVar2 + 0x370),0);
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
    FUN_0124ef5c(*(undefined8 *)(lVar2 + 0x290),*(long *)(lVar2 + 0x30) + 0x28,0);
    FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0x3d,0);
  }
  lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8);
  uVar1 = FUN_00f7e2a0(*(undefined4 *)(lVar2 + 0x36c),*(undefined1 *)(lVar2 + 0x370),1);
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
    FUN_0124ef5c(*(undefined8 *)(lVar2 + 0x290),*(long *)(lVar2 + 0x30) + 0x60,1);
    FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0x3d,1);
  }
  lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8);
  uVar1 = FUN_00f7e2a0(*(undefined4 *)(lVar2 + 0x36c),*(undefined1 *)(lVar2 + 0x370),2);
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
    FUN_0124ef5c(*(undefined8 *)(lVar2 + 0x290),*(long *)(lVar2 + 0x30) + 0x98,2);
    FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0x3d,2);
  }
  lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8);
  uVar1 = FUN_00f7e2a0(*(undefined4 *)(lVar2 + 0x36c),*(undefined1 *)(lVar2 + 0x370),3);
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
    FUN_0124ef5c(*(undefined8 *)(lVar2 + 0x290),*(long *)(lVar2 + 0x30) + 0xd0,3);
    FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0x3d,3);
  }
  lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8);
  uVar1 = FUN_00f7e2a0(*(undefined4 *)(lVar2 + 0x36c),*(undefined1 *)(lVar2 + 0x370),4);
  if ((uVar1 & 1) == 0) {
    return;
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  FUN_0124ef5c(*(undefined8 *)(lVar2 + 0x290),*(long *)(lVar2 + 0x30) + 0x108,4);
  FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0x3d,4);
  return;
}


