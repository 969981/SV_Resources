/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034050d0; name: FUN_034050d0
 */


void FUN_034050d0(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 auStack_d0 [128];
  
  puVar1 = PTR_DAT_047e6c18;
  uVar3 = (ulong)((*(uint *)(*(long *)(param_1 + 0x28) + 4) >> 1) * *(int *)(param_1 + 0x20) * 4 +
                  0xf & 0xfffffff0);
  if (uVar3 < *(ulong *)(PTR_DAT_047e6c18 + 8) >> 2) {
    puVar2 = auStack_d0 + (0x80 - (uVar3 + 0xf & 0x1fffffff0));
  }
  else {
    puVar2 = (undefined1 *)(**(code **)(PTR_DAT_047e2fd0 + 0x18))(5,uVar3,0x10);
    if (puVar2 == (undefined1 *)0x0) {
      *(undefined4 *)(param_1 + 4) = 2;
      return;
    }
  }
  FUN_03404da0(param_1,param_2,param_3,param_4,param_5,puVar2);
  if (*(ulong *)(puVar1 + 8) >> 2 <= uVar3) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,puVar2);
  }
  return;
}


