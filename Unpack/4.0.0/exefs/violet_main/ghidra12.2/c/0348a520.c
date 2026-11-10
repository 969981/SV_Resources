/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0348a520; name: FUN_0348a520
 */


void FUN_0348a520(long param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0x160);
  lVar3 = *(long *)(param_1 + 0x158);
  if (1 < *(uint *)(param_1 + 0x160)) {
    FUN_03489adc(lVar3 + (param_2 & 0xffffffff) * 0x158,lVar3 + uVar2 * 0x158 + -0x158);
    uVar2 = (ulong)*(uint *)(param_1 + 0x160);
    lVar3 = *(long *)(param_1 + 0x158);
  }
  lVar3 = lVar3 + uVar2 * 0x158;
  if (*(long *)(lVar3 + -0x30) != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
  }
  *(long *)(lVar3 + -0x30) = 0;
  *(undefined4 *)(lVar3 + -0x28) = 0;
  *(undefined8 *)(lVar3 + -0x20) = 0;
  *(undefined8 *)(lVar3 + -0x18) = 0;
  puVar1 = PTR_PTR_047e71e0;
  if (*(long *)(lVar3 + -0x98) != 0) {
    (**(code **)(*(long *)PTR_PTR_047e71e0 + 0x18))(PTR_PTR_047e71e0);
    *(undefined8 *)(lVar3 + -0x98) = 0;
    *(undefined4 *)(lVar3 + -0x90) = 0;
  }
  if (*(long *)(lVar3 + -0x88) != 0) {
    (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
    *(undefined8 *)(lVar3 + -0x88) = 0;
    *(undefined4 *)(lVar3 + -0x80) = 0;
  }
  if (*(long *)(lVar3 + -0x78) != 0) {
    (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
    *(undefined8 *)(lVar3 + -0x78) = 0;
    *(undefined4 *)(lVar3 + -0x70) = 0;
  }
  if (*(long *)(lVar3 + -0x68) != 0) {
    (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
    *(undefined8 *)(lVar3 + -0x68) = 0;
    *(undefined4 *)(lVar3 + -0x60) = 0;
  }
  if (*(long *)(lVar3 + -0xd0) != 0) {
    *(undefined4 *)(lVar3 + -200) = 0;
    (**(code **)(**(long **)(lVar3 + -0xd8) + 0x18))();
    *(undefined8 *)(lVar3 + -0xd0) = 0;
    *(undefined4 *)(lVar3 + -0xc4) = 0;
  }
  if ((*(long *)(lVar3 + -0xb0) != 0) && (*(char *)(lVar3 + -0xa8) != '\0')) {
    (**(code **)(**(long **)(lVar3 + -0xb8) + 0x18))();
    *(undefined1 *)(lVar3 + -0xa8) = 0;
  }
  *(undefined8 *)(lVar3 + -0xb0) = 0;
  *(int *)(param_1 + 0x160) = *(int *)(param_1 + 0x160) + -1;
  return;
}


