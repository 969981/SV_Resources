/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f7aabc; name: FUN_01f7aabc
 */


void FUN_01f7aabc(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  FUN_01d0e1a8(param_1 + 8,param_2 + 8);
  FUN_01d0e1a8(param_1 + 0x28,param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  if (param_1 != param_2) {
    FUN_01f7783c(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),param_2 + 0x58);
    FUN_01f7783c(param_1 + 0x70,*(undefined8 *)(param_2 + 0x70),param_2 + 0x78);
    uVar3 = *(undefined8 *)(param_2 + 0x90);
    *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_2 + 0x98);
    *(undefined8 *)(param_1 + 0x90) = uVar3;
    FUN_01f7abd0(param_1 + 0xa0,*(undefined8 *)(param_2 + 0xa0),*(undefined8 *)(param_2 + 0xa8));
    FUN_01f7ad34(param_1 + 0xc0,*(undefined8 *)(param_2 + 0xc0),*(undefined8 *)(param_2 + 200));
  }
  FUN_01d0e1a8(param_1 + 0xe0,param_2 + 0xe0);
  FUN_01d0e1a8(param_1 + 0x100,param_2 + 0x100);
  uVar2 = *(undefined4 *)(param_2 + 0x128);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  *(undefined4 *)(param_1 + 0x128) = uVar2;
  FUN_01d0e1a8(param_1 + 0x130,param_2 + 0x130);
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x150);
  if (param_1 != param_2) {
    FUN_01f7abd0(param_1 + 0x158,*(undefined8 *)(param_2 + 0x158),*(undefined8 *)(param_2 + 0x160));
  }
  uVar3 = *(undefined8 *)(param_2 + 0x178);
  uVar1 = *(undefined8 *)(param_2 + 0x180);
  *(undefined1 *)(param_1 + 0x188) = *(undefined1 *)(param_2 + 0x188);
  *(undefined8 *)(param_1 + 0x178) = uVar3;
  *(undefined8 *)(param_1 + 0x180) = uVar1;
  FUN_027bbf28(param_1 + 400,param_2 + 400);
  memcpy((void *)(param_1 + 0x198),(void *)(param_2 + 0x198),0x28);
  FUN_01d0e1a8(param_1 + 0x1c0,param_2 + 0x1c0);
  return;
}


