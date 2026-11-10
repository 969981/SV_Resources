/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007dde78; name: FUN_007dde78
 */


void FUN_007dde78(long *param_1)

{
  long *plVar1;
  byte bVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  uint uVar6;
  undefined4 local_28 [2];
  
  uVar3 = FUN_007ec554();
  local_28[0] = (**(code **)(*param_1 + 0x18))(param_1);
  plVar4 = (long *)FUN_007e9698(uVar3,local_28);
  (**(code **)(*(long *)*plVar4 + 0x70))();
  uVar5 = (**(code **)(*(long *)*plVar4 + 0x78))();
  while ((uVar5 & 1) == 0) {
    plVar1 = (long *)0x0;
    if (*(long *)(*plVar4 + 0x50) != 0) {
      plVar1 = (long *)(*plVar4 + 0x50);
    }
    bVar2 = *(byte *)(plVar1 + 5);
    uVar6 = 1;
    if ((bVar2 & 1) != 0) {
      uVar6 = 2;
    }
    if ((bVar2 & 2) != 0) {
      uVar6 = uVar6 + 2;
    }
    if ((bVar2 & 4) != 0) {
      uVar6 = uVar6 + 4;
    }
    if ((bVar2 & 8) != 0) {
      uVar6 = uVar6 + 8;
    }
    if (*(short *)((long)plVar1 + 0x2a) != 0) {
      if (*(char *)(*plVar1 + (ulong)uVar6) == '\x01') {
        FUN_007de5a8(param_1);
      }
      else if (*(char *)(*plVar1 + (ulong)uVar6) == '\0') {
        FUN_007de3f8(param_1);
      }
    }
    (**(code **)(*(long *)*plVar4 + 0x80))();
    uVar5 = (**(code **)(*(long *)*plVar4 + 0x78))();
  }
  return;
}


