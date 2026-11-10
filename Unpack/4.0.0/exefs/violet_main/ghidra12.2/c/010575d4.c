/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010575d4; name: FUN_010575d4
 */


void FUN_010575d4(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(param_2 + 0x400);
  uVar4 = *(undefined8 *)(param_2 + 0x408);
  *(undefined4 *)(param_1 + 0x410) = *(undefined4 *)(param_2 + 0x410);
  *(undefined8 *)(param_1 + 0x408) = uVar4;
  *(undefined8 *)(param_1 + 0x400) = uVar3;
  uVar1 = *(undefined4 *)(param_2 + 0x414);
  *(undefined4 *)(param_1 + 0x417) = *(undefined4 *)(param_2 + 0x417);
  *(undefined4 *)(param_1 + 0x414) = uVar1;
  *(undefined2 *)(param_1 + 0x47e) = *(undefined2 *)(param_2 + 0x47e);
  *(undefined2 *)(param_1 + 0x480) = *(undefined2 *)(param_2 + 0x480);
  *(undefined1 *)(param_1 + 0x482) = *(undefined1 *)(param_2 + 0x482);
  *(undefined1 *)(param_1 + 0x483) = *(undefined1 *)(param_2 + 0x483);
  *(undefined1 *)(param_1 + 0x484) = *(undefined1 *)(param_2 + 0x484);
  *(undefined1 *)(param_1 + 0x485) = *(undefined1 *)(param_2 + 0x485);
  *(undefined1 *)(param_1 + 0x486) = *(undefined1 *)(param_2 + 0x486);
  *(undefined2 *)(param_1 + 0x488) = *(undefined2 *)(param_2 + 0x488);
  *(undefined2 *)(param_1 + 0x48a) = *(undefined2 *)(param_2 + 0x48a);
  *(undefined2 *)(param_1 + 0x48c) = *(undefined2 *)(param_2 + 0x48c);
  *(undefined1 *)(param_1 + 0x48e) = *(undefined1 *)(param_2 + 0x48e);
  *(undefined2 *)(param_1 + 0x490) = *(undefined2 *)(param_2 + 0x490);
  *(undefined2 *)(param_1 + 0x492) = *(undefined2 *)(param_2 + 0x492);
  *(undefined2 *)(param_1 + 0x494) = *(undefined2 *)(param_2 + 0x494);
  *(undefined1 *)(param_1 + 0x6ef) = *(undefined1 *)(param_2 + 0x6ef);
  *(undefined1 *)(param_1 + 0x6f0) = *(undefined1 *)(param_2 + 0x6f0);
  *(undefined2 *)(param_1 + 0x6f2) = *(undefined2 *)(param_2 + 0x6f2);
  *(undefined2 *)(param_1 + 0x6f4) = *(undefined2 *)(param_2 + 0x6f4);
  *(undefined4 *)(param_1 + 0x6f8) = *(undefined4 *)(param_2 + 0x6f8);
  *(undefined1 *)(param_1 + 0x487) = *(undefined1 *)(param_2 + 0x487);
  memcpy((void *)(param_1 + 0x426),(void *)(param_2 + 0x426),0x58);
  *(undefined4 *)(param_1 + 0x496) = *(undefined4 *)(param_2 + 0x496);
  *(undefined4 *)(param_1 + 0x49a) = *(undefined4 *)(param_2 + 0x49a);
  memcpy((void *)(param_1 + 0x4a0),(void *)(param_2 + 0x4a0),0x100);
  *(undefined8 *)(param_1 + 0x5a0) = *(undefined8 *)(param_2 + 0x5a0);
  memcpy((void *)(param_1 + 0x5a8),(void *)(param_2 + 0x5a8),0x24);
  memcpy((void *)(param_1 + 0x5cc),(void *)(param_2 + 0x5cc),0x120);
  uVar2 = *(undefined1 *)(param_2 + 0x6ee);
  *(undefined2 *)(param_1 + 0x6ec) = *(undefined2 *)(param_2 + 0x6ec);
  *(undefined1 *)(param_1 + 0x6ee) = uVar2;
  return;
}


