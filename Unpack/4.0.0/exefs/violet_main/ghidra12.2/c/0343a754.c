/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0343a754; name: thunk_FUN_0343c2bc
 */


undefined8 thunk_FUN_0343c2bc(long param_1,long param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  
  if (((*(int *)(param_2 + 0x14) != 0) &&
      ((*(int *)(param_2 + 8) == 0 || (0.0 <= *(float *)(param_2 + 0x40))))) &&
     (((*(byte *)(param_2 + 0x18) >> 1 & 1) == 0 || (*(int *)(param_2 + 0x44) - 1U < 0x400)))) {
    *(int *)(param_1 + 0x618) = *(int *)(param_2 + 0x14);
    *(undefined4 *)(param_1 + 0x61c) = *(undefined4 *)(param_2 + 0x40);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)(param_1 + 0x620) = param_3;
    *(undefined4 *)(param_1 + 0x624) = *(undefined4 *)(param_2 + 0x4c);
    *(long *)(param_1 + 0x608) = param_1;
    uVar1 = *(uint *)(param_2 + 8);
    uVar2 = *(uint *)(param_2 + 0x14);
    *(undefined8 *)(param_1 + 0x2c8) = 0;
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar1 / uVar2;
    }
    if (uVar3 * uVar2 != 0) {
      uVar4 = 0x200;
      do {
        uVar8 = uVar4;
        uVar4 = uVar8 << 1;
      } while (uVar8 < *(uint *)(param_2 + 0xc));
      do {
        bVar5 = uVar8 < *(uint *)(param_2 + 0x14);
        uVar8 = uVar8 << 1;
      } while (bVar5);
      FUN_03440398(param_1 + 0x2e0);
    }
    if (uVar2 <= uVar1) {
      lVar6 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(7,(ulong)uVar3 << 3);
      *(long *)(param_1 + 0x2d0) = lVar6;
      if (lVar6 == 0) {
        return 2;
      }
      *(uint *)(param_1 + 0x2dc) = uVar3;
    }
    *(undefined1 *)(param_1 + 0x600) = *(undefined1 *)(param_2 + 0x48);
    uVar7 = FUN_0344496c(param_1,param_2 + 0x20);
    return uVar7;
  }
  return 0x1f;
}


