/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0173cc9c; name: FUN_0173cc9c
 */


void FUN_0173cc9c(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  long *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  
  if (((*(byte *)(*(long *)(*(long *)(param_1 + 0x48) + 0x38) + 0x499) >> 2 & 1) != 0) &&
     (*(char *)(param_1 + 0x3ad) != '\0')) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x50) + 0x30);
    if (*(char *)(lVar3 + 0x90) == '\0') {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = *(long **)(lVar3 + 0x60);
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
    uVar1 = FUN_011e21c0(param_1,*(long *)(param_1 + 0x50),plVar4,0xa5,param_1 + 0xb0);
    uVar2 = (**(code **)(*plVar4 + 0x98))(plVar4);
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x78) = uVar2;
    *(uint *)(param_1 + 0x70) = (uVar1 & 0xf) << 4 | 0xa501;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_38 = *(undefined1 *)(param_1 + 0x11c);
    local_60 = plVar4;
    FUN_0173cfac(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x50),&local_60);
    *(undefined1 *)(param_1 + 0x80) = 1;
  }
  return;
}


