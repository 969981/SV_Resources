/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a305f8; name: FUN_02a305f8
 */


void FUN_02a305f8(ulong param_1)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined1 uVar5;
  
  uVar4 = param_1;
  if ((DAT_0483af60 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_0483af60);
    uVar4 = param_1 & 0xffffffff;
    if (iVar3 != 0) {
      FUN_00100190(&LAB_02a319d0,&DAT_0483af50,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_0483af60);
      uVar4 = param_1 & 0xffffffff;
    }
  }
  lVar2 = DAT_0483af50;
  DAT_0483af68 = DAT_0483af50;
  *(undefined1 *)(DAT_0483af50 + 0x68) = 0;
  bVar1 = (uVar4 & 1) == 0;
  if (bVar1) {
    *(undefined4 *)(lVar2 + 0x74) = 0;
    *(undefined4 *)(lVar2 + 0x78) = 0x44992000;
    *(undefined8 *)(lVar2 + 0x80) = 0x441c40000000000a;
    *(undefined4 *)(lVar2 + 0x6c) = 0x451c4000;
    uVar5 = 9;
    *(undefined1 *)(lVar2 + 0x70) = 9;
    *(undefined1 *)(lVar2 + 0x7c) = 9;
    *(undefined1 *)(lVar2 + 0x88) = 9;
    *(undefined1 *)(lVar2 + 0x94) = 9;
    *(undefined8 *)(lVar2 + 0x8c) = 0x4361000000000004;
    *(undefined8 *)(lVar2 + 0x98) = 2;
  }
  else {
    *(undefined4 *)(lVar2 + 0x6c) = 0x43610000;
    *(undefined1 *)(lVar2 + 0x70) = 9;
    *(undefined1 *)(lVar2 + 0x7c) = 9;
    uVar5 = 0;
    *(undefined8 *)(lVar2 + 0x74) = 0;
    *(undefined8 *)(lVar2 + 0x80) = 2;
    *(undefined1 *)(lVar2 + 0x88) = 0;
    *(undefined8 *)(lVar2 + 0x98) = 0;
    *(undefined8 *)(lVar2 + 0x8c) = 0;
    *(undefined1 *)(lVar2 + 0x94) = 0;
  }
  *(undefined1 *)(lVar2 + 0xa0) = uVar5;
  *(uint *)(lVar2 + 0xa4) = (uint)bVar1;
  return;
}


